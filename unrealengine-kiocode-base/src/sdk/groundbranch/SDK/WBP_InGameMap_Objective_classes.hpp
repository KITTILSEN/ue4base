﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_InGameMap_Objective

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "GroundBranch_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_InGameMap_Objective.WBP_InGameMap_Objective_C
// 0x0028 (0x0288 - 0x0260)
class UWBP_InGameMap_Objective_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0260(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 Image_0;                                           // 0x0268(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextBlock_0;                                       // 0x0270(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FGBGameObjective                       GameObjective;                                     // 0x0278(0x0010)(Edit, BlueprintVisible, NoDestructor, ExposeOnSpawn)

public:
	void ExecuteUbergraph_WBP_InGameMap_Objective(int32 EntryPoint);
	void Construct();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_InGameMap_Objective_C">();
	}
	static class UWBP_InGameMap_Objective_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_InGameMap_Objective_C>();
	}
};
static_assert(alignof(UWBP_InGameMap_Objective_C) == 0x000008, "Wrong alignment on UWBP_InGameMap_Objective_C");
static_assert(sizeof(UWBP_InGameMap_Objective_C) == 0x000288, "Wrong size on UWBP_InGameMap_Objective_C");
static_assert(offsetof(UWBP_InGameMap_Objective_C, UberGraphFrame) == 0x000260, "Member 'UWBP_InGameMap_Objective_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_InGameMap_Objective_C, Image_0) == 0x000268, "Member 'UWBP_InGameMap_Objective_C::Image_0' has a wrong offset!");
static_assert(offsetof(UWBP_InGameMap_Objective_C, TextBlock_0) == 0x000270, "Member 'UWBP_InGameMap_Objective_C::TextBlock_0' has a wrong offset!");
static_assert(offsetof(UWBP_InGameMap_Objective_C, GameObjective) == 0x000278, "Member 'UWBP_InGameMap_Objective_C::GameObjective' has a wrong offset!");

}

