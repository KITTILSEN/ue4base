void ESP::RenderSkeleton(SDK::ACharacter* pawn, ImColor color) {
	//static auto lastLogTime = std::chrono::steady_clock::now(); // Track last log time
	//const auto logInterval = std::chrono::milliseconds(10000);  // Log every 10 seconds
	SDK::USkeletalMeshComponent* mesh = pawn->Mesh;

	if (!pawn || !Config::m_pMyController || Validity::IsBadPoint(Config::m_pMyController) || Config::m_BonePairs.empty())
		return;

	if (!mesh || !IsValidMesh(mesh))
		return;

	//for (const std::pair<int, int>& pair : Config::m_BonePairs) {
	//		const int bone1Index = pair.first;
	//		const int bone2Index = pair.second;
	//		// Get bone names
	//		SDK::FName boneName1 = pawn->Mesh->GetBoneName(bone1Index);
	//		SDK::FName boneName2 = pawn->Mesh->GetBoneName(bone2Index);
	//		// Get bone locations
	//		const SDK::FVector boneLoc1 = pawn->Mesh->GetSocketLocation(boneName1);
	//		const SDK::FVector boneLoc2 = pawn->Mesh->GetSocketLocation(boneName2);
	//		// Log bone names and locations if debug logging is enabled
	//		auto now = std::chrono::steady_clock::now();
	//		if (config::debugLogging && now - lastLogTime >= logInterval)
	//		{
	//			std::cout << "Bone1 Name: " << boneName1.ToString() << ", Bone2 Name: " << boneName2.ToString() << std::endl;
	//			std::cout << "Bone1 Location: X=" << boneLoc1.X << ", Y=" << boneLoc1.Y << ", Z=" << boneLoc1.Z << std::endl;
	//			std::cout << "Bone2 Location: X=" << boneLoc2.X << ", Y=" << boneLoc2.Y << ", Z=" << boneLoc2.Z << std::endl;
	//			lastLogTime = now; // Update last log time
	//		}
	//		// Check if bone names are valid and output
	//		if (boneName1.ToString().empty() || boneName2.ToString().empty()) {
	//			std::cerr << "Invalid bone names for indices: " << bone1Index << ", " << bone2Index << std::endl;
	//			continue;
	//		}
	//}

	// Continue with rendering logic...
	for (const std::pair<int, int>& pair : Config::m_BonePairs)
	{
		const int bone1Index = pair.first;
		const int bone2Index = pair.second;

		SDK::FVector boneLoc1, boneLoc2;
		SDK::FName boneName1, boneName2;

		try {
			// Validate bone indices first
			if (bone1Index < 0 || bone2Index < 0 ||
				bone1Index >= mesh->GetNumBones() ||
				bone2Index >= mesh->GetNumBones()) {
				continue;
			}

			// Get and validate bone names
			boneName1 = mesh->GetBoneName(bone1Index);
			boneName2 = mesh->GetBoneName(bone2Index);

			if (Validity::IsBadPoint(&boneName1) || Validity::IsBadPoint(&boneName2)) {
				continue;
			}

			// Get socket locations only if bone names are valid
			boneLoc1 = mesh->GetSocketLocation(boneName1);
			boneLoc2 = mesh->GetSocketLocation(boneName2);

			// Validate locations
			if (boneLoc1.IsZero() || boneLoc2.IsZero()) {
				continue;
			}

		}
		catch (...) {
			continue;  // Skip this bone pair if any exception occurs
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
}