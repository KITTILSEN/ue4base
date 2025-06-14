﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_HF_Outline

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_HF_Outline.WBP_HF_Outline_C
// 0x00B0 (0x0310 - 0x0260)
class UWBP_HF_Outline_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0260(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UEditableTextBox*                       EditableTextBox_Search;                            // 0x0268(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UListView*                              ListView_Outline;                                  // 0x0270(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextBlock_1;                                       // 0x0278(0x0008)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                          bAscendingOrder;                                   // 0x0280(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bByClass;                                          // 0x0281(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_282[0x6];                                      // 0x0282(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class AActor*>                         ActorList;                                         // 0x0288(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	class AHFManager*                             HotFootManagerRef;                                 // 0x0298(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bMultiSelectHack;                                  // 0x02A0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2A1[0x7];                                      // 0x02A1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class AActor*>                         RemovedItems;                                      // 0x02A8(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	TArray<class UObject*>                        SelectedItems_List;                                // 0x02B8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class AActor*>                         SelectItems_Manager;                               // 0x02C8(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	class UObject*                                StartIndexItem;                                    // 0x02D8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                EndIndexItem;                                      // 0x02E0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bLeftShift;                                        // 0x02E8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bRightShift;                                       // 0x02E9(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bLeftCtrl;                                         // 0x02EA(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bRightCtrl;                                        // 0x02EB(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	int32                                         StartIndex;                                        // 0x02EC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         EndIndex;                                          // 0x02F0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bNothingSelectedInView;                            // 0x02F4(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bCallOutlineSelectionChange;                       // 0x02F5(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2F6[0x2];                                      // 0x02F6(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	TMulticastInlineDelegate<void()>              OnSelectionChanged;                                // 0x02F8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class FName                                   ActorTag;                                          // 0x0308(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	struct FEventReply HandleKeyDown(const struct FKeyEvent& KeyEvent);
	struct FEventReply OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent);
	class FText GetText_0();
	void GetSortedAndFilteredList(TArray<class AActor*>* OutFilteredActors);
	void OnSelectionChanged_Event_0();
	void BindOnSelectionChanged();
	void UpdateOutline();
	void Bind_ActorStatusChangeDelegates();
	void OnActorSpawned_Event_0(class AActor* Actor);
	void BndEvt__ListView_Outline_K2Node_ComponentBoundEvent_18_SimpleListItemEventDynamic__DelegateSignature(class UObject* Item);
	void BndEvt__ListView_Outline_K2Node_ComponentBoundEvent_20_OnListItemSelectionChangedDynamic__DelegateSignature(class UObject* Item, bool bIsSelected);
	void ControlSelect();
	void ShiftSelect();
	void BndEvt__EditableTextBox_TeamId_K2Node_ComponentBoundEvent_15_OnEditableTextBoxChangedEvent__DelegateSignature(const class FText& Text);
	void BndEvt__ListView_Outline_K2Node_ComponentBoundEvent_0_OnListEntryGeneratedDynamic__DelegateSignature(class UUserWidget* Widget);
	void OnLeftShift_Event_0(bool bDown);
	void OnRightShift_Event_0(bool bDown);
	void OnLeftCtrl_Event_0(bool bDown);
	void OnRightCtrl_Event_0(bool bDown);
	void BndEvt__ListView_Outline_K2Node_ComponentBoundEvent_1_OnListEntryReleasedDynamic__DelegateSignature(class UUserWidget* Widget);
	void SetHotfootManager(class AHFManager* HotFootManagerRef_0, class FName ActorTag_0);
	void BndEvt__WBP_HF_Outline_ListView_Outline_K2Node_ComponentBoundEvent_2_SimpleListItemEventDynamic__DelegateSignature(class UObject* Item);
	void OnForwardedKeyDown();
	void ExecuteUbergraph_WBP_HF_Outline(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_HF_Outline_C">();
	}
	static class UWBP_HF_Outline_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_HF_Outline_C>();
	}
};
static_assert(alignof(UWBP_HF_Outline_C) == 0x000008, "Wrong alignment on UWBP_HF_Outline_C");
static_assert(sizeof(UWBP_HF_Outline_C) == 0x000310, "Wrong size on UWBP_HF_Outline_C");
static_assert(offsetof(UWBP_HF_Outline_C, UberGraphFrame) == 0x000260, "Member 'UWBP_HF_Outline_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_HF_Outline_C, EditableTextBox_Search) == 0x000268, "Member 'UWBP_HF_Outline_C::EditableTextBox_Search' has a wrong offset!");
static_assert(offsetof(UWBP_HF_Outline_C, ListView_Outline) == 0x000270, "Member 'UWBP_HF_Outline_C::ListView_Outline' has a wrong offset!");
static_assert(offsetof(UWBP_HF_Outline_C, TextBlock_1) == 0x000278, "Member 'UWBP_HF_Outline_C::TextBlock_1' has a wrong offset!");
static_assert(offsetof(UWBP_HF_Outline_C, bAscendingOrder) == 0x000280, "Member 'UWBP_HF_Outline_C::bAscendingOrder' has a wrong offset!");
static_assert(offsetof(UWBP_HF_Outline_C, bByClass) == 0x000281, "Member 'UWBP_HF_Outline_C::bByClass' has a wrong offset!");
static_assert(offsetof(UWBP_HF_Outline_C, ActorList) == 0x000288, "Member 'UWBP_HF_Outline_C::ActorList' has a wrong offset!");
static_assert(offsetof(UWBP_HF_Outline_C, HotFootManagerRef) == 0x000298, "Member 'UWBP_HF_Outline_C::HotFootManagerRef' has a wrong offset!");
static_assert(offsetof(UWBP_HF_Outline_C, bMultiSelectHack) == 0x0002A0, "Member 'UWBP_HF_Outline_C::bMultiSelectHack' has a wrong offset!");
static_assert(offsetof(UWBP_HF_Outline_C, RemovedItems) == 0x0002A8, "Member 'UWBP_HF_Outline_C::RemovedItems' has a wrong offset!");
static_assert(offsetof(UWBP_HF_Outline_C, SelectedItems_List) == 0x0002B8, "Member 'UWBP_HF_Outline_C::SelectedItems_List' has a wrong offset!");
static_assert(offsetof(UWBP_HF_Outline_C, SelectItems_Manager) == 0x0002C8, "Member 'UWBP_HF_Outline_C::SelectItems_Manager' has a wrong offset!");
static_assert(offsetof(UWBP_HF_Outline_C, StartIndexItem) == 0x0002D8, "Member 'UWBP_HF_Outline_C::StartIndexItem' has a wrong offset!");
static_assert(offsetof(UWBP_HF_Outline_C, EndIndexItem) == 0x0002E0, "Member 'UWBP_HF_Outline_C::EndIndexItem' has a wrong offset!");
static_assert(offsetof(UWBP_HF_Outline_C, bLeftShift) == 0x0002E8, "Member 'UWBP_HF_Outline_C::bLeftShift' has a wrong offset!");
static_assert(offsetof(UWBP_HF_Outline_C, bRightShift) == 0x0002E9, "Member 'UWBP_HF_Outline_C::bRightShift' has a wrong offset!");
static_assert(offsetof(UWBP_HF_Outline_C, bLeftCtrl) == 0x0002EA, "Member 'UWBP_HF_Outline_C::bLeftCtrl' has a wrong offset!");
static_assert(offsetof(UWBP_HF_Outline_C, bRightCtrl) == 0x0002EB, "Member 'UWBP_HF_Outline_C::bRightCtrl' has a wrong offset!");
static_assert(offsetof(UWBP_HF_Outline_C, StartIndex) == 0x0002EC, "Member 'UWBP_HF_Outline_C::StartIndex' has a wrong offset!");
static_assert(offsetof(UWBP_HF_Outline_C, EndIndex) == 0x0002F0, "Member 'UWBP_HF_Outline_C::EndIndex' has a wrong offset!");
static_assert(offsetof(UWBP_HF_Outline_C, bNothingSelectedInView) == 0x0002F4, "Member 'UWBP_HF_Outline_C::bNothingSelectedInView' has a wrong offset!");
static_assert(offsetof(UWBP_HF_Outline_C, bCallOutlineSelectionChange) == 0x0002F5, "Member 'UWBP_HF_Outline_C::bCallOutlineSelectionChange' has a wrong offset!");
static_assert(offsetof(UWBP_HF_Outline_C, OnSelectionChanged) == 0x0002F8, "Member 'UWBP_HF_Outline_C::OnSelectionChanged' has a wrong offset!");
static_assert(offsetof(UWBP_HF_Outline_C, ActorTag) == 0x000308, "Member 'UWBP_HF_Outline_C::ActorTag' has a wrong offset!");

}

