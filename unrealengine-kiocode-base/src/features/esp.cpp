#include "esp.h"

#include "../config.h"
#include "../utils/validity.h"
#include <chrono>

namespace {

	//bool IsValidCharacter(SDK::ABP_KytBadGuy_C* character) {
	//	if (!character || Validity::IsBadPoint(character))	// From UObject
	//		return false;
	//	if (character->Flags & SDK::EObjectFlags::BeginDestroyed || character->Flags & SDK::EObjectFlags::FinishDestroyed)	// From AActor
	//		return false;
	//	if (character->bActorIsBeingDestroyed)
	//		return false;
	//	if (!character->bCanBeDamaged)
	//		return false;
	//	if (character->DeathState != SDK::EGBDeathState::NotDead)	// From AGBCharacter
	//		return false;
	//	return true;
	//}

	bool IsValidPawn(SDK::ACharacter* pawn)
	{
		if (!pawn || Validity::IsBadPoint(pawn))
		{
			std::cerr << "Error: Pawn is null or invalid!" << std::endl;
			return false;
		}
		if (pawn->Flags & (SDK::EObjectFlags::BeginDestroyed | SDK::EObjectFlags::FinishDestroyed))
		{
			std::cerr << "Error: Pawn is being destroyed!" << std::endl;
			return false;
		}
		if (!pawn->Mesh || Validity::IsBadPoint(pawn->Mesh))
		{
			std::cerr << "Error: Pawn mesh is null or invalid!" << std::endl;
			return false;
		}
		if (pawn->Mesh->Flags & (SDK::EObjectFlags::BeginDestroyed | SDK::EObjectFlags::FinishDestroyed))
		{
			std::cerr << "Warning: Pawn mesh has flag->begindestroyed!" << std::endl;
			return false;
		}
		if (pawn->Mesh->bHasValidBodies == 0)
		{
			std::cerr << "Warning: Pawn mesh has no valid bodies!" << std::endl;
			return false;
		}
		return true;
	}

	bool IsValidMesh(SDK::USkeletalMeshComponent* mesh)
	{
		if (!mesh || Validity::IsBadPoint(mesh))
		{
			std::cerr << "Error: Mesh is null or invalid!" << std::endl;
			return false;
		}
		if (mesh->bHasValidBodies == 0)
		{
			std::cerr << "Warning: Mesh has no valid bodies!" << std::endl;
			return false;
		}
		if (mesh->Flags & (SDK::EObjectFlags::BeginDestroyed | SDK::EObjectFlags::FinishDestroyed))
		{
			std::cerr << "Warning: Mesh has flag->begindestroyed !" << std::endl;
			return false;
		}
		if (!mesh->bIsActive)
		{
			std::cerr << "Warning: Mesh bool is not active!1" << std::endl;
			return false;
		}
		if (!mesh->IsActive())
		{
			std::cerr << "Warning: Mesh classbool is not active!2" << std::endl;
			return false;
		}
		if (mesh->IsBeingDestroyed())
		{
			std::cerr << "Warning: Mesh is being destroyed!" << std::endl;
			return false;
		}
		return true;
	}

	bool IsValidBone(SDK::USkeletalMeshComponent* mesh, int boneIndex)
	{
		if (!IsValidMesh(mesh))
		{
			return false;
		}
		if (boneIndex < 0)
		{
			std::cerr << "Error: Invalid bone index: " << boneIndex << std::endl;
			return false;
		}
		static auto lastValidationPrint = std::chrono::steady_clock::now();
		auto now2 = std::chrono::steady_clock::now();
		if (std::chrono::duration_cast<std::chrono::seconds>(now2 - lastValidationPrint).count() >= 5)
		{
			std::cout << "Validating bone index: " << boneIndex << std::endl;
			lastValidationPrint = now2;
		}
		int numBones = 0;
		try {
			numBones = mesh->GetNumBones();

			static auto lastValidationPrint = std::chrono::steady_clock::now();
			auto now = std::chrono::steady_clock::now();
			if (std::chrono::duration_cast<std::chrono::seconds>(now - lastValidationPrint).count() >= 5)
			{
				std::cout << "mesh: " << mesh << " numbones: " << numBones << std::endl;
				lastValidationPrint = now;
			}
		}
		catch (...) {
			std::cerr << "Error: Exception occurred while getting number of bones." << std::endl;
			return false;
		}
		//std::cout << "Valid bone index: " << boneIndex << " in mesh with " << numBones << " bones." << std::endl;
		return boneIndex < numBones;
	}
	bool GetSafeBoneLocation(SDK::USkeletalMeshComponent* mesh, int boneIndex, SDK::FVector& outLocation) {
		if (!IsValidBone(mesh, boneIndex))
		{
			return false;
		}
		try {
			// Get bone name - no need to check if FName is valid since it's a value type
			SDK::FName boneName = mesh->GetBoneName(boneIndex);

			// Get socket location
			outLocation = mesh->GetSocketLocation(boneName);
			//std::cout << "nonerr: Bone Name: " << boneName.GetRawString() << std::endl;

			// Instead of checking IsZero(), check for obviously invalid values
			// Allow (0,0,0) as it might be legitimate
			if (std::isnan(outLocation.X) || std::isnan(outLocation.Y) || std::isnan(outLocation.Z) ||
				std::isinf(outLocation.X) || std::isinf(outLocation.Y) || std::isinf(outLocation.Z)) {
				std::cerr << "Error: Invalid bone location retrieved!" << boneIndex
						  << "(name: " << boneName.ToString() << ")" << std::endl;
				return false;
			}

			return true;
		}
		catch (...) {
			// Log the bone index and name if possible
			try {
				SDK::FName boneName = mesh->GetBoneName(boneIndex);
				std::cerr << "Exception occurred while getting bone location for bone index "
						  << boneIndex << " (name: " << boneName.ToString() << ")" << std::endl;
			}
			catch (...) {
				std::cerr << "Exception occurred while getting bone location for bone index "
						  << boneIndex << " (name: <unknown>)" << std::endl;
			}
			return false;
		}
		
		
	}
	//bool GetSafeBoneLocation(SDK::USkeletalMeshComponent* mesh, int boneIndex, SDK::FVector& outLocation) {
	//	if (!mesh || Validity::IsBadPoint(mesh) || !IsValidBone(mesh, boneIndex))
	//		return false;
	//	try {
	//		// Follow the original working pattern but with safety checks
	//		SDK::FName boneName = mesh->GetBoneName(boneIndex);
	//		if (Validity::IsBadPoint(&boneName))
	//			return false;
	//		// Get socket location directly like in the original code
	//		outLocation = mesh->GetSocketLocation(boneName);
	//		if (outLocation.IsZero())
	//			return false;
	//		return true;
	//	}
	//	catch (...) {
	//		return false;
	//	}
	//}

			/* error: sometimes bonesocket or k2_getactorlocation
			Assertion failed: !IsUnreachable() [File:E:/bfsdev_dev1035/Engine/Source/Runtime/CoreUObject/Private/UObject/ScriptCore.cpp]
			[Line: 1850] BP_KytBadGuy_C /Game/GroundBranch/Maps/Depot/Depot.Depot:PersistentLevel.BP_KytBadGuy_C_2147423421 Function:
			'/Script/Engine.Actor:K2_GetActorLocation'
			unrealengine_kiocode_base!SDK::InSDKUtils::CallGameFunction<void
			(__cdecl*)(SDK::UObject const *,SDK::UFunction *,void *),SDK::UObject const *,SDK::UFunction * &,void * &>()
			[C:\Users\kittilsen\source\repos\ue4base\unrealengine-kiocode-base\src\sdk\groundbranch\SDK\Basic.hpp:59]
			unrealengine_kiocode_base!SDK::UObject::ProcessEvent()
			[C:\Users\kittilsen\source\repos\ue4base\unrealengine-kiocode-base\src\sdk\groundbranch\SDK\CoreUObject_classes.hpp:67]
			unrealengine_kiocode_base!SDK::AActor::K2_GetActorLocation()
			[C:\Users\kittilsen\source\repos\ue4base\unrealengine-kiocode-base\src\sdk\groundbranch\SDK\Engine_functions.cpp:3337]
			unrealengine_kiocode_base!`anonymous namespace'::GetSafeActorLocation()
			[C:\Users\kittilsen\source\repos\ue4base\unrealengine-kiocode-base\src\features\esp.cpp:109]
			unrealengine_kiocode_base!ESP::RenderSnapline() [C:\Users\kittilsen\source\repos\ue4base\unrealengine-kiocode-base\src\features\esp.cpp:156]
			unrealengine_kiocode_base!MainLoop::Update() [C:\Users\kittilsen\source\repos\ue4base\unrealengine-kiocode-base\src\features\main_loop.cpp:414]
			unrealengine_kiocode_base!GUI::hkPresent() [C:\Users\kittilsen\source\repos\ue4base\unrealengine-kiocode-base\src\features\core.cpp:154]
			unrealengine_kiocode_base!GUI::hkPresentWrapper() [C:\Users\kittilsen\source\repos\ue4base\unrealengine-kiocode-base\src\gui\core\gui.h:18]
			GroundBranch_Win64_Shipping
			--
			 class ABP_KytBadGuy_C -> class ABP_KytBase_C -> class ABP_Character_C -> class AGBCharacter -> class ACharacter -> class APawn -> class AActor
			 ABP_KytBadGuy_C = enemy
			 ABP_Character_Blufor_C = friendly
			*/

	SDK::FVector GetSafeActorLocation(SDK::ACharacter* pawn) {
		if (!pawn || Validity::IsBadPoint(pawn))
		{
			return SDK::FVector{};
		}
		// Check if the pawn's controller is null
		if (auto* pawnAsPawn = static_cast<SDK::APawn*>(pawn)) {
			if (!pawnAsPawn->Controller) {
				std::cerr << "Pawn's controller is null. Likely being destroyed." << std::endl;
				return SDK::FVector{};
			}
		}
		try {
			SDK::FVector pawnLoc = pawn->K2_GetActorLocation();
			if (pawnLoc.X == 0.0f && pawnLoc.Y == 0.0f && pawnLoc.Z == 0.0f)
			{
				return SDK::FVector{};
			}
			return pawnLoc;
		}
		catch (...) {
			std::cerr << "Exception occurred while getting actor location." << std::endl;
			return SDK::FVector{};
		}
	}
}



// skeleton init-main_loop.cpp:486
void ESP::RenderSkeleton(SDK::ACharacter* pawn, ImColor color) {
	if (!pawn || !Config::m_pMyController || Validity::IsBadPoint(Config::m_pMyController) || Config::m_BonePairs.empty())
	{
		return;
	}

	SDK::USkeletalMeshComponent* mesh = pawn->Mesh;
	if (!mesh || !IsValidMesh(mesh))
	{
		return;
	}

	for (const std::pair<int, int>& pair : Config::m_BonePairs) {
		SDK::FVector boneLoc1, boneLoc2;
		try {
			if (!GetSafeBoneLocation(mesh, pair.first, boneLoc1) ||
				!GetSafeBoneLocation(mesh, pair.second, boneLoc2)) {
				continue;
			}

			SDK::FVector2D boneScreen, prevBoneScreen;
			if (!Config::m_pMyController->ProjectWorldLocationToScreen(boneLoc1, &boneScreen, false) ||
				!Config::m_pMyController->ProjectWorldLocationToScreen(boneLoc2, &prevBoneScreen, false)) {
				continue;
			}

			if (pawn == Config::m_pCurrentTarget)
				color = Config::m_bRainbowAimbotTargetColor ? Config::m_cRainbow : Config::m_cAimbotTargetColor;

			ImGui::GetForegroundDrawList()->AddLine(
				ImVec2(boneScreen.X, boneScreen.Y),
				ImVec2(prevBoneScreen.X, prevBoneScreen.Y),
				color,
				1.0f
			);
		}
		catch (...) {
			continue;
		}
	}
}

// // unsafe modified
//void ESP::RenderSkeleton(SDK::ACharacter* pawn, ImColor color) {
//	//static auto lastLogTime = std::chrono::steady_clock::now(); // Track last log time
//	//const auto logInterval = std::chrono::milliseconds(10000);  // Log every 10 seconds
//	SDK::USkeletalMeshComponent* mesh = pawn->Mesh;
//
//	if (!pawn || !Config::m_pMyController || Validity::IsBadPoint(Config::m_pMyController) || Config::m_BonePairs.empty())
//		return;
//	
//	if (!mesh || !IsValidMesh(mesh))
//		return;
//
//	//for (const std::pair<int, int>& pair : Config::m_BonePairs) {
//	//		const int bone1Index = pair.first;
//	//		const int bone2Index = pair.second;
//	//		// Get bone names
//	//		SDK::FName boneName1 = pawn->Mesh->GetBoneName(bone1Index);
//	//		SDK::FName boneName2 = pawn->Mesh->GetBoneName(bone2Index);
//	//		// Get bone locations
//	//		const SDK::FVector boneLoc1 = pawn->Mesh->GetSocketLocation(boneName1);
//	//		const SDK::FVector boneLoc2 = pawn->Mesh->GetSocketLocation(boneName2);
//	//		// Log bone names and locations if debug logging is enabled
//	//		auto now = std::chrono::steady_clock::now();
//	//		if (config::debugLogging && now - lastLogTime >= logInterval)
//	//		{
//	//			std::cout << "Bone1 Name: " << boneName1.ToString() << ", Bone2 Name: " << boneName2.ToString() << std::endl;
//	//			std::cout << "Bone1 Location: X=" << boneLoc1.X << ", Y=" << boneLoc1.Y << ", Z=" << boneLoc1.Z << std::endl;
//	//			std::cout << "Bone2 Location: X=" << boneLoc2.X << ", Y=" << boneLoc2.Y << ", Z=" << boneLoc2.Z << std::endl;
//	//			lastLogTime = now; // Update last log time
//	//		}
//	//		// Check if bone names are valid and output
//	//		if (boneName1.ToString().empty() || boneName2.ToString().empty()) {
//	//			std::cerr << "Invalid bone names for indices: " << bone1Index << ", " << bone2Index << std::endl;
//	//			continue;
//	//		}
//	//}
//
//	// Continue with rendering logic...
//
//	for (const std::pair<int, int>& pair : Config::m_BonePairs)
//	{
//		const int bone1Index = pair.first;
//		const int bone2Index = pair.second;
//		/*const SDK::FVector boneLoc1 = GetSafeBoneLocation(mesh, bone1Index);
//		const SDK::FVector boneLoc2 = GetSafeBoneLocation(mesh, bone2Index);*/
//		const SDK::FVector boneLoc1 = pawn->Mesh->GetSocketLocation(pawn->Mesh->GetBoneName(bone1Index));
//		const SDK::FVector boneLoc2 = pawn->Mesh->GetSocketLocation(pawn->Mesh->GetBoneName(bone2Index));
//
//		if (boneLoc1.IsZero() || boneLoc2.IsZero())
//			{
//			std::cerr << "\nInvalid bone locations for indices: " << bone1Index << ", \n" << bone2Index << std::endl;
//			continue;
//			}
//
//		SDK::FVector2D boneScreen;
//		SDK::FVector2D prevBoneScreen;
//
//		if (!Config::m_pMyController->ProjectWorldLocationToScreen(boneLoc1, &boneScreen, false) ||
//			!Config::m_pMyController->ProjectWorldLocationToScreen(boneLoc2, &prevBoneScreen, false))
//			{
//			std::cerr << "\nProjection failed for bones.\n" << std::endl;
//			continue;
//		}
//
//		if (pawn == Config::m_pCurrentTarget)
//			color = Config::m_bRainbowAimbotTargetColor ? Config::m_cRainbow : Config::m_cAimbotTargetColor;
//
//		ImGui::GetForegroundDrawList()->AddLine(ImVec2(boneScreen.X, boneScreen.Y), ImVec2(prevBoneScreen.X, prevBoneScreen.Y), color, 1.0f);
//	}
//}

//void ESP::RenderSkeleton(SDK::ACharacter* pawn, ImColor color) // og code
//{
//	if (!pawn || !Config::m_pMyController || Validity::IsBadPoint(Config::m_pMyController) || Config::m_BonePairs.empty())
//		return;
//
//	SDK::USkeletalMeshComponent* mesh = pawn->Mesh;
//	if (!mesh)
//		return;
//
//	for (const std::pair<int, int>& pair : Config::m_BonePairs)
//	{
//		const int bone1Index = pair.first;
//		const int bone2Index = pair.second;
//
//		const SDK::FVector boneLoc1 = pawn->Mesh->GetSocketLocation(pawn->Mesh->GetBoneName(bone1Index));
//		const SDK::FVector boneLoc2 = pawn->Mesh->GetSocketLocation(pawn->Mesh->GetBoneName(bone2Index));
//
//		SDK::FVector2D boneScreen;
//		SDK::FVector2D prevBoneScreen;
//
//		if (
//			!Config::m_pMyController->ProjectWorldLocationToScreen(boneLoc1, &boneScreen, false) ||
//			!Config::m_pMyController->ProjectWorldLocationToScreen(boneLoc2, &prevBoneScreen, false)
//		) continue;
//
//		if (pawn == Config::m_pCurrentTarget) color = Config::m_bRainbowAimbotTargetColor ? Config::m_cRainbow : Config::m_cAimbotTargetColor;
//
//		ImGui::GetForegroundDrawList()->AddLine(
//			ImVec2(boneScreen.X, boneScreen.Y),
//			ImVec2(prevBoneScreen.X, prevBoneScreen.Y),
//			color,
//			1.0f
//		);
//	}
//}

//void ESP::RenderSkeleton(SDK::ACharacter* pawn, ImColor color) {
//	if (!IsValidPawn(pawn) || !Config::m_pMyController ||
//		Validity::IsBadPoint(Config::m_pMyController) || Config::m_BonePairs.empty())
//		return;
//
//	SDK::USkeletalMeshComponent* mesh = pawn->Mesh;
//	if (!IsValidMesh(mesh))
//		return;
//
//
//	// TEST: Use actor location like snaplines do
//	SDK::FVector pawnLoc = GetSafeActorLocation(pawn);
//	if (pawnLoc.IsZero())
//		return;
//
//	for (const auto& [bone1Index, bone2Index] : Config::m_BonePairs) {
//		// TEST: Create fake bone positions based on pawn location
//		SDK::FVector boneLoc1 = pawnLoc + SDK::FVector{ 0, 0, (float)bone1Index * 10 };
//		SDK::FVector boneLoc2 = pawnLoc + SDK::FVector{ 0, 0, (float)bone2Index * 10 };
//
//		SDK::FVector2D screen1, screen2;
//		if (!Config::m_pMyController->ProjectWorldLocationToScreen(boneLoc1, &screen1, false) ||
//			!Config::m_pMyController->ProjectWorldLocationToScreen(boneLoc2, &screen2, false)) {
//			continue;
//		}
//
//		if (pawn == Config::m_pCurrentTarget)
//			color = Config::m_bRainbowAimbotTargetColor ? Config::m_cRainbow : Config::m_cAimbotTargetColor;
//
//		// Try background drawlist like snaplines
//		ImGui::GetBackgroundDrawList()->AddLine(ImVec2(screen1.X, screen1.Y), ImVec2(screen2.X, screen2.Y), color, 1.0f);
//	}
//}

//void ESP::RenderSkeleton(SDK::ABP_KytBadGuy_C* pawn, ImColor color) {
//	if (!IsValidPawn(pawn) || !Config::m_pMyController || 
//		Validity::IsBadPoint(Config::m_pMyController) || Config::m_BonePairs.empty())
//		return;
//
//	SDK::USkeletalMeshComponent* mesh = pawn->Mesh;
//	if (!IsValidMesh(mesh))
//		return;
//
//	for (const auto& [bone1Index, bone2Index] : Config::m_BonePairs) {
//		const SDK::FVector boneLoc1 = GetSafeBoneLocation(mesh, bone1Index);
//		const SDK::FVector boneLoc2 = GetSafeBoneLocation(mesh, bone2Index);
//
//		// Check if bone locations are valid (not zero)
//		if (boneLoc1.IsZero() || boneLoc2.IsZero())
//			continue;
//
//		SDK::FVector2D screen1, screen2;
//		if (!Config::m_pMyController->ProjectWorldLocationToScreen(boneLoc1, &screen1, false) ||
//			!Config::m_pMyController->ProjectWorldLocationToScreen(boneLoc2, &screen2, false)) {
//			continue;
//		}
//
//		if (pawn == Config::m_pCurrentTarget)
//			color = Config::m_bRainbowAimbotTargetColor ? Config::m_cRainbow : Config::m_cAimbotTargetColor;
//
//		ImGui::GetBackgroundDrawList()->AddLine(ImVec2(screen1.X, screen1.Y), ImVec2(screen2.X, screen2.Y), color, 1.0f);
//	}
//}

void ESP::RenderSnapline(SDK::ACharacter* pawn, ImColor color) { // double check main_loop bool isn't commented out&aactor cast is correct
	if (!IsValidPawn(pawn) || !Config::m_pMyController || Validity::IsBadPoint(Config::m_pMyController))
	{
		return;
	}

	// Use safe wrapper instead of direct call
	SDK::FVector pawnLoc = GetSafeActorLocation(pawn);
	static auto lastPawnLocPrint = std::chrono::steady_clock::now();
	auto now3 = std::chrono::steady_clock::now();
		if (std::chrono::duration_cast<std::chrono::seconds>(now3 - lastPawnLocPrint).count() >= 5) {
			std::cout << "Pawn location: " << pawnLoc.X << ", " << pawnLoc.Y << ", " << pawnLoc.Z << std::endl;
			lastPawnLocPrint = now3;
		}
	if (pawnLoc.IsZero()) // Check if location is valid
	{
		std::cerr << "Error: zero pawn location!" << pawn << std::endl;
		return;
	}

	SDK::FVector2D pawnScreen;
	if (!Config::m_pMyController->ProjectWorldLocationToScreen(pawnLoc, &pawnScreen, false))
	{
		std::cerr << "pawn projection failed: " << pawn << std::endl;
		return;
	}

	ImVec2 origin;
	switch (Config::m_nPlayersSnaplineType) {
	case 0: origin = ImVec2(Config::System::m_ScreenCenter.X, 0); break;
	case 1: origin = ImVec2(Config::System::m_ScreenCenter.X, Config::System::m_ScreenCenter.Y); break;
	case 2: origin = ImVec2(Config::System::m_ScreenCenter.X, Config::System::m_ScreenSize.Y); break;
	default: return;
	}

	//if (pawn == Config::m_pCurrentTarget)
	//	color = Config::m_bRainbowAimbotTargetColor ? Config::m_cRainbow : Config::m_cAimbotTargetColor;

	ImGui::GetBackgroundDrawList()->AddLine(origin, ImVec2(pawnScreen.X, pawnScreen.Y), color, 1.0f);
}

//void ESP::RenderBox(SDK::ABP_KytBadGuy_C* pawn, ImColor color) {
//	if (!IsValidPawn(pawn) || !Config::m_pMyController || 
//		Validity::IsBadPoint(Config::m_pMyController) || Config::m_BonePairs.size() < 5)
//		return;
//
//	SDK::USkeletalMeshComponent* mesh = pawn->Mesh;
//	if (!IsValidMesh(mesh)) return;
//
//	auto head = GetSafeBoneLocation(mesh, Config::m_BonePairs[4].second);
//	auto feet = GetSafeBoneLocation(mesh, Config::m_BonePairs.back().second);
//
//	// Check if bone locations are valid
//	if (head.IsZero() || feet.IsZero())
//		return;
//
//	SDK::FVector2D screenHead, screenFeet;
//	if (!Config::m_pMyController->ProjectWorldLocationToScreen(head, &screenHead, false) ||
//		!Config::m_pMyController->ProjectWorldLocationToScreen(feet, &screenFeet, false))
//		return;
//
//	const float height = screenFeet.Y - screenHead.Y;
//	const float width = height / 3.0f;
//
//	// Sanity check for reasonable dimensions
//	if (height <= 0 || width <= 0 || height > 1000 || width > 500)
//		return;
//
//	if (Config::m_bPlayersBoxFilled) {
//		ImColor fillColor = color;
//		fillColor.Value.w = 0.3f;
//		ImGui::GetForegroundDrawList()->AddRectFilled(
//			ImVec2(screenHead.X - width, screenHead.Y),
//			ImVec2(screenHead.X + width, screenFeet.Y),
//			fillColor
//		);
//	}
//
//	ImGui::GetForegroundDrawList()->AddRect(
//		ImVec2(screenHead.X - width, screenHead.Y),
//		ImVec2(screenHead.X + width, screenFeet.Y),
//		color,
//		0.0f, 0,
//		1.0f
//	);
//}
//
//void ESP::Render3DBox(SDK::ABP_KytBadGuy_C* pawn, ImColor color) {
//	if (!IsValidPawn(pawn) || !Config::m_pMyController || 
//		Validity::IsBadPoint(Config::m_pMyController) || Config::m_BonePairs.size() < 5)
//		return;
//
//	SDK::USkeletalMeshComponent* mesh = pawn->Mesh;
//	if (!IsValidMesh(mesh)) return;
//
//	const auto head = GetSafeBoneLocation(mesh, Config::m_BonePairs[4].second);
//	const auto feet = GetSafeBoneLocation(mesh, Config::m_BonePairs.back().second);
//
//	// Check if bone locations are valid
//	if (head.IsZero() || feet.IsZero())
//		return;
//
//	SDK::FVector2D screenHead, screenFeet;
//	if (!Config::m_pMyController->ProjectWorldLocationToScreen(head, &screenHead, false) ||
//		!Config::m_pMyController->ProjectWorldLocationToScreen(feet, &screenFeet, false))
//		return;
//
//	const float height = screenFeet.Y - screenHead.Y;
//	const float width = height / 3;
//	const float depth = width;
//
//	// Sanity check for reasonable dimensions
//	if (height <= 0 || width <= 0 || height > 1000 || width > 500)
//		return;
//
//	// Use safe wrapper for actor location
//	const SDK::FVector center = GetSafeActorLocation(pawn);
//	if (center.IsZero())
//		return;
//
//	SDK::FVector corners[8] = {
//		{center.X - width / 2, center.Y + depth / 2, center.Z - height / 2},
//		{center.X + width / 2, center.Y + depth / 2, center.Z - height / 2},
//		{center.X - width / 2, center.Y - depth / 2, center.Z - height / 2},
//		{center.X + width / 2, center.Y - depth / 2, center.Z - height / 2},
//		{center.X - width / 2, center.Y + depth / 2, center.Z + height / 2},
//		{center.X + width / 2, center.Y + depth / 2, center.Z + height / 2},
//		{center.X - width / 2, center.Y - depth / 2, center.Z + height / 2},
//		{center.X + width / 2, center.Y - depth / 2, center.Z + height / 2}
//	};
//
//	SDK::FVector2D screenCorners[8];
//	bool allProjected = true;
//	for (int i = 0; i < 8; ++i) {
//		if (!Config::m_pMyController->ProjectWorldLocationToScreen(corners[i], &screenCorners[i], false)) {
//			allProjected = false;
//			break;
//		}
//	}
//
//	if (!allProjected)
//		return;
//
//	ImVec2 s[8];
//	for (int i = 0; i < 8; ++i)
//		s[i] = ImVec2(screenCorners[i].X, screenCorners[i].Y);
//
//	auto draw = ImGui::GetForegroundDrawList();
//	const int edges[12][2] = {
//		{0,1},{1,3},{3,2},{2,0},
//		{4,5},{5,7},{7,6},{6,4},
//		{0,4},{1,5},{2,6},{3,7}
//	};
//
//	for (const auto& edge : edges)
//		draw->AddLine(s[edge[0]], s[edge[1]], color, 1.0f);
//}