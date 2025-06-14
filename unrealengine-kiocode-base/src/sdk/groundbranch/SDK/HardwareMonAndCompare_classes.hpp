﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: HardwareMonAndCompare

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "CoreUObject_classes.hpp"
#include "HardwareMonAndCompare_structs.hpp"
#include "Engine_classes.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// Class HardwareMonAndCompare.FileFunctionsHardwareMonAndCompare
// 0x0000 (0x0028 - 0x0028)
class UFileFunctionsHardwareMonAndCompare final : public UObject
{
public:
	static void addBytesToFileAndCloseIt(EFileFunctionsHardwareMonAndCompareDirectoryType directoryType, const class FString& FilePath, const TArray<uint8>& Bytes, bool* success);
	static TArray<uint8> base64StringToBytes(const class FString& base64String, bool* success);
	static void base64StringToString(class FString* String, const class FString& base64String);
	static void bytesToBase64String(const TArray<uint8>& Bytes, class FString* base64String);
	static bool createDirectory(EFileFunctionsHardwareMonAndCompareDirectoryType directoryType, const class FString& Path);
	static class FString decryptMessageWithAES(const class FString& encryptedBase64Message, const class FString& keyIn256Bit);
	static bool deleteDirectory(EFileFunctionsHardwareMonAndCompareDirectoryType directoryType, const class FString& FilePath);
	static bool deleteFile(EFileFunctionsHardwareMonAndCompareDirectoryType directoryType, const class FString& FilePath);
	static bool deleteFileAbsolutePath(const class FString& FilePath);
	static bool directoryExists(EFileFunctionsHardwareMonAndCompareDirectoryType directoryType, const class FString& Path);
	static class FString encryptMessageWithAES(const class FString& Message, const class FString& keyIn256Bit);
	static bool fileExists(EFileFunctionsHardwareMonAndCompareDirectoryType directoryType, const class FString& FilePath);
	static bool fileExistsAbsolutePath(const class FString& FilePath);
	static int64 fileSize(EFileFunctionsHardwareMonAndCompareDirectoryType directoryType, const class FString& FilePath);
	static int64 fileSizeAbsolutePath(const class FString& FilePath);
	static void fileToBase64String(EFileFunctionsHardwareMonAndCompareDirectoryType directoryType, const class FString& FilePath, bool* success, class FString* base64String, class FString* Filename);
	static struct FDateTime getAccessTimeStamp(EFileFunctionsHardwareMonAndCompareDirectoryType directoryType, const class FString& FilePath);
	static void getAllFilesFromDirectory(EFileFunctionsHardwareMonAndCompareDirectoryType directoryType, const class FString& FilePath, int32* Count, TArray<class FString>* files, TArray<class FString>* filePaths, const class FString& FileType);
	static class UFileFunctionsHardwareMonAndCompare* getFileFunctionsHardwareMonAndCompareTarget();
	static class FString getFilenameOnDisk(EFileFunctionsHardwareMonAndCompareDirectoryType directoryType, const class FString& FilePath);
	static void getMD5FromFile(EFileFunctionsHardwareMonAndCompareDirectoryType directoryType, const class FString& FilePath, bool* success, class FString* MD5);
	static void getMD5FromFileAbsolutePath(const class FString& FilePath, bool* success, class FString* MD5);
	static struct FDateTime getTimeStamp(EFileFunctionsHardwareMonAndCompareDirectoryType directoryType, const class FString& FilePath);
	static class FString int64ToString(int64 Num);
	static bool isReadOnly(EFileFunctionsHardwareMonAndCompareDirectoryType directoryType, const class FString& FilePath);
	static bool moveFile(EFileFunctionsHardwareMonAndCompareDirectoryType directoryTypeTo, const class FString& filePathTo, EFileFunctionsHardwareMonAndCompareDirectoryType directoryTypeFrom, const class FString& filePathFrom);
	static TArray<uint8> readBytesFromFile(EFileFunctionsHardwareMonAndCompareDirectoryType directoryType, const class FString& FilePath, bool* success);
	static void readStringFromFile(EFileFunctionsHardwareMonAndCompareDirectoryType directoryType, const class FString& FilePath, bool* success, class FString* Data);
	static bool setReadOnly(EFileFunctionsHardwareMonAndCompareDirectoryType directoryType, const class FString& FilePath, bool bNewReadOnlyValue);
	static void setTimeStamp(EFileFunctionsHardwareMonAndCompareDirectoryType directoryType, const class FString& FilePath, const struct FDateTime& DateTime);
	static void stringToBase64String(const class FString& String, class FString* base64String);
	static void writeBytesToFile(EFileFunctionsHardwareMonAndCompareDirectoryType directoryType, const class FString& FilePath, const TArray<uint8>& Bytes, bool* success);
	static void writeStringToFile(EFileFunctionsHardwareMonAndCompareDirectoryType directoryType, const class FString& Data, const class FString& FilePath, EFileFunctionsHardwareMonAndCompareEncodingOptions fileEncoding, bool* success);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FileFunctionsHardwareMonAndCompare">();
	}
	static class UFileFunctionsHardwareMonAndCompare* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFileFunctionsHardwareMonAndCompare>();
	}
};
static_assert(alignof(UFileFunctionsHardwareMonAndCompare) == 0x000008, "Wrong alignment on UFileFunctionsHardwareMonAndCompare");
static_assert(sizeof(UFileFunctionsHardwareMonAndCompare) == 0x000028, "Wrong size on UFileFunctionsHardwareMonAndCompare");

// Class HardwareMonAndCompare.HardwareMonAndCompareActor
// 0x0008 (0x0228 - 0x0220)
class AHardwareMonAndCompareActor final : public AActor
{
public:
	uint8                                         Pad_220[0x8];                                      // 0x0220(0x0008)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"HardwareMonAndCompareActor">();
	}
	static class AHardwareMonAndCompareActor* GetDefaultObj()
	{
		return GetDefaultObjImpl<AHardwareMonAndCompareActor>();
	}
};
static_assert(alignof(AHardwareMonAndCompareActor) == 0x000008, "Wrong alignment on AHardwareMonAndCompareActor");
static_assert(sizeof(AHardwareMonAndCompareActor) == 0x000228, "Wrong size on AHardwareMonAndCompareActor");

// Class HardwareMonAndCompare.HardwareMonAndCompareBPLibrary
// 0x0220 (0x0248 - 0x0028)
class UHardwareMonAndCompareBPLibrary final : public UBlueprintFunctionLibrary
{
public:
	TMulticastInlineDelegate<void(float FrameTime)> ontickEventDelegate;                             // 0x0028(0x0010)(ZeroConstructor, InstancedReference, NativeAccessSpecifierPublic)
	TMulticastInlineDelegate<void()>              onstartCPU_GPUUsageReaderEventDelegate;            // 0x0038(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	TMulticastInlineDelegate<void(const class FString& absoluteDir)> onfileDialogEventDelegate;      // 0x0048(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                         Pad_58[0x1F0];                                     // 0x0058(0x01F0)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static void breakCPUStruct(const struct FCPUListStruct& cpuStruct, class FString* Name_0, class FString* score, class FString* clock, class FString* cores);
	static void breakDriveInfo(const struct FSDriveInfo& driveInfo, class FString* Name_0, int64* totalBytes, int64* freeBytes, int32* totalMegabyte, int32* freeMegabyte, int32* totalGigabyte, int32* freeGigabyte);
	static void breakGPUStruct(const struct FGPUListStruct& gpuStruct, class FString* Name_0, class FString* score);
	static void getCPUInfoFromList(const class FString& cpuName, bool* found, class FString* Name_0, float* score, class FString* defaultClock, int32* cores);
	static void getCPUInfoFromListPure(const class FString& cpuName, bool* found, class FString* Name_0, float* score, class FString* defaultClock, int32* cores);
	static TArray<struct FCPUListStruct> getCPUList();
	static TArray<struct FCPUListStruct> getCPUListPure();
	static TMap<int32, int32> getCPUUsage();
	static void getDriveInfo(TArray<struct FSDriveInfo>* driveInfo);
	static void getDriveInfoPure(TArray<struct FSDriveInfo>* driveInfo);
	static TMap<class FString, class FString> getFullHardwareInfo();
	static void getGPUInfoFromList(const class FString& gpuName, bool* found, class FString* Name_0, float* score);
	static void getGPUInfoFromListPure(const class FString& gpuName, bool* found, class FString* Name_0, float* score);
	static TArray<struct FGPUListStruct> getGPUList();
	static TArray<struct FGPUListStruct> getGPUListPure();
	static int32 getGPUUsage();
	static class FString getHardwareInfo(EHardwareInfo part);
	static class FString getHardwareInfoPure(EHardwareInfo part);
	static class UHardwareMonAndCompareBPLibrary* getHardwareMonAndCompareLib();
	static int64 getRamFreeByte();
	static int32 getRamFreeGigabyte();
	static int32 getRamFreeMegabyte();
	static int64 getRamTotalByte();
	static int32 getRamTotalGigabyte();
	static int32 getRamTotalMegabyte();
	static int64 getRamUsedByte();
	static int32 getRamUsedGigabyte();
	static int32 getRamUsedMegabyte();
	static int64 getVramFreeByte();
	static int32 getVramFreeGigabyte();
	static int32 getVramFreeMegabyte();
	static int64 getVramTotalByte();
	static int32 getVramTotalGigabyte();
	static int32 getVramTotalMegabyte();
	static int64 getVramUsedByte();
	static int32 getVramUsedGigabyte();
	static int32 getVramUsedMegabyte();
	static class UHardwareMonAndCompareProcessObject* launchProcess(bool* success, class FString* internalProcessID, const class FString& executableFile, EHardwareMonAndCompareProcessDirectoryType directoryType, const class FString& Parameters, bool inHidden);
	static class UHardwareMonAndCompareBPLibrary* openFileDialog(EHardwareMonAndCompareFilaDialogType Type, EHardwareMonAndCompareFilaDialogInitDirType initialDirectoryType, const class FString& initialDirectory, const class FString& Filter);
	static class UHardwareMonAndCompareBPLibrary* startCPU_GPUUsageReader();
	static void stopAllProcesses();
	static void stopCPU_GPUUsageReader();
	static void stopProcess(bool* success, const class FString& internalProcessID);

	void fileDialogEventDelegate(const class FString& absoluteDir);
	void powershellProcessEventCPUThread(const class FString& Data);
	void powershellProcessEventFileDialogThread(const class FString& Data);
	void powershellProcessEventGPUThread(const class FString& Data);
	void startCPU_GPUUsageReaderEventDelegate();
	void tickEventDelegate(const float FrameTime);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"HardwareMonAndCompareBPLibrary">();
	}
	static class UHardwareMonAndCompareBPLibrary* GetDefaultObj()
	{
		return GetDefaultObjImpl<UHardwareMonAndCompareBPLibrary>();
	}
};
static_assert(alignof(UHardwareMonAndCompareBPLibrary) == 0x000008, "Wrong alignment on UHardwareMonAndCompareBPLibrary");
static_assert(sizeof(UHardwareMonAndCompareBPLibrary) == 0x000248, "Wrong size on UHardwareMonAndCompareBPLibrary");
static_assert(offsetof(UHardwareMonAndCompareBPLibrary, ontickEventDelegate) == 0x000028, "Member 'UHardwareMonAndCompareBPLibrary::ontickEventDelegate' has a wrong offset!");
static_assert(offsetof(UHardwareMonAndCompareBPLibrary, onstartCPU_GPUUsageReaderEventDelegate) == 0x000038, "Member 'UHardwareMonAndCompareBPLibrary::onstartCPU_GPUUsageReaderEventDelegate' has a wrong offset!");
static_assert(offsetof(UHardwareMonAndCompareBPLibrary, onfileDialogEventDelegate) == 0x000048, "Member 'UHardwareMonAndCompareBPLibrary::onfileDialogEventDelegate' has a wrong offset!");

// Class HardwareMonAndCompare.HardwareMonAndCompareGraphWidget
// 0x00E0 (0x01E8 - 0x0108)
class UHardwareMonAndCompareGraphWidget final : public UWidget
{
public:
	EHardwareInfoByTime                           Type;                                              // 0x0108(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_109[0x3];                                      // 0x0109(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         MinValue;                                          // 0x010C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         MaxValue;                                          // 0x0110(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         valueSteps;                                        // 0x0114(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         desiredSteps;                                      // 0x0118(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_11C[0x4];                                      // 0x011C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateFontInfo                         BaseFont;                                          // 0x0120(0x0058)(Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                           fontColor;                                         // 0x0178(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         backgroundLineThickness;                           // 0x0188(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         LineThickness;                                     // 0x018C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         Speed;                                             // 0x0190(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         maxLinesOnScreen;                                  // 0x0194(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                           backgroundLineColor;                               // 0x0198(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                           LineColor;                                         // 0x01A8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1B8[0x30];                                     // 0x01B8(0x0030)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void RefreshGraph();
	void tickEventDelegate(float FrameTime);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"HardwareMonAndCompareGraphWidget">();
	}
	static class UHardwareMonAndCompareGraphWidget* GetDefaultObj()
	{
		return GetDefaultObjImpl<UHardwareMonAndCompareGraphWidget>();
	}
};
static_assert(alignof(UHardwareMonAndCompareGraphWidget) == 0x000008, "Wrong alignment on UHardwareMonAndCompareGraphWidget");
static_assert(sizeof(UHardwareMonAndCompareGraphWidget) == 0x0001E8, "Wrong size on UHardwareMonAndCompareGraphWidget");
static_assert(offsetof(UHardwareMonAndCompareGraphWidget, Type) == 0x000108, "Member 'UHardwareMonAndCompareGraphWidget::Type' has a wrong offset!");
static_assert(offsetof(UHardwareMonAndCompareGraphWidget, MinValue) == 0x00010C, "Member 'UHardwareMonAndCompareGraphWidget::MinValue' has a wrong offset!");
static_assert(offsetof(UHardwareMonAndCompareGraphWidget, MaxValue) == 0x000110, "Member 'UHardwareMonAndCompareGraphWidget::MaxValue' has a wrong offset!");
static_assert(offsetof(UHardwareMonAndCompareGraphWidget, valueSteps) == 0x000114, "Member 'UHardwareMonAndCompareGraphWidget::valueSteps' has a wrong offset!");
static_assert(offsetof(UHardwareMonAndCompareGraphWidget, desiredSteps) == 0x000118, "Member 'UHardwareMonAndCompareGraphWidget::desiredSteps' has a wrong offset!");
static_assert(offsetof(UHardwareMonAndCompareGraphWidget, BaseFont) == 0x000120, "Member 'UHardwareMonAndCompareGraphWidget::BaseFont' has a wrong offset!");
static_assert(offsetof(UHardwareMonAndCompareGraphWidget, fontColor) == 0x000178, "Member 'UHardwareMonAndCompareGraphWidget::fontColor' has a wrong offset!");
static_assert(offsetof(UHardwareMonAndCompareGraphWidget, backgroundLineThickness) == 0x000188, "Member 'UHardwareMonAndCompareGraphWidget::backgroundLineThickness' has a wrong offset!");
static_assert(offsetof(UHardwareMonAndCompareGraphWidget, LineThickness) == 0x00018C, "Member 'UHardwareMonAndCompareGraphWidget::LineThickness' has a wrong offset!");
static_assert(offsetof(UHardwareMonAndCompareGraphWidget, Speed) == 0x000190, "Member 'UHardwareMonAndCompareGraphWidget::Speed' has a wrong offset!");
static_assert(offsetof(UHardwareMonAndCompareGraphWidget, maxLinesOnScreen) == 0x000194, "Member 'UHardwareMonAndCompareGraphWidget::maxLinesOnScreen' has a wrong offset!");
static_assert(offsetof(UHardwareMonAndCompareGraphWidget, backgroundLineColor) == 0x000198, "Member 'UHardwareMonAndCompareGraphWidget::backgroundLineColor' has a wrong offset!");
static_assert(offsetof(UHardwareMonAndCompareGraphWidget, LineColor) == 0x0001A8, "Member 'UHardwareMonAndCompareGraphWidget::LineColor' has a wrong offset!");

// Class HardwareMonAndCompare.HardwareMonAndCompareProcessObject
// 0x0038 (0x0060 - 0x0028)
class UHardwareMonAndCompareProcessObject final : public UObject
{
public:
	class FString                                 InaccessibleUProperty;                             // 0x0028(0x0010)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMulticastInlineDelegate<void(const class FString& internalProcessID, const class FString& Output)> onHardwareMonitorProcessEvent; // 0x0038(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                         Pad_48[0x18];                                      // 0x0048(0x0018)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void HardwareMonitorProcessEvent(const class FString& internalProcessID, const class FString& Output);
	void processOutput(const class FString& Data);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"HardwareMonAndCompareProcessObject">();
	}
	static class UHardwareMonAndCompareProcessObject* GetDefaultObj()
	{
		return GetDefaultObjImpl<UHardwareMonAndCompareProcessObject>();
	}
};
static_assert(alignof(UHardwareMonAndCompareProcessObject) == 0x000008, "Wrong alignment on UHardwareMonAndCompareProcessObject");
static_assert(sizeof(UHardwareMonAndCompareProcessObject) == 0x000060, "Wrong size on UHardwareMonAndCompareProcessObject");
static_assert(offsetof(UHardwareMonAndCompareProcessObject, InaccessibleUProperty) == 0x000028, "Member 'UHardwareMonAndCompareProcessObject::InaccessibleUProperty' has a wrong offset!");
static_assert(offsetof(UHardwareMonAndCompareProcessObject, onHardwareMonitorProcessEvent) == 0x000038, "Member 'UHardwareMonAndCompareProcessObject::onHardwareMonitorProcessEvent' has a wrong offset!");

// Class HardwareMonAndCompare.HardwareMonAndCompareWidget
// 0x00D8 (0x01E0 - 0x0108)
class UHardwareMonAndCompareWidget final : public UWidget
{
public:
	class FText                                   Text;                                              // 0x0108(0x0018)(NativeAccessSpecifierPublic)
	struct FSlateFontInfo                         BaseFont;                                          // 0x0120(0x0058)(Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EHardwareInfoByTime                           Type;                                              // 0x0178(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EHardwareInfoSort                             colorSort;                                         // 0x0179(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_17A[0x2];                                      // 0x017A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           FontColorA;                                        // 0x017C(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         FontColorA_MinValue;                               // 0x018C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                           FontColorB;                                        // 0x0190(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         FontColorB_MinValue;                               // 0x01A0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                           FontColorC;                                        // 0x01A4(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         FontColorC_MinValue;                               // 0x01B4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         CPUCore;                                           // 0x01B8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1BC[0x24];                                     // 0x01BC(0x0024)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void tickEventDelegate(float FrameTime);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"HardwareMonAndCompareWidget">();
	}
	static class UHardwareMonAndCompareWidget* GetDefaultObj()
	{
		return GetDefaultObjImpl<UHardwareMonAndCompareWidget>();
	}
};
static_assert(alignof(UHardwareMonAndCompareWidget) == 0x000008, "Wrong alignment on UHardwareMonAndCompareWidget");
static_assert(sizeof(UHardwareMonAndCompareWidget) == 0x0001E0, "Wrong size on UHardwareMonAndCompareWidget");
static_assert(offsetof(UHardwareMonAndCompareWidget, Text) == 0x000108, "Member 'UHardwareMonAndCompareWidget::Text' has a wrong offset!");
static_assert(offsetof(UHardwareMonAndCompareWidget, BaseFont) == 0x000120, "Member 'UHardwareMonAndCompareWidget::BaseFont' has a wrong offset!");
static_assert(offsetof(UHardwareMonAndCompareWidget, Type) == 0x000178, "Member 'UHardwareMonAndCompareWidget::Type' has a wrong offset!");
static_assert(offsetof(UHardwareMonAndCompareWidget, colorSort) == 0x000179, "Member 'UHardwareMonAndCompareWidget::colorSort' has a wrong offset!");
static_assert(offsetof(UHardwareMonAndCompareWidget, FontColorA) == 0x00017C, "Member 'UHardwareMonAndCompareWidget::FontColorA' has a wrong offset!");
static_assert(offsetof(UHardwareMonAndCompareWidget, FontColorA_MinValue) == 0x00018C, "Member 'UHardwareMonAndCompareWidget::FontColorA_MinValue' has a wrong offset!");
static_assert(offsetof(UHardwareMonAndCompareWidget, FontColorB) == 0x000190, "Member 'UHardwareMonAndCompareWidget::FontColorB' has a wrong offset!");
static_assert(offsetof(UHardwareMonAndCompareWidget, FontColorB_MinValue) == 0x0001A0, "Member 'UHardwareMonAndCompareWidget::FontColorB_MinValue' has a wrong offset!");
static_assert(offsetof(UHardwareMonAndCompareWidget, FontColorC) == 0x0001A4, "Member 'UHardwareMonAndCompareWidget::FontColorC' has a wrong offset!");
static_assert(offsetof(UHardwareMonAndCompareWidget, FontColorC_MinValue) == 0x0001B4, "Member 'UHardwareMonAndCompareWidget::FontColorC_MinValue' has a wrong offset!");
static_assert(offsetof(UHardwareMonAndCompareWidget, CPUCore) == 0x0001B8, "Member 'UHardwareMonAndCompareWidget::CPUCore' has a wrong offset!");

}

