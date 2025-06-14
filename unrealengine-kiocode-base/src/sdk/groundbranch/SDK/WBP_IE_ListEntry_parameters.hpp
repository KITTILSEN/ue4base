﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_IE_ListEntry

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "UMG_structs.hpp"
#include "GameplayTags_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function WBP_IE_ListEntry.WBP_IE_ListEntry_C.ExecuteUbergraph_WBP_IE_ListEntry
// 0x0130 (0x0130 - 0x0000)
struct WBP_IE_ListEntry_C_ExecuteUbergraph_WBP_IE_ListEntry final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(TSubclassOf<class UObject> Loaded)> K2Node_CreateDelegate_OutputDelegate;         // 0x0004(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_15[0x3];                                       // 0x0015(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayTagContainer                  CallFunc_GameplayTagContainer_Filter_OutFilteredContainer; // 0x0018(0x0020)()
	bool                                          CallFunc_GameplayTagContainer_Filter_ReturnValue;  // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_39[0x7];                                       // 0x0039(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UGBPouchDragDropPayload*                K2Node_DynamicCast_AsGBPouch_Drag_Drop_Payload;    // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_49[0x7];                                       // 0x0049(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FGameplayTag>                   CallFunc_BreakGameplayTagContainer_GameplayTags;   // 0x0050(0x0010)(ReferenceParm)
	struct FGameplayTag                           CallFunc_GetInvItemSkinTypeTag_ReturnValue;        // 0x0060(0x0008)(NoDestructor, HasGetValueTypeHash)
	TDelegate<void(bool bApplyToChildren)>        K2Node_CreateDelegate_OutputDelegate_1;            // 0x0068(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_2;            // 0x0078(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          K2Node_Event_bIsExpanded;                          // 0x0088(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_89[0x7];                                       // 0x0089(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x0090(0x0008)(NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_bIsSelected;                          // 0x0098(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_99[0x7];                                       // 0x0099(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                K2Node_Event_ListItemObject;                       // 0x00A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UGBInvItemDragDropPayload*              K2Node_DynamicCast_AsGBInv_Item_Drag_Drop_Payload; // 0x00A8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x00B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_B1[0x3];                                       // 0x00B1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(class UObject* Loaded)>        K2Node_CreateDelegate_OutputDelegate_3;            // 0x00B4(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_C4[0x4];                                       // 0x00C4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UWBP_IE_List_C*                         CallFunc_GetParentWidgetOfClass_ReturnValue;       // 0x00C8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FPrimaryAssetId                        K2Node_ComponentBoundEvent_SkinId;                 // 0x00D0(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UWBP_InvItemEditor_C*                   CallFunc_GetParentWidgetOfClass_ReturnValue_1;     // 0x00E0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_bApplyToChildren;               // 0x00E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x00E9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsHovered_ReturnValue;                    // 0x00EA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue_1;                // 0x00EB(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_HasTag_ReturnValue;                       // 0x00EC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_ED[0x3];                                       // 0x00ED(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UClass*                                 Temp_class_Variable;                               // 0x00F0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 K2Node_ClassDynamicCast_AsGBInv_Item_Drag_Drop_Operation; // 0x00F8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_ClassDynamicCast_bSuccess;                  // 0x0100(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_101[0x7];                                      // 0x0101(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TSubclassOf<class UObject>                    K2Node_CustomEvent_Loaded;                         // 0x0108(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UObject*                                Temp_object_Variable;                              // 0x0110(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             K2Node_DynamicCast_AsTexture_2D;                   // 0x0118(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_2;                     // 0x0120(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsOpen_ReturnValue;                       // 0x0121(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_122[0x6];                                      // 0x0122(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                K2Node_CustomEvent_Loaded_1;                       // 0x0128(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_IE_ListEntry_C_ExecuteUbergraph_WBP_IE_ListEntry) == 0x000008, "Wrong alignment on WBP_IE_ListEntry_C_ExecuteUbergraph_WBP_IE_ListEntry");
static_assert(sizeof(WBP_IE_ListEntry_C_ExecuteUbergraph_WBP_IE_ListEntry) == 0x000130, "Wrong size on WBP_IE_ListEntry_C_ExecuteUbergraph_WBP_IE_ListEntry");
static_assert(offsetof(WBP_IE_ListEntry_C_ExecuteUbergraph_WBP_IE_ListEntry, EntryPoint) == 0x000000, "Member 'WBP_IE_ListEntry_C_ExecuteUbergraph_WBP_IE_ListEntry::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_IE_ListEntry_C_ExecuteUbergraph_WBP_IE_ListEntry, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'WBP_IE_ListEntry_C_ExecuteUbergraph_WBP_IE_ListEntry::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WBP_IE_ListEntry_C_ExecuteUbergraph_WBP_IE_ListEntry, CallFunc_IsValid_ReturnValue) == 0x000014, "Member 'WBP_IE_ListEntry_C_ExecuteUbergraph_WBP_IE_ListEntry::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IE_ListEntry_C_ExecuteUbergraph_WBP_IE_ListEntry, CallFunc_GameplayTagContainer_Filter_OutFilteredContainer) == 0x000018, "Member 'WBP_IE_ListEntry_C_ExecuteUbergraph_WBP_IE_ListEntry::CallFunc_GameplayTagContainer_Filter_OutFilteredContainer' has a wrong offset!");
static_assert(offsetof(WBP_IE_ListEntry_C_ExecuteUbergraph_WBP_IE_ListEntry, CallFunc_GameplayTagContainer_Filter_ReturnValue) == 0x000038, "Member 'WBP_IE_ListEntry_C_ExecuteUbergraph_WBP_IE_ListEntry::CallFunc_GameplayTagContainer_Filter_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IE_ListEntry_C_ExecuteUbergraph_WBP_IE_ListEntry, K2Node_DynamicCast_AsGBPouch_Drag_Drop_Payload) == 0x000040, "Member 'WBP_IE_ListEntry_C_ExecuteUbergraph_WBP_IE_ListEntry::K2Node_DynamicCast_AsGBPouch_Drag_Drop_Payload' has a wrong offset!");
static_assert(offsetof(WBP_IE_ListEntry_C_ExecuteUbergraph_WBP_IE_ListEntry, K2Node_DynamicCast_bSuccess) == 0x000048, "Member 'WBP_IE_ListEntry_C_ExecuteUbergraph_WBP_IE_ListEntry::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(WBP_IE_ListEntry_C_ExecuteUbergraph_WBP_IE_ListEntry, CallFunc_BreakGameplayTagContainer_GameplayTags) == 0x000050, "Member 'WBP_IE_ListEntry_C_ExecuteUbergraph_WBP_IE_ListEntry::CallFunc_BreakGameplayTagContainer_GameplayTags' has a wrong offset!");
static_assert(offsetof(WBP_IE_ListEntry_C_ExecuteUbergraph_WBP_IE_ListEntry, CallFunc_GetInvItemSkinTypeTag_ReturnValue) == 0x000060, "Member 'WBP_IE_ListEntry_C_ExecuteUbergraph_WBP_IE_ListEntry::CallFunc_GetInvItemSkinTypeTag_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IE_ListEntry_C_ExecuteUbergraph_WBP_IE_ListEntry, K2Node_CreateDelegate_OutputDelegate_1) == 0x000068, "Member 'WBP_IE_ListEntry_C_ExecuteUbergraph_WBP_IE_ListEntry::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(WBP_IE_ListEntry_C_ExecuteUbergraph_WBP_IE_ListEntry, K2Node_CreateDelegate_OutputDelegate_2) == 0x000078, "Member 'WBP_IE_ListEntry_C_ExecuteUbergraph_WBP_IE_ListEntry::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(WBP_IE_ListEntry_C_ExecuteUbergraph_WBP_IE_ListEntry, K2Node_Event_bIsExpanded) == 0x000088, "Member 'WBP_IE_ListEntry_C_ExecuteUbergraph_WBP_IE_ListEntry::K2Node_Event_bIsExpanded' has a wrong offset!");
static_assert(offsetof(WBP_IE_ListEntry_C_ExecuteUbergraph_WBP_IE_ListEntry, CallFunc_K2_SetTimerDelegate_ReturnValue) == 0x000090, "Member 'WBP_IE_ListEntry_C_ExecuteUbergraph_WBP_IE_ListEntry::CallFunc_K2_SetTimerDelegate_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IE_ListEntry_C_ExecuteUbergraph_WBP_IE_ListEntry, K2Node_Event_bIsSelected) == 0x000098, "Member 'WBP_IE_ListEntry_C_ExecuteUbergraph_WBP_IE_ListEntry::K2Node_Event_bIsSelected' has a wrong offset!");
static_assert(offsetof(WBP_IE_ListEntry_C_ExecuteUbergraph_WBP_IE_ListEntry, K2Node_Event_ListItemObject) == 0x0000A0, "Member 'WBP_IE_ListEntry_C_ExecuteUbergraph_WBP_IE_ListEntry::K2Node_Event_ListItemObject' has a wrong offset!");
static_assert(offsetof(WBP_IE_ListEntry_C_ExecuteUbergraph_WBP_IE_ListEntry, K2Node_DynamicCast_AsGBInv_Item_Drag_Drop_Payload) == 0x0000A8, "Member 'WBP_IE_ListEntry_C_ExecuteUbergraph_WBP_IE_ListEntry::K2Node_DynamicCast_AsGBInv_Item_Drag_Drop_Payload' has a wrong offset!");
static_assert(offsetof(WBP_IE_ListEntry_C_ExecuteUbergraph_WBP_IE_ListEntry, K2Node_DynamicCast_bSuccess_1) == 0x0000B0, "Member 'WBP_IE_ListEntry_C_ExecuteUbergraph_WBP_IE_ListEntry::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(WBP_IE_ListEntry_C_ExecuteUbergraph_WBP_IE_ListEntry, K2Node_CreateDelegate_OutputDelegate_3) == 0x0000B4, "Member 'WBP_IE_ListEntry_C_ExecuteUbergraph_WBP_IE_ListEntry::K2Node_CreateDelegate_OutputDelegate_3' has a wrong offset!");
static_assert(offsetof(WBP_IE_ListEntry_C_ExecuteUbergraph_WBP_IE_ListEntry, CallFunc_GetParentWidgetOfClass_ReturnValue) == 0x0000C8, "Member 'WBP_IE_ListEntry_C_ExecuteUbergraph_WBP_IE_ListEntry::CallFunc_GetParentWidgetOfClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IE_ListEntry_C_ExecuteUbergraph_WBP_IE_ListEntry, K2Node_ComponentBoundEvent_SkinId) == 0x0000D0, "Member 'WBP_IE_ListEntry_C_ExecuteUbergraph_WBP_IE_ListEntry::K2Node_ComponentBoundEvent_SkinId' has a wrong offset!");
static_assert(offsetof(WBP_IE_ListEntry_C_ExecuteUbergraph_WBP_IE_ListEntry, CallFunc_GetParentWidgetOfClass_ReturnValue_1) == 0x0000E0, "Member 'WBP_IE_ListEntry_C_ExecuteUbergraph_WBP_IE_ListEntry::CallFunc_GetParentWidgetOfClass_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_IE_ListEntry_C_ExecuteUbergraph_WBP_IE_ListEntry, K2Node_CustomEvent_bApplyToChildren) == 0x0000E8, "Member 'WBP_IE_ListEntry_C_ExecuteUbergraph_WBP_IE_ListEntry::K2Node_CustomEvent_bApplyToChildren' has a wrong offset!");
static_assert(offsetof(WBP_IE_ListEntry_C_ExecuteUbergraph_WBP_IE_ListEntry, CallFunc_Not_PreBool_ReturnValue) == 0x0000E9, "Member 'WBP_IE_ListEntry_C_ExecuteUbergraph_WBP_IE_ListEntry::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IE_ListEntry_C_ExecuteUbergraph_WBP_IE_ListEntry, CallFunc_IsHovered_ReturnValue) == 0x0000EA, "Member 'WBP_IE_ListEntry_C_ExecuteUbergraph_WBP_IE_ListEntry::CallFunc_IsHovered_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IE_ListEntry_C_ExecuteUbergraph_WBP_IE_ListEntry, CallFunc_Not_PreBool_ReturnValue_1) == 0x0000EB, "Member 'WBP_IE_ListEntry_C_ExecuteUbergraph_WBP_IE_ListEntry::CallFunc_Not_PreBool_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_IE_ListEntry_C_ExecuteUbergraph_WBP_IE_ListEntry, CallFunc_HasTag_ReturnValue) == 0x0000EC, "Member 'WBP_IE_ListEntry_C_ExecuteUbergraph_WBP_IE_ListEntry::CallFunc_HasTag_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IE_ListEntry_C_ExecuteUbergraph_WBP_IE_ListEntry, Temp_class_Variable) == 0x0000F0, "Member 'WBP_IE_ListEntry_C_ExecuteUbergraph_WBP_IE_ListEntry::Temp_class_Variable' has a wrong offset!");
static_assert(offsetof(WBP_IE_ListEntry_C_ExecuteUbergraph_WBP_IE_ListEntry, K2Node_ClassDynamicCast_AsGBInv_Item_Drag_Drop_Operation) == 0x0000F8, "Member 'WBP_IE_ListEntry_C_ExecuteUbergraph_WBP_IE_ListEntry::K2Node_ClassDynamicCast_AsGBInv_Item_Drag_Drop_Operation' has a wrong offset!");
static_assert(offsetof(WBP_IE_ListEntry_C_ExecuteUbergraph_WBP_IE_ListEntry, K2Node_ClassDynamicCast_bSuccess) == 0x000100, "Member 'WBP_IE_ListEntry_C_ExecuteUbergraph_WBP_IE_ListEntry::K2Node_ClassDynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(WBP_IE_ListEntry_C_ExecuteUbergraph_WBP_IE_ListEntry, K2Node_CustomEvent_Loaded) == 0x000108, "Member 'WBP_IE_ListEntry_C_ExecuteUbergraph_WBP_IE_ListEntry::K2Node_CustomEvent_Loaded' has a wrong offset!");
static_assert(offsetof(WBP_IE_ListEntry_C_ExecuteUbergraph_WBP_IE_ListEntry, Temp_object_Variable) == 0x000110, "Member 'WBP_IE_ListEntry_C_ExecuteUbergraph_WBP_IE_ListEntry::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(WBP_IE_ListEntry_C_ExecuteUbergraph_WBP_IE_ListEntry, K2Node_DynamicCast_AsTexture_2D) == 0x000118, "Member 'WBP_IE_ListEntry_C_ExecuteUbergraph_WBP_IE_ListEntry::K2Node_DynamicCast_AsTexture_2D' has a wrong offset!");
static_assert(offsetof(WBP_IE_ListEntry_C_ExecuteUbergraph_WBP_IE_ListEntry, K2Node_DynamicCast_bSuccess_2) == 0x000120, "Member 'WBP_IE_ListEntry_C_ExecuteUbergraph_WBP_IE_ListEntry::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");
static_assert(offsetof(WBP_IE_ListEntry_C_ExecuteUbergraph_WBP_IE_ListEntry, CallFunc_IsOpen_ReturnValue) == 0x000121, "Member 'WBP_IE_ListEntry_C_ExecuteUbergraph_WBP_IE_ListEntry::CallFunc_IsOpen_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IE_ListEntry_C_ExecuteUbergraph_WBP_IE_ListEntry, K2Node_CustomEvent_Loaded_1) == 0x000128, "Member 'WBP_IE_ListEntry_C_ExecuteUbergraph_WBP_IE_ListEntry::K2Node_CustomEvent_Loaded_1' has a wrong offset!");

// Function WBP_IE_ListEntry.WBP_IE_ListEntry_C.OnSkinApplyToChildrenUpdated_Event_0
// 0x0001 (0x0001 - 0x0000)
struct WBP_IE_ListEntry_C_OnSkinApplyToChildrenUpdated_Event_0 final
{
public:
	bool                                          bApplyToChildren;                                  // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WBP_IE_ListEntry_C_OnSkinApplyToChildrenUpdated_Event_0) == 0x000001, "Wrong alignment on WBP_IE_ListEntry_C_OnSkinApplyToChildrenUpdated_Event_0");
static_assert(sizeof(WBP_IE_ListEntry_C_OnSkinApplyToChildrenUpdated_Event_0) == 0x000001, "Wrong size on WBP_IE_ListEntry_C_OnSkinApplyToChildrenUpdated_Event_0");
static_assert(offsetof(WBP_IE_ListEntry_C_OnSkinApplyToChildrenUpdated_Event_0, bApplyToChildren) == 0x000000, "Member 'WBP_IE_ListEntry_C_OnSkinApplyToChildrenUpdated_Event_0::bApplyToChildren' has a wrong offset!");

// Function WBP_IE_ListEntry.WBP_IE_ListEntry_C.BndEvt__WBP_DragItem_Entry_ItemSkin_ComboBox_K2Node_ComponentBoundEvent_0_OnSkinIdSelected__DelegateSignature
// 0x0010 (0x0010 - 0x0000)
struct WBP_IE_ListEntry_C_BndEvt__WBP_DragItem_Entry_ItemSkin_ComboBox_K2Node_ComponentBoundEvent_0_OnSkinIdSelected__DelegateSignature final
{
public:
	struct FPrimaryAssetId                        SkinId;                                            // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_IE_ListEntry_C_BndEvt__WBP_DragItem_Entry_ItemSkin_ComboBox_K2Node_ComponentBoundEvent_0_OnSkinIdSelected__DelegateSignature) == 0x000004, "Wrong alignment on WBP_IE_ListEntry_C_BndEvt__WBP_DragItem_Entry_ItemSkin_ComboBox_K2Node_ComponentBoundEvent_0_OnSkinIdSelected__DelegateSignature");
static_assert(sizeof(WBP_IE_ListEntry_C_BndEvt__WBP_DragItem_Entry_ItemSkin_ComboBox_K2Node_ComponentBoundEvent_0_OnSkinIdSelected__DelegateSignature) == 0x000010, "Wrong size on WBP_IE_ListEntry_C_BndEvt__WBP_DragItem_Entry_ItemSkin_ComboBox_K2Node_ComponentBoundEvent_0_OnSkinIdSelected__DelegateSignature");
static_assert(offsetof(WBP_IE_ListEntry_C_BndEvt__WBP_DragItem_Entry_ItemSkin_ComboBox_K2Node_ComponentBoundEvent_0_OnSkinIdSelected__DelegateSignature, SkinId) == 0x000000, "Member 'WBP_IE_ListEntry_C_BndEvt__WBP_DragItem_Entry_ItemSkin_ComboBox_K2Node_ComponentBoundEvent_0_OnSkinIdSelected__DelegateSignature::SkinId' has a wrong offset!");

// Function WBP_IE_ListEntry.WBP_IE_ListEntry_C.OnListItemObjectSet
// 0x0008 (0x0008 - 0x0000)
struct WBP_IE_ListEntry_C_OnListItemObjectSet final
{
public:
	class UObject*                                ListItemObject;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_IE_ListEntry_C_OnListItemObjectSet) == 0x000008, "Wrong alignment on WBP_IE_ListEntry_C_OnListItemObjectSet");
static_assert(sizeof(WBP_IE_ListEntry_C_OnListItemObjectSet) == 0x000008, "Wrong size on WBP_IE_ListEntry_C_OnListItemObjectSet");
static_assert(offsetof(WBP_IE_ListEntry_C_OnListItemObjectSet, ListItemObject) == 0x000000, "Member 'WBP_IE_ListEntry_C_OnListItemObjectSet::ListItemObject' has a wrong offset!");

// Function WBP_IE_ListEntry.WBP_IE_ListEntry_C.BP_OnItemSelectionChanged
// 0x0001 (0x0001 - 0x0000)
struct WBP_IE_ListEntry_C_BP_OnItemSelectionChanged final
{
public:
	bool                                          bIsSelected;                                       // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WBP_IE_ListEntry_C_BP_OnItemSelectionChanged) == 0x000001, "Wrong alignment on WBP_IE_ListEntry_C_BP_OnItemSelectionChanged");
static_assert(sizeof(WBP_IE_ListEntry_C_BP_OnItemSelectionChanged) == 0x000001, "Wrong size on WBP_IE_ListEntry_C_BP_OnItemSelectionChanged");
static_assert(offsetof(WBP_IE_ListEntry_C_BP_OnItemSelectionChanged, bIsSelected) == 0x000000, "Member 'WBP_IE_ListEntry_C_BP_OnItemSelectionChanged::bIsSelected' has a wrong offset!");

// Function WBP_IE_ListEntry.WBP_IE_ListEntry_C.BP_OnItemExpansionChanged
// 0x0001 (0x0001 - 0x0000)
struct WBP_IE_ListEntry_C_BP_OnItemExpansionChanged final
{
public:
	bool                                          bIsExpanded;                                       // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WBP_IE_ListEntry_C_BP_OnItemExpansionChanged) == 0x000001, "Wrong alignment on WBP_IE_ListEntry_C_BP_OnItemExpansionChanged");
static_assert(sizeof(WBP_IE_ListEntry_C_BP_OnItemExpansionChanged) == 0x000001, "Wrong size on WBP_IE_ListEntry_C_BP_OnItemExpansionChanged");
static_assert(offsetof(WBP_IE_ListEntry_C_BP_OnItemExpansionChanged, bIsExpanded) == 0x000000, "Member 'WBP_IE_ListEntry_C_BP_OnItemExpansionChanged::bIsExpanded' has a wrong offset!");

// Function WBP_IE_ListEntry.WBP_IE_ListEntry_C.OnLoaded_686A2F9744B64F989CB957400DB68083
// 0x0008 (0x0008 - 0x0000)
struct WBP_IE_ListEntry_C_OnLoaded_686A2F9744B64F989CB957400DB68083 final
{
public:
	TSubclassOf<class UObject>                    Loaded;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
};
static_assert(alignof(WBP_IE_ListEntry_C_OnLoaded_686A2F9744B64F989CB957400DB68083) == 0x000008, "Wrong alignment on WBP_IE_ListEntry_C_OnLoaded_686A2F9744B64F989CB957400DB68083");
static_assert(sizeof(WBP_IE_ListEntry_C_OnLoaded_686A2F9744B64F989CB957400DB68083) == 0x000008, "Wrong size on WBP_IE_ListEntry_C_OnLoaded_686A2F9744B64F989CB957400DB68083");
static_assert(offsetof(WBP_IE_ListEntry_C_OnLoaded_686A2F9744B64F989CB957400DB68083, Loaded) == 0x000000, "Member 'WBP_IE_ListEntry_C_OnLoaded_686A2F9744B64F989CB957400DB68083::Loaded' has a wrong offset!");

// Function WBP_IE_ListEntry.WBP_IE_ListEntry_C.OnLoaded_29737857C2C847C1A904C4384675FA1E
// 0x0008 (0x0008 - 0x0000)
struct WBP_IE_ListEntry_C_OnLoaded_29737857C2C847C1A904C4384675FA1E final
{
public:
	class UObject*                                Loaded;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_IE_ListEntry_C_OnLoaded_29737857C2C847C1A904C4384675FA1E) == 0x000008, "Wrong alignment on WBP_IE_ListEntry_C_OnLoaded_29737857C2C847C1A904C4384675FA1E");
static_assert(sizeof(WBP_IE_ListEntry_C_OnLoaded_29737857C2C847C1A904C4384675FA1E) == 0x000008, "Wrong size on WBP_IE_ListEntry_C_OnLoaded_29737857C2C847C1A904C4384675FA1E");
static_assert(offsetof(WBP_IE_ListEntry_C_OnLoaded_29737857C2C847C1A904C4384675FA1E, Loaded) == 0x000000, "Member 'WBP_IE_ListEntry_C_OnLoaded_29737857C2C847C1A904C4384675FA1E::Loaded' has a wrong offset!");

// Function WBP_IE_ListEntry.WBP_IE_ListEntry_C.OnMouseButtonDown
// 0x0218 (0x0218 - 0x0000)
struct WBP_IE_ListEntry_C_OnMouseButtonDown final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                          MouseEvent;                                        // 0x0038(0x0070)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                            ReturnValue;                                       // 0x00A8(0x00B8)(Parm, OutParm, ReturnParm)
	struct FEventReply                            CallFunc_DetectDragIfPressed_ReturnValue;          // 0x0160(0x00B8)()
};
static_assert(alignof(WBP_IE_ListEntry_C_OnMouseButtonDown) == 0x000008, "Wrong alignment on WBP_IE_ListEntry_C_OnMouseButtonDown");
static_assert(sizeof(WBP_IE_ListEntry_C_OnMouseButtonDown) == 0x000218, "Wrong size on WBP_IE_ListEntry_C_OnMouseButtonDown");
static_assert(offsetof(WBP_IE_ListEntry_C_OnMouseButtonDown, MyGeometry) == 0x000000, "Member 'WBP_IE_ListEntry_C_OnMouseButtonDown::MyGeometry' has a wrong offset!");
static_assert(offsetof(WBP_IE_ListEntry_C_OnMouseButtonDown, MouseEvent) == 0x000038, "Member 'WBP_IE_ListEntry_C_OnMouseButtonDown::MouseEvent' has a wrong offset!");
static_assert(offsetof(WBP_IE_ListEntry_C_OnMouseButtonDown, ReturnValue) == 0x0000A8, "Member 'WBP_IE_ListEntry_C_OnMouseButtonDown::ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IE_ListEntry_C_OnMouseButtonDown, CallFunc_DetectDragIfPressed_ReturnValue) == 0x000160, "Member 'WBP_IE_ListEntry_C_OnMouseButtonDown::CallFunc_DetectDragIfPressed_ReturnValue' has a wrong offset!");

// Function WBP_IE_ListEntry.WBP_IE_ListEntry_C.OnDragDetected
// 0x0120 (0x0120 - 0x0000)
struct WBP_IE_ListEntry_C_OnDragDetected final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                          PointerEvent;                                      // 0x0038(0x0070)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class UDragDropOperation*                     Operation;                                         // 0x00A8(0x0008)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AGBInvItem*                             DraggedItem;                                       // 0x00B0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWBP_IE_ListEntry_DragDropVisual_C*     CallFunc_Create_ReturnValue;                       // 0x00B8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValidClass_ReturnValue;                 // 0x00C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_C1[0x7];                                       // 0x00C1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UGBInvItemDragDropOperation*            CallFunc_CreateDragDropOperation_ReturnValue;      // 0x00C8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_PrimaryAssetIdToString_ReturnValue;  // 0x00D0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_SoftClassReferenceToString_ReturnValue; // 0x00E0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;                // 0x00F0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_1;              // 0x0100(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_2;              // 0x0110(0x0010)(ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_IE_ListEntry_C_OnDragDetected) == 0x000008, "Wrong alignment on WBP_IE_ListEntry_C_OnDragDetected");
static_assert(sizeof(WBP_IE_ListEntry_C_OnDragDetected) == 0x000120, "Wrong size on WBP_IE_ListEntry_C_OnDragDetected");
static_assert(offsetof(WBP_IE_ListEntry_C_OnDragDetected, MyGeometry) == 0x000000, "Member 'WBP_IE_ListEntry_C_OnDragDetected::MyGeometry' has a wrong offset!");
static_assert(offsetof(WBP_IE_ListEntry_C_OnDragDetected, PointerEvent) == 0x000038, "Member 'WBP_IE_ListEntry_C_OnDragDetected::PointerEvent' has a wrong offset!");
static_assert(offsetof(WBP_IE_ListEntry_C_OnDragDetected, Operation) == 0x0000A8, "Member 'WBP_IE_ListEntry_C_OnDragDetected::Operation' has a wrong offset!");
static_assert(offsetof(WBP_IE_ListEntry_C_OnDragDetected, DraggedItem) == 0x0000B0, "Member 'WBP_IE_ListEntry_C_OnDragDetected::DraggedItem' has a wrong offset!");
static_assert(offsetof(WBP_IE_ListEntry_C_OnDragDetected, CallFunc_Create_ReturnValue) == 0x0000B8, "Member 'WBP_IE_ListEntry_C_OnDragDetected::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IE_ListEntry_C_OnDragDetected, CallFunc_IsValidClass_ReturnValue) == 0x0000C0, "Member 'WBP_IE_ListEntry_C_OnDragDetected::CallFunc_IsValidClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IE_ListEntry_C_OnDragDetected, CallFunc_CreateDragDropOperation_ReturnValue) == 0x0000C8, "Member 'WBP_IE_ListEntry_C_OnDragDetected::CallFunc_CreateDragDropOperation_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IE_ListEntry_C_OnDragDetected, CallFunc_Conv_PrimaryAssetIdToString_ReturnValue) == 0x0000D0, "Member 'WBP_IE_ListEntry_C_OnDragDetected::CallFunc_Conv_PrimaryAssetIdToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IE_ListEntry_C_OnDragDetected, CallFunc_Conv_SoftClassReferenceToString_ReturnValue) == 0x0000E0, "Member 'WBP_IE_ListEntry_C_OnDragDetected::CallFunc_Conv_SoftClassReferenceToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IE_ListEntry_C_OnDragDetected, CallFunc_Concat_StrStr_ReturnValue) == 0x0000F0, "Member 'WBP_IE_ListEntry_C_OnDragDetected::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IE_ListEntry_C_OnDragDetected, CallFunc_Concat_StrStr_ReturnValue_1) == 0x000100, "Member 'WBP_IE_ListEntry_C_OnDragDetected::CallFunc_Concat_StrStr_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_IE_ListEntry_C_OnDragDetected, CallFunc_Concat_StrStr_ReturnValue_2) == 0x000110, "Member 'WBP_IE_ListEntry_C_OnDragDetected::CallFunc_Concat_StrStr_ReturnValue_2' has a wrong offset!");

// Function WBP_IE_ListEntry.WBP_IE_ListEntry_C.GetToolTip
// 0x0010 (0x0010 - 0x0000)
struct WBP_IE_ListEntry_C_GetToolTip final
{
public:
	class UWidget*                                ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWBP_Tooltip_C*                         CallFunc_Create_ReturnValue;                       // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_IE_ListEntry_C_GetToolTip) == 0x000008, "Wrong alignment on WBP_IE_ListEntry_C_GetToolTip");
static_assert(sizeof(WBP_IE_ListEntry_C_GetToolTip) == 0x000010, "Wrong size on WBP_IE_ListEntry_C_GetToolTip");
static_assert(offsetof(WBP_IE_ListEntry_C_GetToolTip, ReturnValue) == 0x000000, "Member 'WBP_IE_ListEntry_C_GetToolTip::ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IE_ListEntry_C_GetToolTip, CallFunc_Create_ReturnValue) == 0x000008, "Member 'WBP_IE_ListEntry_C_GetToolTip::CallFunc_Create_ReturnValue' has a wrong offset!");

// Function WBP_IE_ListEntry.WBP_IE_ListEntry_C.GetBackgroundColour
// 0x0024 (0x0024 - 0x0000)
struct WBP_IE_ListEntry_C_GetBackgroundColour final
{
public:
	struct FLinearColor                           ReturnValue;                                       // 0x0000(0x0010)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsHovered_ReturnValue;                    // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_11[0x3];                                       // 0x0011(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           CallFunc_SelectColor_ReturnValue;                  // 0x0014(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_IE_ListEntry_C_GetBackgroundColour) == 0x000004, "Wrong alignment on WBP_IE_ListEntry_C_GetBackgroundColour");
static_assert(sizeof(WBP_IE_ListEntry_C_GetBackgroundColour) == 0x000024, "Wrong size on WBP_IE_ListEntry_C_GetBackgroundColour");
static_assert(offsetof(WBP_IE_ListEntry_C_GetBackgroundColour, ReturnValue) == 0x000000, "Member 'WBP_IE_ListEntry_C_GetBackgroundColour::ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IE_ListEntry_C_GetBackgroundColour, CallFunc_IsHovered_ReturnValue) == 0x000010, "Member 'WBP_IE_ListEntry_C_GetBackgroundColour::CallFunc_IsHovered_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IE_ListEntry_C_GetBackgroundColour, CallFunc_SelectColor_ReturnValue) == 0x000014, "Member 'WBP_IE_ListEntry_C_GetBackgroundColour::CallFunc_SelectColor_ReturnValue' has a wrong offset!");

}

