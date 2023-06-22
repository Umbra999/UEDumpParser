// Enum StatusEffects.EStatusComparisonMode
enum class EStatusComparisonMode : uint8_t {
	Ordered,
	Unordered,
	Partial,
	Any,
	EStatusComparisonMode_MAX,
};

// ScriptStruct StatusEffects.Status
// Size: 0x18 (Inherited: 0x00)
struct FStatus {
	struct TArray<struct UClass*> Type; // 0x00(0x10)
	struct FStatusDescriptor Descriptor; // 0x10(0x04)
	char UnknownData_14[0x4]; // 0x14(0x04)
};

// ScriptStruct StatusEffects.StatusDescriptor
// Size: 0x04 (Inherited: 0x00)
struct FStatusDescriptor {
	float Intensity; // 0x00(0x04)
};

// ScriptStruct StatusEffects.DebugMenuStatusDefinition
// Size: 0x20 (Inherited: 0x00)
struct FDebugMenuStatusDefinition {
	struct FName Identifier; // 0x00(0x08)
	struct FStatus Status; // 0x08(0x18)
};

// ScriptStruct StatusEffects.ActiveStatusEffect
// Size: 0x50 (Inherited: 0x00)
struct FActiveStatusEffect {
	struct TArray<struct UClass*> SourceStatus; // 0x00(0x10)
	struct FStatusDescriptor Descriptor; // 0x10(0x04)
	char UnknownData_14[0x4]; // 0x14(0x04)
	struct TArray<struct UStatusResponse*> ResponseTemplates; // 0x18(0x10)
	struct TArray<struct UStatusResponse*> InstancedResponses; // 0x28(0x10)
	bool ResponsesAreActive; // 0x38(0x01)
	char UnknownData_39[0x17]; // 0x39(0x17)
};

// ScriptStruct StatusEffects.FeatureToggledStatusResponseList
// Size: 0x18 (Inherited: 0x00)
struct FFeatureToggledStatusResponseList {
	struct FName Feature; // 0x00(0x08)
	struct TArray<struct UStatusResponseAsset*> ResponseAssets; // 0x08(0x10)
};

// ScriptStruct StatusEffects.EventAppliedStatusToTargets
// Size: 0x28 (Inherited: 0x00)
struct FEventAppliedStatusToTargets {
	struct TArray<struct UClass*> StatusApplied; // 0x00(0x10)
	struct TArray<struct AActor*> Targets; // 0x10(0x10)
	struct AActor* StatusSource; // 0x20(0x08)
};

// ScriptStruct StatusEffects.DelayedStatusEffect
// Size: 0x20 (Inherited: 0x00)
struct FDelayedStatusEffect {
	struct FStatus StatusEffect; // 0x00(0x18)
	float InEffectTime; // 0x18(0x04)
	char UnknownData_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct StatusEffects.StatusEffectPersistenceKey
// Size: 0x18 (Inherited: 0x00)
struct FStatusEffectPersistenceKey {
	struct FStatus AppliedStatuses; // 0x00(0x18)
};

// ScriptStruct StatusEffects.ApplyStatusEvent
// Size: 0x18 (Inherited: 0x00)
struct FApplyStatusEvent {
	struct FStatus StatusToApply; // 0x00(0x18)
};

// ScriptStruct StatusEffects.BuffedTargetData
// Size: 0x18 (Inherited: 0x00)
struct FBuffedTargetData {
	struct AActor* ActorBuffed; // 0x00(0x08)
	TScriptInterface<struct UStatusEffectRecipientInterface> StatusEffectRecipient; // 0x08(0x10)
};

// ScriptStruct StatusEffects.StatusDeactivatedEvent
// Size: 0x18 (Inherited: 0x00)
struct FStatusDeactivatedEvent {
	struct FGuid Id; // 0x00(0x10)
	struct FName StatusName; // 0x10(0x08)
};

// ScriptStruct StatusEffects.StatusActivatedEvent
// Size: 0x18 (Inherited: 0x00)
struct FStatusActivatedEvent {
	struct FGuid Id; // 0x00(0x10)
	struct FName StatusName; // 0x10(0x08)
};

// ScriptStruct StatusEffects.EventStatusMaterialEffectEnded
// Size: 0x14 (Inherited: 0x00)
struct FEventStatusMaterialEffectEnded {
	struct FName MaterialParamName; // 0x00(0x08)
	struct FName CanShowMaterialParam; // 0x08(0x08)
	float FadeOutAcceleration; // 0x10(0x04)
};

// ScriptStruct StatusEffects.EventStatusMaterialEffectStarted
// Size: 0x30 (Inherited: 0x00)
struct FEventStatusMaterialEffectStarted {
	struct FName MaterialParamName; // 0x00(0x08)
	struct FName CanShowMaterialParam; // 0x08(0x08)
	struct FName TintParamName; // 0x10(0x08)
	struct FLinearColor TintColor; // 0x18(0x10)
	float TargetEffectStrength; // 0x28(0x04)
	float FadeInAcceleration; // 0x2c(0x04)
};

// ScriptStruct StatusEffects.EventStatusScreenEffectEnded
// Size: 0x0c (Inherited: 0x00)
struct FEventStatusScreenEffectEnded {
	struct FName MaterialParamName; // 0x00(0x08)
	float FadeOutAcceleration; // 0x08(0x04)
};

// ScriptStruct StatusEffects.EventStatusScreenSpaceParticleEffectEnded
// Size: 0x08 (Inherited: 0x00)
struct FEventStatusScreenSpaceParticleEffectEnded {
	struct UObject* ParticleSystem; // 0x00(0x08)
};

// ScriptStruct StatusEffects.EventStatusScreenSpaceParticleEffectStarted
// Size: 0x08 (Inherited: 0x00)
struct FEventStatusScreenSpaceParticleEffectStarted {
	struct UObject* ParticleSystem; // 0x00(0x08)
};

// ScriptStruct StatusEffects.EventStatusScreenEffectStarted
// Size: 0x28 (Inherited: 0x00)
struct FEventStatusScreenEffectStarted {
	struct FName MaterialParamName; // 0x00(0x08)
	struct FName TintParamName; // 0x08(0x08)
	struct FLinearColor TintColor; // 0x10(0x10)
	float TargetEffectStrength; // 0x20(0x04)
	float FadeInAcceleration; // 0x24(0x04)
};

// ScriptStruct StatusEffects.EventExitedSurfaceMaterialStatusZone
// Size: 0x01 (Inherited: 0x00)
struct FEventExitedSurfaceMaterialStatusZone {
	char UnknownData_0[0x1]; // 0x00(0x01)
};

// ScriptStruct StatusEffects.EventEnteredSurfaceMaterialStatusZone
// Size: 0x10 (Inherited: 0x00)
struct FEventEnteredSurfaceMaterialStatusZone {
	TScriptInterface<struct USurfaceMaterialStatusZoneInterface> EnteredZone; // 0x00(0x10)
};

