﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AIB_Stunned

#include "Basic.hpp"


namespace SDK::Params
{

// Function AIB_Stunned.AIB_Stunned_C.ExecuteUbergraph_AIB_Stunned
// 0x0008 (0x0008 - 0x0000)
struct AIB_Stunned_C_ExecuteUbergraph_AIB_Stunned final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_RunBehavior_ReturnValue;                  // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(AIB_Stunned_C_ExecuteUbergraph_AIB_Stunned) == 0x000004, "Wrong alignment on AIB_Stunned_C_ExecuteUbergraph_AIB_Stunned");
static_assert(sizeof(AIB_Stunned_C_ExecuteUbergraph_AIB_Stunned) == 0x000008, "Wrong size on AIB_Stunned_C_ExecuteUbergraph_AIB_Stunned");
static_assert(offsetof(AIB_Stunned_C_ExecuteUbergraph_AIB_Stunned, EntryPoint) == 0x000000, "Member 'AIB_Stunned_C_ExecuteUbergraph_AIB_Stunned::EntryPoint' has a wrong offset!");
static_assert(offsetof(AIB_Stunned_C_ExecuteUbergraph_AIB_Stunned, CallFunc_RunBehavior_ReturnValue) == 0x000004, "Member 'AIB_Stunned_C_ExecuteUbergraph_AIB_Stunned::CallFunc_RunBehavior_ReturnValue' has a wrong offset!");

// Function AIB_Stunned.AIB_Stunned_C.PreCondition
// 0x0028 (0x0028 - 0x0000)
struct AIB_Stunned_C_PreCondition final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2[0x6];                                        // 0x0002(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class APawn*                                  CallFunc_K2_GetPawn_ReturnValue;                   // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IGameplayTagAssetInterface> K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface; // 0x0010(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_HasMatchingGameplayTag_ReturnValue;       // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(AIB_Stunned_C_PreCondition) == 0x000008, "Wrong alignment on AIB_Stunned_C_PreCondition");
static_assert(sizeof(AIB_Stunned_C_PreCondition) == 0x000028, "Wrong size on AIB_Stunned_C_PreCondition");
static_assert(offsetof(AIB_Stunned_C_PreCondition, ReturnValue) == 0x000000, "Member 'AIB_Stunned_C_PreCondition::ReturnValue' has a wrong offset!");
static_assert(offsetof(AIB_Stunned_C_PreCondition, Temp_bool_Variable) == 0x000001, "Member 'AIB_Stunned_C_PreCondition::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(AIB_Stunned_C_PreCondition, CallFunc_K2_GetPawn_ReturnValue) == 0x000008, "Member 'AIB_Stunned_C_PreCondition::CallFunc_K2_GetPawn_ReturnValue' has a wrong offset!");
static_assert(offsetof(AIB_Stunned_C_PreCondition, K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface) == 0x000010, "Member 'AIB_Stunned_C_PreCondition::K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface' has a wrong offset!");
static_assert(offsetof(AIB_Stunned_C_PreCondition, K2Node_DynamicCast_bSuccess) == 0x000020, "Member 'AIB_Stunned_C_PreCondition::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(AIB_Stunned_C_PreCondition, CallFunc_HasMatchingGameplayTag_ReturnValue) == 0x000021, "Member 'AIB_Stunned_C_PreCondition::CallFunc_HasMatchingGameplayTag_ReturnValue' has a wrong offset!");

// Function AIB_Stunned.AIB_Stunned_C.GetScore
// 0x0004 (0x0004 - 0x0000)
struct AIB_Stunned_C_GetScore final
{
public:
	float                                         ReturnValue;                                       // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(AIB_Stunned_C_GetScore) == 0x000004, "Wrong alignment on AIB_Stunned_C_GetScore");
static_assert(sizeof(AIB_Stunned_C_GetScore) == 0x000004, "Wrong size on AIB_Stunned_C_GetScore");
static_assert(offsetof(AIB_Stunned_C_GetScore, ReturnValue) == 0x000000, "Member 'AIB_Stunned_C_GetScore::ReturnValue' has a wrong offset!");

}

