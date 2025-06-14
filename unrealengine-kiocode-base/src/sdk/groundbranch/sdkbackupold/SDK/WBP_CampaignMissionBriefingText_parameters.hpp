﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_CampaignMissionBriefingText

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "ModKit_structs.hpp"


namespace SDK::Params
{

// Function WBP_CampaignMissionBriefingText.WBP_CampaignMissionBriefingText_C.ExecuteUbergraph_WBP_CampaignMissionBriefingText
// 0x0158 (0x0158 - 0x0000)
struct WBP_CampaignMissionBriefingText_C_ExecuteUbergraph_WBP_CampaignMissionBriefingText final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_NameName_ReturnValue;            // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0007(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class FString                                 CallFunc_GetCampaignMissionBriefingToken_ReturnValue; // 0x0008(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0018(0x0018)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0030(0x0040)(HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_NameToString_ReturnValue;            // 0x0070(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_InitStringTable_ReturnValue;              // 0x0080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_81[0x7];                                       // 0x0081(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_NameToText_ReturnValue;              // 0x0088(0x0018)()
	bool                                          CallFunc_IsRegisteredTableEntry_ReturnValue;       // 0x00A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_A1[0x7];                                       // 0x00A1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_1;            // 0x00A8(0x0040)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x00E8(0x0010)(ReferenceParm)
	struct FUInt64                                CallFunc_MakeModIDForGame_ReturnValue;             // 0x00F8(0x0008)(NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x0100(0x0018)()
	class FText                                   CallFunc_GetStringTableEntryOrDisplayString_ReturnValue; // 0x0118(0x0018)()
	class FText                                   K2Node_Select_Default;                             // 0x0130(0x0018)()
	class FName                                   K2Node_CustomEvent_InHotspotCodename;              // 0x0148(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_InSequenceNumber;               // 0x0150(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_CampaignMissionBriefingText_C_ExecuteUbergraph_WBP_CampaignMissionBriefingText) == 0x000008, "Wrong alignment on WBP_CampaignMissionBriefingText_C_ExecuteUbergraph_WBP_CampaignMissionBriefingText");
static_assert(sizeof(WBP_CampaignMissionBriefingText_C_ExecuteUbergraph_WBP_CampaignMissionBriefingText) == 0x000158, "Wrong size on WBP_CampaignMissionBriefingText_C_ExecuteUbergraph_WBP_CampaignMissionBriefingText");
static_assert(offsetof(WBP_CampaignMissionBriefingText_C_ExecuteUbergraph_WBP_CampaignMissionBriefingText, EntryPoint) == 0x000000, "Member 'WBP_CampaignMissionBriefingText_C_ExecuteUbergraph_WBP_CampaignMissionBriefingText::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_CampaignMissionBriefingText_C_ExecuteUbergraph_WBP_CampaignMissionBriefingText, Temp_bool_Variable) == 0x000004, "Member 'WBP_CampaignMissionBriefingText_C_ExecuteUbergraph_WBP_CampaignMissionBriefingText::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WBP_CampaignMissionBriefingText_C_ExecuteUbergraph_WBP_CampaignMissionBriefingText, CallFunc_NotEqual_NameName_ReturnValue) == 0x000005, "Member 'WBP_CampaignMissionBriefingText_C_ExecuteUbergraph_WBP_CampaignMissionBriefingText::CallFunc_NotEqual_NameName_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CampaignMissionBriefingText_C_ExecuteUbergraph_WBP_CampaignMissionBriefingText, CallFunc_Greater_IntInt_ReturnValue) == 0x000006, "Member 'WBP_CampaignMissionBriefingText_C_ExecuteUbergraph_WBP_CampaignMissionBriefingText::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CampaignMissionBriefingText_C_ExecuteUbergraph_WBP_CampaignMissionBriefingText, CallFunc_BooleanAND_ReturnValue) == 0x000007, "Member 'WBP_CampaignMissionBriefingText_C_ExecuteUbergraph_WBP_CampaignMissionBriefingText::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CampaignMissionBriefingText_C_ExecuteUbergraph_WBP_CampaignMissionBriefingText, CallFunc_GetCampaignMissionBriefingToken_ReturnValue) == 0x000008, "Member 'WBP_CampaignMissionBriefingText_C_ExecuteUbergraph_WBP_CampaignMissionBriefingText::CallFunc_GetCampaignMissionBriefingToken_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CampaignMissionBriefingText_C_ExecuteUbergraph_WBP_CampaignMissionBriefingText, CallFunc_Conv_StringToText_ReturnValue) == 0x000018, "Member 'WBP_CampaignMissionBriefingText_C_ExecuteUbergraph_WBP_CampaignMissionBriefingText::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CampaignMissionBriefingText_C_ExecuteUbergraph_WBP_CampaignMissionBriefingText, K2Node_MakeStruct_FormatArgumentData) == 0x000030, "Member 'WBP_CampaignMissionBriefingText_C_ExecuteUbergraph_WBP_CampaignMissionBriefingText::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(WBP_CampaignMissionBriefingText_C_ExecuteUbergraph_WBP_CampaignMissionBriefingText, CallFunc_Conv_NameToString_ReturnValue) == 0x000070, "Member 'WBP_CampaignMissionBriefingText_C_ExecuteUbergraph_WBP_CampaignMissionBriefingText::CallFunc_Conv_NameToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CampaignMissionBriefingText_C_ExecuteUbergraph_WBP_CampaignMissionBriefingText, CallFunc_InitStringTable_ReturnValue) == 0x000080, "Member 'WBP_CampaignMissionBriefingText_C_ExecuteUbergraph_WBP_CampaignMissionBriefingText::CallFunc_InitStringTable_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CampaignMissionBriefingText_C_ExecuteUbergraph_WBP_CampaignMissionBriefingText, CallFunc_Conv_NameToText_ReturnValue) == 0x000088, "Member 'WBP_CampaignMissionBriefingText_C_ExecuteUbergraph_WBP_CampaignMissionBriefingText::CallFunc_Conv_NameToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CampaignMissionBriefingText_C_ExecuteUbergraph_WBP_CampaignMissionBriefingText, CallFunc_IsRegisteredTableEntry_ReturnValue) == 0x0000A0, "Member 'WBP_CampaignMissionBriefingText_C_ExecuteUbergraph_WBP_CampaignMissionBriefingText::CallFunc_IsRegisteredTableEntry_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CampaignMissionBriefingText_C_ExecuteUbergraph_WBP_CampaignMissionBriefingText, K2Node_MakeStruct_FormatArgumentData_1) == 0x0000A8, "Member 'WBP_CampaignMissionBriefingText_C_ExecuteUbergraph_WBP_CampaignMissionBriefingText::K2Node_MakeStruct_FormatArgumentData_1' has a wrong offset!");
static_assert(offsetof(WBP_CampaignMissionBriefingText_C_ExecuteUbergraph_WBP_CampaignMissionBriefingText, K2Node_MakeArray_Array) == 0x0000E8, "Member 'WBP_CampaignMissionBriefingText_C_ExecuteUbergraph_WBP_CampaignMissionBriefingText::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(WBP_CampaignMissionBriefingText_C_ExecuteUbergraph_WBP_CampaignMissionBriefingText, CallFunc_MakeModIDForGame_ReturnValue) == 0x0000F8, "Member 'WBP_CampaignMissionBriefingText_C_ExecuteUbergraph_WBP_CampaignMissionBriefingText::CallFunc_MakeModIDForGame_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CampaignMissionBriefingText_C_ExecuteUbergraph_WBP_CampaignMissionBriefingText, CallFunc_Format_ReturnValue) == 0x000100, "Member 'WBP_CampaignMissionBriefingText_C_ExecuteUbergraph_WBP_CampaignMissionBriefingText::CallFunc_Format_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CampaignMissionBriefingText_C_ExecuteUbergraph_WBP_CampaignMissionBriefingText, CallFunc_GetStringTableEntryOrDisplayString_ReturnValue) == 0x000118, "Member 'WBP_CampaignMissionBriefingText_C_ExecuteUbergraph_WBP_CampaignMissionBriefingText::CallFunc_GetStringTableEntryOrDisplayString_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CampaignMissionBriefingText_C_ExecuteUbergraph_WBP_CampaignMissionBriefingText, K2Node_Select_Default) == 0x000130, "Member 'WBP_CampaignMissionBriefingText_C_ExecuteUbergraph_WBP_CampaignMissionBriefingText::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(WBP_CampaignMissionBriefingText_C_ExecuteUbergraph_WBP_CampaignMissionBriefingText, K2Node_CustomEvent_InHotspotCodename) == 0x000148, "Member 'WBP_CampaignMissionBriefingText_C_ExecuteUbergraph_WBP_CampaignMissionBriefingText::K2Node_CustomEvent_InHotspotCodename' has a wrong offset!");
static_assert(offsetof(WBP_CampaignMissionBriefingText_C_ExecuteUbergraph_WBP_CampaignMissionBriefingText, K2Node_CustomEvent_InSequenceNumber) == 0x000150, "Member 'WBP_CampaignMissionBriefingText_C_ExecuteUbergraph_WBP_CampaignMissionBriefingText::K2Node_CustomEvent_InSequenceNumber' has a wrong offset!");

// Function WBP_CampaignMissionBriefingText.WBP_CampaignMissionBriefingText_C.SetMissionDetails
// 0x000C (0x000C - 0x0000)
struct WBP_CampaignMissionBriefingText_C_SetMissionDetails final
{
public:
	class FName                                   InHotspotCodename;                                 // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         InSequenceNumber;                                  // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_CampaignMissionBriefingText_C_SetMissionDetails) == 0x000004, "Wrong alignment on WBP_CampaignMissionBriefingText_C_SetMissionDetails");
static_assert(sizeof(WBP_CampaignMissionBriefingText_C_SetMissionDetails) == 0x00000C, "Wrong size on WBP_CampaignMissionBriefingText_C_SetMissionDetails");
static_assert(offsetof(WBP_CampaignMissionBriefingText_C_SetMissionDetails, InHotspotCodename) == 0x000000, "Member 'WBP_CampaignMissionBriefingText_C_SetMissionDetails::InHotspotCodename' has a wrong offset!");
static_assert(offsetof(WBP_CampaignMissionBriefingText_C_SetMissionDetails, InSequenceNumber) == 0x000008, "Member 'WBP_CampaignMissionBriefingText_C_SetMissionDetails::InSequenceNumber' has a wrong offset!");

}

