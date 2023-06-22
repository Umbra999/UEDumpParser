// Enum ConditionalFramework.EPayloadObjectOption
enum class EPayloadObjectOption : uint8_t {
	Object,
	PawnObject,
	ControllerObject,
	EPayloadObjectOption_MAX,
};

// ScriptStruct ConditionalFramework.ConditionInstance
// Size: 0x20 (Inherited: 0x20)
struct FConditionInstance : FConfigurableStructureInstanceWrapper {
};

// ScriptStruct ConditionalFramework.TargetedPayloadConditionBase
// Size: 0x28 (Inherited: 0x08)
struct FTargetedPayloadConditionBase : FConditionBase {
	struct FConditionContextPayloadSelectorInstance PayloadSelector; // 0x08(0x20)
};

// ScriptStruct ConditionalFramework.ConditionBase
// Size: 0x08 (Inherited: 0x00)
struct FConditionBase {
	char UnknownData_0[0x8]; // 0x00(0x08)
};

// ScriptStruct ConditionalFramework.ConditionContextPayloadSelectorInstance
// Size: 0x20 (Inherited: 0x20)
struct FConditionContextPayloadSelectorInstance : FConfigurableStructureInstanceWrapper {
};

// ScriptStruct ConditionalFramework.ConditionContextPayloadSelectorBase
// Size: 0x18 (Inherited: 0x00)
struct FConditionContextPayloadSelectorBase {
	char UnknownData_0[0x8]; // 0x00(0x08)
	struct FConditionContextPayloadTarget PayloadTarget; // 0x08(0x10)
};

// ScriptStruct ConditionalFramework.ConditionContextPayloadTarget
// Size: 0x10 (Inherited: 0x00)
struct FConditionContextPayloadTarget {
	struct UScriptStruct* PayloadStruct; // 0x00(0x08)
	struct FName PayloadMember; // 0x08(0x08)
};

// ScriptStruct ConditionalFramework.AndCondition
// Size: 0x18 (Inherited: 0x08)
struct FAndCondition : FConditionBase {
	struct TArray<struct FConditionInstance> Conditions; // 0x08(0x10)
};

// ScriptStruct ConditionalFramework.ConditionFromAsset
// Size: 0x10 (Inherited: 0x08)
struct FConditionFromAsset : FConditionBase {
	struct UConditionRootAsset* ConditionAsset; // 0x08(0x08)
};

// ScriptStruct ConditionalFramework.IsFeatureEnabledCondition
// Size: 0x18 (Inherited: 0x08)
struct FIsFeatureEnabledCondition : FConditionBase {
	struct FFeatureFlag Feature; // 0x08(0x0c)
	char UnknownData_14[0x4]; // 0x14(0x04)
};

// ScriptStruct ConditionalFramework.IsGameOnSpecificPlayModeCondition
// Size: 0x30 (Inherited: 0x28)
struct FIsGameOnSpecificPlayModeCondition : FTargetedPayloadConditionBase {
	char TargetMode; // 0x28(0x01)
	char UnknownData_29[0x7]; // 0x29(0x07)
};

// ScriptStruct ConditionalFramework.IsGameOnSpecificPlayModeVariantCondition
// Size: 0x30 (Inherited: 0x28)
struct FIsGameOnSpecificPlayModeVariantCondition : FTargetedPayloadConditionBase {
	char TargetMode; // 0x28(0x01)
	char UnknownData_29[0x7]; // 0x29(0x07)
};

// ScriptStruct ConditionalFramework.IsObjectOfTypeCondition
// Size: 0x38 (Inherited: 0x28)
struct FIsObjectOfTypeCondition : FTargetedPayloadConditionBase {
	struct TArray<struct UClass*> TargetObjectClasses; // 0x28(0x10)
};

// ScriptStruct ConditionalFramework.NotCondition
// Size: 0x28 (Inherited: 0x08)
struct FNotCondition : FConditionBase {
	struct FConditionInstance Condition; // 0x08(0x20)
};

// ScriptStruct ConditionalFramework.OrCondition
// Size: 0x18 (Inherited: 0x08)
struct FOrCondition : FConditionBase {
	struct TArray<struct FConditionInstance> Conditions; // 0x08(0x10)
};

// ScriptStruct ConditionalFramework.ConditionContextPayloadBase
// Size: 0x08 (Inherited: 0x00)
struct FConditionContextPayloadBase {
	char UnknownData_0[0x8]; // 0x00(0x08)
};

// ScriptStruct ConditionalFramework.WorldObjectConditionContextPayload
// Size: 0x10 (Inherited: 0x08)
struct FWorldObjectConditionContextPayload : FConditionContextPayloadBase {
	struct UWorld* WorldObject; // 0x08(0x08)
};

// ScriptStruct ConditionalFramework.TargetConditionContextPayload
// Size: 0x10 (Inherited: 0x08)
struct FTargetConditionContextPayload : FConditionContextPayloadBase {
	struct AActor* Target; // 0x08(0x08)
};

// ScriptStruct ConditionalFramework.InstigatorConditionContextPayload
// Size: 0x10 (Inherited: 0x08)
struct FInstigatorConditionContextPayload : FConditionContextPayloadBase {
	struct AActor* Instigator; // 0x08(0x08)
};

// ScriptStruct ConditionalFramework.ConditionContextPayloadObjectSelector
// Size: 0x18 (Inherited: 0x18)
struct FConditionContextPayloadObjectSelector : FConditionContextPayloadSelectorBase {
};

