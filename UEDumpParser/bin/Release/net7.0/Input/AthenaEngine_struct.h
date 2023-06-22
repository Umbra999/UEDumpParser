// Enum AthenaEngine.EPlayModeVariant
enum class EPlayModeVariant : uint8_t {
	Normal,
	Creator,
	Invalid,
	MAX,
	EPlayModeVariant_MAX,
};

// Enum AthenaEngine.EPlayMode
enum class EPlayMode : uint8_t {
	Adventure,
	Contest,
	Tutorial,
	NotSelectedYet,
	MAX,
	Invalid,
	EPlayMode_MAX,
};

// ScriptStruct AthenaEngine.BoxedRpc
// Size: 0x10 (Inherited: 0x00)
struct FBoxedRpc {
	char UnknownData_0[0x8]; // 0x00(0x08)
	struct UScriptStruct* Type; // 0x08(0x08)
};

// ScriptStruct AthenaEngine.ConfigurableStructureInstanceWrapper
// Size: 0x20 (Inherited: 0x00)
struct FConfigurableStructureInstanceWrapper {
	struct FUserDefinedStructWithSerialisableValue Value; // 0x00(0x20)
};

// ScriptStruct AthenaEngine.UserDefinedStructWithSerialisableValue
// Size: 0x20 (Inherited: 0x00)
struct FUserDefinedStructWithSerialisableValue {
	struct UScriptStruct* InternalStruct; // 0x00(0x08)
	char UnknownData_8[0x18]; // 0x08(0x18)
};

// ScriptStruct AthenaEngine.PlayModeDefiniton
// Size: 0x28 (Inherited: 0x00)
struct FPlayModeDefiniton {
	struct TArray<struct FString> Tags; // 0x00(0x10)
	struct TArray<struct FString> States; // 0x10(0x10)
	int32_t CrewMin; // 0x20(0x04)
	int32_t CrewMax; // 0x24(0x04)
};

// ScriptStruct AthenaEngine.SerialisedRpc
// Size: 0x20 (Inherited: 0x00)
struct FSerialisedRpc {
	char UnknownData_0[0x18]; // 0x00(0x18)
	struct UScriptStruct* ContentsType; // 0x18(0x08)
};

// ScriptStruct AthenaEngine.ServicesStampId
// Size: 0x10 (Inherited: 0x00)
struct FServicesStampId {
	struct FString StampId; // 0x00(0x10)
};

// ScriptStruct AthenaEngine.StringAssetClassPair
// Size: 0x40 (Inherited: 0x00)
struct FStringAssetClassPair {
	struct FString String; // 0x00(0x10)
	struct UClass* AssetClass; // 0x10(0x20)
	struct TArray<struct FStringAssetClassPairFeatureOverride> FeatureOverrides; // 0x30(0x10)
};

// ScriptStruct AthenaEngine.StringAssetClassPairFeatureOverride
// Size: 0x28 (Inherited: 0x00)
struct FStringAssetClassPairFeatureOverride {
	struct FName FeatureName; // 0x00(0x08)
	struct UClass* AssetClass; // 0x08(0x20)
};

// ScriptStruct AthenaEngine.ActorComponentSelector
// Size: 0x10 (Inherited: 0x00)
struct FActorComponentSelector {
	struct FName ComponentName; // 0x00(0x08)
	struct UActorComponent* CachedComponent; // 0x08(0x08)
};

// ScriptStruct AthenaEngine.PlaySoundRpc
// Size: 0x20 (Inherited: 0x10)
struct FPlaySoundRpc : FBoxedRpc {
	struct UWwiseEvent* WwiseEvent; // 0x10(0x08)
	bool PlayOnTarget; // 0x18(0x01)
	char UnknownData_19[0x7]; // 0x19(0x07)
};

// ScriptStruct AthenaEngine.EventCancelForceFeedback
// Size: 0x10 (Inherited: 0x00)
struct FEventCancelForceFeedback {
	struct UForceFeedbackEffect* ForceFeedbackEffect; // 0x00(0x08)
	struct FName Tag; // 0x08(0x08)
};

// ScriptStruct AthenaEngine.EventTriggerForceFeedback
// Size: 0x18 (Inherited: 0x00)
struct FEventTriggerForceFeedback {
	struct UForceFeedbackEffect* ForceFeedbackEffect; // 0x00(0x08)
	bool Looping; // 0x08(0x01)
	char UnknownData_9[0x3]; // 0x09(0x03)
	struct FName Tag; // 0x0c(0x08)
	char UnknownData_14[0x4]; // 0x14(0x04)
};

// ScriptStruct AthenaEngine.AthenaAsyncAssetLoaderWrapper
// Size: 0x18 (Inherited: 0x00)
struct FAthenaAsyncAssetLoaderWrapper {
	char UnknownData_0[0x18]; // 0x00(0x18)
};

// ScriptStruct AthenaEngine.EventMeshAssigned
// Size: 0x01 (Inherited: 0x00)
struct FEventMeshAssigned {
	char UnknownData_0[0x1]; // 0x00(0x01)
};

// ScriptStruct AthenaEngine.InlineUserDefinedStructDetails
// Size: 0x08 (Inherited: 0x00)
struct FInlineUserDefinedStructDetails {
	struct UScriptStruct* Struct; // 0x00(0x08)
};

// ScriptStruct AthenaEngine.NativeAndUserDefinedStructSelector
// Size: 0x08 (Inherited: 0x00)
struct FNativeAndUserDefinedStructSelector {
	struct UScriptStruct* Struct; // 0x00(0x08)
};

