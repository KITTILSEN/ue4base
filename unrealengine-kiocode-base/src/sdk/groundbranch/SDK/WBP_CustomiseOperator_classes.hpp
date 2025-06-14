﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_CustomiseOperator

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "InputCore_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_CustomiseOperator.WBP_CustomiseOperator_C
// 0x00D8 (0x0338 - 0x0260)
class UWBP_CustomiseOperator_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0260(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWBP_CharacterEditor_C*                 WBP_CharacterEditor;                               // 0x0268(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        WidgetSwitcher_0;                                  // 0x0270(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FName                                   LoadoutName;                                       // 0x0278(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 OldViewTarget;                                     // 0x0280(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TMulticastInlineDelegate<void()>              OnDone;                                            // 0x0288(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TArray<struct FKey>                           GlobalChatKeys;                                    // 0x0298(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FKey>                           TeamChatKeys;                                      // 0x02A8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FKey>                           TalkKeys;                                          // 0x02B8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FKey>                           UseRadioKeys;                                      // 0x02C8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                   MissingRequiredTitle;                              // 0x02D8(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                   MissingRequiredMessage;                            // 0x02F0(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                   SaveFailedTitle;                                   // 0x0308(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                   SaveFailedMessage;                                 // 0x0320(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	struct FEventReply OnPreviewKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent);
	struct FEventReply OnMouseButtonUp(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	struct FEventReply OnMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	struct FEventReply OnKeyUp(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent);
	struct FEventReply OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent);
	void Construct();
	void Close();
	void BndEvt__WBP_CharacterEditor_NEW_K2Node_ComponentBoundEvent_1_OkClicked__DelegateSignature(class UVaRestJsonObject* JsonObj);
	void BndEvt__WBP_CharacterEditor_NEW_K2Node_ComponentBoundEvent_2_CancelClicked__DelegateSignature();
	void OnInitialized();
	void ExecuteUbergraph_WBP_CustomiseOperator(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_CustomiseOperator_C">();
	}
	static class UWBP_CustomiseOperator_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_CustomiseOperator_C>();
	}
};
static_assert(alignof(UWBP_CustomiseOperator_C) == 0x000008, "Wrong alignment on UWBP_CustomiseOperator_C");
static_assert(sizeof(UWBP_CustomiseOperator_C) == 0x000338, "Wrong size on UWBP_CustomiseOperator_C");
static_assert(offsetof(UWBP_CustomiseOperator_C, UberGraphFrame) == 0x000260, "Member 'UWBP_CustomiseOperator_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_CustomiseOperator_C, WBP_CharacterEditor) == 0x000268, "Member 'UWBP_CustomiseOperator_C::WBP_CharacterEditor' has a wrong offset!");
static_assert(offsetof(UWBP_CustomiseOperator_C, WidgetSwitcher_0) == 0x000270, "Member 'UWBP_CustomiseOperator_C::WidgetSwitcher_0' has a wrong offset!");
static_assert(offsetof(UWBP_CustomiseOperator_C, LoadoutName) == 0x000278, "Member 'UWBP_CustomiseOperator_C::LoadoutName' has a wrong offset!");
static_assert(offsetof(UWBP_CustomiseOperator_C, OldViewTarget) == 0x000280, "Member 'UWBP_CustomiseOperator_C::OldViewTarget' has a wrong offset!");
static_assert(offsetof(UWBP_CustomiseOperator_C, OnDone) == 0x000288, "Member 'UWBP_CustomiseOperator_C::OnDone' has a wrong offset!");
static_assert(offsetof(UWBP_CustomiseOperator_C, GlobalChatKeys) == 0x000298, "Member 'UWBP_CustomiseOperator_C::GlobalChatKeys' has a wrong offset!");
static_assert(offsetof(UWBP_CustomiseOperator_C, TeamChatKeys) == 0x0002A8, "Member 'UWBP_CustomiseOperator_C::TeamChatKeys' has a wrong offset!");
static_assert(offsetof(UWBP_CustomiseOperator_C, TalkKeys) == 0x0002B8, "Member 'UWBP_CustomiseOperator_C::TalkKeys' has a wrong offset!");
static_assert(offsetof(UWBP_CustomiseOperator_C, UseRadioKeys) == 0x0002C8, "Member 'UWBP_CustomiseOperator_C::UseRadioKeys' has a wrong offset!");
static_assert(offsetof(UWBP_CustomiseOperator_C, MissingRequiredTitle) == 0x0002D8, "Member 'UWBP_CustomiseOperator_C::MissingRequiredTitle' has a wrong offset!");
static_assert(offsetof(UWBP_CustomiseOperator_C, MissingRequiredMessage) == 0x0002F0, "Member 'UWBP_CustomiseOperator_C::MissingRequiredMessage' has a wrong offset!");
static_assert(offsetof(UWBP_CustomiseOperator_C, SaveFailedTitle) == 0x000308, "Member 'UWBP_CustomiseOperator_C::SaveFailedTitle' has a wrong offset!");
static_assert(offsetof(UWBP_CustomiseOperator_C, SaveFailedMessage) == 0x000320, "Member 'UWBP_CustomiseOperator_C::SaveFailedMessage' has a wrong offset!");

}

