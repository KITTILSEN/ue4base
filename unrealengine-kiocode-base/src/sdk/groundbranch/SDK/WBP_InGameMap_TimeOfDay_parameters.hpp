﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_InGameMap_TimeOfDay

#include "Basic.hpp"

#include "ModKit_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function WBP_InGameMap_TimeOfDay.WBP_InGameMap_TimeOfDay_C.ExecuteUbergraph_WBP_InGameMap_TimeOfDay
// 0x0180 (0x0180 - 0x0000)
struct WBP_InGameMap_TimeOfDay_C_ExecuteUbergraph_WBP_InGameMap_TimeOfDay final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FUInt64                                CallFunc_MakeModIDForGame_ReturnValue;             // 0x0008(0x0008)(NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_11[0x3];                                       // 0x0011(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetHoursMinutesSeconds_OutHours;          // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetHoursMinutesSeconds_OutMinutes;        // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetHoursMinutesSeconds_OutSeconds;        // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x0020(0x0018)()
	class FText                                   CallFunc_Conv_IntToText_ReturnValue_1;             // 0x0038(0x0018)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0050(0x0040)(HasGetValueTypeHash)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_1;            // 0x0090(0x0040)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x00D0(0x0010)(ReferenceParm)
	class AGameStateBase*                         CallFunc_GetGameState_ReturnValue;                 // 0x00E0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x00E8(0x0018)()
	class AGBGameState*                           K2Node_DynamicCast_AsGBGame_State;                 // 0x0100(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0108(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_109[0x7];                                      // 0x0109(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_GetLocalisedGameText_ReturnValue;         // 0x0110(0x0018)()
	class FText                                   CallFunc_TextToUpper_ReturnValue;                  // 0x0128(0x0018)()
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0140(0x0010)(ZeroConstructor, NoDestructor)
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x0150(0x0008)(NoDestructor, HasGetValueTypeHash)
	class AGBSky*                                 K2Node_CustomEvent_SkyActor;                       // 0x0158(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class AGBSky* SkyActor)>       K2Node_CreateDelegate_OutputDelegate_1;            // 0x0160(0x0010)(ZeroConstructor, NoDestructor)
	class AGBSky*                                 CallFunc_GetActorOfClass_ReturnValue;              // 0x0170(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0178(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WBP_InGameMap_TimeOfDay_C_ExecuteUbergraph_WBP_InGameMap_TimeOfDay) == 0x000008, "Wrong alignment on WBP_InGameMap_TimeOfDay_C_ExecuteUbergraph_WBP_InGameMap_TimeOfDay");
static_assert(sizeof(WBP_InGameMap_TimeOfDay_C_ExecuteUbergraph_WBP_InGameMap_TimeOfDay) == 0x000180, "Wrong size on WBP_InGameMap_TimeOfDay_C_ExecuteUbergraph_WBP_InGameMap_TimeOfDay");
static_assert(offsetof(WBP_InGameMap_TimeOfDay_C_ExecuteUbergraph_WBP_InGameMap_TimeOfDay, EntryPoint) == 0x000000, "Member 'WBP_InGameMap_TimeOfDay_C_ExecuteUbergraph_WBP_InGameMap_TimeOfDay::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_InGameMap_TimeOfDay_C_ExecuteUbergraph_WBP_InGameMap_TimeOfDay, CallFunc_MakeModIDForGame_ReturnValue) == 0x000008, "Member 'WBP_InGameMap_TimeOfDay_C_ExecuteUbergraph_WBP_InGameMap_TimeOfDay::CallFunc_MakeModIDForGame_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_InGameMap_TimeOfDay_C_ExecuteUbergraph_WBP_InGameMap_TimeOfDay, CallFunc_IsValid_ReturnValue) == 0x000010, "Member 'WBP_InGameMap_TimeOfDay_C_ExecuteUbergraph_WBP_InGameMap_TimeOfDay::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_InGameMap_TimeOfDay_C_ExecuteUbergraph_WBP_InGameMap_TimeOfDay, CallFunc_GetHoursMinutesSeconds_OutHours) == 0x000014, "Member 'WBP_InGameMap_TimeOfDay_C_ExecuteUbergraph_WBP_InGameMap_TimeOfDay::CallFunc_GetHoursMinutesSeconds_OutHours' has a wrong offset!");
static_assert(offsetof(WBP_InGameMap_TimeOfDay_C_ExecuteUbergraph_WBP_InGameMap_TimeOfDay, CallFunc_GetHoursMinutesSeconds_OutMinutes) == 0x000018, "Member 'WBP_InGameMap_TimeOfDay_C_ExecuteUbergraph_WBP_InGameMap_TimeOfDay::CallFunc_GetHoursMinutesSeconds_OutMinutes' has a wrong offset!");
static_assert(offsetof(WBP_InGameMap_TimeOfDay_C_ExecuteUbergraph_WBP_InGameMap_TimeOfDay, CallFunc_GetHoursMinutesSeconds_OutSeconds) == 0x00001C, "Member 'WBP_InGameMap_TimeOfDay_C_ExecuteUbergraph_WBP_InGameMap_TimeOfDay::CallFunc_GetHoursMinutesSeconds_OutSeconds' has a wrong offset!");
static_assert(offsetof(WBP_InGameMap_TimeOfDay_C_ExecuteUbergraph_WBP_InGameMap_TimeOfDay, CallFunc_Conv_IntToText_ReturnValue) == 0x000020, "Member 'WBP_InGameMap_TimeOfDay_C_ExecuteUbergraph_WBP_InGameMap_TimeOfDay::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_InGameMap_TimeOfDay_C_ExecuteUbergraph_WBP_InGameMap_TimeOfDay, CallFunc_Conv_IntToText_ReturnValue_1) == 0x000038, "Member 'WBP_InGameMap_TimeOfDay_C_ExecuteUbergraph_WBP_InGameMap_TimeOfDay::CallFunc_Conv_IntToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_InGameMap_TimeOfDay_C_ExecuteUbergraph_WBP_InGameMap_TimeOfDay, K2Node_MakeStruct_FormatArgumentData) == 0x000050, "Member 'WBP_InGameMap_TimeOfDay_C_ExecuteUbergraph_WBP_InGameMap_TimeOfDay::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(WBP_InGameMap_TimeOfDay_C_ExecuteUbergraph_WBP_InGameMap_TimeOfDay, K2Node_MakeStruct_FormatArgumentData_1) == 0x000090, "Member 'WBP_InGameMap_TimeOfDay_C_ExecuteUbergraph_WBP_InGameMap_TimeOfDay::K2Node_MakeStruct_FormatArgumentData_1' has a wrong offset!");
static_assert(offsetof(WBP_InGameMap_TimeOfDay_C_ExecuteUbergraph_WBP_InGameMap_TimeOfDay, K2Node_MakeArray_Array) == 0x0000D0, "Member 'WBP_InGameMap_TimeOfDay_C_ExecuteUbergraph_WBP_InGameMap_TimeOfDay::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(WBP_InGameMap_TimeOfDay_C_ExecuteUbergraph_WBP_InGameMap_TimeOfDay, CallFunc_GetGameState_ReturnValue) == 0x0000E0, "Member 'WBP_InGameMap_TimeOfDay_C_ExecuteUbergraph_WBP_InGameMap_TimeOfDay::CallFunc_GetGameState_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_InGameMap_TimeOfDay_C_ExecuteUbergraph_WBP_InGameMap_TimeOfDay, CallFunc_Format_ReturnValue) == 0x0000E8, "Member 'WBP_InGameMap_TimeOfDay_C_ExecuteUbergraph_WBP_InGameMap_TimeOfDay::CallFunc_Format_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_InGameMap_TimeOfDay_C_ExecuteUbergraph_WBP_InGameMap_TimeOfDay, K2Node_DynamicCast_AsGBGame_State) == 0x000100, "Member 'WBP_InGameMap_TimeOfDay_C_ExecuteUbergraph_WBP_InGameMap_TimeOfDay::K2Node_DynamicCast_AsGBGame_State' has a wrong offset!");
static_assert(offsetof(WBP_InGameMap_TimeOfDay_C_ExecuteUbergraph_WBP_InGameMap_TimeOfDay, K2Node_DynamicCast_bSuccess) == 0x000108, "Member 'WBP_InGameMap_TimeOfDay_C_ExecuteUbergraph_WBP_InGameMap_TimeOfDay::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(WBP_InGameMap_TimeOfDay_C_ExecuteUbergraph_WBP_InGameMap_TimeOfDay, CallFunc_GetLocalisedGameText_ReturnValue) == 0x000110, "Member 'WBP_InGameMap_TimeOfDay_C_ExecuteUbergraph_WBP_InGameMap_TimeOfDay::CallFunc_GetLocalisedGameText_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_InGameMap_TimeOfDay_C_ExecuteUbergraph_WBP_InGameMap_TimeOfDay, CallFunc_TextToUpper_ReturnValue) == 0x000128, "Member 'WBP_InGameMap_TimeOfDay_C_ExecuteUbergraph_WBP_InGameMap_TimeOfDay::CallFunc_TextToUpper_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_InGameMap_TimeOfDay_C_ExecuteUbergraph_WBP_InGameMap_TimeOfDay, K2Node_CreateDelegate_OutputDelegate) == 0x000140, "Member 'WBP_InGameMap_TimeOfDay_C_ExecuteUbergraph_WBP_InGameMap_TimeOfDay::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WBP_InGameMap_TimeOfDay_C_ExecuteUbergraph_WBP_InGameMap_TimeOfDay, CallFunc_K2_SetTimerDelegate_ReturnValue) == 0x000150, "Member 'WBP_InGameMap_TimeOfDay_C_ExecuteUbergraph_WBP_InGameMap_TimeOfDay::CallFunc_K2_SetTimerDelegate_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_InGameMap_TimeOfDay_C_ExecuteUbergraph_WBP_InGameMap_TimeOfDay, K2Node_CustomEvent_SkyActor) == 0x000158, "Member 'WBP_InGameMap_TimeOfDay_C_ExecuteUbergraph_WBP_InGameMap_TimeOfDay::K2Node_CustomEvent_SkyActor' has a wrong offset!");
static_assert(offsetof(WBP_InGameMap_TimeOfDay_C_ExecuteUbergraph_WBP_InGameMap_TimeOfDay, K2Node_CreateDelegate_OutputDelegate_1) == 0x000160, "Member 'WBP_InGameMap_TimeOfDay_C_ExecuteUbergraph_WBP_InGameMap_TimeOfDay::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(WBP_InGameMap_TimeOfDay_C_ExecuteUbergraph_WBP_InGameMap_TimeOfDay, CallFunc_GetActorOfClass_ReturnValue) == 0x000170, "Member 'WBP_InGameMap_TimeOfDay_C_ExecuteUbergraph_WBP_InGameMap_TimeOfDay::CallFunc_GetActorOfClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_InGameMap_TimeOfDay_C_ExecuteUbergraph_WBP_InGameMap_TimeOfDay, CallFunc_IsValid_ReturnValue_1) == 0x000178, "Member 'WBP_InGameMap_TimeOfDay_C_ExecuteUbergraph_WBP_InGameMap_TimeOfDay::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");

// Function WBP_InGameMap_TimeOfDay.WBP_InGameMap_TimeOfDay_C.OnInitialTimeOfDayChanged_Event_0
// 0x0008 (0x0008 - 0x0000)
struct WBP_InGameMap_TimeOfDay_C_OnInitialTimeOfDayChanged_Event_0 final
{
public:
	class AGBSky*                                 SkyActor_0;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_InGameMap_TimeOfDay_C_OnInitialTimeOfDayChanged_Event_0) == 0x000008, "Wrong alignment on WBP_InGameMap_TimeOfDay_C_OnInitialTimeOfDayChanged_Event_0");
static_assert(sizeof(WBP_InGameMap_TimeOfDay_C_OnInitialTimeOfDayChanged_Event_0) == 0x000008, "Wrong size on WBP_InGameMap_TimeOfDay_C_OnInitialTimeOfDayChanged_Event_0");
static_assert(offsetof(WBP_InGameMap_TimeOfDay_C_OnInitialTimeOfDayChanged_Event_0, SkyActor_0) == 0x000000, "Member 'WBP_InGameMap_TimeOfDay_C_OnInitialTimeOfDayChanged_Event_0::SkyActor_0' has a wrong offset!");

}

