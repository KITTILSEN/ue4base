﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_World_Prompt

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"
#include "ModKit_structs.hpp"
#include "GroundBranch_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_World_Prompt.WBP_World_Prompt_C
// 0x0078 (0x02D8 - 0x0260)
class UWBP_World_Prompt_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0260(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 Image_Arrow;                                       // 0x0268(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               Overlay_OffScreen;                                 // 0x0270(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               SizeBox_RingIcon;                                  // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               SizeBox_SquareIcon;                                // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextBlock_PromptText;                              // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FVector                                Location;                                          // 0x0290(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class FName                                   Tag;                                               // 0x029C(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	float                                         Duration;                                          // 0x02A4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	float                                         RotationAngle;                                     // 0x02A8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bIsOnScreen;                                       // 0x02AC(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2AD[0x3];                                      // 0x02AD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FUInt64                                ModID;                                             // 0x02B0(0x0008)(Edit, BlueprintVisible, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                          bTickCalledYet;                                    // 0x02B8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2B9[0x3];                                      // 0x02B9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         FadeOutStartTime;                                  // 0x02BC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         OriginalDuration;                                  // 0x02C0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bDead;                                             // 0x02C4(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2C5[0x3];                                      // 0x02C5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         XMin;                                              // 0x02C8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         XMax;                                              // 0x02CC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         YMin;                                              // 0x02D0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         YMax;                                              // 0x02D4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void Construct();
	void OnPlayerReadyRoomStatusChanged_Event_0(class AGBPlayerState* PlayerState);
	void UpdatePrompt(float NewDuration, const struct FVector& NewLocation);
	void ExecuteUbergraph_WBP_World_Prompt(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_World_Prompt_C">();
	}
	static class UWBP_World_Prompt_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_World_Prompt_C>();
	}
};
static_assert(alignof(UWBP_World_Prompt_C) == 0x000008, "Wrong alignment on UWBP_World_Prompt_C");
static_assert(sizeof(UWBP_World_Prompt_C) == 0x0002D8, "Wrong size on UWBP_World_Prompt_C");
static_assert(offsetof(UWBP_World_Prompt_C, UberGraphFrame) == 0x000260, "Member 'UWBP_World_Prompt_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_World_Prompt_C, Image_Arrow) == 0x000268, "Member 'UWBP_World_Prompt_C::Image_Arrow' has a wrong offset!");
static_assert(offsetof(UWBP_World_Prompt_C, Overlay_OffScreen) == 0x000270, "Member 'UWBP_World_Prompt_C::Overlay_OffScreen' has a wrong offset!");
static_assert(offsetof(UWBP_World_Prompt_C, SizeBox_RingIcon) == 0x000278, "Member 'UWBP_World_Prompt_C::SizeBox_RingIcon' has a wrong offset!");
static_assert(offsetof(UWBP_World_Prompt_C, SizeBox_SquareIcon) == 0x000280, "Member 'UWBP_World_Prompt_C::SizeBox_SquareIcon' has a wrong offset!");
static_assert(offsetof(UWBP_World_Prompt_C, TextBlock_PromptText) == 0x000288, "Member 'UWBP_World_Prompt_C::TextBlock_PromptText' has a wrong offset!");
static_assert(offsetof(UWBP_World_Prompt_C, Location) == 0x000290, "Member 'UWBP_World_Prompt_C::Location' has a wrong offset!");
static_assert(offsetof(UWBP_World_Prompt_C, Tag) == 0x00029C, "Member 'UWBP_World_Prompt_C::Tag' has a wrong offset!");
static_assert(offsetof(UWBP_World_Prompt_C, Duration) == 0x0002A4, "Member 'UWBP_World_Prompt_C::Duration' has a wrong offset!");
static_assert(offsetof(UWBP_World_Prompt_C, RotationAngle) == 0x0002A8, "Member 'UWBP_World_Prompt_C::RotationAngle' has a wrong offset!");
static_assert(offsetof(UWBP_World_Prompt_C, bIsOnScreen) == 0x0002AC, "Member 'UWBP_World_Prompt_C::bIsOnScreen' has a wrong offset!");
static_assert(offsetof(UWBP_World_Prompt_C, ModID) == 0x0002B0, "Member 'UWBP_World_Prompt_C::ModID' has a wrong offset!");
static_assert(offsetof(UWBP_World_Prompt_C, bTickCalledYet) == 0x0002B8, "Member 'UWBP_World_Prompt_C::bTickCalledYet' has a wrong offset!");
static_assert(offsetof(UWBP_World_Prompt_C, FadeOutStartTime) == 0x0002BC, "Member 'UWBP_World_Prompt_C::FadeOutStartTime' has a wrong offset!");
static_assert(offsetof(UWBP_World_Prompt_C, OriginalDuration) == 0x0002C0, "Member 'UWBP_World_Prompt_C::OriginalDuration' has a wrong offset!");
static_assert(offsetof(UWBP_World_Prompt_C, bDead) == 0x0002C4, "Member 'UWBP_World_Prompt_C::bDead' has a wrong offset!");
static_assert(offsetof(UWBP_World_Prompt_C, XMin) == 0x0002C8, "Member 'UWBP_World_Prompt_C::XMin' has a wrong offset!");
static_assert(offsetof(UWBP_World_Prompt_C, XMax) == 0x0002CC, "Member 'UWBP_World_Prompt_C::XMax' has a wrong offset!");
static_assert(offsetof(UWBP_World_Prompt_C, YMin) == 0x0002D0, "Member 'UWBP_World_Prompt_C::YMin' has a wrong offset!");
static_assert(offsetof(UWBP_World_Prompt_C, YMax) == 0x0002D4, "Member 'UWBP_World_Prompt_C::YMax' has a wrong offset!");

}

