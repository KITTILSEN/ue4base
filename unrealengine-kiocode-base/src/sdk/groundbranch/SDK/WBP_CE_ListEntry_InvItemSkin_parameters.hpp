﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_CE_ListEntry_InvItemSkin

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK::Params
{

// Function WBP_CE_ListEntry_InvItemSkin.WBP_CE_ListEntry_InvItemSkin_C.ExecuteUbergraph_WBP_CE_ListEntry_InvItemSkin
// 0x0098 (0x0098 - 0x0000)
struct WBP_CE_ListEntry_InvItemSkin_C_ExecuteUbergraph_WBP_CE_ListEntry_InvItemSkin final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class UObject* Loaded)>        K2Node_CreateDelegate_OutputDelegate;              // 0x0004(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(class UBP_CE_ListObjBase_C* CharactedEditorListObjBase)> K2Node_CreateDelegate_OutputDelegate_1; // 0x0014(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_2;            // 0x0024(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_34[0x4];                                       // 0x0034(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                K2Node_CustomEvent_LoadedAsset;                    // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             K2Node_DynamicCast_AsTexture_2D;                   // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_49[0x7];                                       // 0x0049(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                Temp_object_Variable;                              // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_GetEmptyText_ReturnValue;                 // 0x0058(0x0018)()
	class UWBP_CE_ListEntry_Wrapper_C*            CallFunc_GetParentWidgetOfClass_ReturnValue;       // 0x0070(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBP_CE_ListObjBase_C*                   K2Node_CustomEvent_CharactedEditorListObjBase;     // 0x0078(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBP_CE_ListObj_InvItemSkin_C*           K2Node_DynamicCast_AsBP_CE_List_Obj_Inv_Item_Skin; // 0x0080(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0088(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_89[0x7];                                       // 0x0089(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                K2Node_CustomEvent_Loaded;                         // 0x0090(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_CE_ListEntry_InvItemSkin_C_ExecuteUbergraph_WBP_CE_ListEntry_InvItemSkin) == 0x000008, "Wrong alignment on WBP_CE_ListEntry_InvItemSkin_C_ExecuteUbergraph_WBP_CE_ListEntry_InvItemSkin");
static_assert(sizeof(WBP_CE_ListEntry_InvItemSkin_C_ExecuteUbergraph_WBP_CE_ListEntry_InvItemSkin) == 0x000098, "Wrong size on WBP_CE_ListEntry_InvItemSkin_C_ExecuteUbergraph_WBP_CE_ListEntry_InvItemSkin");
static_assert(offsetof(WBP_CE_ListEntry_InvItemSkin_C_ExecuteUbergraph_WBP_CE_ListEntry_InvItemSkin, EntryPoint) == 0x000000, "Member 'WBP_CE_ListEntry_InvItemSkin_C_ExecuteUbergraph_WBP_CE_ListEntry_InvItemSkin::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_CE_ListEntry_InvItemSkin_C_ExecuteUbergraph_WBP_CE_ListEntry_InvItemSkin, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'WBP_CE_ListEntry_InvItemSkin_C_ExecuteUbergraph_WBP_CE_ListEntry_InvItemSkin::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WBP_CE_ListEntry_InvItemSkin_C_ExecuteUbergraph_WBP_CE_ListEntry_InvItemSkin, K2Node_CreateDelegate_OutputDelegate_1) == 0x000014, "Member 'WBP_CE_ListEntry_InvItemSkin_C_ExecuteUbergraph_WBP_CE_ListEntry_InvItemSkin::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(WBP_CE_ListEntry_InvItemSkin_C_ExecuteUbergraph_WBP_CE_ListEntry_InvItemSkin, K2Node_CreateDelegate_OutputDelegate_2) == 0x000024, "Member 'WBP_CE_ListEntry_InvItemSkin_C_ExecuteUbergraph_WBP_CE_ListEntry_InvItemSkin::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(WBP_CE_ListEntry_InvItemSkin_C_ExecuteUbergraph_WBP_CE_ListEntry_InvItemSkin, K2Node_CustomEvent_LoadedAsset) == 0x000038, "Member 'WBP_CE_ListEntry_InvItemSkin_C_ExecuteUbergraph_WBP_CE_ListEntry_InvItemSkin::K2Node_CustomEvent_LoadedAsset' has a wrong offset!");
static_assert(offsetof(WBP_CE_ListEntry_InvItemSkin_C_ExecuteUbergraph_WBP_CE_ListEntry_InvItemSkin, K2Node_DynamicCast_AsTexture_2D) == 0x000040, "Member 'WBP_CE_ListEntry_InvItemSkin_C_ExecuteUbergraph_WBP_CE_ListEntry_InvItemSkin::K2Node_DynamicCast_AsTexture_2D' has a wrong offset!");
static_assert(offsetof(WBP_CE_ListEntry_InvItemSkin_C_ExecuteUbergraph_WBP_CE_ListEntry_InvItemSkin, K2Node_DynamicCast_bSuccess) == 0x000048, "Member 'WBP_CE_ListEntry_InvItemSkin_C_ExecuteUbergraph_WBP_CE_ListEntry_InvItemSkin::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(WBP_CE_ListEntry_InvItemSkin_C_ExecuteUbergraph_WBP_CE_ListEntry_InvItemSkin, Temp_object_Variable) == 0x000050, "Member 'WBP_CE_ListEntry_InvItemSkin_C_ExecuteUbergraph_WBP_CE_ListEntry_InvItemSkin::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(WBP_CE_ListEntry_InvItemSkin_C_ExecuteUbergraph_WBP_CE_ListEntry_InvItemSkin, CallFunc_GetEmptyText_ReturnValue) == 0x000058, "Member 'WBP_CE_ListEntry_InvItemSkin_C_ExecuteUbergraph_WBP_CE_ListEntry_InvItemSkin::CallFunc_GetEmptyText_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CE_ListEntry_InvItemSkin_C_ExecuteUbergraph_WBP_CE_ListEntry_InvItemSkin, CallFunc_GetParentWidgetOfClass_ReturnValue) == 0x000070, "Member 'WBP_CE_ListEntry_InvItemSkin_C_ExecuteUbergraph_WBP_CE_ListEntry_InvItemSkin::CallFunc_GetParentWidgetOfClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CE_ListEntry_InvItemSkin_C_ExecuteUbergraph_WBP_CE_ListEntry_InvItemSkin, K2Node_CustomEvent_CharactedEditorListObjBase) == 0x000078, "Member 'WBP_CE_ListEntry_InvItemSkin_C_ExecuteUbergraph_WBP_CE_ListEntry_InvItemSkin::K2Node_CustomEvent_CharactedEditorListObjBase' has a wrong offset!");
static_assert(offsetof(WBP_CE_ListEntry_InvItemSkin_C_ExecuteUbergraph_WBP_CE_ListEntry_InvItemSkin, K2Node_DynamicCast_AsBP_CE_List_Obj_Inv_Item_Skin) == 0x000080, "Member 'WBP_CE_ListEntry_InvItemSkin_C_ExecuteUbergraph_WBP_CE_ListEntry_InvItemSkin::K2Node_DynamicCast_AsBP_CE_List_Obj_Inv_Item_Skin' has a wrong offset!");
static_assert(offsetof(WBP_CE_ListEntry_InvItemSkin_C_ExecuteUbergraph_WBP_CE_ListEntry_InvItemSkin, K2Node_DynamicCast_bSuccess_1) == 0x000088, "Member 'WBP_CE_ListEntry_InvItemSkin_C_ExecuteUbergraph_WBP_CE_ListEntry_InvItemSkin::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(WBP_CE_ListEntry_InvItemSkin_C_ExecuteUbergraph_WBP_CE_ListEntry_InvItemSkin, K2Node_CustomEvent_Loaded) == 0x000090, "Member 'WBP_CE_ListEntry_InvItemSkin_C_ExecuteUbergraph_WBP_CE_ListEntry_InvItemSkin::K2Node_CustomEvent_Loaded' has a wrong offset!");

// Function WBP_CE_ListEntry_InvItemSkin.WBP_CE_ListEntry_InvItemSkin_C.OnSet_Event_0
// 0x0008 (0x0008 - 0x0000)
struct WBP_CE_ListEntry_InvItemSkin_C_OnSet_Event_0 final
{
public:
	class UBP_CE_ListObjBase_C*                   CharactedEditorListObjBase;                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_CE_ListEntry_InvItemSkin_C_OnSet_Event_0) == 0x000008, "Wrong alignment on WBP_CE_ListEntry_InvItemSkin_C_OnSet_Event_0");
static_assert(sizeof(WBP_CE_ListEntry_InvItemSkin_C_OnSet_Event_0) == 0x000008, "Wrong size on WBP_CE_ListEntry_InvItemSkin_C_OnSet_Event_0");
static_assert(offsetof(WBP_CE_ListEntry_InvItemSkin_C_OnSet_Event_0, CharactedEditorListObjBase) == 0x000000, "Member 'WBP_CE_ListEntry_InvItemSkin_C_OnSet_Event_0::CharactedEditorListObjBase' has a wrong offset!");

// Function WBP_CE_ListEntry_InvItemSkin.WBP_CE_ListEntry_InvItemSkin_C.OnAsyncLoadIconComplete_Event
// 0x0008 (0x0008 - 0x0000)
struct WBP_CE_ListEntry_InvItemSkin_C_OnAsyncLoadIconComplete_Event final
{
public:
	class UObject*                                LoadedAsset;                                       // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_CE_ListEntry_InvItemSkin_C_OnAsyncLoadIconComplete_Event) == 0x000008, "Wrong alignment on WBP_CE_ListEntry_InvItemSkin_C_OnAsyncLoadIconComplete_Event");
static_assert(sizeof(WBP_CE_ListEntry_InvItemSkin_C_OnAsyncLoadIconComplete_Event) == 0x000008, "Wrong size on WBP_CE_ListEntry_InvItemSkin_C_OnAsyncLoadIconComplete_Event");
static_assert(offsetof(WBP_CE_ListEntry_InvItemSkin_C_OnAsyncLoadIconComplete_Event, LoadedAsset) == 0x000000, "Member 'WBP_CE_ListEntry_InvItemSkin_C_OnAsyncLoadIconComplete_Event::LoadedAsset' has a wrong offset!");

// Function WBP_CE_ListEntry_InvItemSkin.WBP_CE_ListEntry_InvItemSkin_C.OnLoaded_FB101E3B4B9140A58A7FA218EE2A18C6
// 0x0008 (0x0008 - 0x0000)
struct WBP_CE_ListEntry_InvItemSkin_C_OnLoaded_FB101E3B4B9140A58A7FA218EE2A18C6 final
{
public:
	class UObject*                                Loaded;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_CE_ListEntry_InvItemSkin_C_OnLoaded_FB101E3B4B9140A58A7FA218EE2A18C6) == 0x000008, "Wrong alignment on WBP_CE_ListEntry_InvItemSkin_C_OnLoaded_FB101E3B4B9140A58A7FA218EE2A18C6");
static_assert(sizeof(WBP_CE_ListEntry_InvItemSkin_C_OnLoaded_FB101E3B4B9140A58A7FA218EE2A18C6) == 0x000008, "Wrong size on WBP_CE_ListEntry_InvItemSkin_C_OnLoaded_FB101E3B4B9140A58A7FA218EE2A18C6");
static_assert(offsetof(WBP_CE_ListEntry_InvItemSkin_C_OnLoaded_FB101E3B4B9140A58A7FA218EE2A18C6, Loaded) == 0x000000, "Member 'WBP_CE_ListEntry_InvItemSkin_C_OnLoaded_FB101E3B4B9140A58A7FA218EE2A18C6::Loaded' has a wrong offset!");

// Function WBP_CE_ListEntry_InvItemSkin.WBP_CE_ListEntry_InvItemSkin_C.GetBorderHoverVis
// 0x0005 (0x0005 - 0x0000)
struct WBP_CE_ListEntry_InvItemSkin_C_GetBorderHoverVis final
{
public:
	ESlateVisibility                              ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_CE_ListEntry_InvItemSkin_C_GetBorderHoverVis) == 0x000001, "Wrong alignment on WBP_CE_ListEntry_InvItemSkin_C_GetBorderHoverVis");
static_assert(sizeof(WBP_CE_ListEntry_InvItemSkin_C_GetBorderHoverVis) == 0x000005, "Wrong size on WBP_CE_ListEntry_InvItemSkin_C_GetBorderHoverVis");
static_assert(offsetof(WBP_CE_ListEntry_InvItemSkin_C_GetBorderHoverVis, ReturnValue) == 0x000000, "Member 'WBP_CE_ListEntry_InvItemSkin_C_GetBorderHoverVis::ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CE_ListEntry_InvItemSkin_C_GetBorderHoverVis, Temp_bool_Variable) == 0x000001, "Member 'WBP_CE_ListEntry_InvItemSkin_C_GetBorderHoverVis::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WBP_CE_ListEntry_InvItemSkin_C_GetBorderHoverVis, Temp_byte_Variable) == 0x000002, "Member 'WBP_CE_ListEntry_InvItemSkin_C_GetBorderHoverVis::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(WBP_CE_ListEntry_InvItemSkin_C_GetBorderHoverVis, Temp_byte_Variable_1) == 0x000003, "Member 'WBP_CE_ListEntry_InvItemSkin_C_GetBorderHoverVis::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_CE_ListEntry_InvItemSkin_C_GetBorderHoverVis, K2Node_Select_Default) == 0x000004, "Member 'WBP_CE_ListEntry_InvItemSkin_C_GetBorderHoverVis::K2Node_Select_Default' has a wrong offset!");

// Function WBP_CE_ListEntry_InvItemSkin.WBP_CE_ListEntry_InvItemSkin_C.GetBorderEdgingBackground
// 0x01B8 (0x01B8 - 0x0000)
struct WBP_CE_ListEntry_InvItemSkin_C_GetBorderEdgingBackground final
{
public:
	struct FSlateBrush                            ReturnValue;                                       // 0x0000(0x0088)(Parm, OutParm, ReturnParm)
	bool                                          Temp_bool_Variable;                                // 0x0088(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_1;                              // 0x0089(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x008A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8B[0x5];                                       // 0x008B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateBrush                            K2Node_Select_Default;                             // 0x0090(0x0088)()
	TScriptInterface<class IUserListEntry>        CallFunc_IsListItemSelected_UserListEntry_CastInput; // 0x0118(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper)
	bool                                          CallFunc_IsListItemSelected_ReturnValue;           // 0x0128(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_129[0x7];                                      // 0x0129(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateBrush                            K2Node_Select_Default_1;                           // 0x0130(0x0088)()
};
static_assert(alignof(WBP_CE_ListEntry_InvItemSkin_C_GetBorderEdgingBackground) == 0x000008, "Wrong alignment on WBP_CE_ListEntry_InvItemSkin_C_GetBorderEdgingBackground");
static_assert(sizeof(WBP_CE_ListEntry_InvItemSkin_C_GetBorderEdgingBackground) == 0x0001B8, "Wrong size on WBP_CE_ListEntry_InvItemSkin_C_GetBorderEdgingBackground");
static_assert(offsetof(WBP_CE_ListEntry_InvItemSkin_C_GetBorderEdgingBackground, ReturnValue) == 0x000000, "Member 'WBP_CE_ListEntry_InvItemSkin_C_GetBorderEdgingBackground::ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CE_ListEntry_InvItemSkin_C_GetBorderEdgingBackground, Temp_bool_Variable) == 0x000088, "Member 'WBP_CE_ListEntry_InvItemSkin_C_GetBorderEdgingBackground::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WBP_CE_ListEntry_InvItemSkin_C_GetBorderEdgingBackground, Temp_bool_Variable_1) == 0x000089, "Member 'WBP_CE_ListEntry_InvItemSkin_C_GetBorderEdgingBackground::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_CE_ListEntry_InvItemSkin_C_GetBorderEdgingBackground, CallFunc_IsValid_ReturnValue) == 0x00008A, "Member 'WBP_CE_ListEntry_InvItemSkin_C_GetBorderEdgingBackground::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CE_ListEntry_InvItemSkin_C_GetBorderEdgingBackground, K2Node_Select_Default) == 0x000090, "Member 'WBP_CE_ListEntry_InvItemSkin_C_GetBorderEdgingBackground::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(WBP_CE_ListEntry_InvItemSkin_C_GetBorderEdgingBackground, CallFunc_IsListItemSelected_UserListEntry_CastInput) == 0x000118, "Member 'WBP_CE_ListEntry_InvItemSkin_C_GetBorderEdgingBackground::CallFunc_IsListItemSelected_UserListEntry_CastInput' has a wrong offset!");
static_assert(offsetof(WBP_CE_ListEntry_InvItemSkin_C_GetBorderEdgingBackground, CallFunc_IsListItemSelected_ReturnValue) == 0x000128, "Member 'WBP_CE_ListEntry_InvItemSkin_C_GetBorderEdgingBackground::CallFunc_IsListItemSelected_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CE_ListEntry_InvItemSkin_C_GetBorderEdgingBackground, K2Node_Select_Default_1) == 0x000130, "Member 'WBP_CE_ListEntry_InvItemSkin_C_GetBorderEdgingBackground::K2Node_Select_Default_1' has a wrong offset!");

}

