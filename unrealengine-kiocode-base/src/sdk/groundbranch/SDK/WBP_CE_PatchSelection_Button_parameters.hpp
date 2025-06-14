﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_CE_PatchSelection_Button

#include "Basic.hpp"

#include "GameplayTags_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function WBP_CE_PatchSelection_Button.WBP_CE_PatchSelection_Button_C.ExecuteUbergraph_WBP_CE_PatchSelection_Button
// 0x0098 (0x0098 - 0x0000)
struct WBP_CE_PatchSelection_Button_C_ExecuteUbergraph_WBP_CE_PatchSelection_Button final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;          // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class UVaRestJsonObject* PathJsonObj)> K2Node_CreateDelegate_OutputDelegate;      // 0x0010(0x0010)(ZeroConstructor, NoDestructor)
	class AGBPlayerControllerBase*                K2Node_DynamicCast_AsGBPlayer_Controller_Base;     // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_29[0x7];                                       // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWBP_Patch_SelectionDialog_C*           CallFunc_Create_ReturnValue;                       // 0x0038(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_1;              // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UVaRestJsonObject*                      K2Node_CustomEvent_PathJsonObj;                    // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetItemField_ReturnValue;                 // 0x0050(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_NameToString_ReturnValue;            // 0x0060(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	TArray<class UWBP_Patch_Button_C*>            CallFunc_GetChildWidgetsOfClass_ChildWidgets;      // 0x0070(0x0010)(ReferenceParm, ContainsInstancedReference)
	class UWBP_CharacterEditor_C*                 CallFunc_GetParentWidgetOfClass_ReturnValue;       // 0x0080(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UVaRestSubsystem*                       CallFunc_GetEngineSubsystem_ReturnValue;           // 0x0088(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UVaRestJsonObject*                      CallFunc_ConstructVaRestJsonObject_ReturnValue;    // 0x0090(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_CE_PatchSelection_Button_C_ExecuteUbergraph_WBP_CE_PatchSelection_Button) == 0x000008, "Wrong alignment on WBP_CE_PatchSelection_Button_C_ExecuteUbergraph_WBP_CE_PatchSelection_Button");
static_assert(sizeof(WBP_CE_PatchSelection_Button_C_ExecuteUbergraph_WBP_CE_PatchSelection_Button) == 0x000098, "Wrong size on WBP_CE_PatchSelection_Button_C_ExecuteUbergraph_WBP_CE_PatchSelection_Button");
static_assert(offsetof(WBP_CE_PatchSelection_Button_C_ExecuteUbergraph_WBP_CE_PatchSelection_Button, EntryPoint) == 0x000000, "Member 'WBP_CE_PatchSelection_Button_C_ExecuteUbergraph_WBP_CE_PatchSelection_Button::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_CE_PatchSelection_Button_C_ExecuteUbergraph_WBP_CE_PatchSelection_Button, CallFunc_GetPlayerController_ReturnValue) == 0x000008, "Member 'WBP_CE_PatchSelection_Button_C_ExecuteUbergraph_WBP_CE_PatchSelection_Button::CallFunc_GetPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CE_PatchSelection_Button_C_ExecuteUbergraph_WBP_CE_PatchSelection_Button, K2Node_CreateDelegate_OutputDelegate) == 0x000010, "Member 'WBP_CE_PatchSelection_Button_C_ExecuteUbergraph_WBP_CE_PatchSelection_Button::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WBP_CE_PatchSelection_Button_C_ExecuteUbergraph_WBP_CE_PatchSelection_Button, K2Node_DynamicCast_AsGBPlayer_Controller_Base) == 0x000020, "Member 'WBP_CE_PatchSelection_Button_C_ExecuteUbergraph_WBP_CE_PatchSelection_Button::K2Node_DynamicCast_AsGBPlayer_Controller_Base' has a wrong offset!");
static_assert(offsetof(WBP_CE_PatchSelection_Button_C_ExecuteUbergraph_WBP_CE_PatchSelection_Button, K2Node_DynamicCast_bSuccess) == 0x000028, "Member 'WBP_CE_PatchSelection_Button_C_ExecuteUbergraph_WBP_CE_PatchSelection_Button::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(WBP_CE_PatchSelection_Button_C_ExecuteUbergraph_WBP_CE_PatchSelection_Button, CallFunc_PlayAnimation_ReturnValue) == 0x000030, "Member 'WBP_CE_PatchSelection_Button_C_ExecuteUbergraph_WBP_CE_PatchSelection_Button::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CE_PatchSelection_Button_C_ExecuteUbergraph_WBP_CE_PatchSelection_Button, CallFunc_Create_ReturnValue) == 0x000038, "Member 'WBP_CE_PatchSelection_Button_C_ExecuteUbergraph_WBP_CE_PatchSelection_Button::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CE_PatchSelection_Button_C_ExecuteUbergraph_WBP_CE_PatchSelection_Button, CallFunc_PlayAnimation_ReturnValue_1) == 0x000040, "Member 'WBP_CE_PatchSelection_Button_C_ExecuteUbergraph_WBP_CE_PatchSelection_Button::CallFunc_PlayAnimation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_CE_PatchSelection_Button_C_ExecuteUbergraph_WBP_CE_PatchSelection_Button, K2Node_CustomEvent_PathJsonObj) == 0x000048, "Member 'WBP_CE_PatchSelection_Button_C_ExecuteUbergraph_WBP_CE_PatchSelection_Button::K2Node_CustomEvent_PathJsonObj' has a wrong offset!");
static_assert(offsetof(WBP_CE_PatchSelection_Button_C_ExecuteUbergraph_WBP_CE_PatchSelection_Button, CallFunc_GetItemField_ReturnValue) == 0x000050, "Member 'WBP_CE_PatchSelection_Button_C_ExecuteUbergraph_WBP_CE_PatchSelection_Button::CallFunc_GetItemField_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CE_PatchSelection_Button_C_ExecuteUbergraph_WBP_CE_PatchSelection_Button, CallFunc_Conv_NameToString_ReturnValue) == 0x000060, "Member 'WBP_CE_PatchSelection_Button_C_ExecuteUbergraph_WBP_CE_PatchSelection_Button::CallFunc_Conv_NameToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CE_PatchSelection_Button_C_ExecuteUbergraph_WBP_CE_PatchSelection_Button, CallFunc_GetChildWidgetsOfClass_ChildWidgets) == 0x000070, "Member 'WBP_CE_PatchSelection_Button_C_ExecuteUbergraph_WBP_CE_PatchSelection_Button::CallFunc_GetChildWidgetsOfClass_ChildWidgets' has a wrong offset!");
static_assert(offsetof(WBP_CE_PatchSelection_Button_C_ExecuteUbergraph_WBP_CE_PatchSelection_Button, CallFunc_GetParentWidgetOfClass_ReturnValue) == 0x000080, "Member 'WBP_CE_PatchSelection_Button_C_ExecuteUbergraph_WBP_CE_PatchSelection_Button::CallFunc_GetParentWidgetOfClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CE_PatchSelection_Button_C_ExecuteUbergraph_WBP_CE_PatchSelection_Button, CallFunc_GetEngineSubsystem_ReturnValue) == 0x000088, "Member 'WBP_CE_PatchSelection_Button_C_ExecuteUbergraph_WBP_CE_PatchSelection_Button::CallFunc_GetEngineSubsystem_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CE_PatchSelection_Button_C_ExecuteUbergraph_WBP_CE_PatchSelection_Button, CallFunc_ConstructVaRestJsonObject_ReturnValue) == 0x000090, "Member 'WBP_CE_PatchSelection_Button_C_ExecuteUbergraph_WBP_CE_PatchSelection_Button::CallFunc_ConstructVaRestJsonObject_ReturnValue' has a wrong offset!");

// Function WBP_CE_PatchSelection_Button.WBP_CE_PatchSelection_Button_C.OnApply_Event_0
// 0x0008 (0x0008 - 0x0000)
struct WBP_CE_PatchSelection_Button_C_OnApply_Event_0 final
{
public:
	class UVaRestJsonObject*                      PathJsonObj;                                       // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_CE_PatchSelection_Button_C_OnApply_Event_0) == 0x000008, "Wrong alignment on WBP_CE_PatchSelection_Button_C_OnApply_Event_0");
static_assert(sizeof(WBP_CE_PatchSelection_Button_C_OnApply_Event_0) == 0x000008, "Wrong size on WBP_CE_PatchSelection_Button_C_OnApply_Event_0");
static_assert(offsetof(WBP_CE_PatchSelection_Button_C_OnApply_Event_0, PathJsonObj) == 0x000000, "Member 'WBP_CE_PatchSelection_Button_C_OnApply_Event_0::PathJsonObj' has a wrong offset!");

// Function WBP_CE_PatchSelection_Button.WBP_CE_PatchSelection_Button_C.HasBeenChanged
// 0x0028 (0x0028 - 0x0000)
struct WBP_CE_PatchSelection_Button_C_HasBeenChanged final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	bool                                          bLocalHasChanged;                                  // 0x0001(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_True_if_break_was_hit_Variable;          // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3[0x1];                                        // 0x0003(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9[0x3];                                        // 0x0009(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWBP_Patch_Button_C*                    CallFunc_Array_Get_Item;                           // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_StrStr_ReturnValue;              // 0x0022(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WBP_CE_PatchSelection_Button_C_HasBeenChanged) == 0x000008, "Wrong alignment on WBP_CE_PatchSelection_Button_C_HasBeenChanged");
static_assert(sizeof(WBP_CE_PatchSelection_Button_C_HasBeenChanged) == 0x000028, "Wrong size on WBP_CE_PatchSelection_Button_C_HasBeenChanged");
static_assert(offsetof(WBP_CE_PatchSelection_Button_C_HasBeenChanged, ReturnValue) == 0x000000, "Member 'WBP_CE_PatchSelection_Button_C_HasBeenChanged::ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CE_PatchSelection_Button_C_HasBeenChanged, bLocalHasChanged) == 0x000001, "Member 'WBP_CE_PatchSelection_Button_C_HasBeenChanged::bLocalHasChanged' has a wrong offset!");
static_assert(offsetof(WBP_CE_PatchSelection_Button_C_HasBeenChanged, Temp_bool_True_if_break_was_hit_Variable) == 0x000002, "Member 'WBP_CE_PatchSelection_Button_C_HasBeenChanged::Temp_bool_True_if_break_was_hit_Variable' has a wrong offset!");
static_assert(offsetof(WBP_CE_PatchSelection_Button_C_HasBeenChanged, Temp_int_Array_Index_Variable) == 0x000004, "Member 'WBP_CE_PatchSelection_Button_C_HasBeenChanged::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(WBP_CE_PatchSelection_Button_C_HasBeenChanged, CallFunc_Not_PreBool_ReturnValue) == 0x000008, "Member 'WBP_CE_PatchSelection_Button_C_HasBeenChanged::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CE_PatchSelection_Button_C_HasBeenChanged, Temp_int_Loop_Counter_Variable) == 0x00000C, "Member 'WBP_CE_PatchSelection_Button_C_HasBeenChanged::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(WBP_CE_PatchSelection_Button_C_HasBeenChanged, CallFunc_Add_IntInt_ReturnValue) == 0x000010, "Member 'WBP_CE_PatchSelection_Button_C_HasBeenChanged::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CE_PatchSelection_Button_C_HasBeenChanged, CallFunc_Array_Length_ReturnValue) == 0x000014, "Member 'WBP_CE_PatchSelection_Button_C_HasBeenChanged::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CE_PatchSelection_Button_C_HasBeenChanged, CallFunc_Array_Get_Item) == 0x000018, "Member 'WBP_CE_PatchSelection_Button_C_HasBeenChanged::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(WBP_CE_PatchSelection_Button_C_HasBeenChanged, CallFunc_Less_IntInt_ReturnValue) == 0x000020, "Member 'WBP_CE_PatchSelection_Button_C_HasBeenChanged::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CE_PatchSelection_Button_C_HasBeenChanged, CallFunc_BooleanAND_ReturnValue) == 0x000021, "Member 'WBP_CE_PatchSelection_Button_C_HasBeenChanged::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CE_PatchSelection_Button_C_HasBeenChanged, CallFunc_NotEqual_StrStr_ReturnValue) == 0x000022, "Member 'WBP_CE_PatchSelection_Button_C_HasBeenChanged::CallFunc_NotEqual_StrStr_ReturnValue' has a wrong offset!");

// Function WBP_CE_PatchSelection_Button.WBP_CE_PatchSelection_Button_C.GetPatchesJsonData
// 0x0058 (0x0058 - 0x0000)
struct WBP_CE_PatchSelection_Button_C_GetPatchesJsonData final
{
public:
	TArray<class UVaRestJsonObject*>              OutPatchesJsonData;                                // 0x0000(0x0010)(Parm, OutParm)
	TArray<class UVaRestJsonObject*>              LocalPatches;                                      // 0x0010(0x0010)(Edit, BlueprintVisible)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2C[0x4];                                       // 0x002C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UWBP_Patch_Button_C*>            CallFunc_GetChildWidgetsOfClass_ChildWidgets;      // 0x0030(0x0010)(ReferenceParm, ContainsInstancedReference)
	class UWBP_Patch_Button_C*                    CallFunc_Array_Get_Item;                           // 0x0040(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x004C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x004D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4E[0x2];                                       // 0x004E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_CE_PatchSelection_Button_C_GetPatchesJsonData) == 0x000008, "Wrong alignment on WBP_CE_PatchSelection_Button_C_GetPatchesJsonData");
static_assert(sizeof(WBP_CE_PatchSelection_Button_C_GetPatchesJsonData) == 0x000058, "Wrong size on WBP_CE_PatchSelection_Button_C_GetPatchesJsonData");
static_assert(offsetof(WBP_CE_PatchSelection_Button_C_GetPatchesJsonData, OutPatchesJsonData) == 0x000000, "Member 'WBP_CE_PatchSelection_Button_C_GetPatchesJsonData::OutPatchesJsonData' has a wrong offset!");
static_assert(offsetof(WBP_CE_PatchSelection_Button_C_GetPatchesJsonData, LocalPatches) == 0x000010, "Member 'WBP_CE_PatchSelection_Button_C_GetPatchesJsonData::LocalPatches' has a wrong offset!");
static_assert(offsetof(WBP_CE_PatchSelection_Button_C_GetPatchesJsonData, Temp_int_Array_Index_Variable) == 0x000020, "Member 'WBP_CE_PatchSelection_Button_C_GetPatchesJsonData::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(WBP_CE_PatchSelection_Button_C_GetPatchesJsonData, Temp_int_Loop_Counter_Variable) == 0x000024, "Member 'WBP_CE_PatchSelection_Button_C_GetPatchesJsonData::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(WBP_CE_PatchSelection_Button_C_GetPatchesJsonData, CallFunc_Add_IntInt_ReturnValue) == 0x000028, "Member 'WBP_CE_PatchSelection_Button_C_GetPatchesJsonData::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CE_PatchSelection_Button_C_GetPatchesJsonData, CallFunc_GetChildWidgetsOfClass_ChildWidgets) == 0x000030, "Member 'WBP_CE_PatchSelection_Button_C_GetPatchesJsonData::CallFunc_GetChildWidgetsOfClass_ChildWidgets' has a wrong offset!");
static_assert(offsetof(WBP_CE_PatchSelection_Button_C_GetPatchesJsonData, CallFunc_Array_Get_Item) == 0x000040, "Member 'WBP_CE_PatchSelection_Button_C_GetPatchesJsonData::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(WBP_CE_PatchSelection_Button_C_GetPatchesJsonData, CallFunc_Array_Length_ReturnValue) == 0x000048, "Member 'WBP_CE_PatchSelection_Button_C_GetPatchesJsonData::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CE_PatchSelection_Button_C_GetPatchesJsonData, CallFunc_Less_IntInt_ReturnValue) == 0x00004C, "Member 'WBP_CE_PatchSelection_Button_C_GetPatchesJsonData::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CE_PatchSelection_Button_C_GetPatchesJsonData, CallFunc_IsValid_ReturnValue) == 0x00004D, "Member 'WBP_CE_PatchSelection_Button_C_GetPatchesJsonData::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CE_PatchSelection_Button_C_GetPatchesJsonData, CallFunc_Array_Add_ReturnValue) == 0x000050, "Member 'WBP_CE_PatchSelection_Button_C_GetPatchesJsonData::CallFunc_Array_Add_ReturnValue' has a wrong offset!");

// Function WBP_CE_PatchSelection_Button.WBP_CE_PatchSelection_Button_C.Update
// 0x0160 (0x0160 - 0x0000)
struct WBP_CE_PatchSelection_Button_C_Update final
{
public:
	class UVaRestJsonObject*                      InKitJsonObj;                                      // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bInFromPreset;                                     // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9[0x3];                                        // 0x0009(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayTag                           CurrentPatchNameTag;                               // 0x000C(0x0008)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_14[0x4];                                       // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UVaRestJsonObject*                      CurrentItemData;                                   // 0x0018(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UWBP_Patch_Button_C*>            LocalPatchButtonsToUpdate;                         // 0x0020(0x0010)(Edit, BlueprintVisible, ContainsInstancedReference)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_True_if_break_was_hit_Variable;          // 0x0034(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0035(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_36[0x2];                                       // 0x0036(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable_1;                   // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0044(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x004C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4D[0x3];                                       // 0x004D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UWBP_Patch_Button_C*                    CallFunc_Array_Get_Item;                           // 0x0050(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0058(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x005C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5D[0x3];                                       // 0x005D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Loop_Counter_Variable_1;                  // 0x0060(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_64[0x4];                                       // 0x0064(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetItemDataField_ReturnValue;             // 0x0068(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	TArray<class UVaRestJsonObject*>              CallFunc_GetObjectArrayField_ReturnValue;          // 0x0078(0x0010)(ReferenceParm)
	int32                                         CallFunc_Add_IntInt_ReturnValue_2;                 // 0x0088(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8C[0x4];                                       // 0x008C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UVaRestJsonObject*                      CallFunc_Array_Get_Item_1;                         // 0x0090(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x0098(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x009C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9D[0x3];                                       // 0x009D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class AGBInvItem*>                     CallFunc_GetKitItemList_OutItems;                  // 0x00A0(0x0010)(ReferenceParm)
	bool                                          CallFunc_GetKitItemList_ReturnValue;               // 0x00B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_B1[0x7];                                       // 0x00B1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UWBP_Patch_Button_C*                    CallFunc_Array_Get_Item_2;                         // 0x00B8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_ClearSimilarItems_ReturnValue;            // 0x00C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Array_RemoveItem_ReturnValue;             // 0x00C1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_C2[0x2];                                       // 0x00C2(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue_2;               // 0x00C4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_GameplayTag_ReturnValue;       // 0x00C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_IntInt_ReturnValue_2;                // 0x00C9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x00CA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_CB[0x5];                                       // 0x00CB(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetItemField_ReturnValue;                 // 0x00D0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetStringField_ReturnValue;               // 0x00E0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FName                                   CallFunc_Conv_StringToName_ReturnValue;            // 0x00F0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FPrimaryAssetId                        K2Node_MakeStruct_PrimaryAssetId;                  // 0x00F8(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTagContainer                  CallFunc_GetInvItemTags_ReturnValue;               // 0x0108(0x0020)()
	struct FGameplayTagContainer                  CallFunc_GameplayTagContainer_Filter_OutFilteredContainer; // 0x0128(0x0020)()
	bool                                          CallFunc_GameplayTagContainer_Filter_ReturnValue;  // 0x0148(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_149[0x7];                                      // 0x0149(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FGameplayTag>                   CallFunc_BreakGameplayTagContainer_GameplayTags;   // 0x0150(0x0010)(ReferenceParm)
};
static_assert(alignof(WBP_CE_PatchSelection_Button_C_Update) == 0x000008, "Wrong alignment on WBP_CE_PatchSelection_Button_C_Update");
static_assert(sizeof(WBP_CE_PatchSelection_Button_C_Update) == 0x000160, "Wrong size on WBP_CE_PatchSelection_Button_C_Update");
static_assert(offsetof(WBP_CE_PatchSelection_Button_C_Update, InKitJsonObj) == 0x000000, "Member 'WBP_CE_PatchSelection_Button_C_Update::InKitJsonObj' has a wrong offset!");
static_assert(offsetof(WBP_CE_PatchSelection_Button_C_Update, bInFromPreset) == 0x000008, "Member 'WBP_CE_PatchSelection_Button_C_Update::bInFromPreset' has a wrong offset!");
static_assert(offsetof(WBP_CE_PatchSelection_Button_C_Update, CurrentPatchNameTag) == 0x00000C, "Member 'WBP_CE_PatchSelection_Button_C_Update::CurrentPatchNameTag' has a wrong offset!");
static_assert(offsetof(WBP_CE_PatchSelection_Button_C_Update, CurrentItemData) == 0x000018, "Member 'WBP_CE_PatchSelection_Button_C_Update::CurrentItemData' has a wrong offset!");
static_assert(offsetof(WBP_CE_PatchSelection_Button_C_Update, LocalPatchButtonsToUpdate) == 0x000020, "Member 'WBP_CE_PatchSelection_Button_C_Update::LocalPatchButtonsToUpdate' has a wrong offset!");
static_assert(offsetof(WBP_CE_PatchSelection_Button_C_Update, Temp_int_Array_Index_Variable) == 0x000030, "Member 'WBP_CE_PatchSelection_Button_C_Update::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(WBP_CE_PatchSelection_Button_C_Update, Temp_bool_True_if_break_was_hit_Variable) == 0x000034, "Member 'WBP_CE_PatchSelection_Button_C_Update::Temp_bool_True_if_break_was_hit_Variable' has a wrong offset!");
static_assert(offsetof(WBP_CE_PatchSelection_Button_C_Update, CallFunc_Not_PreBool_ReturnValue) == 0x000035, "Member 'WBP_CE_PatchSelection_Button_C_Update::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CE_PatchSelection_Button_C_Update, Temp_int_Loop_Counter_Variable) == 0x000038, "Member 'WBP_CE_PatchSelection_Button_C_Update::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(WBP_CE_PatchSelection_Button_C_Update, CallFunc_Add_IntInt_ReturnValue) == 0x00003C, "Member 'WBP_CE_PatchSelection_Button_C_Update::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CE_PatchSelection_Button_C_Update, Temp_int_Array_Index_Variable_1) == 0x000040, "Member 'WBP_CE_PatchSelection_Button_C_Update::Temp_int_Array_Index_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_CE_PatchSelection_Button_C_Update, Temp_int_Variable) == 0x000044, "Member 'WBP_CE_PatchSelection_Button_C_Update::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(WBP_CE_PatchSelection_Button_C_Update, CallFunc_Add_IntInt_ReturnValue_1) == 0x000048, "Member 'WBP_CE_PatchSelection_Button_C_Update::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_CE_PatchSelection_Button_C_Update, CallFunc_IsValid_ReturnValue) == 0x00004C, "Member 'WBP_CE_PatchSelection_Button_C_Update::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CE_PatchSelection_Button_C_Update, CallFunc_Array_Get_Item) == 0x000050, "Member 'WBP_CE_PatchSelection_Button_C_Update::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(WBP_CE_PatchSelection_Button_C_Update, CallFunc_Array_Length_ReturnValue) == 0x000058, "Member 'WBP_CE_PatchSelection_Button_C_Update::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CE_PatchSelection_Button_C_Update, CallFunc_Less_IntInt_ReturnValue) == 0x00005C, "Member 'WBP_CE_PatchSelection_Button_C_Update::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CE_PatchSelection_Button_C_Update, Temp_int_Loop_Counter_Variable_1) == 0x000060, "Member 'WBP_CE_PatchSelection_Button_C_Update::Temp_int_Loop_Counter_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_CE_PatchSelection_Button_C_Update, CallFunc_GetItemDataField_ReturnValue) == 0x000068, "Member 'WBP_CE_PatchSelection_Button_C_Update::CallFunc_GetItemDataField_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CE_PatchSelection_Button_C_Update, CallFunc_GetObjectArrayField_ReturnValue) == 0x000078, "Member 'WBP_CE_PatchSelection_Button_C_Update::CallFunc_GetObjectArrayField_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CE_PatchSelection_Button_C_Update, CallFunc_Add_IntInt_ReturnValue_2) == 0x000088, "Member 'WBP_CE_PatchSelection_Button_C_Update::CallFunc_Add_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_CE_PatchSelection_Button_C_Update, CallFunc_Array_Get_Item_1) == 0x000090, "Member 'WBP_CE_PatchSelection_Button_C_Update::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(WBP_CE_PatchSelection_Button_C_Update, CallFunc_Array_Length_ReturnValue_1) == 0x000098, "Member 'WBP_CE_PatchSelection_Button_C_Update::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_CE_PatchSelection_Button_C_Update, CallFunc_Less_IntInt_ReturnValue_1) == 0x00009C, "Member 'WBP_CE_PatchSelection_Button_C_Update::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_CE_PatchSelection_Button_C_Update, CallFunc_GetKitItemList_OutItems) == 0x0000A0, "Member 'WBP_CE_PatchSelection_Button_C_Update::CallFunc_GetKitItemList_OutItems' has a wrong offset!");
static_assert(offsetof(WBP_CE_PatchSelection_Button_C_Update, CallFunc_GetKitItemList_ReturnValue) == 0x0000B0, "Member 'WBP_CE_PatchSelection_Button_C_Update::CallFunc_GetKitItemList_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CE_PatchSelection_Button_C_Update, CallFunc_Array_Get_Item_2) == 0x0000B8, "Member 'WBP_CE_PatchSelection_Button_C_Update::CallFunc_Array_Get_Item_2' has a wrong offset!");
static_assert(offsetof(WBP_CE_PatchSelection_Button_C_Update, CallFunc_ClearSimilarItems_ReturnValue) == 0x0000C0, "Member 'WBP_CE_PatchSelection_Button_C_Update::CallFunc_ClearSimilarItems_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CE_PatchSelection_Button_C_Update, CallFunc_Array_RemoveItem_ReturnValue) == 0x0000C1, "Member 'WBP_CE_PatchSelection_Button_C_Update::CallFunc_Array_RemoveItem_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CE_PatchSelection_Button_C_Update, CallFunc_Array_Length_ReturnValue_2) == 0x0000C4, "Member 'WBP_CE_PatchSelection_Button_C_Update::CallFunc_Array_Length_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_CE_PatchSelection_Button_C_Update, CallFunc_EqualEqual_GameplayTag_ReturnValue) == 0x0000C8, "Member 'WBP_CE_PatchSelection_Button_C_Update::CallFunc_EqualEqual_GameplayTag_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CE_PatchSelection_Button_C_Update, CallFunc_Less_IntInt_ReturnValue_2) == 0x0000C9, "Member 'WBP_CE_PatchSelection_Button_C_Update::CallFunc_Less_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_CE_PatchSelection_Button_C_Update, CallFunc_BooleanAND_ReturnValue) == 0x0000CA, "Member 'WBP_CE_PatchSelection_Button_C_Update::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CE_PatchSelection_Button_C_Update, CallFunc_GetItemField_ReturnValue) == 0x0000D0, "Member 'WBP_CE_PatchSelection_Button_C_Update::CallFunc_GetItemField_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CE_PatchSelection_Button_C_Update, CallFunc_GetStringField_ReturnValue) == 0x0000E0, "Member 'WBP_CE_PatchSelection_Button_C_Update::CallFunc_GetStringField_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CE_PatchSelection_Button_C_Update, CallFunc_Conv_StringToName_ReturnValue) == 0x0000F0, "Member 'WBP_CE_PatchSelection_Button_C_Update::CallFunc_Conv_StringToName_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CE_PatchSelection_Button_C_Update, K2Node_MakeStruct_PrimaryAssetId) == 0x0000F8, "Member 'WBP_CE_PatchSelection_Button_C_Update::K2Node_MakeStruct_PrimaryAssetId' has a wrong offset!");
static_assert(offsetof(WBP_CE_PatchSelection_Button_C_Update, CallFunc_GetInvItemTags_ReturnValue) == 0x000108, "Member 'WBP_CE_PatchSelection_Button_C_Update::CallFunc_GetInvItemTags_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CE_PatchSelection_Button_C_Update, CallFunc_GameplayTagContainer_Filter_OutFilteredContainer) == 0x000128, "Member 'WBP_CE_PatchSelection_Button_C_Update::CallFunc_GameplayTagContainer_Filter_OutFilteredContainer' has a wrong offset!");
static_assert(offsetof(WBP_CE_PatchSelection_Button_C_Update, CallFunc_GameplayTagContainer_Filter_ReturnValue) == 0x000148, "Member 'WBP_CE_PatchSelection_Button_C_Update::CallFunc_GameplayTagContainer_Filter_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CE_PatchSelection_Button_C_Update, CallFunc_BreakGameplayTagContainer_GameplayTags) == 0x000150, "Member 'WBP_CE_PatchSelection_Button_C_Update::CallFunc_BreakGameplayTagContainer_GameplayTags' has a wrong offset!");

}

