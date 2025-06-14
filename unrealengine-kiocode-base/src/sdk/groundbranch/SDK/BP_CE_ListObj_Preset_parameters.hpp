﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_CE_ListObj_Preset

#include "Basic.hpp"

#include "ModKit_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function BP_CE_ListObj_Preset.BP_CE_ListObj_Preset_C.InitPreset
// 0x0100 (0x0100 - 0x0000)
struct BP_CE_ListObj_Preset_C_InitPreset final
{
public:
	class UVaRestJsonObject*                      InJSonObj;                                         // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 InFilename;                                        // 0x0008(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	bool                                          Temp_bool_True_if_break_was_hit_Variable;          // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1A[0x2];                                       // 0x001A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable;                     // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_TextIsEmpty_ReturnValue;                  // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_29[0x7];                                       // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Split_LeftS;                              // 0x0030(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Split_RightS;                             // 0x0040(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_Split_ReturnValue;                        // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_51[0x7];                                       // 0x0051(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_LeftChop_ReturnValue;                     // 0x0058(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_StringToDisplayString_ReturnValue;        // 0x0068(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0078(0x0018)()
	TArray<struct FPrimaryAssetId>                CallFunc_GetKitPrimaryAssetIds_OutPrimaryAssetIds; // 0x0090(0x0010)(ReferenceParm)
	bool                                          CallFunc_GetKitPrimaryAssetIds_ReturnValue;        // 0x00A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_A1[0x3];                                       // 0x00A1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPrimaryAssetId                        CallFunc_Array_Get_Item;                           // 0x00A4(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x00B4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FUInt64                                CallFunc_GetModIDForPrimaryAssetId_ReturnValue;    // 0x00B8(0x0008)(NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x00C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsModIDForModOrStaging_ReturnValue;       // 0x00C1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x00C2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_C3[0x5];                                       // 0x00C3(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetPresetNameField_ReturnValue;           // 0x00C8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetStringField_ReturnValue;               // 0x00D8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x00E8(0x0018)()
};
static_assert(alignof(BP_CE_ListObj_Preset_C_InitPreset) == 0x000008, "Wrong alignment on BP_CE_ListObj_Preset_C_InitPreset");
static_assert(sizeof(BP_CE_ListObj_Preset_C_InitPreset) == 0x000100, "Wrong size on BP_CE_ListObj_Preset_C_InitPreset");
static_assert(offsetof(BP_CE_ListObj_Preset_C_InitPreset, InJSonObj) == 0x000000, "Member 'BP_CE_ListObj_Preset_C_InitPreset::InJSonObj' has a wrong offset!");
static_assert(offsetof(BP_CE_ListObj_Preset_C_InitPreset, InFilename) == 0x000008, "Member 'BP_CE_ListObj_Preset_C_InitPreset::InFilename' has a wrong offset!");
static_assert(offsetof(BP_CE_ListObj_Preset_C_InitPreset, Temp_bool_True_if_break_was_hit_Variable) == 0x000018, "Member 'BP_CE_ListObj_Preset_C_InitPreset::Temp_bool_True_if_break_was_hit_Variable' has a wrong offset!");
static_assert(offsetof(BP_CE_ListObj_Preset_C_InitPreset, CallFunc_Not_PreBool_ReturnValue) == 0x000019, "Member 'BP_CE_ListObj_Preset_C_InitPreset::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CE_ListObj_Preset_C_InitPreset, Temp_int_Array_Index_Variable) == 0x00001C, "Member 'BP_CE_ListObj_Preset_C_InitPreset::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BP_CE_ListObj_Preset_C_InitPreset, Temp_int_Loop_Counter_Variable) == 0x000020, "Member 'BP_CE_ListObj_Preset_C_InitPreset::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BP_CE_ListObj_Preset_C_InitPreset, CallFunc_Add_IntInt_ReturnValue) == 0x000024, "Member 'BP_CE_ListObj_Preset_C_InitPreset::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CE_ListObj_Preset_C_InitPreset, CallFunc_TextIsEmpty_ReturnValue) == 0x000028, "Member 'BP_CE_ListObj_Preset_C_InitPreset::CallFunc_TextIsEmpty_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CE_ListObj_Preset_C_InitPreset, CallFunc_Split_LeftS) == 0x000030, "Member 'BP_CE_ListObj_Preset_C_InitPreset::CallFunc_Split_LeftS' has a wrong offset!");
static_assert(offsetof(BP_CE_ListObj_Preset_C_InitPreset, CallFunc_Split_RightS) == 0x000040, "Member 'BP_CE_ListObj_Preset_C_InitPreset::CallFunc_Split_RightS' has a wrong offset!");
static_assert(offsetof(BP_CE_ListObj_Preset_C_InitPreset, CallFunc_Split_ReturnValue) == 0x000050, "Member 'BP_CE_ListObj_Preset_C_InitPreset::CallFunc_Split_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CE_ListObj_Preset_C_InitPreset, CallFunc_LeftChop_ReturnValue) == 0x000058, "Member 'BP_CE_ListObj_Preset_C_InitPreset::CallFunc_LeftChop_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CE_ListObj_Preset_C_InitPreset, CallFunc_StringToDisplayString_ReturnValue) == 0x000068, "Member 'BP_CE_ListObj_Preset_C_InitPreset::CallFunc_StringToDisplayString_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CE_ListObj_Preset_C_InitPreset, CallFunc_Conv_StringToText_ReturnValue) == 0x000078, "Member 'BP_CE_ListObj_Preset_C_InitPreset::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CE_ListObj_Preset_C_InitPreset, CallFunc_GetKitPrimaryAssetIds_OutPrimaryAssetIds) == 0x000090, "Member 'BP_CE_ListObj_Preset_C_InitPreset::CallFunc_GetKitPrimaryAssetIds_OutPrimaryAssetIds' has a wrong offset!");
static_assert(offsetof(BP_CE_ListObj_Preset_C_InitPreset, CallFunc_GetKitPrimaryAssetIds_ReturnValue) == 0x0000A0, "Member 'BP_CE_ListObj_Preset_C_InitPreset::CallFunc_GetKitPrimaryAssetIds_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CE_ListObj_Preset_C_InitPreset, CallFunc_Array_Get_Item) == 0x0000A4, "Member 'BP_CE_ListObj_Preset_C_InitPreset::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_CE_ListObj_Preset_C_InitPreset, CallFunc_Array_Length_ReturnValue) == 0x0000B4, "Member 'BP_CE_ListObj_Preset_C_InitPreset::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CE_ListObj_Preset_C_InitPreset, CallFunc_GetModIDForPrimaryAssetId_ReturnValue) == 0x0000B8, "Member 'BP_CE_ListObj_Preset_C_InitPreset::CallFunc_GetModIDForPrimaryAssetId_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CE_ListObj_Preset_C_InitPreset, CallFunc_Less_IntInt_ReturnValue) == 0x0000C0, "Member 'BP_CE_ListObj_Preset_C_InitPreset::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CE_ListObj_Preset_C_InitPreset, CallFunc_IsModIDForModOrStaging_ReturnValue) == 0x0000C1, "Member 'BP_CE_ListObj_Preset_C_InitPreset::CallFunc_IsModIDForModOrStaging_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CE_ListObj_Preset_C_InitPreset, CallFunc_BooleanAND_ReturnValue) == 0x0000C2, "Member 'BP_CE_ListObj_Preset_C_InitPreset::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CE_ListObj_Preset_C_InitPreset, CallFunc_GetPresetNameField_ReturnValue) == 0x0000C8, "Member 'BP_CE_ListObj_Preset_C_InitPreset::CallFunc_GetPresetNameField_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CE_ListObj_Preset_C_InitPreset, CallFunc_GetStringField_ReturnValue) == 0x0000D8, "Member 'BP_CE_ListObj_Preset_C_InitPreset::CallFunc_GetStringField_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CE_ListObj_Preset_C_InitPreset, CallFunc_Conv_StringToText_ReturnValue_1) == 0x0000E8, "Member 'BP_CE_ListObj_Preset_C_InitPreset::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");

}

