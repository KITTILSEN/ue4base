#include "main_loop.h"

#include "../config.h"
#include "../utils/validity.h"
#include "../utils/general.h"
#include "../utils/imgui/imgui_helper.h"
#include "esp.h"
#include <chrono>
#include <thread>
//#include "aimbot.h"

void MainLoop::DrawCrosshair() 
{
	ImColor color = Config::m_bRainbowCrosshair ? Config::m_cRainbow : Config::m_cCrosshairColor;
	switch (Config::m_nCrosshairType)
	{
	case 0:
		ImGui::GetForegroundDrawList()->AddLine(ImVec2(Config::System::m_ScreenCenter.X - Config::m_fCrosshairSize, Config::System::m_ScreenCenter.Y), ImVec2((Config::System::m_ScreenCenter.X - Config::m_fCrosshairSize) + (Config::m_fCrosshairSize * 2), Config::System::m_ScreenCenter.Y), color, 1.2f);
		ImGui::GetForegroundDrawList()->AddLine(ImVec2(Config::System::m_ScreenCenter.X, Config::System::m_ScreenCenter.Y - Config::m_fCrosshairSize), ImVec2(Config::System::m_ScreenCenter.X, (Config::System::m_ScreenCenter.Y - Config::m_fCrosshairSize) + (Config::m_fCrosshairSize * 2)), color, 1.2f);
		break;
	case 1:
		ImGui::GetForegroundDrawList()->AddCircle(ImVec2(Config::System::m_ScreenCenter.X, Config::System::m_ScreenCenter.Y), Config::m_fCrosshairSize, color, 100, 1.2f);
		break;
	}
}

//void MainLoop::FetchFromObjects(std::vector<SDK::ACharacter*>* list) {
//	list->clear();
//
//	// Add some basic limits to prevent infinite loops
//	int maxObjects = SDK::UObject::GObjects->Num();
//	if (maxObjects > 50000) maxObjects = 50000; // Safety limit
//
//	for (int i = 0; i < maxObjects; i++) {
//		// Yield control occasionally to prevent freezing
//		if (i % 1000 == 0) {
//			std::this_thread::sleep_for(std::chrono::microseconds(1));
//		}
//
//		SDK::UObject* obj = SDK::UObject::GObjects->GetByIndex(i);
//		if (!obj || obj->IsDefaultObject())
//			continue;
//
//		if (!obj->IsA(SDK::ABP_KytBadGuy_C::StaticClass()))
//			continue;
//
//		SDK::ABP_KytBadGuy_C* enemies = static_cast<SDK::ABP_KytBadGuy_C*>(obj);
//
//		if (enemies->Health <= 0)
//			continue;
//
//		list->push_back(enemies);
	

												//vvv match with config(::m_TargetsList(61), ESP's & newTargets vector)->!overload
void MainLoop::FetchFromObjects(std::vector<SDK::ACharacter*>* list)
{

	list->clear();

	for (int i = 0; i < SDK::UObject::GObjects->Num(); i++)
	{
		SDK::UObject* obj = SDK::UObject::GObjects->GetByIndex(i);

		if (!obj || obj->IsDefaultObject())
			continue;
		
		// ground branch
		if (!obj->IsA(SDK::ABP_KytBadGuy_C::StaticClass())) // filters out pointers / pushes only pointers for this obj. -changeable-
			continue;
		SDK::ABP_KytBadGuy_C* enemies = static_cast<SDK::ABP_KytBadGuy_C*>(obj);
		
		if (!enemies || Validity::IsBadPoint(enemies) || enemies->Health <= 0)
			continue;

		list->push_back(enemies);

		// THIS PART CAN BE VARIABLE BELOW

		// Crabs Champions
		//if (!obj->IsA(SDK::ACrabEnemyC::StaticClass()))
		//	continue;
		
		// Destroy All Humans
		//if (!obj->IsA(SDK::UBFGAnimationInstance_Human::StaticClass()))
		//	continue;		
		
		// oar
		/*if (!obj->IsA(SDK::ANPCBase_C::StaticClass()))
			continue;

		SDK::ANPCBase_C* npc = static_cast<SDK::ANPCBase_C*>(obj);

		if (!npc || Validity::IsBadPoint(npc) || npc->Health <= 0 || npc->Dead_)
			continue;*/

		//if(Config::m_bKillAll) npc->TakeDamage(999, npc);

		

	}
}

//void MainLoop::FetchFromActors(std::vector<SDK::AActor*>* list)
//{
//
//	if (Config::World->Levels.Num() == 0)
//		return;
//
//	SDK::ULevel* currLevel = Config::World->Levels[0];
//	if (!currLevel)
//		return;
//
//	list->clear();
//
//	for (int j = 0; j < currLevel->Actors.Num(); j++)
//	{
//		SDK::AActor* currActor = currLevel->Actors[j];
//
//		if (!currActor)
//			continue;
//		if (!currActor->RootComponent)
//			continue;
//
//		//const auto location = currActor->K2_GetActorLocation();
//		//if (location.X == 0.f || location.Y == 0.f || location.Z == 0.f) continue;
//
//		//if (currActor->GetFullName().find("YOUR_NPC") != std::string::npos)
//		if (currActor->GetFullName().find("Kyt") != std::string::npos)
//		{
//			list->push_back(currActor);
//		}
//
//	}
//}

//void MainLoop::FetchFromPlayers(std::vector<SDK::ACharacter*>* list)
//{
//	list->clear();
//
//	SDK::TSubclassOf<SDK::ACharacter> PlayerBaseCharacterReference = SDK::ACharacter::StaticClass();
//	SDK::TArray<SDK::AActor*> PlayerCharacters;
//	SDK::UGameplayStatics::GetAllActorsOfClass(Config::m_pWorld, PlayerBaseCharacterReference, &PlayerCharacters);
//
//	for (SDK::AActor* actor : PlayerCharacters)
//	{
//		if (!actor || Validity::IsBadPoint(actor) || !actor->IsA(PlayerBaseCharacterReference)) continue;
//
//		SDK::ACharacter* PlayerCharacter = reinterpret_cast<SDK::ACharacter*>(actor);
//		if (!PlayerCharacter || !PlayerCharacter->PlayerState || !PlayerCharacter->PlayerState->GetPlayerName() || !PlayerCharacter->PlayerState->GetPlayerName().IsValid())
//			continue;
//
//		list->push_back(PlayerCharacter);
//	}
//}

void MainLoop::FetchEntities()
{
	auto lastUpdateTime = std::chrono::steady_clock::now();

	do {
		if (!Config::System::m_bUpdateTargets)
		{
			std::lock_guard<std::mutex> lock(list_mutex);
			if (!Config::m_TargetsList.empty())
			{
				Config::m_TargetsList.clear();
			}

			if (Config::System::m_bUpdateTargetsInDifferentThread)
			{
				// Yield control without blocking
				continue;
			}
			else
			{
				return;
			}
		}

		auto currentTime = std::chrono::steady_clock::now();
		auto elapsedTime = std::chrono::duration_cast<std::chrono::milliseconds>(currentTime - lastUpdateTime);

		if (elapsedTime.count() < 10) // Update every 10ms
		{
			continue;
		}

		lastUpdateTime = currentTime;

		if (!Config::m_pWorld || Validity::IsBadPoint(Config::m_pWorld) ||
			!Config::m_pEngine || Validity::IsBadPoint(Config::m_pEngine) ||
			!Config::m_pMyController || Validity::IsBadPoint(Config::m_pMyController) ||
			!Config::m_pMyPawn || Validity::IsBadPoint(Config::m_pMyPawn))
		{
			if (Config::System::m_bUpdateTargetsInDifferentThread)
			{
				continue;
			}
			else
			{
				return;
			}
		}

		if (!Config::m_pWorld->GameState || Validity::IsBadPoint(Config::m_pWorld->GameState) ||
			Validity::IsBadPoint(Config::m_pWorld->OwningGameInstance))
		{
			if (Config::System::m_bUpdateTargetsInDifferentThread)
			{
				continue;
			}
			else
			{
				return;
			}
		}

		std::vector<SDK::ACharacter*> newTargets;

		switch (Config::m_nTargetFetch)
		{
		case 0:
			FetchFromObjects(&newTargets);
			break;

		case 1:
			//FetchFromActors(&newTargets);
			break;

		case 2:
			//FetchFromPlayers(&newTargets);
			break;
		}

		{
			std::lock_guard<std::mutex> lock(list_mutex);
			Config::m_TargetsList = std::move(newTargets);
		}

	} while (Config::System::m_bUpdateTargetsInDifferentThread);
}


bool MainLoop::UpdateSDK(bool log) 
{
	Config::m_pWorld = SDK::UWorld::GetWorld();
	if (Validity::IsBadPoint(Config::m_pWorld) || Validity::IsBadPoint(Config::m_pWorld->GameState))
	{
		std::cerr << "Error: World not found" << std::endl;
		return false;
	}
	if (log) {
		std::cout << "World address: 0x" << std::hex << reinterpret_cast<uintptr_t>(Config::m_pWorld) << std::dec << std::endl;
		std::cout << "^^^ World name: " << Config::m_pWorld->GetName() << std::endl;
	}

	Config::m_pEngine = SDK::UEngine::GetEngine();
	if (Validity::IsBadPoint(Config::m_pEngine)) 
	{
		std::cerr << "Error: Engine not found" << std::endl;
		return false;
	}
	if (log) {
		std::cout << "Engine address: 0x" << std::hex << reinterpret_cast<uintptr_t>(Config::m_pEngine) << std::dec << std::endl;
		std::cout << "^^^ Engine name: " << Config::m_pEngine->GetName() << std::endl;
	}

	// Init PlayerController
	if (Validity::IsBadPoint(Config::m_pWorld->OwningGameInstance)) 
	{
		std::cerr << "Error: OwningGameInstance not found" << std::endl;
		return false;
	}
	if (Validity::IsBadPoint(Config::m_pWorld->OwningGameInstance->LocalPlayers[0])) 
	{
		std::cerr << "Error: LocalPlayers[0] not found" << std::endl;
		return false;
	}
	Config::m_pMyController = Config::m_pWorld->OwningGameInstance->LocalPlayers[0]->PlayerController;
	if (Validity::IsBadPoint(Config::m_pMyController)) 
	{
		std::cerr << "Error: MyController not found" << std::endl;
		return false;
	}
	if (log) {
		std::cout << "PlayerController address: 0x" << std::hex << reinterpret_cast<uintptr_t>(Config::m_pMyController) << std::dec << std::endl;
		std::cout << "^^^ PlayerController name: " << Config::m_pMyController->GetName() << std::endl;
	}

	// Init Pawn
	Config::m_pMyPawn = Config::m_pMyController->AcknowledgedPawn;
	if (Config::m_pMyPawn == nullptr) 
	{
		std::cerr << "Error: MyPawn not found" << std::endl;
		return false;
	}	
	if (log) {
		std::cout << "MyPawn address: 0x" << std::hex << reinterpret_cast<uintptr_t>(Config::m_pMyPawn) << std::dec << std::endl;
		std::cout << "^^^ MyPawn name: " << Config::m_pMyPawn->GetName() << std::endl;
	}
	
	Config::m_pMyCharacter = Config::m_pMyController->Character;
	if (Config::m_pMyCharacter == nullptr)
	{
		std::cerr << "Error: MyCharacter not found" << std::endl;
		return false;
	}
	if (log) {
		std::cout << "MyCharacter address: 0x" << std::hex << reinterpret_cast<uintptr_t>(Config::m_pMyCharacter) << std::dec << std::endl;
		std::cout << "^^^ MyCharacter name: " << Config::m_pMyCharacter->GetName() << std::endl;
	}

	return true;

}

void MainLoop::Update(DWORD tick) 
{
	//static DWORD lastFetch = 0;
	// important update of the sdk, bc if we inject the dll in the menu for example, 
	// after in game we will not have the access to some obejct or the player controller
	if (!UpdateSDK(false)) return;

	// thats a check because we can start that in a thread to avoid lag, but in some game
	// it must be in the main loop to avoid game freezing (like in OHD)
	if (!Config::System::m_bUpdateTargetsInDifferentThread)
	/*{
		if (Config::System::m_bUpdateTargets && GetTickCount64() - lastFetch > 250)*/
		{
			FetchEntities();
		/*	lastFetch = GetTickCount64();
		}*/
	}
	
	#pragma region EXPLOIT CHEATS

	if (Config::m_bGodMode)
	{
		// not working in all games
		Config::m_pMyController->SetLifeSpan(999);
	}

	// seems universal (use it with the fly or you will fall under the map forever :D)
	if (Config::m_bNoClip)
	{
		Config::m_pMyPawn->SetActorEnableCollision(false);
	}
	else if (!Config::m_bNoClip && Config::m_pMyPawn->GetActorEnableCollision())
	{
		Config::m_pMyPawn->SetActorEnableCollision(true);
	}

	// seems universal
	if (Config::m_bCameraFovChanger)
	{
		Config::m_pMyController->FOV(Config::m_fCameraCustomFOV);
	}

	// seems universal
	if (Config::m_bTimeScaleChanger)
	{
		Config::m_pWorld->K2_GetWorldSettings()->TimeDilation = Config::m_fTimeScale;
	}

	// seems universal (in multiplayer it may not work if player pos is server sided)
	if (Config::m_bFly)
	{
		Config::m_pMyCharacter->CharacterMovement->MaxFlySpeed = 20000.f;
		Config::m_pMyCharacter->CharacterMovement->MovementMode = SDK::EMovementMode::MOVE_Flying;
		if (GetAsyncKeyState(VK_SPACE))
		{
			SDK::FVector posUP = { 0.f, 0.f, 10.f };
			Config::m_pMyCharacter->CharacterMovement->AddInputVector(posUP, true);
		}
		if (GetAsyncKeyState(VK_LCONTROL))
		{
			SDK::FVector posDOWN = { 0.f, 0.f, -10.f };
			Config::m_pMyCharacter->CharacterMovement->AddInputVector(posDOWN, true);
		}
	}
	else if (Config::m_pMyCharacter->CharacterMovement->MovementMode == SDK::EMovementMode::MOVE_Flying)
	{
		Config::m_pMyCharacter->CharacterMovement->MovementMode = SDK::EMovementMode::MOVE_Falling;
	}

	// seems universal
	if (Config::m_bNoGravity)
	{
		Config::m_pMyCharacter->CharacterMovement->GravityScale = 0.2f;
	}
	else if (Config::m_pMyCharacter->CharacterMovement->GravityScale != 1.f)
	{
		Config::m_pMyCharacter->CharacterMovement->GravityScale = 1.f;
	}

	// seems universal
	if (Config::m_bSpeedHack)
	{
		Config::m_pMyCharacter->CharacterMovement->MaxWalkSpeed = Config::m_fSpeedValue;
		Config::m_pMyCharacter->CharacterMovement->MaxAcceleration = Config::m_fSpeedValue;
	}

	#pragma endregion

	std::shared_ptr<std::vector<SDK::ACharacter*>> currentTargets;

	{
		std::lock_guard<std::mutex> lock(list_mutex);
		currentTargets = std::make_shared<std::vector<SDK::ACharacter*>>(Config::m_TargetsList);
	}

	// looping our targets (in online games it will be prob a ACharacter vector, in offline games for npc can be AActor vector)
	for (auto* currTarget : *currentTargets)
	{

		if (!currTarget || Validity::IsBadPoint(currTarget))
			continue;

		// skip local player
		if (currTarget->Controller && currTarget->Controller->IsLocalPlayerController())
			continue;

		// raycast to check if targets are behind walls
		bool isVisible = Config::m_pMyController->LineOfSightTo(currTarget, Config::m_pMyController->PlayerCameraManager->CameraCachePrivate.POV.Location, false);
		if (Config::m_bPlayerChams && Config::m_pChamsMaterial)
		{
			SDK::ASkeletalMeshActor* mesh = reinterpret_cast<SDK::ASkeletalMeshActor*>(currTarget);
			Utility::ApplyChams(mesh->SkeletalMeshComponent, true);
		}
		
		ImColor color = ImColor(255.0f / 255, 255.0f / 255, 255.0f / 255);

		#pragma region CHEATS FOR TARGETS

		// NOTE: Config::CurrentTarget is a pointer to the current target (of the aimbot)

		if (Config::m_bPlayersSnapline)
		{

			if (currTarget == Config::m_pCurrentTarget)
			{
				color = Config::m_bRainbowAimbotTargetColor ? Config::m_cRainbow : Config::m_cAimbotTargetColor;
			}
			
			else
			{
			
				if (isVisible)
				{
					color = Config::m_bRainbowPlayersSnapline ? Config::m_cRainbow : Config::m_cPlayersSnaplineColor;
				}
				else
				{
					color = Config::m_bRainbowTargetNotVisibleColor ? Config::m_cRainbow : Config::m_cTargetNotVisibleColor;
				}
			
			}

			ESP::GetInstance().RenderSnapline(currTarget, color);
		}

		if (Config::m_bPlayerSkeleton)
		{
		
			if (currTarget == Config::m_pCurrentTarget)
			{
				color = Config::m_bRainbowAimbotTargetColor ? Config::m_cRainbow : Config::m_cAimbotTargetColor;
			}
			else
			{
		
				if (isVisible)
				{
					color = Config::m_bRainbowPlayerSkeleton ? Config::m_cRainbow : Config::m_cPlayerSkeletonColor;
					std::cout << "Rendering skeleton for: " << currTarget->GetName() << std::endl;
				}
				else
				{
					color = Config::m_bRainbowTargetNotVisibleColor ? Config::m_cRainbow : Config::m_cTargetNotVisibleColor;
				}
		
			}

			ESP::GetInstance().RenderSkeleton(currTarget, color);
		}
		
		//if (Config::m_bPlayersBox)
		//{
		//
		//	if (currTarget == Config::m_pCurrentTarget)
		//	{
		//		color = Config::m_bRainbowAimbotTargetColor ? Config::m_cRainbow : Config::m_cAimbotTargetColor;
		//	}
		//	else
		//	/*{
		//
		//		if (isVisible)
		//		{
		//			color = Config::m_bRainbowPlayersBox ? Config::m_cRainbow : Config::m_cPlayersBoxColor;
		//		}
		//		else
		//		{
		//			color = Config::m_bRainbowTargetNotVisibleColor ? Config::m_cRainbow : Config::m_cTargetNotVisibleColor;
		//		}
		//	}*/
		//
		//	ESP::GetInstance().RenderBox(currTarget, color);
		//}
		
		//if (Config::m_bPlayersBox3D)
		//{
		//
		//	if (currTarget == Config::m_pCurrentTarget)
		//	{
		//		color = Config::m_bRainbowAimbotTargetColor ? Config::m_cRainbow : Config::m_cAimbotTargetColor;
		//	}
		//	else
		//	/*{
		//
		//		if (isVisible)
		//		{
		//			color = Config::m_bRainbowPlayersBox ? Config::m_cRainbow : Config::m_cPlayersBoxColor;
		//		}
		//		else
		//		{
		//			color = Config::m_bRainbowTargetNotVisibleColor ? Config::m_cRainbow : Config::m_cTargetNotVisibleColor;
		//		}
		//	}*/
		//
		//	ESP::GetInstance().Render3DBox(currTarget, color);
		//}
		
		//if (Config::m_bEnableAimbot && isVisible)
		//{
		//	Aimbot::GetInstance().RegularAimbot(currTarget);
		//}

		#pragma endregion
	
	}
}