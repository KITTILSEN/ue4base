﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_AnimNotify_AkEventCustom

#include "Basic.hpp"

#include "AkAudio_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function BP_AnimNotify_AkEventCustom.BP_AnimNotify_AkEventCustom_C.Received_Notify
// 0x00E8 (0x00E8 - 0x0000)
struct BP_AnimNotify_AkEventCustom_C_Received_Notify final
{
public:
	class USkeletalMeshComponent*                 MeshComp;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimSequenceBase*                      Animation;                                         // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ReturnValue;                                       // 0x0010(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	uint8                                         Pad_11[0x7];                                       // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AGBCharacter*                           LocalCharRef;                                      // 0x0018(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_22[0x6];                                       // 0x0022(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerCameraManager*                   CallFunc_GetPlayerCameraManager_ReturnValue;       // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_GetOwner_ReturnValue;                     // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AGBPlayerCameraManager*                 K2Node_DynamicCast_AsGBPlayer_Camera_Manager;      // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_41[0x7];                                       // 0x0041(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetOwningPlayerController_ReturnValue;    // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_GetViewTarget_ReturnValue;                // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetCameraLocation_ReturnValue;            // 0x0058(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x0064(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_65[0x3];                                       // 0x0065(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   CallFunc_GetCameraStyle_ReturnValue;               // 0x0068(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_NameName_ReturnValue;          // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_NameName_ReturnValue_1;        // 0x0071(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x0072(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_73[0x5];                                       // 0x0073(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetObjectName_ReturnValue;                // 0x0078(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;                // 0x0088(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_GetOwner_ReturnValue_1;                   // 0x0098(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x00A0(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Subtract_VectorVector_ReturnValue;        // 0x00AC(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_VSizeSquared_ReturnValue;                 // 0x00B8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_FloatFloat_ReturnValue;              // 0x00BC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_BD[0x3];                                       // 0x00BD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetObjectName_ReturnValue_1;              // 0x00C0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_1;              // 0x00D0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsDedicatedServer_ReturnValue;            // 0x00E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x00E1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_AnimNotify_AkEventCustom_C_Received_Notify) == 0x000008, "Wrong alignment on BP_AnimNotify_AkEventCustom_C_Received_Notify");
static_assert(sizeof(BP_AnimNotify_AkEventCustom_C_Received_Notify) == 0x0000E8, "Wrong size on BP_AnimNotify_AkEventCustom_C_Received_Notify");
static_assert(offsetof(BP_AnimNotify_AkEventCustom_C_Received_Notify, MeshComp) == 0x000000, "Member 'BP_AnimNotify_AkEventCustom_C_Received_Notify::MeshComp' has a wrong offset!");
static_assert(offsetof(BP_AnimNotify_AkEventCustom_C_Received_Notify, Animation) == 0x000008, "Member 'BP_AnimNotify_AkEventCustom_C_Received_Notify::Animation' has a wrong offset!");
static_assert(offsetof(BP_AnimNotify_AkEventCustom_C_Received_Notify, ReturnValue) == 0x000010, "Member 'BP_AnimNotify_AkEventCustom_C_Received_Notify::ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AnimNotify_AkEventCustom_C_Received_Notify, LocalCharRef) == 0x000018, "Member 'BP_AnimNotify_AkEventCustom_C_Received_Notify::LocalCharRef' has a wrong offset!");
static_assert(offsetof(BP_AnimNotify_AkEventCustom_C_Received_Notify, CallFunc_IsValid_ReturnValue) == 0x000020, "Member 'BP_AnimNotify_AkEventCustom_C_Received_Notify::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AnimNotify_AkEventCustom_C_Received_Notify, CallFunc_IsValid_ReturnValue_1) == 0x000021, "Member 'BP_AnimNotify_AkEventCustom_C_Received_Notify::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_AnimNotify_AkEventCustom_C_Received_Notify, CallFunc_GetPlayerCameraManager_ReturnValue) == 0x000028, "Member 'BP_AnimNotify_AkEventCustom_C_Received_Notify::CallFunc_GetPlayerCameraManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AnimNotify_AkEventCustom_C_Received_Notify, CallFunc_GetOwner_ReturnValue) == 0x000030, "Member 'BP_AnimNotify_AkEventCustom_C_Received_Notify::CallFunc_GetOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AnimNotify_AkEventCustom_C_Received_Notify, K2Node_DynamicCast_AsGBPlayer_Camera_Manager) == 0x000038, "Member 'BP_AnimNotify_AkEventCustom_C_Received_Notify::K2Node_DynamicCast_AsGBPlayer_Camera_Manager' has a wrong offset!");
static_assert(offsetof(BP_AnimNotify_AkEventCustom_C_Received_Notify, K2Node_DynamicCast_bSuccess) == 0x000040, "Member 'BP_AnimNotify_AkEventCustom_C_Received_Notify::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_AnimNotify_AkEventCustom_C_Received_Notify, CallFunc_GetOwningPlayerController_ReturnValue) == 0x000048, "Member 'BP_AnimNotify_AkEventCustom_C_Received_Notify::CallFunc_GetOwningPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AnimNotify_AkEventCustom_C_Received_Notify, CallFunc_GetViewTarget_ReturnValue) == 0x000050, "Member 'BP_AnimNotify_AkEventCustom_C_Received_Notify::CallFunc_GetViewTarget_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AnimNotify_AkEventCustom_C_Received_Notify, CallFunc_GetCameraLocation_ReturnValue) == 0x000058, "Member 'BP_AnimNotify_AkEventCustom_C_Received_Notify::CallFunc_GetCameraLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AnimNotify_AkEventCustom_C_Received_Notify, CallFunc_EqualEqual_ObjectObject_ReturnValue) == 0x000064, "Member 'BP_AnimNotify_AkEventCustom_C_Received_Notify::CallFunc_EqualEqual_ObjectObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AnimNotify_AkEventCustom_C_Received_Notify, CallFunc_GetCameraStyle_ReturnValue) == 0x000068, "Member 'BP_AnimNotify_AkEventCustom_C_Received_Notify::CallFunc_GetCameraStyle_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AnimNotify_AkEventCustom_C_Received_Notify, CallFunc_EqualEqual_NameName_ReturnValue) == 0x000070, "Member 'BP_AnimNotify_AkEventCustom_C_Received_Notify::CallFunc_EqualEqual_NameName_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AnimNotify_AkEventCustom_C_Received_Notify, CallFunc_EqualEqual_NameName_ReturnValue_1) == 0x000071, "Member 'BP_AnimNotify_AkEventCustom_C_Received_Notify::CallFunc_EqualEqual_NameName_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_AnimNotify_AkEventCustom_C_Received_Notify, CallFunc_BooleanOR_ReturnValue) == 0x000072, "Member 'BP_AnimNotify_AkEventCustom_C_Received_Notify::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AnimNotify_AkEventCustom_C_Received_Notify, CallFunc_GetObjectName_ReturnValue) == 0x000078, "Member 'BP_AnimNotify_AkEventCustom_C_Received_Notify::CallFunc_GetObjectName_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AnimNotify_AkEventCustom_C_Received_Notify, CallFunc_Concat_StrStr_ReturnValue) == 0x000088, "Member 'BP_AnimNotify_AkEventCustom_C_Received_Notify::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AnimNotify_AkEventCustom_C_Received_Notify, CallFunc_GetOwner_ReturnValue_1) == 0x000098, "Member 'BP_AnimNotify_AkEventCustom_C_Received_Notify::CallFunc_GetOwner_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_AnimNotify_AkEventCustom_C_Received_Notify, CallFunc_K2_GetActorLocation_ReturnValue) == 0x0000A0, "Member 'BP_AnimNotify_AkEventCustom_C_Received_Notify::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AnimNotify_AkEventCustom_C_Received_Notify, CallFunc_Subtract_VectorVector_ReturnValue) == 0x0000AC, "Member 'BP_AnimNotify_AkEventCustom_C_Received_Notify::CallFunc_Subtract_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AnimNotify_AkEventCustom_C_Received_Notify, CallFunc_VSizeSquared_ReturnValue) == 0x0000B8, "Member 'BP_AnimNotify_AkEventCustom_C_Received_Notify::CallFunc_VSizeSquared_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AnimNotify_AkEventCustom_C_Received_Notify, CallFunc_Less_FloatFloat_ReturnValue) == 0x0000BC, "Member 'BP_AnimNotify_AkEventCustom_C_Received_Notify::CallFunc_Less_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AnimNotify_AkEventCustom_C_Received_Notify, CallFunc_GetObjectName_ReturnValue_1) == 0x0000C0, "Member 'BP_AnimNotify_AkEventCustom_C_Received_Notify::CallFunc_GetObjectName_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_AnimNotify_AkEventCustom_C_Received_Notify, CallFunc_Concat_StrStr_ReturnValue_1) == 0x0000D0, "Member 'BP_AnimNotify_AkEventCustom_C_Received_Notify::CallFunc_Concat_StrStr_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_AnimNotify_AkEventCustom_C_Received_Notify, CallFunc_IsDedicatedServer_ReturnValue) == 0x0000E0, "Member 'BP_AnimNotify_AkEventCustom_C_Received_Notify::CallFunc_IsDedicatedServer_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AnimNotify_AkEventCustom_C_Received_Notify, CallFunc_Not_PreBool_ReturnValue) == 0x0000E1, "Member 'BP_AnimNotify_AkEventCustom_C_Received_Notify::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");

// Function BP_AnimNotify_AkEventCustom.BP_AnimNotify_AkEventCustom_C.GetNotifyName
// 0x00B8 (0x00B8 - 0x0000)
struct BP_AnimNotify_AkEventCustom_C_GetNotifyName final
{
public:
	class FString                                 ReturnValue;                                       // 0x0000(0x0010)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
	class FString                                 LocalName;                                         // 0x0010(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_22[0x6];                                       // 0x0022(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetDisplayName_ReturnValue;               // 0x0028(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetDisplayName_ReturnValue_1;             // 0x0038(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_RightChop_ReturnValue;                    // 0x0048(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_StartsWith_ReturnValue;                   // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_59[0x7];                                       // 0x0059(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;                // 0x0060(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_RightChop_ReturnValue_1;                  // 0x0070(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_StartsWith_ReturnValue_1;                 // 0x0080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_81[0x7];                                       // 0x0081(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_LeftChop_ReturnValue;                     // 0x0088(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_EndsWith_ReturnValue;                     // 0x0098(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_99[0x7];                                       // 0x0099(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_RightChop_ReturnValue_2;                  // 0x00A0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_StartsWith_ReturnValue_2;                 // 0x00B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_AnimNotify_AkEventCustom_C_GetNotifyName) == 0x000008, "Wrong alignment on BP_AnimNotify_AkEventCustom_C_GetNotifyName");
static_assert(sizeof(BP_AnimNotify_AkEventCustom_C_GetNotifyName) == 0x0000B8, "Wrong size on BP_AnimNotify_AkEventCustom_C_GetNotifyName");
static_assert(offsetof(BP_AnimNotify_AkEventCustom_C_GetNotifyName, ReturnValue) == 0x000000, "Member 'BP_AnimNotify_AkEventCustom_C_GetNotifyName::ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AnimNotify_AkEventCustom_C_GetNotifyName, LocalName) == 0x000010, "Member 'BP_AnimNotify_AkEventCustom_C_GetNotifyName::LocalName' has a wrong offset!");
static_assert(offsetof(BP_AnimNotify_AkEventCustom_C_GetNotifyName, CallFunc_IsValid_ReturnValue) == 0x000020, "Member 'BP_AnimNotify_AkEventCustom_C_GetNotifyName::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AnimNotify_AkEventCustom_C_GetNotifyName, CallFunc_IsValid_ReturnValue_1) == 0x000021, "Member 'BP_AnimNotify_AkEventCustom_C_GetNotifyName::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_AnimNotify_AkEventCustom_C_GetNotifyName, CallFunc_GetDisplayName_ReturnValue) == 0x000028, "Member 'BP_AnimNotify_AkEventCustom_C_GetNotifyName::CallFunc_GetDisplayName_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AnimNotify_AkEventCustom_C_GetNotifyName, CallFunc_GetDisplayName_ReturnValue_1) == 0x000038, "Member 'BP_AnimNotify_AkEventCustom_C_GetNotifyName::CallFunc_GetDisplayName_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_AnimNotify_AkEventCustom_C_GetNotifyName, CallFunc_RightChop_ReturnValue) == 0x000048, "Member 'BP_AnimNotify_AkEventCustom_C_GetNotifyName::CallFunc_RightChop_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AnimNotify_AkEventCustom_C_GetNotifyName, CallFunc_StartsWith_ReturnValue) == 0x000058, "Member 'BP_AnimNotify_AkEventCustom_C_GetNotifyName::CallFunc_StartsWith_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AnimNotify_AkEventCustom_C_GetNotifyName, CallFunc_Concat_StrStr_ReturnValue) == 0x000060, "Member 'BP_AnimNotify_AkEventCustom_C_GetNotifyName::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AnimNotify_AkEventCustom_C_GetNotifyName, CallFunc_RightChop_ReturnValue_1) == 0x000070, "Member 'BP_AnimNotify_AkEventCustom_C_GetNotifyName::CallFunc_RightChop_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_AnimNotify_AkEventCustom_C_GetNotifyName, CallFunc_StartsWith_ReturnValue_1) == 0x000080, "Member 'BP_AnimNotify_AkEventCustom_C_GetNotifyName::CallFunc_StartsWith_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_AnimNotify_AkEventCustom_C_GetNotifyName, CallFunc_LeftChop_ReturnValue) == 0x000088, "Member 'BP_AnimNotify_AkEventCustom_C_GetNotifyName::CallFunc_LeftChop_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AnimNotify_AkEventCustom_C_GetNotifyName, CallFunc_EndsWith_ReturnValue) == 0x000098, "Member 'BP_AnimNotify_AkEventCustom_C_GetNotifyName::CallFunc_EndsWith_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AnimNotify_AkEventCustom_C_GetNotifyName, CallFunc_RightChop_ReturnValue_2) == 0x0000A0, "Member 'BP_AnimNotify_AkEventCustom_C_GetNotifyName::CallFunc_RightChop_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_AnimNotify_AkEventCustom_C_GetNotifyName, CallFunc_StartsWith_ReturnValue_2) == 0x0000B0, "Member 'BP_AnimNotify_AkEventCustom_C_GetNotifyName::CallFunc_StartsWith_ReturnValue_2' has a wrong offset!");

// Function BP_AnimNotify_AkEventCustom.BP_AnimNotify_AkEventCustom_C.PostEventOnCharacter
// 0x0050 (0x0050 - 0x0000)
struct BP_AnimNotify_AkEventCustom_C_PostEventOnCharacter final
{
public:
	class UAkAudioEvent*                          InEvent;                                           // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMeshComponent*                         InMeshComp;                                        // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAkComponent*                           LocalAKComp;                                       // 0x0010(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(EAkCallbackType CallbackType, class UAkCallbackInfo* CallbackInfo)> Temp_delegate_Variable; // 0x0018(0x0010)(ConstParm, ZeroConstructor, NoDestructor)
	class AActor*                                 CallFunc_GetOwner_ReturnValue;                     // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AGBCharacter*                           K2Node_DynamicCast_AsGBCharacter;                  // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0039(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3A[0x6];                                       // 0x003A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UAkComponent*                           CallFunc_GetFootstepComp_ReturnValue;              // 0x0040(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsEmpty_ReturnValue;                      // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0049(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4A[0x2];                                       // 0x004A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_PostAkEvent_ReturnValue;                  // 0x004C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AnimNotify_AkEventCustom_C_PostEventOnCharacter) == 0x000008, "Wrong alignment on BP_AnimNotify_AkEventCustom_C_PostEventOnCharacter");
static_assert(sizeof(BP_AnimNotify_AkEventCustom_C_PostEventOnCharacter) == 0x000050, "Wrong size on BP_AnimNotify_AkEventCustom_C_PostEventOnCharacter");
static_assert(offsetof(BP_AnimNotify_AkEventCustom_C_PostEventOnCharacter, InEvent) == 0x000000, "Member 'BP_AnimNotify_AkEventCustom_C_PostEventOnCharacter::InEvent' has a wrong offset!");
static_assert(offsetof(BP_AnimNotify_AkEventCustom_C_PostEventOnCharacter, InMeshComp) == 0x000008, "Member 'BP_AnimNotify_AkEventCustom_C_PostEventOnCharacter::InMeshComp' has a wrong offset!");
static_assert(offsetof(BP_AnimNotify_AkEventCustom_C_PostEventOnCharacter, LocalAKComp) == 0x000010, "Member 'BP_AnimNotify_AkEventCustom_C_PostEventOnCharacter::LocalAKComp' has a wrong offset!");
static_assert(offsetof(BP_AnimNotify_AkEventCustom_C_PostEventOnCharacter, Temp_delegate_Variable) == 0x000018, "Member 'BP_AnimNotify_AkEventCustom_C_PostEventOnCharacter::Temp_delegate_Variable' has a wrong offset!");
static_assert(offsetof(BP_AnimNotify_AkEventCustom_C_PostEventOnCharacter, CallFunc_GetOwner_ReturnValue) == 0x000028, "Member 'BP_AnimNotify_AkEventCustom_C_PostEventOnCharacter::CallFunc_GetOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AnimNotify_AkEventCustom_C_PostEventOnCharacter, K2Node_DynamicCast_AsGBCharacter) == 0x000030, "Member 'BP_AnimNotify_AkEventCustom_C_PostEventOnCharacter::K2Node_DynamicCast_AsGBCharacter' has a wrong offset!");
static_assert(offsetof(BP_AnimNotify_AkEventCustom_C_PostEventOnCharacter, K2Node_DynamicCast_bSuccess) == 0x000038, "Member 'BP_AnimNotify_AkEventCustom_C_PostEventOnCharacter::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_AnimNotify_AkEventCustom_C_PostEventOnCharacter, CallFunc_IsValid_ReturnValue) == 0x000039, "Member 'BP_AnimNotify_AkEventCustom_C_PostEventOnCharacter::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AnimNotify_AkEventCustom_C_PostEventOnCharacter, CallFunc_GetFootstepComp_ReturnValue) == 0x000040, "Member 'BP_AnimNotify_AkEventCustom_C_PostEventOnCharacter::CallFunc_GetFootstepComp_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AnimNotify_AkEventCustom_C_PostEventOnCharacter, CallFunc_IsEmpty_ReturnValue) == 0x000048, "Member 'BP_AnimNotify_AkEventCustom_C_PostEventOnCharacter::CallFunc_IsEmpty_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AnimNotify_AkEventCustom_C_PostEventOnCharacter, CallFunc_Not_PreBool_ReturnValue) == 0x000049, "Member 'BP_AnimNotify_AkEventCustom_C_PostEventOnCharacter::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AnimNotify_AkEventCustom_C_PostEventOnCharacter, CallFunc_PostAkEvent_ReturnValue) == 0x00004C, "Member 'BP_AnimNotify_AkEventCustom_C_PostEventOnCharacter::CallFunc_PostAkEvent_ReturnValue' has a wrong offset!");

}

