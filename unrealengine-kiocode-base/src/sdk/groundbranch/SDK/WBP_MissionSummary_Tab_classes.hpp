﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_MissionSummary_Tab

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "WBP_Tab_Master_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_MissionSummary_Tab.WBP_MissionSummary_Tab_C
// 0x00A0 (0x0398 - 0x02F8)
class UWBP_MissionSummary_Tab_C final : public UWBP_Tab_Master_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_WBP_MissionSummary_Tab_C;           // 0x02F8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UBorder*                                Border_MatchSummary;                               // 0x0300(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                Button_SwitchToMatchSummary;                       // 0x0308(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             MatchSummaryButtonText;                            // 0x0310(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                   TabName;                                           // 0x0318(0x0018)(Edit, BlueprintVisible, ExposeOnSpawn)
	TMulticastInlineDelegate<void(int32 Index)>   OnSelected;                                        // 0x0330(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	int32                                         Index_0;                                           // 0x0340(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	struct FLinearColor                           SelectedBorderColour;                              // 0x0344(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           DefaultBorderColour;                               // 0x0354(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           In_Brush_Color;                                    // 0x0364(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           SelectedTextColour;                                // 0x0374(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           DefaultTextColour;                                 // 0x0384(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	struct FLinearColor Get_MatchSummaryButtonText_ColorAndOpacity_0();
	struct FLinearColor Get_Border_MatchSummary_BrushColor_0();
	void BndEvt__WBP_MissionSummary_Tab_Button_SwitchToMatchSummary_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void InternalOnSelected();
	void ExecuteUbergraph_WBP_MissionSummary_Tab(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_MissionSummary_Tab_C">();
	}
	static class UWBP_MissionSummary_Tab_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_MissionSummary_Tab_C>();
	}
};
static_assert(alignof(UWBP_MissionSummary_Tab_C) == 0x000008, "Wrong alignment on UWBP_MissionSummary_Tab_C");
static_assert(sizeof(UWBP_MissionSummary_Tab_C) == 0x000398, "Wrong size on UWBP_MissionSummary_Tab_C");
static_assert(offsetof(UWBP_MissionSummary_Tab_C, UberGraphFrame_WBP_MissionSummary_Tab_C) == 0x0002F8, "Member 'UWBP_MissionSummary_Tab_C::UberGraphFrame_WBP_MissionSummary_Tab_C' has a wrong offset!");
static_assert(offsetof(UWBP_MissionSummary_Tab_C, Border_MatchSummary) == 0x000300, "Member 'UWBP_MissionSummary_Tab_C::Border_MatchSummary' has a wrong offset!");
static_assert(offsetof(UWBP_MissionSummary_Tab_C, Button_SwitchToMatchSummary) == 0x000308, "Member 'UWBP_MissionSummary_Tab_C::Button_SwitchToMatchSummary' has a wrong offset!");
static_assert(offsetof(UWBP_MissionSummary_Tab_C, MatchSummaryButtonText) == 0x000310, "Member 'UWBP_MissionSummary_Tab_C::MatchSummaryButtonText' has a wrong offset!");
static_assert(offsetof(UWBP_MissionSummary_Tab_C, TabName) == 0x000318, "Member 'UWBP_MissionSummary_Tab_C::TabName' has a wrong offset!");
static_assert(offsetof(UWBP_MissionSummary_Tab_C, OnSelected) == 0x000330, "Member 'UWBP_MissionSummary_Tab_C::OnSelected' has a wrong offset!");
static_assert(offsetof(UWBP_MissionSummary_Tab_C, Index_0) == 0x000340, "Member 'UWBP_MissionSummary_Tab_C::Index_0' has a wrong offset!");
static_assert(offsetof(UWBP_MissionSummary_Tab_C, SelectedBorderColour) == 0x000344, "Member 'UWBP_MissionSummary_Tab_C::SelectedBorderColour' has a wrong offset!");
static_assert(offsetof(UWBP_MissionSummary_Tab_C, DefaultBorderColour) == 0x000354, "Member 'UWBP_MissionSummary_Tab_C::DefaultBorderColour' has a wrong offset!");
static_assert(offsetof(UWBP_MissionSummary_Tab_C, In_Brush_Color) == 0x000364, "Member 'UWBP_MissionSummary_Tab_C::In_Brush_Color' has a wrong offset!");
static_assert(offsetof(UWBP_MissionSummary_Tab_C, SelectedTextColour) == 0x000374, "Member 'UWBP_MissionSummary_Tab_C::SelectedTextColour' has a wrong offset!");
static_assert(offsetof(UWBP_MissionSummary_Tab_C, DefaultTextColour) == 0x000384, "Member 'UWBP_MissionSummary_Tab_C::DefaultTextColour' has a wrong offset!");

}

