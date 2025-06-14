﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Mission_ObjectiveEntry

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "GroundBranch_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_Mission_ObjectiveEntry.WBP_Mission_ObjectiveEntry_C
// 0x0088 (0x02E8 - 0x0260)
class UWBP_Mission_ObjectiveEntry_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0260(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 Chevron;                                           // 0x0268(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextBlock_Completion;                              // 0x0270(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextBlock_MissionObjectiveText;                    // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FGBGameObjective                       GameObjective;                                     // 0x0280(0x0010)(Edit, BlueprintVisible, NoDestructor, ExposeOnSpawn)
	bool                                          bCompleted;                                        // 0x0290(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                         Pad_291[0x7];                                      // 0x0291(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   Completed;                                         // 0x0298(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                   Failed;                                            // 0x02B0(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                   MissionObjectiveTextOverride;                      // 0x02C8(0x0018)(Edit, BlueprintVisible, ExposeOnSpawn)
	bool                                          bPrimary;                                          // 0x02E0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)

public:
	struct FSlateColor Get_TextBlock_Completion_ColorAndOpacity_0();
	void Construct();
	void SetIsPrimary(bool bIsPrimary);
	void ExecuteUbergraph_WBP_Mission_ObjectiveEntry(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_Mission_ObjectiveEntry_C">();
	}
	static class UWBP_Mission_ObjectiveEntry_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_Mission_ObjectiveEntry_C>();
	}
};
static_assert(alignof(UWBP_Mission_ObjectiveEntry_C) == 0x000008, "Wrong alignment on UWBP_Mission_ObjectiveEntry_C");
static_assert(sizeof(UWBP_Mission_ObjectiveEntry_C) == 0x0002E8, "Wrong size on UWBP_Mission_ObjectiveEntry_C");
static_assert(offsetof(UWBP_Mission_ObjectiveEntry_C, UberGraphFrame) == 0x000260, "Member 'UWBP_Mission_ObjectiveEntry_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_Mission_ObjectiveEntry_C, Chevron) == 0x000268, "Member 'UWBP_Mission_ObjectiveEntry_C::Chevron' has a wrong offset!");
static_assert(offsetof(UWBP_Mission_ObjectiveEntry_C, TextBlock_Completion) == 0x000270, "Member 'UWBP_Mission_ObjectiveEntry_C::TextBlock_Completion' has a wrong offset!");
static_assert(offsetof(UWBP_Mission_ObjectiveEntry_C, TextBlock_MissionObjectiveText) == 0x000278, "Member 'UWBP_Mission_ObjectiveEntry_C::TextBlock_MissionObjectiveText' has a wrong offset!");
static_assert(offsetof(UWBP_Mission_ObjectiveEntry_C, GameObjective) == 0x000280, "Member 'UWBP_Mission_ObjectiveEntry_C::GameObjective' has a wrong offset!");
static_assert(offsetof(UWBP_Mission_ObjectiveEntry_C, bCompleted) == 0x000290, "Member 'UWBP_Mission_ObjectiveEntry_C::bCompleted' has a wrong offset!");
static_assert(offsetof(UWBP_Mission_ObjectiveEntry_C, Completed) == 0x000298, "Member 'UWBP_Mission_ObjectiveEntry_C::Completed' has a wrong offset!");
static_assert(offsetof(UWBP_Mission_ObjectiveEntry_C, Failed) == 0x0002B0, "Member 'UWBP_Mission_ObjectiveEntry_C::Failed' has a wrong offset!");
static_assert(offsetof(UWBP_Mission_ObjectiveEntry_C, MissionObjectiveTextOverride) == 0x0002C8, "Member 'UWBP_Mission_ObjectiveEntry_C::MissionObjectiveTextOverride' has a wrong offset!");
static_assert(offsetof(UWBP_Mission_ObjectiveEntry_C, bPrimary) == 0x0002E0, "Member 'UWBP_Mission_ObjectiveEntry_C::bPrimary' has a wrong offset!");

}

