﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_InventoryBar_EmptyPouchSlot

#include "Basic.hpp"

#include "UMG_structs.hpp"


namespace SDK::Params
{

// Function WBP_InventoryBar_EmptyPouchSlot.WBP_InventoryBar_EmptyPouchSlot_C.ExecuteUbergraph_WBP_InventoryBar_EmptyPouchSlot
// 0x0080 (0x0080 - 0x0000)
struct WBP_InventoryBar_EmptyPouchSlot_C_ExecuteUbergraph_WBP_InventoryBar_EmptyPouchSlot final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class UObject* LoadedAsset)>   K2Node_CreateDelegate_OutputDelegate;              // 0x0004(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_14[0x4];                                       // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AGBInvItem*                             K2Node_Event_InItem;                               // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_bMainhand;                            // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_Event_bImmediate;                           // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_ComponentBoundEvent_bIsChecked;             // 0x0022(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_Event_IsSelected;                           // 0x0023(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_24[0x4];                                       // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_GetDisplayName_ReturnValue;               // 0x0028(0x0018)()
	class UObject*                                K2Node_CustomEvent_LoadedAsset;                    // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             K2Node_DynamicCast_AsTexture_2D;                   // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_51[0x7];                                       // 0x0051(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TSoftObjectPtr<class UTexture2D>              CallFunc_GetIcon_ReturnValue;                      // 0x0058(0x0028)(UObjectWrapper, HasGetValueTypeHash)
};
static_assert(alignof(WBP_InventoryBar_EmptyPouchSlot_C_ExecuteUbergraph_WBP_InventoryBar_EmptyPouchSlot) == 0x000008, "Wrong alignment on WBP_InventoryBar_EmptyPouchSlot_C_ExecuteUbergraph_WBP_InventoryBar_EmptyPouchSlot");
static_assert(sizeof(WBP_InventoryBar_EmptyPouchSlot_C_ExecuteUbergraph_WBP_InventoryBar_EmptyPouchSlot) == 0x000080, "Wrong size on WBP_InventoryBar_EmptyPouchSlot_C_ExecuteUbergraph_WBP_InventoryBar_EmptyPouchSlot");
static_assert(offsetof(WBP_InventoryBar_EmptyPouchSlot_C_ExecuteUbergraph_WBP_InventoryBar_EmptyPouchSlot, EntryPoint) == 0x000000, "Member 'WBP_InventoryBar_EmptyPouchSlot_C_ExecuteUbergraph_WBP_InventoryBar_EmptyPouchSlot::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_InventoryBar_EmptyPouchSlot_C_ExecuteUbergraph_WBP_InventoryBar_EmptyPouchSlot, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'WBP_InventoryBar_EmptyPouchSlot_C_ExecuteUbergraph_WBP_InventoryBar_EmptyPouchSlot::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WBP_InventoryBar_EmptyPouchSlot_C_ExecuteUbergraph_WBP_InventoryBar_EmptyPouchSlot, K2Node_Event_InItem) == 0x000018, "Member 'WBP_InventoryBar_EmptyPouchSlot_C_ExecuteUbergraph_WBP_InventoryBar_EmptyPouchSlot::K2Node_Event_InItem' has a wrong offset!");
static_assert(offsetof(WBP_InventoryBar_EmptyPouchSlot_C_ExecuteUbergraph_WBP_InventoryBar_EmptyPouchSlot, K2Node_Event_bMainhand) == 0x000020, "Member 'WBP_InventoryBar_EmptyPouchSlot_C_ExecuteUbergraph_WBP_InventoryBar_EmptyPouchSlot::K2Node_Event_bMainhand' has a wrong offset!");
static_assert(offsetof(WBP_InventoryBar_EmptyPouchSlot_C_ExecuteUbergraph_WBP_InventoryBar_EmptyPouchSlot, K2Node_Event_bImmediate) == 0x000021, "Member 'WBP_InventoryBar_EmptyPouchSlot_C_ExecuteUbergraph_WBP_InventoryBar_EmptyPouchSlot::K2Node_Event_bImmediate' has a wrong offset!");
static_assert(offsetof(WBP_InventoryBar_EmptyPouchSlot_C_ExecuteUbergraph_WBP_InventoryBar_EmptyPouchSlot, K2Node_ComponentBoundEvent_bIsChecked) == 0x000022, "Member 'WBP_InventoryBar_EmptyPouchSlot_C_ExecuteUbergraph_WBP_InventoryBar_EmptyPouchSlot::K2Node_ComponentBoundEvent_bIsChecked' has a wrong offset!");
static_assert(offsetof(WBP_InventoryBar_EmptyPouchSlot_C_ExecuteUbergraph_WBP_InventoryBar_EmptyPouchSlot, K2Node_Event_IsSelected) == 0x000023, "Member 'WBP_InventoryBar_EmptyPouchSlot_C_ExecuteUbergraph_WBP_InventoryBar_EmptyPouchSlot::K2Node_Event_IsSelected' has a wrong offset!");
static_assert(offsetof(WBP_InventoryBar_EmptyPouchSlot_C_ExecuteUbergraph_WBP_InventoryBar_EmptyPouchSlot, CallFunc_GetDisplayName_ReturnValue) == 0x000028, "Member 'WBP_InventoryBar_EmptyPouchSlot_C_ExecuteUbergraph_WBP_InventoryBar_EmptyPouchSlot::CallFunc_GetDisplayName_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_InventoryBar_EmptyPouchSlot_C_ExecuteUbergraph_WBP_InventoryBar_EmptyPouchSlot, K2Node_CustomEvent_LoadedAsset) == 0x000040, "Member 'WBP_InventoryBar_EmptyPouchSlot_C_ExecuteUbergraph_WBP_InventoryBar_EmptyPouchSlot::K2Node_CustomEvent_LoadedAsset' has a wrong offset!");
static_assert(offsetof(WBP_InventoryBar_EmptyPouchSlot_C_ExecuteUbergraph_WBP_InventoryBar_EmptyPouchSlot, K2Node_DynamicCast_AsTexture_2D) == 0x000048, "Member 'WBP_InventoryBar_EmptyPouchSlot_C_ExecuteUbergraph_WBP_InventoryBar_EmptyPouchSlot::K2Node_DynamicCast_AsTexture_2D' has a wrong offset!");
static_assert(offsetof(WBP_InventoryBar_EmptyPouchSlot_C_ExecuteUbergraph_WBP_InventoryBar_EmptyPouchSlot, K2Node_DynamicCast_bSuccess) == 0x000050, "Member 'WBP_InventoryBar_EmptyPouchSlot_C_ExecuteUbergraph_WBP_InventoryBar_EmptyPouchSlot::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(WBP_InventoryBar_EmptyPouchSlot_C_ExecuteUbergraph_WBP_InventoryBar_EmptyPouchSlot, CallFunc_GetIcon_ReturnValue) == 0x000058, "Member 'WBP_InventoryBar_EmptyPouchSlot_C_ExecuteUbergraph_WBP_InventoryBar_EmptyPouchSlot::CallFunc_GetIcon_ReturnValue' has a wrong offset!");

// Function WBP_InventoryBar_EmptyPouchSlot.WBP_InventoryBar_EmptyPouchSlot_C.OnIconLoaded
// 0x0008 (0x0008 - 0x0000)
struct WBP_InventoryBar_EmptyPouchSlot_C_OnIconLoaded final
{
public:
	class UObject*                                LoadedAsset;                                       // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_InventoryBar_EmptyPouchSlot_C_OnIconLoaded) == 0x000008, "Wrong alignment on WBP_InventoryBar_EmptyPouchSlot_C_OnIconLoaded");
static_assert(sizeof(WBP_InventoryBar_EmptyPouchSlot_C_OnIconLoaded) == 0x000008, "Wrong size on WBP_InventoryBar_EmptyPouchSlot_C_OnIconLoaded");
static_assert(offsetof(WBP_InventoryBar_EmptyPouchSlot_C_OnIconLoaded, LoadedAsset) == 0x000000, "Member 'WBP_InventoryBar_EmptyPouchSlot_C_OnIconLoaded::LoadedAsset' has a wrong offset!");

// Function WBP_InventoryBar_EmptyPouchSlot.WBP_InventoryBar_EmptyPouchSlot_C.InternalSetSelected
// 0x0001 (0x0001 - 0x0000)
struct WBP_InventoryBar_EmptyPouchSlot_C_InternalSetSelected final
{
public:
	bool                                          IsSelected;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WBP_InventoryBar_EmptyPouchSlot_C_InternalSetSelected) == 0x000001, "Wrong alignment on WBP_InventoryBar_EmptyPouchSlot_C_InternalSetSelected");
static_assert(sizeof(WBP_InventoryBar_EmptyPouchSlot_C_InternalSetSelected) == 0x000001, "Wrong size on WBP_InventoryBar_EmptyPouchSlot_C_InternalSetSelected");
static_assert(offsetof(WBP_InventoryBar_EmptyPouchSlot_C_InternalSetSelected, IsSelected) == 0x000000, "Member 'WBP_InventoryBar_EmptyPouchSlot_C_InternalSetSelected::IsSelected' has a wrong offset!");

// Function WBP_InventoryBar_EmptyPouchSlot.WBP_InventoryBar_EmptyPouchSlot_C.BndEvt__CheckBox_Tab_K2Node_ComponentBoundEvent_1034_OnCheckBoxComponentStateChanged__DelegateSignature
// 0x0001 (0x0001 - 0x0000)
struct WBP_InventoryBar_EmptyPouchSlot_C_BndEvt__CheckBox_Tab_K2Node_ComponentBoundEvent_1034_OnCheckBoxComponentStateChanged__DelegateSignature final
{
public:
	bool                                          bIsChecked;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WBP_InventoryBar_EmptyPouchSlot_C_BndEvt__CheckBox_Tab_K2Node_ComponentBoundEvent_1034_OnCheckBoxComponentStateChanged__DelegateSignature) == 0x000001, "Wrong alignment on WBP_InventoryBar_EmptyPouchSlot_C_BndEvt__CheckBox_Tab_K2Node_ComponentBoundEvent_1034_OnCheckBoxComponentStateChanged__DelegateSignature");
static_assert(sizeof(WBP_InventoryBar_EmptyPouchSlot_C_BndEvt__CheckBox_Tab_K2Node_ComponentBoundEvent_1034_OnCheckBoxComponentStateChanged__DelegateSignature) == 0x000001, "Wrong size on WBP_InventoryBar_EmptyPouchSlot_C_BndEvt__CheckBox_Tab_K2Node_ComponentBoundEvent_1034_OnCheckBoxComponentStateChanged__DelegateSignature");
static_assert(offsetof(WBP_InventoryBar_EmptyPouchSlot_C_BndEvt__CheckBox_Tab_K2Node_ComponentBoundEvent_1034_OnCheckBoxComponentStateChanged__DelegateSignature, bIsChecked) == 0x000000, "Member 'WBP_InventoryBar_EmptyPouchSlot_C_BndEvt__CheckBox_Tab_K2Node_ComponentBoundEvent_1034_OnCheckBoxComponentStateChanged__DelegateSignature::bIsChecked' has a wrong offset!");

// Function WBP_InventoryBar_EmptyPouchSlot.WBP_InventoryBar_EmptyPouchSlot_C.EquipInventorySlotItem
// 0x0002 (0x0002 - 0x0000)
struct WBP_InventoryBar_EmptyPouchSlot_C_EquipInventorySlotItem final
{
public:
	bool                                          bMainHand;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          bImmediate;                                        // 0x0001(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WBP_InventoryBar_EmptyPouchSlot_C_EquipInventorySlotItem) == 0x000001, "Wrong alignment on WBP_InventoryBar_EmptyPouchSlot_C_EquipInventorySlotItem");
static_assert(sizeof(WBP_InventoryBar_EmptyPouchSlot_C_EquipInventorySlotItem) == 0x000002, "Wrong size on WBP_InventoryBar_EmptyPouchSlot_C_EquipInventorySlotItem");
static_assert(offsetof(WBP_InventoryBar_EmptyPouchSlot_C_EquipInventorySlotItem, bMainHand) == 0x000000, "Member 'WBP_InventoryBar_EmptyPouchSlot_C_EquipInventorySlotItem::bMainHand' has a wrong offset!");
static_assert(offsetof(WBP_InventoryBar_EmptyPouchSlot_C_EquipInventorySlotItem, bImmediate) == 0x000001, "Member 'WBP_InventoryBar_EmptyPouchSlot_C_EquipInventorySlotItem::bImmediate' has a wrong offset!");

// Function WBP_InventoryBar_EmptyPouchSlot.WBP_InventoryBar_EmptyPouchSlot_C.SetInventorySlotItem
// 0x0008 (0x0008 - 0x0000)
struct WBP_InventoryBar_EmptyPouchSlot_C_SetInventorySlotItem final
{
public:
	class AGBInvItem*                             InItem;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_InventoryBar_EmptyPouchSlot_C_SetInventorySlotItem) == 0x000008, "Wrong alignment on WBP_InventoryBar_EmptyPouchSlot_C_SetInventorySlotItem");
static_assert(sizeof(WBP_InventoryBar_EmptyPouchSlot_C_SetInventorySlotItem) == 0x000008, "Wrong size on WBP_InventoryBar_EmptyPouchSlot_C_SetInventorySlotItem");
static_assert(offsetof(WBP_InventoryBar_EmptyPouchSlot_C_SetInventorySlotItem, InItem) == 0x000000, "Member 'WBP_InventoryBar_EmptyPouchSlot_C_SetInventorySlotItem::InItem' has a wrong offset!");

// Function WBP_InventoryBar_EmptyPouchSlot.WBP_InventoryBar_EmptyPouchSlot_C.GetVisibility_0
// 0x0001 (0x0001 - 0x0000)
struct WBP_InventoryBar_EmptyPouchSlot_C_GetVisibility_0 final
{
public:
	ESlateVisibility                              ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_InventoryBar_EmptyPouchSlot_C_GetVisibility_0) == 0x000001, "Wrong alignment on WBP_InventoryBar_EmptyPouchSlot_C_GetVisibility_0");
static_assert(sizeof(WBP_InventoryBar_EmptyPouchSlot_C_GetVisibility_0) == 0x000001, "Wrong size on WBP_InventoryBar_EmptyPouchSlot_C_GetVisibility_0");
static_assert(offsetof(WBP_InventoryBar_EmptyPouchSlot_C_GetVisibility_0, ReturnValue) == 0x000000, "Member 'WBP_InventoryBar_EmptyPouchSlot_C_GetVisibility_0::ReturnValue' has a wrong offset!");

}

