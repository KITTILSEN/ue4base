﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_NetworkFailureOverlay

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_NetworkFailureOverlay.WBP_NetworkFailureOverlay_C
// 0x0360 (0x05C0 - 0x0260)
class UWBP_NetworkFailureOverlay_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0260(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UButton*                                Button_Ok;                                         // 0x0268(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_0;                                           // 0x0270(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextBlock_ErrorMessage;                            // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextBlock_ErrorTitle;                              // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextBlock_Type;                                    // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 TopBar;                                            // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           VerticalBox_Messages;                              // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	ENetworkFailure                               LastNetworkFailureType;                            // 0x02A0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                         Pad_2A1[0x7];                                      // 0x02A1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 LastNetworkErrorMessage;                           // 0x02A8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, ExposeOnSpawn, HasGetValueTypeHash)
	class FText                                   NetDriverAlreadyExists;                            // 0x02B8(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                   NetDriverCreateFailure;                            // 0x02D0(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                   NetDriverListenFailure;                            // 0x02E8(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                   ConnectionLost;                                    // 0x0300(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                   ConnectionTimedOut;                                // 0x0318(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                   FailureReceived;                                   // 0x0330(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                   OutdatedClient;                                    // 0x0348(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                   NotNetworkCompatible;                              // 0x0360(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                   GenericReason;                                     // 0x0378(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                   ServerFullTitle;                                   // 0x0390(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                   ServerFullMessage;                                 // 0x03A8(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                   ServerPasswordTitle;                               // 0x03C0(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                   PasswordRequired;                                  // 0x03D8(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                   WrongPassword;                                     // 0x03F0(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                   NetGuidMismatch;                                   // 0x0408(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                   NetChecksumMismatch;                               // 0x0420(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FString                                 ErrorString;                                       // 0x0438(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	class FString                                 MessageString;                                     // 0x0448(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	class FText                                   BannedTitle;                                       // 0x0458(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                   BannedMessage;                                     // 0x0470(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                   PermanentBan;                                      // 0x0488(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                   KickedTitle;                                       // 0x04A0(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                   NoSteamIdTitle;                                    // 0x04B8(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                   NoSteamIdMessage;                                  // 0x04D0(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                   ConnectionFailed;                                  // 0x04E8(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                   PendingConnectionFailureUnknown;                   // 0x0500(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                   TimeoutSuggestion;                                 // 0x0518(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                   PendingConnectionFailureWithError;                 // 0x0530(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                   ErrorStringProvided;                               // 0x0548(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                   AdminNeededSlotTitle;                              // 0x0560(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                   AdminNeededSlotNessage;                            // 0x0578(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                   MaxPlayerCountChangedTitle;                        // 0x0590(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                   MaxPlayerCountChangedMessage;                      // 0x05A8(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void ExecuteUbergraph_WBP_NetworkFailureOverlay(int32 EntryPoint);
	void SetupFromNetworkFailureType();
	void SetupFromErrorString();
	void RemoveLoadingScreen();
	void BndEvt__Button_Password_Ok_K2Node_ComponentBoundEvent_735_OnButtonClickedEvent__DelegateSignature();
	void Construct();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_NetworkFailureOverlay_C">();
	}
	static class UWBP_NetworkFailureOverlay_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_NetworkFailureOverlay_C>();
	}
};
static_assert(alignof(UWBP_NetworkFailureOverlay_C) == 0x000008, "Wrong alignment on UWBP_NetworkFailureOverlay_C");
static_assert(sizeof(UWBP_NetworkFailureOverlay_C) == 0x0005C0, "Wrong size on UWBP_NetworkFailureOverlay_C");
static_assert(offsetof(UWBP_NetworkFailureOverlay_C, UberGraphFrame) == 0x000260, "Member 'UWBP_NetworkFailureOverlay_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_NetworkFailureOverlay_C, Button_Ok) == 0x000268, "Member 'UWBP_NetworkFailureOverlay_C::Button_Ok' has a wrong offset!");
static_assert(offsetof(UWBP_NetworkFailureOverlay_C, Image_0) == 0x000270, "Member 'UWBP_NetworkFailureOverlay_C::Image_0' has a wrong offset!");
static_assert(offsetof(UWBP_NetworkFailureOverlay_C, TextBlock_ErrorMessage) == 0x000278, "Member 'UWBP_NetworkFailureOverlay_C::TextBlock_ErrorMessage' has a wrong offset!");
static_assert(offsetof(UWBP_NetworkFailureOverlay_C, TextBlock_ErrorTitle) == 0x000280, "Member 'UWBP_NetworkFailureOverlay_C::TextBlock_ErrorTitle' has a wrong offset!");
static_assert(offsetof(UWBP_NetworkFailureOverlay_C, TextBlock_Type) == 0x000288, "Member 'UWBP_NetworkFailureOverlay_C::TextBlock_Type' has a wrong offset!");
static_assert(offsetof(UWBP_NetworkFailureOverlay_C, TopBar) == 0x000290, "Member 'UWBP_NetworkFailureOverlay_C::TopBar' has a wrong offset!");
static_assert(offsetof(UWBP_NetworkFailureOverlay_C, VerticalBox_Messages) == 0x000298, "Member 'UWBP_NetworkFailureOverlay_C::VerticalBox_Messages' has a wrong offset!");
static_assert(offsetof(UWBP_NetworkFailureOverlay_C, LastNetworkFailureType) == 0x0002A0, "Member 'UWBP_NetworkFailureOverlay_C::LastNetworkFailureType' has a wrong offset!");
static_assert(offsetof(UWBP_NetworkFailureOverlay_C, LastNetworkErrorMessage) == 0x0002A8, "Member 'UWBP_NetworkFailureOverlay_C::LastNetworkErrorMessage' has a wrong offset!");
static_assert(offsetof(UWBP_NetworkFailureOverlay_C, NetDriverAlreadyExists) == 0x0002B8, "Member 'UWBP_NetworkFailureOverlay_C::NetDriverAlreadyExists' has a wrong offset!");
static_assert(offsetof(UWBP_NetworkFailureOverlay_C, NetDriverCreateFailure) == 0x0002D0, "Member 'UWBP_NetworkFailureOverlay_C::NetDriverCreateFailure' has a wrong offset!");
static_assert(offsetof(UWBP_NetworkFailureOverlay_C, NetDriverListenFailure) == 0x0002E8, "Member 'UWBP_NetworkFailureOverlay_C::NetDriverListenFailure' has a wrong offset!");
static_assert(offsetof(UWBP_NetworkFailureOverlay_C, ConnectionLost) == 0x000300, "Member 'UWBP_NetworkFailureOverlay_C::ConnectionLost' has a wrong offset!");
static_assert(offsetof(UWBP_NetworkFailureOverlay_C, ConnectionTimedOut) == 0x000318, "Member 'UWBP_NetworkFailureOverlay_C::ConnectionTimedOut' has a wrong offset!");
static_assert(offsetof(UWBP_NetworkFailureOverlay_C, FailureReceived) == 0x000330, "Member 'UWBP_NetworkFailureOverlay_C::FailureReceived' has a wrong offset!");
static_assert(offsetof(UWBP_NetworkFailureOverlay_C, OutdatedClient) == 0x000348, "Member 'UWBP_NetworkFailureOverlay_C::OutdatedClient' has a wrong offset!");
static_assert(offsetof(UWBP_NetworkFailureOverlay_C, NotNetworkCompatible) == 0x000360, "Member 'UWBP_NetworkFailureOverlay_C::NotNetworkCompatible' has a wrong offset!");
static_assert(offsetof(UWBP_NetworkFailureOverlay_C, GenericReason) == 0x000378, "Member 'UWBP_NetworkFailureOverlay_C::GenericReason' has a wrong offset!");
static_assert(offsetof(UWBP_NetworkFailureOverlay_C, ServerFullTitle) == 0x000390, "Member 'UWBP_NetworkFailureOverlay_C::ServerFullTitle' has a wrong offset!");
static_assert(offsetof(UWBP_NetworkFailureOverlay_C, ServerFullMessage) == 0x0003A8, "Member 'UWBP_NetworkFailureOverlay_C::ServerFullMessage' has a wrong offset!");
static_assert(offsetof(UWBP_NetworkFailureOverlay_C, ServerPasswordTitle) == 0x0003C0, "Member 'UWBP_NetworkFailureOverlay_C::ServerPasswordTitle' has a wrong offset!");
static_assert(offsetof(UWBP_NetworkFailureOverlay_C, PasswordRequired) == 0x0003D8, "Member 'UWBP_NetworkFailureOverlay_C::PasswordRequired' has a wrong offset!");
static_assert(offsetof(UWBP_NetworkFailureOverlay_C, WrongPassword) == 0x0003F0, "Member 'UWBP_NetworkFailureOverlay_C::WrongPassword' has a wrong offset!");
static_assert(offsetof(UWBP_NetworkFailureOverlay_C, NetGuidMismatch) == 0x000408, "Member 'UWBP_NetworkFailureOverlay_C::NetGuidMismatch' has a wrong offset!");
static_assert(offsetof(UWBP_NetworkFailureOverlay_C, NetChecksumMismatch) == 0x000420, "Member 'UWBP_NetworkFailureOverlay_C::NetChecksumMismatch' has a wrong offset!");
static_assert(offsetof(UWBP_NetworkFailureOverlay_C, ErrorString) == 0x000438, "Member 'UWBP_NetworkFailureOverlay_C::ErrorString' has a wrong offset!");
static_assert(offsetof(UWBP_NetworkFailureOverlay_C, MessageString) == 0x000448, "Member 'UWBP_NetworkFailureOverlay_C::MessageString' has a wrong offset!");
static_assert(offsetof(UWBP_NetworkFailureOverlay_C, BannedTitle) == 0x000458, "Member 'UWBP_NetworkFailureOverlay_C::BannedTitle' has a wrong offset!");
static_assert(offsetof(UWBP_NetworkFailureOverlay_C, BannedMessage) == 0x000470, "Member 'UWBP_NetworkFailureOverlay_C::BannedMessage' has a wrong offset!");
static_assert(offsetof(UWBP_NetworkFailureOverlay_C, PermanentBan) == 0x000488, "Member 'UWBP_NetworkFailureOverlay_C::PermanentBan' has a wrong offset!");
static_assert(offsetof(UWBP_NetworkFailureOverlay_C, KickedTitle) == 0x0004A0, "Member 'UWBP_NetworkFailureOverlay_C::KickedTitle' has a wrong offset!");
static_assert(offsetof(UWBP_NetworkFailureOverlay_C, NoSteamIdTitle) == 0x0004B8, "Member 'UWBP_NetworkFailureOverlay_C::NoSteamIdTitle' has a wrong offset!");
static_assert(offsetof(UWBP_NetworkFailureOverlay_C, NoSteamIdMessage) == 0x0004D0, "Member 'UWBP_NetworkFailureOverlay_C::NoSteamIdMessage' has a wrong offset!");
static_assert(offsetof(UWBP_NetworkFailureOverlay_C, ConnectionFailed) == 0x0004E8, "Member 'UWBP_NetworkFailureOverlay_C::ConnectionFailed' has a wrong offset!");
static_assert(offsetof(UWBP_NetworkFailureOverlay_C, PendingConnectionFailureUnknown) == 0x000500, "Member 'UWBP_NetworkFailureOverlay_C::PendingConnectionFailureUnknown' has a wrong offset!");
static_assert(offsetof(UWBP_NetworkFailureOverlay_C, TimeoutSuggestion) == 0x000518, "Member 'UWBP_NetworkFailureOverlay_C::TimeoutSuggestion' has a wrong offset!");
static_assert(offsetof(UWBP_NetworkFailureOverlay_C, PendingConnectionFailureWithError) == 0x000530, "Member 'UWBP_NetworkFailureOverlay_C::PendingConnectionFailureWithError' has a wrong offset!");
static_assert(offsetof(UWBP_NetworkFailureOverlay_C, ErrorStringProvided) == 0x000548, "Member 'UWBP_NetworkFailureOverlay_C::ErrorStringProvided' has a wrong offset!");
static_assert(offsetof(UWBP_NetworkFailureOverlay_C, AdminNeededSlotTitle) == 0x000560, "Member 'UWBP_NetworkFailureOverlay_C::AdminNeededSlotTitle' has a wrong offset!");
static_assert(offsetof(UWBP_NetworkFailureOverlay_C, AdminNeededSlotNessage) == 0x000578, "Member 'UWBP_NetworkFailureOverlay_C::AdminNeededSlotNessage' has a wrong offset!");
static_assert(offsetof(UWBP_NetworkFailureOverlay_C, MaxPlayerCountChangedTitle) == 0x000590, "Member 'UWBP_NetworkFailureOverlay_C::MaxPlayerCountChangedTitle' has a wrong offset!");
static_assert(offsetof(UWBP_NetworkFailureOverlay_C, MaxPlayerCountChangedMessage) == 0x0005A8, "Member 'UWBP_NetworkFailureOverlay_C::MaxPlayerCountChangedMessage' has a wrong offset!");

}

