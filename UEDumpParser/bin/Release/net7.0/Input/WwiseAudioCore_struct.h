// Enum WwiseAudioCore.EWwiseEventDurationType
enum class EWwiseEventDurationType : uint8_t {
	OneShot,
	Mixed,
	Infinite,
	Unknown,
	EWwiseEventDurationType_MAX,
};

// Enum WwiseAudioCore.EWwiseAsyncIOPriorityDisplay
enum class EWwiseAsyncIOPriorityDisplay : uint8_t {
	Low,
	BelowNormal,
	Normal,
	High,
	EWwiseAsyncIOPriorityDisplay_MAX,
};

// ScriptStruct WwiseAudioCore.WwiseAudioReverbPresets
// Size: 0x64 (Inherited: 0x00)
struct FWwiseAudioReverbPresets {
	struct FName ShortEarlyReflectionPresetName; // 0x00(0x08)
	struct FName LongEarlyReflectionPresetName; // 0x08(0x08)
	struct FName SpaceSizeRTPCName; // 0x10(0x08)
	struct FName EnclosedRatioRTPCName; // 0x18(0x08)
	struct FName MaterialThicknessRTPCName; // 0x20(0x08)
	struct FName MaterialReflectivityRTPCName; // 0x28(0x08)
	char EnvironmentTraceChannel; // 0x30(0x01)
	char UnknownData_31[0x3]; // 0x31(0x03)
	float MinSpaceSizeWindowForEarlyReflections; // 0x34(0x04)
	float MaxSpaceSizeWindowforEarlyReflections; // 0x38(0x04)
	struct FReverbPresetControllerSettings SamplingSettings; // 0x3c(0x28)
};

// ScriptStruct WwiseAudioCore.ReverbPresetControllerSettings
// Size: 0x28 (Inherited: 0x00)
struct FReverbPresetControllerSettings {
	uint32_t VectorsPerSegment; // 0x00(0x04)
	uint32_t TracesPerSegmentPerFrame; // 0x04(0x04)
	uint32_t HorizontalSegments; // 0x08(0x04)
	float HorizontalConeSegmentElevationAngle; // 0x0c(0x04)
	float UpwardsConeAngle; // 0x10(0x04)
	float TraceVectorLength; // 0x14(0x04)
	float TimeToDiscardSample; // 0x18(0x04)
	float DistanceToDiscardSample; // 0x1c(0x04)
	float BiasTowardsVerticalSegment; // 0x20(0x04)
	uint32_t MaxNumSampleFramesInHistory; // 0x24(0x04)
};

// ScriptStruct WwiseAudioCore.WwiseEventParam
// Size: 0x18 (Inherited: 0x00)
struct FWwiseEventParam {
	struct UWwiseEvent* WwiseEvent; // 0x00(0x08)
	struct FName SourcePath; // 0x08(0x08)
	struct FName SourceObj; // 0x10(0x08)
};

// ScriptStruct WwiseAudioCore.WwiseIOPriorityMappingConfig
// Size: 0x08 (Inherited: 0x00)
struct FWwiseIOPriorityMappingConfig {
	int32_t WwisePriority; // 0x00(0x04)
	char AsyncIOPriority; // 0x04(0x01)
	char UnknownData_5[0x3]; // 0x05(0x03)
};

// ScriptStruct WwiseAudioCore.WwiseNetworkRelationship
// Size: 0x18 (Inherited: 0x00)
struct FWwiseNetworkRelationship {
	struct FName SwitchGroupName; // 0x00(0x08)
	struct FName RemotePlayerSwitchValue; // 0x08(0x08)
	struct FName LocalPlayerSwitchValue; // 0x10(0x08)
};

// ScriptStruct WwiseAudioCore.WwisePlatformMappings
// Size: 0x20 (Inherited: 0x00)
struct FWwisePlatformMappings {
	struct FString DefaultWwisePlatform; // 0x00(0x10)
	struct TArray<struct FWwisePlatformMapping> Mappings; // 0x10(0x10)
};

// ScriptStruct WwiseAudioCore.WwisePlatformMapping
// Size: 0x20 (Inherited: 0x00)
struct FWwisePlatformMapping {
	struct FString UnrealPlatform; // 0x00(0x10)
	struct FString WwisePlatform; // 0x10(0x10)
};

