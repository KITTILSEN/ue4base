﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_LoadingScreen_Initial

#include "Basic.hpp"


namespace SDK::Params
{

// Function WBP_LoadingScreen_Initial.WBP_LoadingScreen_Initial_C.ExecuteUbergraph_WBP_LoadingScreen_Initial
// 0x0028 (0x0028 - 0x0000)
struct WBP_LoadingScreen_Initial_C_ExecuteUbergraph_WBP_LoadingScreen_Initial final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UWBP_LoadingScreen_C*                   CallFunc_GetParentWidgetOfClass_ReturnValue;       // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0010(0x0010)(ZeroConstructor, NoDestructor)
	class UWBP_LoadingScreen_C*                   CallFunc_GetParentWidgetOfClass_ReturnValue_1;     // 0x0020(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_LoadingScreen_Initial_C_ExecuteUbergraph_WBP_LoadingScreen_Initial) == 0x000008, "Wrong alignment on WBP_LoadingScreen_Initial_C_ExecuteUbergraph_WBP_LoadingScreen_Initial");
static_assert(sizeof(WBP_LoadingScreen_Initial_C_ExecuteUbergraph_WBP_LoadingScreen_Initial) == 0x000028, "Wrong size on WBP_LoadingScreen_Initial_C_ExecuteUbergraph_WBP_LoadingScreen_Initial");
static_assert(offsetof(WBP_LoadingScreen_Initial_C_ExecuteUbergraph_WBP_LoadingScreen_Initial, EntryPoint) == 0x000000, "Member 'WBP_LoadingScreen_Initial_C_ExecuteUbergraph_WBP_LoadingScreen_Initial::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_LoadingScreen_Initial_C_ExecuteUbergraph_WBP_LoadingScreen_Initial, CallFunc_GetParentWidgetOfClass_ReturnValue) == 0x000008, "Member 'WBP_LoadingScreen_Initial_C_ExecuteUbergraph_WBP_LoadingScreen_Initial::CallFunc_GetParentWidgetOfClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_LoadingScreen_Initial_C_ExecuteUbergraph_WBP_LoadingScreen_Initial, K2Node_CreateDelegate_OutputDelegate) == 0x000010, "Member 'WBP_LoadingScreen_Initial_C_ExecuteUbergraph_WBP_LoadingScreen_Initial::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WBP_LoadingScreen_Initial_C_ExecuteUbergraph_WBP_LoadingScreen_Initial, CallFunc_GetParentWidgetOfClass_ReturnValue_1) == 0x000020, "Member 'WBP_LoadingScreen_Initial_C_ExecuteUbergraph_WBP_LoadingScreen_Initial::CallFunc_GetParentWidgetOfClass_ReturnValue_1' has a wrong offset!");

}

