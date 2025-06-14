﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_FaceWear_Master

#include "Basic.hpp"


namespace SDK::Params
{

// Function BP_FaceWear_Master.BP_FaceWear_Master_C.GetHiddenComponents
// 0x0020 (0x0020 - 0x0000)
struct BP_FaceWear_Master_C_GetHiddenComponents final
{
public:
	TArray<class UPrimitiveComponent*>            ReturnValue;                                       // 0x0000(0x0010)(Parm, OutParm, ReturnParm, ContainsInstancedReference)
	TArray<class UPrimitiveComponent*>            K2Node_MakeArray_Array;                            // 0x0010(0x0010)(ReferenceParm, ContainsInstancedReference)
};
static_assert(alignof(BP_FaceWear_Master_C_GetHiddenComponents) == 0x000008, "Wrong alignment on BP_FaceWear_Master_C_GetHiddenComponents");
static_assert(sizeof(BP_FaceWear_Master_C_GetHiddenComponents) == 0x000020, "Wrong size on BP_FaceWear_Master_C_GetHiddenComponents");
static_assert(offsetof(BP_FaceWear_Master_C_GetHiddenComponents, ReturnValue) == 0x000000, "Member 'BP_FaceWear_Master_C_GetHiddenComponents::ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_FaceWear_Master_C_GetHiddenComponents, K2Node_MakeArray_Array) == 0x000010, "Member 'BP_FaceWear_Master_C_GetHiddenComponents::K2Node_MakeArray_Array' has a wrong offset!");

}

