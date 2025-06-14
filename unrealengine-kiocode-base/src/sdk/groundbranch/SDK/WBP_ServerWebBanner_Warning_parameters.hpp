﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_ServerWebBanner_Warning

#include "Basic.hpp"

#include "GroundBranch_structs.hpp"


namespace SDK::Params
{

// Function WBP_ServerWebBanner_Warning.WBP_ServerWebBanner_Warning_C.GetText_0
// 0x0078 (0x0078 - 0x0000)
struct WBP_ServerWebBanner_Warning_C_GetText_0 final
{
public:
	class FText                                   ReturnValue;                                       // 0x0000(0x0018)(Parm, OutParm, ReturnParm)
	class AGameStateBase*                         CallFunc_GetGameState_ReturnValue;                 // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AGBGameState*                           K2Node_DynamicCast_AsGBGame_State;                 // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_29[0x7];                                       // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGBServerBasicInfo                     CallFunc_GetServerBasicInfo_ReturnValue;           // 0x0030(0x0030)()
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0060(0x0018)()
};
static_assert(alignof(WBP_ServerWebBanner_Warning_C_GetText_0) == 0x000008, "Wrong alignment on WBP_ServerWebBanner_Warning_C_GetText_0");
static_assert(sizeof(WBP_ServerWebBanner_Warning_C_GetText_0) == 0x000078, "Wrong size on WBP_ServerWebBanner_Warning_C_GetText_0");
static_assert(offsetof(WBP_ServerWebBanner_Warning_C_GetText_0, ReturnValue) == 0x000000, "Member 'WBP_ServerWebBanner_Warning_C_GetText_0::ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ServerWebBanner_Warning_C_GetText_0, CallFunc_GetGameState_ReturnValue) == 0x000018, "Member 'WBP_ServerWebBanner_Warning_C_GetText_0::CallFunc_GetGameState_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ServerWebBanner_Warning_C_GetText_0, K2Node_DynamicCast_AsGBGame_State) == 0x000020, "Member 'WBP_ServerWebBanner_Warning_C_GetText_0::K2Node_DynamicCast_AsGBGame_State' has a wrong offset!");
static_assert(offsetof(WBP_ServerWebBanner_Warning_C_GetText_0, K2Node_DynamicCast_bSuccess) == 0x000028, "Member 'WBP_ServerWebBanner_Warning_C_GetText_0::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(WBP_ServerWebBanner_Warning_C_GetText_0, CallFunc_GetServerBasicInfo_ReturnValue) == 0x000030, "Member 'WBP_ServerWebBanner_Warning_C_GetText_0::CallFunc_GetServerBasicInfo_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ServerWebBanner_Warning_C_GetText_0, CallFunc_Conv_StringToText_ReturnValue) == 0x000060, "Member 'WBP_ServerWebBanner_Warning_C_GetText_0::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");

}

