﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_CE_List

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"
#include "GameplayTags_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_CE_List.WBP_CE_List_C
// 0x0328 (0x0588 - 0x0260)
class UWBP_CE_List_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0260(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UBackgroundBlur*                        BackgroundBlur_1;                                  // 0x0268(0x0008)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                Button_Cancel;                                     // 0x0270(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                Button_ClearSearch;                                // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                Button_ModAndCustomBuildFilter;                    // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                Button_SaveNone;                                   // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                Button_SelectNone;                                 // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCheckBox*                              CheckBox_ApplyToChildren;                          // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEditableTextBox*                       EditableTextBox_Search;                            // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UGBCustomTileView*                      GBCustomTileView_List;                             // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         HorizontalBox_ApplyToChildren;                     // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         HorizontalBox_RegularLayout;                       // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_CancelImage;                                 // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_ClearSearchCross;                            // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_EyeIcon;                                     // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_SelectNoneBackground;                        // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_SelectNoneIcon;                              // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               Overlay_SelectNone;                                // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               SizeBox_SelectNone;                                // 0x02F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               SizeBox_TileViewList;                              // 0x02F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextBlock_Message;                                 // 0x0300(0x0008)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextBlock_SelectNone;                              // 0x0308(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextBlock_Title;                                   // 0x0310(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUniformGridPanel*                      UniformGridPanel_CategoryTags;                     // 0x0318(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           VerticalBox_AttachSearchAndCategoriesBox;          // 0x0320(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           VerticalBox_ForAlternateLayout;                    // 0x0328(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           VerticalBox_SearchAndCategories;                   // 0x0330(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TMulticastInlineDelegate<void()>              OnShow;                                            // 0x0338(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TMulticastInlineDelegate<void()>              OnClosed;                                          // 0x0348(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          bAlternateLayout;                                  // 0x0358(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_359[0x7];                                      // 0x0359(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   Title;                                             // 0x0360(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                          bShowSelectNone;                                   // 0x0378(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bShowSave;                                         // 0x0379(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_37A[0x6];                                      // 0x037A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	TMulticastInlineDelegate<void()>              OnClear;                                           // 0x0380(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TMulticastInlineDelegate<void(class UBP_CE_ListObjBase_C* CharactedEditorListObjBase)> OnItemClicked; // 0x0390(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class FString                                 NameFilter;                                        // 0x03A0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	TArray<class UWBP_Editor_ListCategory_C*>     OldCategoryWidgets;                                // 0x03B0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	TArray<struct FGameplayTag>                   DefaultCheckedInvItemCategoryTags;                 // 0x03C0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FGameplayTag>                   ExcludeInvItemCategoryTags;                        // 0x03D0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TSoftClassPtr<class UClass>                   ListContentsClass;                                 // 0x03E0(0x0028)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	class UClass*                                 ListContentsClassRef;                              // 0x0408(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TMulticastInlineDelegate<void()>              OnFilterUpdate;                                    // 0x0410(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TMulticastInlineDelegate<void(class UBP_CE_ListObjBase_C* DeletedObject)> OnRemoveObject;        // 0x0420(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TMulticastInlineDelegate<void(class UBP_CE_ListObjBase_C* ObjectToAdd)> OnAddObject;             // 0x0430(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FMargin                                RegularLayoutPadding;                              // 0x0440(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FMargin                                AlternateLayoutPadding;                            // 0x0450(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FVector2D                              DefaultSize;                                       // 0x0460(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              TextOnlySize;                                      // 0x0468(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 IInvItemListCheckedTagsConfigSection;              // 0x0470(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	struct FGameplayTagContainer                  InvItemUICategoryTag;                              // 0x0480(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                   NoneSelectedText;                                  // 0x04A0(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	TMulticastInlineDelegate<void(bool bIsChecked)> OnApplyToChildrenCheckStateChanged;              // 0x04B8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TMulticastInlineDelegate<void(class UBP_CE_ListObjBase_C* ObjectToEdit)> OnEdit;                 // 0x04C8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TMulticastInlineDelegate<void()>              OnSave;                                            // 0x04D8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class UWBP_CE_ListFilters_Base_C*             ListFilter;                                        // 0x04E8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           FilterInactiveEyeTintColour;                       // 0x04F0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           FilterActiveEyeTintColour;                         // 0x0500(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   FilterTitle;                                       // 0x0510(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                   AllCategory;                                       // 0x0528(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                   ApplyToChildrenText;                               // 0x0540(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UWBP_Editor_ListCategory_C*             AllCategoryRef;                                    // 0x0558(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   ApplyToChildrenParameter;                          // 0x0560(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FString                                 ApplyToChildrenConfigKey;                          // 0x0578(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_WBP_CE_List(int32 EntryPoint);
	void SetApplyToChildrenInfo(const class FText& ApplyToChildrenParameter_0, const class FString& ApplyToConfigKey);
	void CreateAllCategory();
	void BndEvt__WBP_CE_List_Button_ModAndCustomBuildFilter_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature();
	void OnListFilterUpdate_Event_0();
	void SetListFilter(class UWBP_CE_ListFilters_Base_C* ListFilter_0);
	void BndEvt__WBP_CE_List_Button_SaveNone_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__WBP_CE_List_CheckBox_ApplyToChildren_K2Node_ComponentBoundEvent_2_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
	void SetShowSelectNone(bool bShowSelectNone_0, const class FText& NoneSelectedText_0);
	void OnCheckStateChanged();
	void ResetEntrySize();
	void SetEntrySize(const struct FVector2D& EntrySize);
	void BndEvt__WBP_CE_List_GBCustomTileView_List_K2Node_ComponentBoundEvent_0_SimpleListItemEventDynamic__DelegateSignature(class UObject* Item);
	void UnbindButtonEvents();
	void TextOnlyMode();
	void PreConstruct(bool IsDesignTime);
	void AddObject(class UBP_CE_ListObjBase_C* ObjectToAdd);
	void RemoveObject(class UBP_CE_ListObjBase_C* ObjectToRemove);
	void Construct();
	void BP_OnEntryGenerated_Event_0(class UUserWidget* Widget);
	void BindCategory(class UWBP_Editor_ListCategory_C* InCategoryWidget);
	void BndEvt__Button_Clear_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__EditableTextBox_Search_K2Node_ComponentBoundEvent_3_OnEditableTextBoxChangedEvent__DelegateSignature(const class FText& Text);
	void BndEvt__WBP_CharacterEditor_ItemList_Button_ClearRight_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
	void Show(const class FText& InTitle, TSoftClassPtr<class UClass> InListContentsClass, class UWBP_CE_ListFilters_Base_C* InListFilter);
	void HideIfVisible();
	void Close();
	void BndEvt__WBP_RightItemList_Button_CancelRight_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void OnLoaded_9FDE856216A34557899C15E15E059A96(TSubclassOf<class UObject> Loaded);
	ESlateVisibility GetClearVis();
	ESlateVisibility GetSaveVis();
	void SetCategoryTags(const struct FGameplayTagContainer& InInvItemCategoryTags);
	void DetermineCategoryTags(TArray<class UBP_CE_ListObjBase_C*>& InCharactedEditorListObjBases);
	void PassedFilter(class UBP_CE_ListObjBase_C* InCEListObjBase, bool* bOutPassed);
	bool CheckedByDefault(const struct FGameplayTag& InCategoryTag);
	ESlateVisibility GetApplyToChildrenVis();
	ESlateVisibility GetFilterButtonVis();
	struct FLinearColor GetEyeFilterColour();
	class UWidget* GetFilterToolTipWidget();
	class FText GetApplyToChildrenText();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_CE_List_C">();
	}
	static class UWBP_CE_List_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_CE_List_C>();
	}
};
static_assert(alignof(UWBP_CE_List_C) == 0x000008, "Wrong alignment on UWBP_CE_List_C");
static_assert(sizeof(UWBP_CE_List_C) == 0x000588, "Wrong size on UWBP_CE_List_C");
static_assert(offsetof(UWBP_CE_List_C, UberGraphFrame) == 0x000260, "Member 'UWBP_CE_List_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_CE_List_C, BackgroundBlur_1) == 0x000268, "Member 'UWBP_CE_List_C::BackgroundBlur_1' has a wrong offset!");
static_assert(offsetof(UWBP_CE_List_C, Button_Cancel) == 0x000270, "Member 'UWBP_CE_List_C::Button_Cancel' has a wrong offset!");
static_assert(offsetof(UWBP_CE_List_C, Button_ClearSearch) == 0x000278, "Member 'UWBP_CE_List_C::Button_ClearSearch' has a wrong offset!");
static_assert(offsetof(UWBP_CE_List_C, Button_ModAndCustomBuildFilter) == 0x000280, "Member 'UWBP_CE_List_C::Button_ModAndCustomBuildFilter' has a wrong offset!");
static_assert(offsetof(UWBP_CE_List_C, Button_SaveNone) == 0x000288, "Member 'UWBP_CE_List_C::Button_SaveNone' has a wrong offset!");
static_assert(offsetof(UWBP_CE_List_C, Button_SelectNone) == 0x000290, "Member 'UWBP_CE_List_C::Button_SelectNone' has a wrong offset!");
static_assert(offsetof(UWBP_CE_List_C, CheckBox_ApplyToChildren) == 0x000298, "Member 'UWBP_CE_List_C::CheckBox_ApplyToChildren' has a wrong offset!");
static_assert(offsetof(UWBP_CE_List_C, EditableTextBox_Search) == 0x0002A0, "Member 'UWBP_CE_List_C::EditableTextBox_Search' has a wrong offset!");
static_assert(offsetof(UWBP_CE_List_C, GBCustomTileView_List) == 0x0002A8, "Member 'UWBP_CE_List_C::GBCustomTileView_List' has a wrong offset!");
static_assert(offsetof(UWBP_CE_List_C, HorizontalBox_ApplyToChildren) == 0x0002B0, "Member 'UWBP_CE_List_C::HorizontalBox_ApplyToChildren' has a wrong offset!");
static_assert(offsetof(UWBP_CE_List_C, HorizontalBox_RegularLayout) == 0x0002B8, "Member 'UWBP_CE_List_C::HorizontalBox_RegularLayout' has a wrong offset!");
static_assert(offsetof(UWBP_CE_List_C, Image_CancelImage) == 0x0002C0, "Member 'UWBP_CE_List_C::Image_CancelImage' has a wrong offset!");
static_assert(offsetof(UWBP_CE_List_C, Image_ClearSearchCross) == 0x0002C8, "Member 'UWBP_CE_List_C::Image_ClearSearchCross' has a wrong offset!");
static_assert(offsetof(UWBP_CE_List_C, Image_EyeIcon) == 0x0002D0, "Member 'UWBP_CE_List_C::Image_EyeIcon' has a wrong offset!");
static_assert(offsetof(UWBP_CE_List_C, Image_SelectNoneBackground) == 0x0002D8, "Member 'UWBP_CE_List_C::Image_SelectNoneBackground' has a wrong offset!");
static_assert(offsetof(UWBP_CE_List_C, Image_SelectNoneIcon) == 0x0002E0, "Member 'UWBP_CE_List_C::Image_SelectNoneIcon' has a wrong offset!");
static_assert(offsetof(UWBP_CE_List_C, Overlay_SelectNone) == 0x0002E8, "Member 'UWBP_CE_List_C::Overlay_SelectNone' has a wrong offset!");
static_assert(offsetof(UWBP_CE_List_C, SizeBox_SelectNone) == 0x0002F0, "Member 'UWBP_CE_List_C::SizeBox_SelectNone' has a wrong offset!");
static_assert(offsetof(UWBP_CE_List_C, SizeBox_TileViewList) == 0x0002F8, "Member 'UWBP_CE_List_C::SizeBox_TileViewList' has a wrong offset!");
static_assert(offsetof(UWBP_CE_List_C, TextBlock_Message) == 0x000300, "Member 'UWBP_CE_List_C::TextBlock_Message' has a wrong offset!");
static_assert(offsetof(UWBP_CE_List_C, TextBlock_SelectNone) == 0x000308, "Member 'UWBP_CE_List_C::TextBlock_SelectNone' has a wrong offset!");
static_assert(offsetof(UWBP_CE_List_C, TextBlock_Title) == 0x000310, "Member 'UWBP_CE_List_C::TextBlock_Title' has a wrong offset!");
static_assert(offsetof(UWBP_CE_List_C, UniformGridPanel_CategoryTags) == 0x000318, "Member 'UWBP_CE_List_C::UniformGridPanel_CategoryTags' has a wrong offset!");
static_assert(offsetof(UWBP_CE_List_C, VerticalBox_AttachSearchAndCategoriesBox) == 0x000320, "Member 'UWBP_CE_List_C::VerticalBox_AttachSearchAndCategoriesBox' has a wrong offset!");
static_assert(offsetof(UWBP_CE_List_C, VerticalBox_ForAlternateLayout) == 0x000328, "Member 'UWBP_CE_List_C::VerticalBox_ForAlternateLayout' has a wrong offset!");
static_assert(offsetof(UWBP_CE_List_C, VerticalBox_SearchAndCategories) == 0x000330, "Member 'UWBP_CE_List_C::VerticalBox_SearchAndCategories' has a wrong offset!");
static_assert(offsetof(UWBP_CE_List_C, OnShow) == 0x000338, "Member 'UWBP_CE_List_C::OnShow' has a wrong offset!");
static_assert(offsetof(UWBP_CE_List_C, OnClosed) == 0x000348, "Member 'UWBP_CE_List_C::OnClosed' has a wrong offset!");
static_assert(offsetof(UWBP_CE_List_C, bAlternateLayout) == 0x000358, "Member 'UWBP_CE_List_C::bAlternateLayout' has a wrong offset!");
static_assert(offsetof(UWBP_CE_List_C, Title) == 0x000360, "Member 'UWBP_CE_List_C::Title' has a wrong offset!");
static_assert(offsetof(UWBP_CE_List_C, bShowSelectNone) == 0x000378, "Member 'UWBP_CE_List_C::bShowSelectNone' has a wrong offset!");
static_assert(offsetof(UWBP_CE_List_C, bShowSave) == 0x000379, "Member 'UWBP_CE_List_C::bShowSave' has a wrong offset!");
static_assert(offsetof(UWBP_CE_List_C, OnClear) == 0x000380, "Member 'UWBP_CE_List_C::OnClear' has a wrong offset!");
static_assert(offsetof(UWBP_CE_List_C, OnItemClicked) == 0x000390, "Member 'UWBP_CE_List_C::OnItemClicked' has a wrong offset!");
static_assert(offsetof(UWBP_CE_List_C, NameFilter) == 0x0003A0, "Member 'UWBP_CE_List_C::NameFilter' has a wrong offset!");
static_assert(offsetof(UWBP_CE_List_C, OldCategoryWidgets) == 0x0003B0, "Member 'UWBP_CE_List_C::OldCategoryWidgets' has a wrong offset!");
static_assert(offsetof(UWBP_CE_List_C, DefaultCheckedInvItemCategoryTags) == 0x0003C0, "Member 'UWBP_CE_List_C::DefaultCheckedInvItemCategoryTags' has a wrong offset!");
static_assert(offsetof(UWBP_CE_List_C, ExcludeInvItemCategoryTags) == 0x0003D0, "Member 'UWBP_CE_List_C::ExcludeInvItemCategoryTags' has a wrong offset!");
static_assert(offsetof(UWBP_CE_List_C, ListContentsClass) == 0x0003E0, "Member 'UWBP_CE_List_C::ListContentsClass' has a wrong offset!");
static_assert(offsetof(UWBP_CE_List_C, ListContentsClassRef) == 0x000408, "Member 'UWBP_CE_List_C::ListContentsClassRef' has a wrong offset!");
static_assert(offsetof(UWBP_CE_List_C, OnFilterUpdate) == 0x000410, "Member 'UWBP_CE_List_C::OnFilterUpdate' has a wrong offset!");
static_assert(offsetof(UWBP_CE_List_C, OnRemoveObject) == 0x000420, "Member 'UWBP_CE_List_C::OnRemoveObject' has a wrong offset!");
static_assert(offsetof(UWBP_CE_List_C, OnAddObject) == 0x000430, "Member 'UWBP_CE_List_C::OnAddObject' has a wrong offset!");
static_assert(offsetof(UWBP_CE_List_C, RegularLayoutPadding) == 0x000440, "Member 'UWBP_CE_List_C::RegularLayoutPadding' has a wrong offset!");
static_assert(offsetof(UWBP_CE_List_C, AlternateLayoutPadding) == 0x000450, "Member 'UWBP_CE_List_C::AlternateLayoutPadding' has a wrong offset!");
static_assert(offsetof(UWBP_CE_List_C, DefaultSize) == 0x000460, "Member 'UWBP_CE_List_C::DefaultSize' has a wrong offset!");
static_assert(offsetof(UWBP_CE_List_C, TextOnlySize) == 0x000468, "Member 'UWBP_CE_List_C::TextOnlySize' has a wrong offset!");
static_assert(offsetof(UWBP_CE_List_C, IInvItemListCheckedTagsConfigSection) == 0x000470, "Member 'UWBP_CE_List_C::IInvItemListCheckedTagsConfigSection' has a wrong offset!");
static_assert(offsetof(UWBP_CE_List_C, InvItemUICategoryTag) == 0x000480, "Member 'UWBP_CE_List_C::InvItemUICategoryTag' has a wrong offset!");
static_assert(offsetof(UWBP_CE_List_C, NoneSelectedText) == 0x0004A0, "Member 'UWBP_CE_List_C::NoneSelectedText' has a wrong offset!");
static_assert(offsetof(UWBP_CE_List_C, OnApplyToChildrenCheckStateChanged) == 0x0004B8, "Member 'UWBP_CE_List_C::OnApplyToChildrenCheckStateChanged' has a wrong offset!");
static_assert(offsetof(UWBP_CE_List_C, OnEdit) == 0x0004C8, "Member 'UWBP_CE_List_C::OnEdit' has a wrong offset!");
static_assert(offsetof(UWBP_CE_List_C, OnSave) == 0x0004D8, "Member 'UWBP_CE_List_C::OnSave' has a wrong offset!");
static_assert(offsetof(UWBP_CE_List_C, ListFilter) == 0x0004E8, "Member 'UWBP_CE_List_C::ListFilter' has a wrong offset!");
static_assert(offsetof(UWBP_CE_List_C, FilterInactiveEyeTintColour) == 0x0004F0, "Member 'UWBP_CE_List_C::FilterInactiveEyeTintColour' has a wrong offset!");
static_assert(offsetof(UWBP_CE_List_C, FilterActiveEyeTintColour) == 0x000500, "Member 'UWBP_CE_List_C::FilterActiveEyeTintColour' has a wrong offset!");
static_assert(offsetof(UWBP_CE_List_C, FilterTitle) == 0x000510, "Member 'UWBP_CE_List_C::FilterTitle' has a wrong offset!");
static_assert(offsetof(UWBP_CE_List_C, AllCategory) == 0x000528, "Member 'UWBP_CE_List_C::AllCategory' has a wrong offset!");
static_assert(offsetof(UWBP_CE_List_C, ApplyToChildrenText) == 0x000540, "Member 'UWBP_CE_List_C::ApplyToChildrenText' has a wrong offset!");
static_assert(offsetof(UWBP_CE_List_C, AllCategoryRef) == 0x000558, "Member 'UWBP_CE_List_C::AllCategoryRef' has a wrong offset!");
static_assert(offsetof(UWBP_CE_List_C, ApplyToChildrenParameter) == 0x000560, "Member 'UWBP_CE_List_C::ApplyToChildrenParameter' has a wrong offset!");
static_assert(offsetof(UWBP_CE_List_C, ApplyToChildrenConfigKey) == 0x000578, "Member 'UWBP_CE_List_C::ApplyToChildrenConfigKey' has a wrong offset!");

}

