﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_HF_PlaceableDragIcon

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_HF_PlaceableDragIcon.WBP_HF_PlaceableDragIcon_C
// 0x0018 (0x0278 - 0x0260)
class UWBP_HF_PlaceableDragIcon_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0260(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 Image_Icon;                                        // 0x0268(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTexture2D*                             Icon;                                              // 0x0270(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

public:
	void Construct();
	void ExecuteUbergraph_WBP_HF_PlaceableDragIcon(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_HF_PlaceableDragIcon_C">();
	}
	static class UWBP_HF_PlaceableDragIcon_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_HF_PlaceableDragIcon_C>();
	}
};
static_assert(alignof(UWBP_HF_PlaceableDragIcon_C) == 0x000008, "Wrong alignment on UWBP_HF_PlaceableDragIcon_C");
static_assert(sizeof(UWBP_HF_PlaceableDragIcon_C) == 0x000278, "Wrong size on UWBP_HF_PlaceableDragIcon_C");
static_assert(offsetof(UWBP_HF_PlaceableDragIcon_C, UberGraphFrame) == 0x000260, "Member 'UWBP_HF_PlaceableDragIcon_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_HF_PlaceableDragIcon_C, Image_Icon) == 0x000268, "Member 'UWBP_HF_PlaceableDragIcon_C::Image_Icon' has a wrong offset!");
static_assert(offsetof(UWBP_HF_PlaceableDragIcon_C, Icon) == 0x000270, "Member 'UWBP_HF_PlaceableDragIcon_C::Icon' has a wrong offset!");

}

