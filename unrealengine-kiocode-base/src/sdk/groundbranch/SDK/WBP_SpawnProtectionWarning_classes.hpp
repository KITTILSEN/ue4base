﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_SpawnProtectionWarning

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_SpawnProtectionWarning.WBP_SpawnProtectionWarning_C
// 0x0028 (0x0288 - 0x0260)
class UWBP_SpawnProtectionWarning_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0260(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 Image;                                             // 0x0268(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_0;                                           // 0x0270(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextBlock_SpawnProtectionAreaName;                 // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextBlock_SpawnProtectionWarningText;              // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_WBP_SpawnProtectionWarning(int32 EntryPoint);
	void OnPlayerControllerStateChanged_Event_0(class FName OldState, class FName NewState);
	void OnPlayerReadyRoomStatusChanged_Event_0(class AGBPlayerState* PlayerState);
	void Construct();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_SpawnProtectionWarning_C">();
	}
	static class UWBP_SpawnProtectionWarning_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_SpawnProtectionWarning_C>();
	}
};
static_assert(alignof(UWBP_SpawnProtectionWarning_C) == 0x000008, "Wrong alignment on UWBP_SpawnProtectionWarning_C");
static_assert(sizeof(UWBP_SpawnProtectionWarning_C) == 0x000288, "Wrong size on UWBP_SpawnProtectionWarning_C");
static_assert(offsetof(UWBP_SpawnProtectionWarning_C, UberGraphFrame) == 0x000260, "Member 'UWBP_SpawnProtectionWarning_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_SpawnProtectionWarning_C, Image) == 0x000268, "Member 'UWBP_SpawnProtectionWarning_C::Image' has a wrong offset!");
static_assert(offsetof(UWBP_SpawnProtectionWarning_C, Image_0) == 0x000270, "Member 'UWBP_SpawnProtectionWarning_C::Image_0' has a wrong offset!");
static_assert(offsetof(UWBP_SpawnProtectionWarning_C, TextBlock_SpawnProtectionAreaName) == 0x000278, "Member 'UWBP_SpawnProtectionWarning_C::TextBlock_SpawnProtectionAreaName' has a wrong offset!");
static_assert(offsetof(UWBP_SpawnProtectionWarning_C, TextBlock_SpawnProtectionWarningText) == 0x000280, "Member 'UWBP_SpawnProtectionWarning_C::TextBlock_SpawnProtectionWarningText' has a wrong offset!");

}

