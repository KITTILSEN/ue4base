﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_EquipPrevious

#include "Basic.hpp"

#include "GameplayAbilities_structs.hpp"


namespace SDK::Params
{

// Function GA_EquipPrevious.GA_EquipPrevious_C.ExecuteUbergraph_GA_EquipPrevious
// 0x00D8 (0x00D8 - 0x0000)
struct GA_EquipPrevious_C_ExecuteUbergraph_GA_EquipPrevious final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AGBCharacter*                           CallFunc_GetCharacter_ReturnValue;                 // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AGBInvItem*                             CallFunc_GetPrevEquipped_OutPrevEquippedLeft;      // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AGBInvItem*                             CallFunc_GetPrevEquipped_OutPrevEquippedRight;     // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetPrevEquipped_ReturnValue;              // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_21[0x7];                                       // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayEventData                     K2Node_MakeStruct_GameplayEventData;               // 0x0028(0x00B0)()
};
static_assert(alignof(GA_EquipPrevious_C_ExecuteUbergraph_GA_EquipPrevious) == 0x000008, "Wrong alignment on GA_EquipPrevious_C_ExecuteUbergraph_GA_EquipPrevious");
static_assert(sizeof(GA_EquipPrevious_C_ExecuteUbergraph_GA_EquipPrevious) == 0x0000D8, "Wrong size on GA_EquipPrevious_C_ExecuteUbergraph_GA_EquipPrevious");
static_assert(offsetof(GA_EquipPrevious_C_ExecuteUbergraph_GA_EquipPrevious, EntryPoint) == 0x000000, "Member 'GA_EquipPrevious_C_ExecuteUbergraph_GA_EquipPrevious::EntryPoint' has a wrong offset!");
static_assert(offsetof(GA_EquipPrevious_C_ExecuteUbergraph_GA_EquipPrevious, CallFunc_GetCharacter_ReturnValue) == 0x000008, "Member 'GA_EquipPrevious_C_ExecuteUbergraph_GA_EquipPrevious::CallFunc_GetCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_EquipPrevious_C_ExecuteUbergraph_GA_EquipPrevious, CallFunc_GetPrevEquipped_OutPrevEquippedLeft) == 0x000010, "Member 'GA_EquipPrevious_C_ExecuteUbergraph_GA_EquipPrevious::CallFunc_GetPrevEquipped_OutPrevEquippedLeft' has a wrong offset!");
static_assert(offsetof(GA_EquipPrevious_C_ExecuteUbergraph_GA_EquipPrevious, CallFunc_GetPrevEquipped_OutPrevEquippedRight) == 0x000018, "Member 'GA_EquipPrevious_C_ExecuteUbergraph_GA_EquipPrevious::CallFunc_GetPrevEquipped_OutPrevEquippedRight' has a wrong offset!");
static_assert(offsetof(GA_EquipPrevious_C_ExecuteUbergraph_GA_EquipPrevious, CallFunc_GetPrevEquipped_ReturnValue) == 0x000020, "Member 'GA_EquipPrevious_C_ExecuteUbergraph_GA_EquipPrevious::CallFunc_GetPrevEquipped_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_EquipPrevious_C_ExecuteUbergraph_GA_EquipPrevious, K2Node_MakeStruct_GameplayEventData) == 0x000028, "Member 'GA_EquipPrevious_C_ExecuteUbergraph_GA_EquipPrevious::K2Node_MakeStruct_GameplayEventData' has a wrong offset!");

}

