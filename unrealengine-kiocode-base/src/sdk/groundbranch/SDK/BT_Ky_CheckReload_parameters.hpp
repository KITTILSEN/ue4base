﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BT_Ky_CheckReload

#include "Basic.hpp"

#include "KytheraPlugin_structs.hpp"


namespace SDK::Params
{

// Function BT_Ky_CheckReload.BT_Ky_CheckReload_C.DoEnter
// 0x0078 (0x0078 - 0x0000)
struct BT_Ky_CheckReload_C_DoEnter final
{
public:
	class AKytController*                         Controller;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UKytBlackboard*                         BehaviorBlackboard;                                // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EKytBTEnterResult                             ReturnValue;                                       // 0x0010(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_11[0x7];                                       // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APawn*                                  CallFunc_K2_GetPawn_ReturnValue;                   // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AGBInvItem*                             CallFunc_GetEquipped_ReturnValue;                  // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AGBCharacter*                           K2Node_DynamicCast_AsGBCharacter;                  // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_31[0x7];                                       // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AGBFirearm*                             K2Node_DynamicCast_AsGBFirearm;                    // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_41[0x7];                                       // 0x0041(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class IGameplayTagAssetInterface> CallFunc_HasMatchingGameplayTag_self_CastInput; // 0x0048(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_HasMatchingGameplayTag_ReturnValue;       // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_59[0x7];                                       // 0x0059(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UKytBlackboard*                         CallFunc_GetBlackboardValueAsBlackboard_ReturnValue; // 0x0060(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UKytBlackboard*                         CallFunc_GetBlackboardValueAsBlackboard_ReturnValue_1; // 0x0068(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsEmpty_ReturnValue;                      // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BT_Ky_CheckReload_C_DoEnter) == 0x000008, "Wrong alignment on BT_Ky_CheckReload_C_DoEnter");
static_assert(sizeof(BT_Ky_CheckReload_C_DoEnter) == 0x000078, "Wrong size on BT_Ky_CheckReload_C_DoEnter");
static_assert(offsetof(BT_Ky_CheckReload_C_DoEnter, Controller) == 0x000000, "Member 'BT_Ky_CheckReload_C_DoEnter::Controller' has a wrong offset!");
static_assert(offsetof(BT_Ky_CheckReload_C_DoEnter, BehaviorBlackboard) == 0x000008, "Member 'BT_Ky_CheckReload_C_DoEnter::BehaviorBlackboard' has a wrong offset!");
static_assert(offsetof(BT_Ky_CheckReload_C_DoEnter, ReturnValue) == 0x000010, "Member 'BT_Ky_CheckReload_C_DoEnter::ReturnValue' has a wrong offset!");
static_assert(offsetof(BT_Ky_CheckReload_C_DoEnter, CallFunc_K2_GetPawn_ReturnValue) == 0x000018, "Member 'BT_Ky_CheckReload_C_DoEnter::CallFunc_K2_GetPawn_ReturnValue' has a wrong offset!");
static_assert(offsetof(BT_Ky_CheckReload_C_DoEnter, CallFunc_GetEquipped_ReturnValue) == 0x000020, "Member 'BT_Ky_CheckReload_C_DoEnter::CallFunc_GetEquipped_ReturnValue' has a wrong offset!");
static_assert(offsetof(BT_Ky_CheckReload_C_DoEnter, K2Node_DynamicCast_AsGBCharacter) == 0x000028, "Member 'BT_Ky_CheckReload_C_DoEnter::K2Node_DynamicCast_AsGBCharacter' has a wrong offset!");
static_assert(offsetof(BT_Ky_CheckReload_C_DoEnter, K2Node_DynamicCast_bSuccess) == 0x000030, "Member 'BT_Ky_CheckReload_C_DoEnter::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BT_Ky_CheckReload_C_DoEnter, K2Node_DynamicCast_AsGBFirearm) == 0x000038, "Member 'BT_Ky_CheckReload_C_DoEnter::K2Node_DynamicCast_AsGBFirearm' has a wrong offset!");
static_assert(offsetof(BT_Ky_CheckReload_C_DoEnter, K2Node_DynamicCast_bSuccess_1) == 0x000040, "Member 'BT_Ky_CheckReload_C_DoEnter::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(BT_Ky_CheckReload_C_DoEnter, CallFunc_HasMatchingGameplayTag_self_CastInput) == 0x000048, "Member 'BT_Ky_CheckReload_C_DoEnter::CallFunc_HasMatchingGameplayTag_self_CastInput' has a wrong offset!");
static_assert(offsetof(BT_Ky_CheckReload_C_DoEnter, CallFunc_HasMatchingGameplayTag_ReturnValue) == 0x000058, "Member 'BT_Ky_CheckReload_C_DoEnter::CallFunc_HasMatchingGameplayTag_ReturnValue' has a wrong offset!");
static_assert(offsetof(BT_Ky_CheckReload_C_DoEnter, CallFunc_GetBlackboardValueAsBlackboard_ReturnValue) == 0x000060, "Member 'BT_Ky_CheckReload_C_DoEnter::CallFunc_GetBlackboardValueAsBlackboard_ReturnValue' has a wrong offset!");
static_assert(offsetof(BT_Ky_CheckReload_C_DoEnter, CallFunc_GetBlackboardValueAsBlackboard_ReturnValue_1) == 0x000068, "Member 'BT_Ky_CheckReload_C_DoEnter::CallFunc_GetBlackboardValueAsBlackboard_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BT_Ky_CheckReload_C_DoEnter, CallFunc_IsEmpty_ReturnValue) == 0x000070, "Member 'BT_Ky_CheckReload_C_DoEnter::CallFunc_IsEmpty_ReturnValue' has a wrong offset!");

}

