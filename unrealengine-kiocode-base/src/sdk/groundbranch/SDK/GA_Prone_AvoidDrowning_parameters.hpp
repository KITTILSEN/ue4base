﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_Prone_AvoidDrowning

#include "Basic.hpp"


namespace SDK::Params
{

// Function GA_Prone_AvoidDrowning.GA_Prone_AvoidDrowning_C.ExecuteUbergraph_GA_Prone_AvoidDrowning
// 0x0040 (0x0040 - 0x0000)
struct GA_Prone_AvoidDrowning_C_ExecuteUbergraph_GA_Prone_AvoidDrowning final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0004(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_14[0x4];                                       // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UAbilityTask_WaitDelay*                 CallFunc_WaitDelay_ReturnValue;                    // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_21[0x7];                                       // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetAvatarActorFromActorInfo_ReturnValue;  // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AGBCharacter*                           K2Node_DynamicCast_AsGBCharacter;                  // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(GA_Prone_AvoidDrowning_C_ExecuteUbergraph_GA_Prone_AvoidDrowning) == 0x000008, "Wrong alignment on GA_Prone_AvoidDrowning_C_ExecuteUbergraph_GA_Prone_AvoidDrowning");
static_assert(sizeof(GA_Prone_AvoidDrowning_C_ExecuteUbergraph_GA_Prone_AvoidDrowning) == 0x000040, "Wrong size on GA_Prone_AvoidDrowning_C_ExecuteUbergraph_GA_Prone_AvoidDrowning");
static_assert(offsetof(GA_Prone_AvoidDrowning_C_ExecuteUbergraph_GA_Prone_AvoidDrowning, EntryPoint) == 0x000000, "Member 'GA_Prone_AvoidDrowning_C_ExecuteUbergraph_GA_Prone_AvoidDrowning::EntryPoint' has a wrong offset!");
static_assert(offsetof(GA_Prone_AvoidDrowning_C_ExecuteUbergraph_GA_Prone_AvoidDrowning, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'GA_Prone_AvoidDrowning_C_ExecuteUbergraph_GA_Prone_AvoidDrowning::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(GA_Prone_AvoidDrowning_C_ExecuteUbergraph_GA_Prone_AvoidDrowning, CallFunc_WaitDelay_ReturnValue) == 0x000018, "Member 'GA_Prone_AvoidDrowning_C_ExecuteUbergraph_GA_Prone_AvoidDrowning::CallFunc_WaitDelay_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Prone_AvoidDrowning_C_ExecuteUbergraph_GA_Prone_AvoidDrowning, CallFunc_IsValid_ReturnValue) == 0x000020, "Member 'GA_Prone_AvoidDrowning_C_ExecuteUbergraph_GA_Prone_AvoidDrowning::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Prone_AvoidDrowning_C_ExecuteUbergraph_GA_Prone_AvoidDrowning, CallFunc_GetAvatarActorFromActorInfo_ReturnValue) == 0x000028, "Member 'GA_Prone_AvoidDrowning_C_ExecuteUbergraph_GA_Prone_AvoidDrowning::CallFunc_GetAvatarActorFromActorInfo_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Prone_AvoidDrowning_C_ExecuteUbergraph_GA_Prone_AvoidDrowning, K2Node_DynamicCast_AsGBCharacter) == 0x000030, "Member 'GA_Prone_AvoidDrowning_C_ExecuteUbergraph_GA_Prone_AvoidDrowning::K2Node_DynamicCast_AsGBCharacter' has a wrong offset!");
static_assert(offsetof(GA_Prone_AvoidDrowning_C_ExecuteUbergraph_GA_Prone_AvoidDrowning, K2Node_DynamicCast_bSuccess) == 0x000038, "Member 'GA_Prone_AvoidDrowning_C_ExecuteUbergraph_GA_Prone_AvoidDrowning::K2Node_DynamicCast_bSuccess' has a wrong offset!");

}

