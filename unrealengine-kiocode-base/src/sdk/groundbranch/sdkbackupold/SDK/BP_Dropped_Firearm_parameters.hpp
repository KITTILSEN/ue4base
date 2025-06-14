﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Dropped_Firearm

#include "Basic.hpp"

#include "GameplayTags_structs.hpp"


namespace SDK::Params
{

// Function BP_Dropped_Firearm.BP_Dropped_Firearm_C.ExecuteUbergraph_BP_Dropped_Firearm
// 0x0060 (0x0060 - 0x0000)
struct BP_Dropped_Firearm_C_ExecuteUbergraph_BP_Dropped_Firearm final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AGBInvItem*                             CallFunc_GetAssociatedInvItem_ReturnValue;         // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UGBExternalMagazineComponent*           CallFunc_GetComponentByClass_ReturnValue;          // 0x0010(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_19[0x7];                                       // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AGBMagazine*                            CallFunc_GetMagazine_ReturnValue;                  // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_29[0x7];                                       // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AGBInvItem*                             CallFunc_GetAssociatedInvItem_ReturnValue_1;       // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTagContainer                  CallFunc_GetInvItemTags_ReturnValue;               // 0x0038(0x0020)()
	bool                                          CallFunc_HasTag_ReturnValue;                       // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_Dropped_Firearm_C_ExecuteUbergraph_BP_Dropped_Firearm) == 0x000008, "Wrong alignment on BP_Dropped_Firearm_C_ExecuteUbergraph_BP_Dropped_Firearm");
static_assert(sizeof(BP_Dropped_Firearm_C_ExecuteUbergraph_BP_Dropped_Firearm) == 0x000060, "Wrong size on BP_Dropped_Firearm_C_ExecuteUbergraph_BP_Dropped_Firearm");
static_assert(offsetof(BP_Dropped_Firearm_C_ExecuteUbergraph_BP_Dropped_Firearm, EntryPoint) == 0x000000, "Member 'BP_Dropped_Firearm_C_ExecuteUbergraph_BP_Dropped_Firearm::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_Dropped_Firearm_C_ExecuteUbergraph_BP_Dropped_Firearm, CallFunc_GetAssociatedInvItem_ReturnValue) == 0x000008, "Member 'BP_Dropped_Firearm_C_ExecuteUbergraph_BP_Dropped_Firearm::CallFunc_GetAssociatedInvItem_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Dropped_Firearm_C_ExecuteUbergraph_BP_Dropped_Firearm, CallFunc_GetComponentByClass_ReturnValue) == 0x000010, "Member 'BP_Dropped_Firearm_C_ExecuteUbergraph_BP_Dropped_Firearm::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Dropped_Firearm_C_ExecuteUbergraph_BP_Dropped_Firearm, CallFunc_IsValid_ReturnValue) == 0x000018, "Member 'BP_Dropped_Firearm_C_ExecuteUbergraph_BP_Dropped_Firearm::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Dropped_Firearm_C_ExecuteUbergraph_BP_Dropped_Firearm, CallFunc_GetMagazine_ReturnValue) == 0x000020, "Member 'BP_Dropped_Firearm_C_ExecuteUbergraph_BP_Dropped_Firearm::CallFunc_GetMagazine_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Dropped_Firearm_C_ExecuteUbergraph_BP_Dropped_Firearm, CallFunc_IsValid_ReturnValue_1) == 0x000028, "Member 'BP_Dropped_Firearm_C_ExecuteUbergraph_BP_Dropped_Firearm::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Dropped_Firearm_C_ExecuteUbergraph_BP_Dropped_Firearm, CallFunc_GetAssociatedInvItem_ReturnValue_1) == 0x000030, "Member 'BP_Dropped_Firearm_C_ExecuteUbergraph_BP_Dropped_Firearm::CallFunc_GetAssociatedInvItem_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Dropped_Firearm_C_ExecuteUbergraph_BP_Dropped_Firearm, CallFunc_GetInvItemTags_ReturnValue) == 0x000038, "Member 'BP_Dropped_Firearm_C_ExecuteUbergraph_BP_Dropped_Firearm::CallFunc_GetInvItemTags_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Dropped_Firearm_C_ExecuteUbergraph_BP_Dropped_Firearm, CallFunc_HasTag_ReturnValue) == 0x000058, "Member 'BP_Dropped_Firearm_C_ExecuteUbergraph_BP_Dropped_Firearm::CallFunc_HasTag_ReturnValue' has a wrong offset!");

}

