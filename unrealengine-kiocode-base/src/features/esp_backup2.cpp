
#include "esp.h"

#include "../config.h"
#include "../utils/validity.h"

namespace {
	bool IsValidPawn(SDK::ACharacter* pawn) {
		return pawn && !Validity::IsBadPoint(pawn) &&
			pawn->Mesh && !Validity::IsBadPoint(pawn->Mesh);
	}
	bool IsValidMesh(SDK::USkeletalMeshComponent* mesh) {
		return mesh && !Validity::IsBadPoint(mesh);
	}

	bool IsValidBone(SDK::USkeletalMeshComponent* mesh, int boneIndex) {
		if (!mesh || Validity::IsBadPoint(mesh))
			return false;


		int numBones = 0;
		try {
			numBones = mesh->GetNumBones();
		}
		catch (...) {
			return false;  // Catch the crash and bail out
		}

		return boneIndex >= 0 && boneIndex < numBones;
	}


	SDK::FVector GetSafeBoneLocation(SDK::USkeletalMeshComponent* mesh, int boneIndex) {
		if (!IsValidBone(mesh, boneIndex))
			return SDK::FVector{};

		SDK::FName boneName = mesh->GetBoneName(boneIndex);
		if (Validity::IsBadPoint(&boneName)) return SDK::FVector{};

		return mesh->GetSocketLocation(boneName);
	}
}

void ESP::RenderSkeleton(SDK::ACharacter* pawn, ImColor color) {
	if (!pawn || !Config::m_pMyController || Validity::IsBadPoint(Config::m_pMyController) || Config::m_BonePairs.empty())
		return;

	SDK::USkeletalMeshComponent* mesh = pawn->Mesh;
	if (!IsValidMesh(mesh))
		return;

	for (const auto& [bone1Index, bone2Index] : Config::m_BonePairs) {
		const SDK::FVector boneLoc1 = GetSafeBoneLocation(mesh, bone1Index);
		const SDK::FVector boneLoc2 = GetSafeBoneLocation(mesh, bone2Index);

		SDK::FVector2D screen1, screen2;
		if (!Config::m_pMyController->ProjectWorldLocationToScreen(boneLoc1, &screen1, false) ||
			!Config::m_pMyController->ProjectWorldLocationToScreen(boneLoc2, &screen2, false)) {
			continue;
		}

		if (pawn == Config::m_pCurrentTarget)
			color = Config::m_bRainbowAimbotTargetColor ? Config::m_cRainbow : Config::m_cAimbotTargetColor;

		ImGui::GetForegroundDrawList()->AddLine(ImVec2(screen1.X, screen1.Y), ImVec2(screen2.X, screen2.Y), color, 1.0f);
	}
}



void ESP::RenderSnapline(SDK::ACharacter* pawn, ImColor color) {
	if (!pawn || !Config::m_pMyController || Validity::IsBadPoint(Config::m_pMyController))
		return;

	SDK::FVector pawnLoc = pawn->K2_GetActorLocation();
	SDK::FVector2D pawnScreen;

	if (!Config::m_pMyController->ProjectWorldLocationToScreen(pawnLoc, &pawnScreen, false))
		return;

	ImVec2 origin;
	switch (Config::m_nPlayersSnaplineType) {
	case 0: origin = ImVec2(Config::System::m_ScreenCenter.X, 0); break;
	case 1: origin = ImVec2(Config::System::m_ScreenCenter.X, Config::System::m_ScreenCenter.Y); break;
	case 2: origin = ImVec2(Config::System::m_ScreenCenter.X, Config::System::m_ScreenSize.Y); break;
	default: return;
	}

	if (pawn == Config::m_pCurrentTarget)
		color = Config::m_bRainbowAimbotTargetColor ? Config::m_cRainbow : Config::m_cAimbotTargetColor;

	ImGui::GetBackgroundDrawList()->AddLine(origin, ImVec2(pawnScreen.X, pawnScreen.Y), color, 1.0f);
}

void ESP::RenderBox(SDK::ACharacter* pawn, ImColor color) {
	if (!pawn || !Config::m_pMyController || Validity::IsBadPoint(Config::m_pMyController) || Config::m_BonePairs.empty())
		return;

	SDK::USkeletalMeshComponent* mesh = pawn->Mesh;
	if (!IsValidMesh(mesh)) return;

	auto head = GetSafeBoneLocation(mesh, Config::m_BonePairs[4].second);
	auto feet = GetSafeBoneLocation(mesh, Config::m_BonePairs.back().second);

	SDK::FVector2D screenHead, screenFeet;
	if (!Config::m_pMyController->ProjectWorldLocationToScreen(head, &screenHead, false) ||
		!Config::m_pMyController->ProjectWorldLocationToScreen(feet, &screenFeet, false))
		return;

	const float height = screenFeet.Y - screenHead.Y;
	const float width = height / 3.0f;

	if (Config::m_bPlayersBoxFilled) {
		ImColor fillColor = color;
		fillColor.Value.w = 0.3f;
		ImGui::GetForegroundDrawList()->AddRectFilled(
			ImVec2(screenHead.X - width, screenHead.Y),
			ImVec2(screenHead.X + width, screenFeet.Y),
			fillColor
		);
	}

	ImGui::GetForegroundDrawList()->AddRect(
		ImVec2(screenHead.X - width, screenHead.Y),
		ImVec2(screenHead.X + width, screenFeet.Y),
		color,
		0.0f, 0,
		1.0f
	);
}

void ESP::Render3DBox(SDK::ACharacter* pawn, ImColor color) {
	if (!pawn || !Config::m_pMyController || Validity::IsBadPoint(Config::m_pMyController) || Config::m_BonePairs.size() < 5)
		return;

	SDK::USkeletalMeshComponent* mesh = pawn->Mesh;
	if (!IsValidMesh(mesh)) return;

	const auto head = GetSafeBoneLocation(mesh, Config::m_BonePairs[4].second);
	const auto feet = GetSafeBoneLocation(mesh, Config::m_BonePairs.back().second);

	SDK::FVector2D screenHead, screenFeet;
	if (!Config::m_pMyController->ProjectWorldLocationToScreen(head, &screenHead, false) ||
		!Config::m_pMyController->ProjectWorldLocationToScreen(feet, &screenFeet, false))
		return;

	const float height = screenFeet.Y - screenHead.Y;
	const float width = height / 3;
	const float depth = width;

	const SDK::FVector center = pawn->K2_GetActorLocation();

	SDK::FVector corners[8] = {
		{center.X - width / 2, center.Y + depth / 2, center.Z - height / 2},
		{center.X + width / 2, center.Y + depth / 2, center.Z - height / 2},
		{center.X - width / 2, center.Y - depth / 2, center.Z - height / 2},
		{center.X + width / 2, center.Y - depth / 2, center.Z - height / 2},
		{center.X - width / 2, center.Y + depth / 2, center.Z + height / 2},
		{center.X + width / 2, center.Y + depth / 2, center.Z + height / 2},
		{center.X - width / 2, center.Y - depth / 2, center.Z + height / 2},
		{center.X + width / 2, center.Y - depth / 2, center.Z + height / 2}
	};

	SDK::FVector2D screenCorners[8];
	for (int i = 0; i < 8; ++i) {
		if (!Config::m_pMyController->ProjectWorldLocationToScreen(corners[i], &screenCorners[i], false))
			return;
	}

	ImVec2 s[8];
	for (int i = 0; i < 8; ++i)
		s[i] = ImVec2(screenCorners[i].X, screenCorners[i].Y);

	auto draw = ImGui::GetForegroundDrawList();
	const int edges[12][2] = {
		{0,1},{1,3},{3,2},{2,0},
		{4,5},{5,7},{7,6},{6,4},
		{0,4},{1,5},{2,6},{3,7}
	};

	for (const auto& edge : edges)
		draw->AddLine(s[edge[0]], s[edge[1]], color, 1.0f);
}
