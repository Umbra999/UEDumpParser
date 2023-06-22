// Enum GameplayAbilities.EGameplayEffectGrantedAbilityRemovePolicy
enum class EGameplayEffectGrantedAbilityRemovePolicy : uint8_t {
	CancelAbilityImmediately,
	RemoveAbilityOnEnd,
	DoNothing,
	EGameplayEffectGrantedAbilityRemovePolicy_MAX,
};

// Enum GameplayAbilities.EGameplayEffectAttributeCaptureSource
enum class EGameplayEffectAttributeCaptureSource : uint8_t {
	Source,
	Target,
	EGameplayEffectAttributeCaptureSource_MAX,
};

// Enum GameplayAbilities.EGameplayAbilityActivationMode
enum class EGameplayAbilityActivationMode : uint8_t {
	Authority,
	NonAuthority,
	Predicting,
	Confirmed,
	EGameplayAbilityActivationMode_MAX,
};

// Enum GameplayAbilities.EAbilityGenericReplicatedEvent
enum class EAbilityGenericReplicatedEvent : uint8_t {
	GenericConfirm,
	GenericCancel,
	InputPressed,
	InputReleased,
	GenericSignalFromClient,
	GenericSignalFromServer,
	GameCustom1,
	GameCustom2,
	GameCustom3,
	GameCustom4,
	GameCustom5,
	MAX,
	EAbilityGenericReplicatedEvent_MAX,
};

// Enum GameplayAbilities.ETargetDataFilterSelf
enum class ETargetDataFilterSelf : uint8_t {
	TDFS_Any,
	TDFS_NoSelf,
	TDFS_NoOthers,
	TDFS_MAX,
};

// Enum GameplayAbilities.EGameplayTagEventType
enum class EGameplayTagEventType : uint8_t {
	NewOrRemoved,
	AnyCountChange,
	EGameplayTagEventType_MAX,
};

// Enum GameplayAbilities.EGameplayCueEvent
enum class EGameplayCueEvent : uint8_t {
	OnActive,
	WhileActive,
	Executed,
	Removed,
	EGameplayCueEvent_MAX,
};

// Enum GameplayAbilities.EGameplayEffectStackingType
enum class EGameplayEffectStackingType : uint8_t {
	None,
	AggregateBySource,
	AggregateByTarget,
	EGameplayEffectStackingType_MAX,
};

// Enum GameplayAbilities.EGameplayModOp
enum class EGameplayModOp : uint8_t {
	Additive,
	Multiplicitive,
	Division,
	Override,
	Max,
	EGameplayModOp_MAX,
};

// Enum GameplayAbilities.EGameplayAbilityTargetingLocationType
enum class EGameplayAbilityTargetingLocationType : uint8_t {
	LiteralTransform,
	ActorTransform,
	SocketTransform,
	EGameplayAbilityTargetingLocationType_MAX,
};

// Enum GameplayAbilities.EGameplayTargetingConfirmation
enum class EGameplayTargetingConfirmation : uint8_t {
	Instant,
	UserConfirmed,
	Custom,
	CustomMulti,
	EGameplayTargetingConfirmation_MAX,
};

// Enum GameplayAbilities.EGameplayAbilityTriggerSource
enum class EGameplayAbilityTriggerSource : uint8_t {
	GameplayEvent,
	OwnedTagAdded,
	OwnedTagPresent,
	EGameplayAbilityTriggerSource_MAX,
};

// Enum GameplayAbilities.EGameplayAbilityReplicationPolicy
enum class EGameplayAbilityReplicationPolicy : uint8_t {
	ReplicateNo,
	ReplicateYes,
	EGameplayAbilityReplicationPolicy_MAX,
};

// Enum GameplayAbilities.EGameplayAbilityNetExecutionPolicy
enum class EGameplayAbilityNetExecutionPolicy : uint8_t {
	LocalPredicted,
	LocalOnly,
	ServerInitiated,
	ServerOnly,
	EGameplayAbilityNetExecutionPolicy_MAX,
};

// Enum GameplayAbilities.EGameplayAbilityInstancingPolicy
enum class EGameplayAbilityInstancingPolicy : uint8_t {
	NonInstanced,
	InstancedPerActor,
	InstancedPerExecution,
	EGameplayAbilityInstancingPolicy_MAX,
};

// Enum GameplayAbilities.EGameplayEffectStackingPeriodPolicy
enum class EGameplayEffectStackingPeriodPolicy : uint8_t {
	ResetOnSuccessfulApplication,
	NeverReset,
	EGameplayEffectStackingPeriodPolicy_MAX,
};

// Enum GameplayAbilities.EGameplayEffectStackingDurationPolicy
enum class EGameplayEffectStackingDurationPolicy : uint8_t {
	RefreshOnSuccessfulApplication,
	NeverRefresh,
	EGameplayEffectStackingDurationPolicy_MAX,
};

// Enum GameplayAbilities.EGameplayEffectDurationType
enum class EGameplayEffectDurationType : uint8_t {
	Instant,
	Infinite,
	HasDuration,
	EGameplayEffectDurationType_MAX,
};

// Enum GameplayAbilities.EAttributeBasedFloatCalculationType
enum class EAttributeBasedFloatCalculationType : uint8_t {
	AttributeMagnitude,
	AttributeBaseValue,
	AttributeBonusMagnitude,
	EAttributeBasedFloatCalculationType_MAX,
};

// Enum GameplayAbilities.EGameplayEffectMagnitudeCalculation
enum class EGameplayEffectMagnitudeCalculation : uint8_t {
	ScalableFloat,
	AttributeBased,
	CustomCalculationClass,
	SetByCaller,
	EGameplayEffectMagnitudeCalculation_MAX,
};

// Enum GameplayAbilities.EAbilityTaskNetSyncType
enum class EAbilityTaskNetSyncType : uint8_t {
	BothWait,
	OnlyServerWait,
	OnlyClientWait,
	EAbilityTaskNetSyncType_MAX,
};

// Enum GameplayAbilities.ETargetAbilitySelfSelection
enum class ETargetAbilitySelfSelection : uint8_t {
	TASS_Permit,
	TASS_Forbid,
	TASS_Require,
	TASS_MAX,
};

// Enum GameplayAbilities.EWaitAttributeChangeComparison
enum class EWaitAttributeChangeComparison : uint8_t {
	None,
	GreaterThan,
	LessThan,
	GreaterThanOrEqualTo,
	LessThanOrEqualTo,
	NotEqualTo,
	ExactlyEqualTo,
	MAX,
	EWaitAttributeChangeComparison_MAX,
};

// Enum GameplayAbilities.EGameplayAbilityInputBinds
enum class EGameplayAbilityInputBinds : uint8_t {
	Ability1,
	Ability2,
	Ability3,
	Ability4,
	Ability5,
	Ability6,
	Ability7,
	Ability8,
	Ability9,
	EGameplayAbilityInputBinds_MAX,
};

// Enum GameplayAbilities.EGameplayCuePayloadType
enum class EGameplayCuePayloadType : uint8_t {
	EffectContext,
	CueParameters,
	FromSpec,
	EGameplayCuePayloadType_MAX,
};

// ScriptStruct GameplayAbilities.ActiveGameplayEffect
// Size: 0x300 (Inherited: 0x08)
struct FActiveGameplayEffect : FFastArraySerializerItem {
	char UnknownData_8[0x8]; // 0x08(0x08)
	struct FGameplayEffectSpec Spec; // 0x10(0x2a0)
	struct FPredictionKey PredictionKey; // 0x2b0(0x18)
	float StartServerWorldTime; // 0x2c8(0x04)
	float CachedStartServerWorldTime; // 0x2cc(0x04)
	float StartWorldTime; // 0x2d0(0x04)
	bool bIsInhibited; // 0x2d4(0x01)
	char UnknownData_2D5[0x2b]; // 0x2d5(0x2b)
};

// ScriptStruct GameplayAbilities.PredictionKey
// Size: 0x18 (Inherited: 0x00)
struct FPredictionKey {
	int16_t Current; // 0x00(0x02)
	int16_t Base; // 0x02(0x02)
	char UnknownData_4[0x4]; // 0x04(0x04)
	struct UPackageMap* PredictiveConnection; // 0x08(0x08)
	bool bIsStale; // 0x10(0x01)
	bool bIsServerInitiated; // 0x11(0x01)
	char UnknownData_12[0x6]; // 0x12(0x06)
};

// ScriptStruct GameplayAbilities.GameplayEffectSpec
// Size: 0x2a0 (Inherited: 0x00)
struct FGameplayEffectSpec {
	struct UGameplayEffect* Def; // 0x00(0x08)
	struct TArray<struct FGameplayEffectModifiedAttribute> ModifiedAttributes; // 0x08(0x10)
	struct FGameplayEffectAttributeCaptureSpecContainer CapturedRelevantAttributes; // 0x18(0x28)
	char UnknownData_40[0x10]; // 0x40(0x10)
	float Duration; // 0x50(0x04)
	float Period; // 0x54(0x04)
	float ChanceToApplyToTarget; // 0x58(0x04)
	char UnknownData_5C[0x4]; // 0x5c(0x04)
	struct FTagContainerAggregator CapturedSourceTags; // 0x60(0xa8)
	struct FTagContainerAggregator CapturedTargetTags; // 0x108(0xa8)
	struct FGameplayTagContainer DynamicGrantedTags; // 0x1b0(0x28)
	struct FGameplayTagContainer DynamicAssetTags; // 0x1d8(0x28)
	struct TArray<struct FModifierSpec> Modifiers; // 0x200(0x10)
	int32_t StackCount; // 0x210(0x04)
	char bCompletedSourceAttributeCapture : 1; // 0x214(0x01)
	char bCompletedTargetAttributeCapture : 1; // 0x214(0x01)
	char bDurationLocked : 1; // 0x214(0x01)
	char UnknownData_214_3 : 5; // 0x214(0x01)
	char UnknownData_215[0x3]; // 0x215(0x03)
	struct TArray<struct FGameplayAbilitySpecDef> GrantedAbilitySpecs; // 0x218(0x10)
	char UnknownData_228[0x50]; // 0x228(0x50)
	struct FGameplayEffectContextHandle EffectContext; // 0x278(0x20)
	float Level; // 0x298(0x04)
	char UnknownData_29C[0x4]; // 0x29c(0x04)
};

// ScriptStruct GameplayAbilities.GameplayEffectContextHandle
// Size: 0x20 (Inherited: 0x00)
struct FGameplayEffectContextHandle {
	char UnknownData_0[0x20]; // 0x00(0x20)
};

// ScriptStruct GameplayAbilities.GameplayAbilitySpecDef
// Size: 0x28 (Inherited: 0x00)
struct FGameplayAbilitySpecDef {
	struct UClass* Ability; // 0x00(0x08)
	int32_t Level; // 0x08(0x04)
	int32_t InputID; // 0x0c(0x04)
	char RemovalPolicy; // 0x10(0x01)
	char UnknownData_11[0x7]; // 0x11(0x07)
	struct UObject* SourceObject; // 0x18(0x08)
	struct FGameplayAbilitySpecHandle AssignedHandle; // 0x20(0x04)
	char UnknownData_24[0x4]; // 0x24(0x04)
};

// ScriptStruct GameplayAbilities.GameplayAbilitySpecHandle
// Size: 0x04 (Inherited: 0x00)
struct FGameplayAbilitySpecHandle {
	int32_t Handle; // 0x00(0x04)
};

// ScriptStruct GameplayAbilities.ModifierSpec
// Size: 0x04 (Inherited: 0x00)
struct FModifierSpec {
	float EvaluatedMagnitude; // 0x00(0x04)
};

// ScriptStruct GameplayAbilities.TagContainerAggregator
// Size: 0xa8 (Inherited: 0x00)
struct FTagContainerAggregator {
	struct FGameplayTagContainer CapturedActorTags; // 0x00(0x28)
	struct FGameplayTagContainer CapturedSpecTags; // 0x28(0x28)
	struct FGameplayTagContainer ScopedTags; // 0x50(0x28)
	char UnknownData_78[0x30]; // 0x78(0x30)
};

// ScriptStruct GameplayAbilities.GameplayEffectAttributeCaptureSpecContainer
// Size: 0x28 (Inherited: 0x00)
struct FGameplayEffectAttributeCaptureSpecContainer {
	struct TArray<struct FGameplayEffectAttributeCaptureSpec> SourceAttributes; // 0x00(0x10)
	struct TArray<struct FGameplayEffectAttributeCaptureSpec> TargetAttributes; // 0x10(0x10)
	bool bHasNonSnapshottedAttributes; // 0x20(0x01)
	char UnknownData_21[0x7]; // 0x21(0x07)
};

// ScriptStruct GameplayAbilities.GameplayEffectAttributeCaptureSpec
// Size: 0x28 (Inherited: 0x00)
struct FGameplayEffectAttributeCaptureSpec {
	struct FGameplayEffectAttributeCaptureDefinition BackingDefinition; // 0x00(0x10)
	char UnknownData_10[0x18]; // 0x10(0x18)
};

// ScriptStruct GameplayAbilities.GameplayEffectAttributeCaptureDefinition
// Size: 0x10 (Inherited: 0x00)
struct FGameplayEffectAttributeCaptureDefinition {
	struct FGameplayAttribute AttributeToCapture; // 0x00(0x08)
	char AttributeSource; // 0x08(0x01)
	bool bSnapshot; // 0x09(0x01)
	char UnknownData_A[0x6]; // 0x0a(0x06)
};

// ScriptStruct GameplayAbilities.GameplayAttribute
// Size: 0x08 (Inherited: 0x00)
struct FGameplayAttribute {
	struct UProperty* Attribute; // 0x00(0x08)
};

// ScriptStruct GameplayAbilities.GameplayEffectModifiedAttribute
// Size: 0x10 (Inherited: 0x00)
struct FGameplayEffectModifiedAttribute {
	struct FGameplayAttribute Attribute; // 0x00(0x08)
	float TotalMagnitude; // 0x08(0x04)
	char UnknownData_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct GameplayAbilities.ActiveGameplayEffectHandle
// Size: 0x04 (Inherited: 0x00)
struct FActiveGameplayEffectHandle {
	int32_t Handle; // 0x00(0x04)
};

// ScriptStruct GameplayAbilities.GameplayEffectSpecHandle
// Size: 0x20 (Inherited: 0x00)
struct FGameplayEffectSpecHandle {
	char UnknownData_0[0x20]; // 0x00(0x20)
};

// ScriptStruct GameplayAbilities.GameplayAbilityTargetDataHandle
// Size: 0x10 (Inherited: 0x00)
struct FGameplayAbilityTargetDataHandle {
	char UnknownData_0[0x10]; // 0x00(0x10)
};

// ScriptStruct GameplayAbilities.GameplayEventData
// Size: 0xa0 (Inherited: 0x00)
struct FGameplayEventData {
	struct FGameplayTag EventTag; // 0x00(0x08)
	struct AActor* Instigator; // 0x08(0x08)
	struct AActor* Target; // 0x10(0x08)
	struct UObject* OptionalObject; // 0x18(0x08)
	struct UObject* OptionalObject2; // 0x20(0x08)
	struct FGameplayEffectContextHandle ContextHandle; // 0x28(0x20)
	struct FGameplayTagContainer InstigatorTags; // 0x48(0x28)
	struct FGameplayTagContainer TargetTags; // 0x70(0x28)
	float EventMagnitude; // 0x98(0x04)
	char UnknownData_9C[0x4]; // 0x9c(0x04)
};

// ScriptStruct GameplayAbilities.GameplayAbilityActivationInfo
// Size: 0x20 (Inherited: 0x00)
struct FGameplayAbilityActivationInfo {
	char ActivationMode; // 0x00(0x01)
	bool bCanBeEndedByOtherInstance; // 0x01(0x01)
	char UnknownData_2[0x6]; // 0x02(0x06)
	struct FPredictionKey PredictionKeyWhenActivated; // 0x08(0x18)
};

// ScriptStruct GameplayAbilities.GameplayEffectSpecForRPC
// Size: 0x90 (Inherited: 0x00)
struct FGameplayEffectSpecForRPC {
	struct UGameplayEffect* Def; // 0x00(0x08)
	struct TArray<struct FGameplayEffectModifiedAttribute> ModifiedAttributes; // 0x08(0x10)
	struct FGameplayEffectContextHandle EffectContext; // 0x18(0x20)
	struct FGameplayTagContainer AggregatedSourceTags; // 0x38(0x28)
	struct FGameplayTagContainer AggregatedTargetTags; // 0x60(0x28)
	float Level; // 0x88(0x04)
	char UnknownData_8C[0x4]; // 0x8c(0x04)
};

// ScriptStruct GameplayAbilities.GameplayCueParameters
// Size: 0x88 (Inherited: 0x00)
struct FGameplayCueParameters {
	float NormalizedMagnitude; // 0x00(0x04)
	float RawMagnitude; // 0x04(0x04)
	struct FGameplayEffectContextHandle EffectContext; // 0x08(0x20)
	struct FName MatchedTagName; // 0x28(0x08)
	struct FGameplayTag OriginalTag; // 0x30(0x08)
	struct FGameplayTagContainer AggregatedSourceTags; // 0x38(0x28)
	struct FGameplayTagContainer AggregatedTargetTags; // 0x60(0x28)
};

// ScriptStruct GameplayAbilities.ActiveGameplayCueContainer
// Size: 0xc0 (Inherited: 0xa8)
struct FActiveGameplayCueContainer : FFastArraySerializer {
	struct TArray<struct FActiveGameplayCue> GameplayCues; // 0xa8(0x10)
	struct UAbilitySystemComponent* Owner; // 0xb8(0x08)
};

// ScriptStruct GameplayAbilities.ActiveGameplayCue
// Size: 0x30 (Inherited: 0x08)
struct FActiveGameplayCue : FFastArraySerializerItem {
	struct FGameplayTag GameplayCueTag; // 0x08(0x08)
	struct FPredictionKey PredictionKey; // 0x10(0x18)
	bool bPredictivelyRemoved; // 0x28(0x01)
	char UnknownData_29[0x7]; // 0x29(0x07)
};

// ScriptStruct GameplayAbilities.ActiveGameplayEffectsContainer
// Size: 0x368 (Inherited: 0xa8)
struct FActiveGameplayEffectsContainer : FFastArraySerializer {
	char UnknownData_A8[0x20]; // 0xa8(0x20)
	struct TArray<struct FActiveGameplayEffect> GameplayEffects_Internal; // 0xc8(0x10)
	char UnknownData_D8[0x290]; // 0xd8(0x290)
};

// ScriptStruct GameplayAbilities.GameplayAbilityLocalAnimMontage
// Size: 0x30 (Inherited: 0x00)
struct FGameplayAbilityLocalAnimMontage {
	struct UAnimMontage* AnimMontage; // 0x00(0x08)
	bool PlayBit; // 0x08(0x01)
	char UnknownData_9[0x7]; // 0x09(0x07)
	struct FPredictionKey PredictionKey; // 0x10(0x18)
	struct UGameplayAbility* AnimatingAbility; // 0x28(0x08)
};

// ScriptStruct GameplayAbilities.GameplayAbilityRepAnimMontage
// Size: 0x30 (Inherited: 0x00)
struct FGameplayAbilityRepAnimMontage {
	struct UAnimMontage* AnimMontage; // 0x00(0x08)
	float PlayRate; // 0x08(0x04)
	float Position; // 0x0c(0x04)
	float BlendTime; // 0x10(0x04)
	char NextSectionID; // 0x14(0x01)
	char IsStopped : 1; // 0x15(0x01)
	char ForcePlayBit : 1; // 0x15(0x01)
	char UnknownData_15_2 : 6; // 0x15(0x01)
	char UnknownData_16[0x2]; // 0x16(0x02)
	struct FPredictionKey PredictionKey; // 0x18(0x18)
};

// ScriptStruct GameplayAbilities.GameplayAbilitySpecContainer
// Size: 0xc0 (Inherited: 0xa8)
struct FGameplayAbilitySpecContainer : FFastArraySerializer {
	struct TArray<struct FGameplayAbilitySpec> Items; // 0xa8(0x10)
	char UnknownData_B8[0x8]; // 0xb8(0x08)
};

// ScriptStruct GameplayAbilities.GameplayAbilitySpec
// Size: 0x78 (Inherited: 0x08)
struct FGameplayAbilitySpec : FFastArraySerializerItem {
	struct FGameplayAbilitySpecHandle Handle; // 0x08(0x04)
	char UnknownData_C[0x4]; // 0x0c(0x04)
	struct UGameplayAbility* Ability; // 0x10(0x08)
	int32_t Level; // 0x18(0x04)
	int32_t InputID; // 0x1c(0x04)
	struct UObject* SourceObject; // 0x20(0x08)
	bool InputPressed; // 0x28(0x01)
	char ActiveCount; // 0x29(0x01)
	bool RemoveAfterActivation; // 0x2a(0x01)
	char UnknownData_2B[0x5]; // 0x2b(0x05)
	struct FGameplayAbilityActivationInfo ActivationInfo; // 0x30(0x20)
	struct TArray<struct UGameplayAbility*> NonReplicatedInstances; // 0x50(0x10)
	struct TArray<struct UGameplayAbility*> ReplicatedInstances; // 0x60(0x10)
	struct FActiveGameplayEffectHandle GameplayEffectHandle; // 0x70(0x04)
	bool PendingRemove; // 0x74(0x01)
	char UnknownData_75[0x3]; // 0x75(0x03)
};

// ScriptStruct GameplayAbilities.AttributeDefaults
// Size: 0x10 (Inherited: 0x00)
struct FAttributeDefaults {
	struct UClass* Attributes; // 0x00(0x08)
	struct UDataTable* DefaultStartingTable; // 0x08(0x08)
};

// ScriptStruct GameplayAbilities.GameplayTargetDataFilterHandle
// Size: 0x18 (Inherited: 0x00)
struct FGameplayTargetDataFilterHandle {
	char UnknownData_0[0x18]; // 0x00(0x18)
};

// ScriptStruct GameplayAbilities.GameplayTargetDataFilter
// Size: 0x28 (Inherited: 0x00)
struct FGameplayTargetDataFilter {
	char UnknownData_0[0x8]; // 0x00(0x08)
	struct AActor* SelfActor; // 0x08(0x08)
	char SelfFilter; // 0x10(0x01)
	char UnknownData_11[0x7]; // 0x11(0x07)
	struct UClass* RequiredActorClass; // 0x18(0x08)
	bool bReverseFilter; // 0x20(0x01)
	char UnknownData_21[0x7]; // 0x21(0x07)
};

// ScriptStruct GameplayAbilities.AttributeMetaData
// Size: 0x28 (Inherited: 0x01)
struct FAttributeMetaData : FTableRowBase {
	float BaseValue; // 0x00(0x04)
	float MinValue; // 0x04(0x04)
	float MaxValue; // 0x08(0x04)
	char UnknownData_D[0x3]; // 0x0d(0x03)
	struct FString DerivedAttributeInfo; // 0x10(0x10)
	bool bCanStack; // 0x20(0x01)
	char UnknownData_21[0x7]; // 0x21(0x07)
};

// ScriptStruct GameplayAbilities.ScalableFloat
// Size: 0x20 (Inherited: 0x00)
struct FScalableFloat {
	float Value; // 0x00(0x04)
	char UnknownData_4[0x4]; // 0x04(0x04)
	struct FCurveTableRowHandle Curve; // 0x08(0x10)
	char UnknownData_18[0x8]; // 0x18(0x08)
};

// ScriptStruct GameplayAbilities.GlobalCurveDataOverride
// Size: 0x10 (Inherited: 0x00)
struct FGlobalCurveDataOverride {
	char UnknownData_0[0x10]; // 0x00(0x10)
};

// ScriptStruct GameplayAbilities.GameplayTagRequirements
// Size: 0x50 (Inherited: 0x00)
struct FGameplayTagRequirements {
	struct FGameplayTagContainer RequireTags; // 0x00(0x28)
	struct FGameplayTagContainer IgnoreTags; // 0x28(0x28)
};

// ScriptStruct GameplayAbilities.GameplayEffectContext
// Size: 0x60 (Inherited: 0x00)
struct FGameplayEffectContext {
	char UnknownData_0[0x8]; // 0x00(0x08)
	struct AActor* Instigator; // 0x08(0x08)
	struct AActor* EffectCauser; // 0x10(0x08)
	struct UObject* SourceObject; // 0x18(0x08)
	struct UAbilitySystemComponent* InstigatorAbilitySystemComponent; // 0x20(0x08)
	struct TArray<struct AActor*> Actors; // 0x28(0x10)
	char UnknownData_38[0x18]; // 0x38(0x18)
	struct FVector WorldOrigin; // 0x50(0x0c)
	bool bHasWorldOrigin; // 0x5c(0x01)
	char UnknownData_5D[0x3]; // 0x5d(0x03)
};

// ScriptStruct GameplayAbilities.GameplayModifierEvaluatedData
// Size: 0x18 (Inherited: 0x00)
struct FGameplayModifierEvaluatedData {
	struct FGameplayAttribute Attribute; // 0x00(0x08)
	char ModifierOp; // 0x08(0x01)
	char UnknownData_9[0x3]; // 0x09(0x03)
	float Magnitude; // 0x0c(0x04)
	struct FActiveGameplayEffectHandle Handle; // 0x10(0x04)
	bool IsValid; // 0x14(0x01)
	char UnknownData_15[0x3]; // 0x15(0x03)
};

// ScriptStruct GameplayAbilities.GameplayAbilityTargetData_SingleTargetHit
// Size: 0x88 (Inherited: 0x08)
struct FGameplayAbilityTargetData_SingleTargetHit : FGameplayAbilityTargetData {
	struct FHitResult HitResult; // 0x08(0x80)
};

// ScriptStruct GameplayAbilities.GameplayAbilityTargetData
// Size: 0x08 (Inherited: 0x00)
struct FGameplayAbilityTargetData {
	char UnknownData_0[0x8]; // 0x00(0x08)
};

// ScriptStruct GameplayAbilities.GameplayAbilityTargetData_ActorArray
// Size: 0x90 (Inherited: 0x08)
struct FGameplayAbilityTargetData_ActorArray : FGameplayAbilityTargetData {
	char UnknownData_8[0x8]; // 0x08(0x08)
	struct FGameplayAbilityTargetingLocationInfo SourceLocation; // 0x10(0x70)
	struct TArray<struct AActor*> TargetActorArray; // 0x80(0x10)
};

// ScriptStruct GameplayAbilities.GameplayAbilityTargetingLocationInfo
// Size: 0x70 (Inherited: 0x00)
struct FGameplayAbilityTargetingLocationInfo {
	char UnknownData_0[0x10]; // 0x00(0x10)
	char LocationType; // 0x10(0x01)
	char UnknownData_11[0xf]; // 0x11(0x0f)
	struct FTransform LiteralTransform; // 0x20(0x30)
	struct AActor* SourceActor; // 0x50(0x08)
	struct UMeshComponent* SourceComponent; // 0x58(0x08)
	struct UGameplayAbility* SourceAbility; // 0x60(0x08)
	struct FName SourceSocketName; // 0x68(0x08)
};

// ScriptStruct GameplayAbilities.GameplayAbilityTargetData_LocationInfo
// Size: 0xf0 (Inherited: 0x08)
struct FGameplayAbilityTargetData_LocationInfo : FGameplayAbilityTargetData {
	char UnknownData_8[0x8]; // 0x08(0x08)
	struct FGameplayAbilityTargetingLocationInfo SourceLocation; // 0x10(0x70)
	struct FGameplayAbilityTargetingLocationInfo TargetLocation; // 0x80(0x70)
};

// ScriptStruct GameplayAbilities.GameplayAbilitySpecHandleAndPredictionKey
// Size: 0x08 (Inherited: 0x00)
struct FGameplayAbilitySpecHandleAndPredictionKey {
	struct FGameplayAbilitySpecHandle AbilityHandle; // 0x00(0x04)
	int32_t PredictionKeyAtCreation; // 0x04(0x04)
};

// ScriptStruct GameplayAbilities.GameplayAbilityActorInfo
// Size: 0x38 (Inherited: 0x00)
struct FGameplayAbilityActorInfo {
	char UnknownData_0[0x8]; // 0x00(0x08)
	struct AActor* OwnerActor; // 0x08(0x08)
	struct AActor* AvatarActor; // 0x10(0x08)
	struct APlayerController* PlayerController; // 0x18(0x08)
	struct UAbilitySystemComponent* AbilitySystemComponent; // 0x20(0x08)
	struct UAnimInstance* AnimInstance; // 0x28(0x08)
	struct UMovementComponent* MovementComponent; // 0x30(0x08)
};

// ScriptStruct GameplayAbilities.ActiveGameplayEffectQuery
// Size: 0x50 (Inherited: 0x00)
struct FActiveGameplayEffectQuery {
	char UnknownData_0[0x50]; // 0x00(0x50)
};

// ScriptStruct GameplayAbilities.GameplayEffectQuery
// Size: 0xd0 (Inherited: 0x00)
struct FGameplayEffectQuery {
	char UnknownData_0[0x8]; // 0x00(0x08)
	DelegateProperty CustomMatchDelegate_BP; // 0x08(0x10)
	struct FGameplayTagQuery OwningTagQuery; // 0x18(0x48)
	struct FGameplayTagQuery EffectTagQuery; // 0x60(0x48)
	struct FGameplayAttribute ModifyingAttribute; // 0xa8(0x08)
	struct UObject* EffectSource; // 0xb0(0x08)
	struct UGameplayEffect* EffectDefinition; // 0xb8(0x08)
	char UnknownData_C0[0x10]; // 0xc0(0x10)
};

// ScriptStruct GameplayAbilities.InheritedTagContainer
// Size: 0x78 (Inherited: 0x00)
struct FInheritedTagContainer {
	struct FGameplayTagContainer CombinedTags; // 0x00(0x28)
	struct FGameplayTagContainer Added; // 0x28(0x28)
	struct FGameplayTagContainer Removed; // 0x50(0x28)
};

// ScriptStruct GameplayAbilities.GameplayEffectCue
// Size: 0x38 (Inherited: 0x00)
struct FGameplayEffectCue {
	struct FGameplayAttribute MagnitudeAttribute; // 0x00(0x08)
	float MinLevel; // 0x08(0x04)
	float MaxLevel; // 0x0c(0x04)
	struct FGameplayTagContainer GameplayCueTags; // 0x10(0x28)
};

// ScriptStruct GameplayAbilities.GameplayModifierInfo
// Size: 0x240 (Inherited: 0x00)
struct FGameplayModifierInfo {
	struct FGameplayAttribute Attribute; // 0x00(0x08)
	char ModifierOp; // 0x08(0x01)
	char UnknownData_9[0x7]; // 0x09(0x07)
	struct FScalableFloat Magnitude; // 0x10(0x20)
	struct FGameplayEffectModifierMagnitude ModifierMagnitude; // 0x30(0x170)
	struct FGameplayTagRequirements SourceTags; // 0x1a0(0x50)
	struct FGameplayTagRequirements TargetTags; // 0x1f0(0x50)
};

// ScriptStruct GameplayAbilities.GameplayEffectModifierMagnitude
// Size: 0x170 (Inherited: 0x00)
struct FGameplayEffectModifierMagnitude {
	char MagnitudeCalculationType; // 0x00(0x01)
	char UnknownData_1[0x7]; // 0x01(0x07)
	struct FScalableFloat ScalableFloatMagnitude; // 0x08(0x20)
	struct FAttributeBasedFloat AttributeBasedMagnitude; // 0x28(0xd8)
	struct FCustomCalculationBasedFloat CustomMagnitude; // 0x100(0x68)
	struct FSetByCallerFloat SetByCallerMagnitude; // 0x168(0x08)
};

// ScriptStruct GameplayAbilities.SetByCallerFloat
// Size: 0x08 (Inherited: 0x00)
struct FSetByCallerFloat {
	struct FName DataName; // 0x00(0x08)
};

// ScriptStruct GameplayAbilities.CustomCalculationBasedFloat
// Size: 0x68 (Inherited: 0x00)
struct FCustomCalculationBasedFloat {
	struct UClass* CalculationClassMagnitude; // 0x00(0x08)
	struct FScalableFloat Coefficient; // 0x08(0x20)
	struct FScalableFloat PreMultiplyAdditiveValue; // 0x28(0x20)
	struct FScalableFloat PostMultiplyAdditiveValue; // 0x48(0x20)
};

// ScriptStruct GameplayAbilities.AttributeBasedFloat
// Size: 0xd8 (Inherited: 0x00)
struct FAttributeBasedFloat {
	struct FScalableFloat Coefficient; // 0x00(0x20)
	struct FScalableFloat PreMultiplyAdditiveValue; // 0x20(0x20)
	struct FScalableFloat PostMultiplyAdditiveValue; // 0x40(0x20)
	struct FGameplayEffectAttributeCaptureDefinition BackingAttribute; // 0x60(0x10)
	struct FCurveTableRowHandle AttributeCurve; // 0x70(0x10)
	char AttributeCalculationType; // 0x80(0x01)
	char UnknownData_81[0x7]; // 0x81(0x07)
	struct FGameplayTagContainer SourceTagFilter; // 0x88(0x28)
	struct FGameplayTagContainer TargetTagFilter; // 0xb0(0x28)
};

// ScriptStruct GameplayAbilities.GameplayEffectExecutionDefinition
// Size: 0x50 (Inherited: 0x00)
struct FGameplayEffectExecutionDefinition {
	struct UClass* CalculationClass; // 0x00(0x08)
	struct FGameplayTagContainer PassedInTags; // 0x08(0x28)
	struct TArray<struct FGameplayEffectExecutionScopedModifierInfo> CalculationModifiers; // 0x30(0x10)
	struct TArray<struct UClass*> ConditionalGameplayEffectClasses; // 0x40(0x10)
};

// ScriptStruct GameplayAbilities.GameplayEffectExecutionScopedModifierInfo
// Size: 0x228 (Inherited: 0x00)
struct FGameplayEffectExecutionScopedModifierInfo {
	struct FGameplayEffectAttributeCaptureDefinition CapturedAttribute; // 0x00(0x10)
	char ModifierOp; // 0x10(0x01)
	char UnknownData_11[0x7]; // 0x11(0x07)
	struct FGameplayEffectModifierMagnitude ModifierMagnitude; // 0x18(0x170)
	struct FGameplayTagRequirements SourceTags; // 0x188(0x50)
	struct FGameplayTagRequirements TargetTags; // 0x1d8(0x50)
};

// ScriptStruct GameplayAbilities.AbilityTriggerData
// Size: 0x0c (Inherited: 0x00)
struct FAbilityTriggerData {
	struct FGameplayTag TriggerTag; // 0x00(0x08)
	char TriggerSource; // 0x08(0x01)
	char UnknownData_9[0x3]; // 0x09(0x03)
};

// ScriptStruct GameplayAbilities.WorldReticleParameters
// Size: 0x0c (Inherited: 0x00)
struct FWorldReticleParameters {
	struct FVector AOEScale; // 0x00(0x0c)
};

// ScriptStruct GameplayAbilities.GameplayAbilityBindInfo
// Size: 0x10 (Inherited: 0x00)
struct FGameplayAbilityBindInfo {
	char Command; // 0x00(0x01)
	char UnknownData_1[0x7]; // 0x01(0x07)
	struct UClass* GameplayAbilityClass; // 0x08(0x08)
};

// ScriptStruct GameplayAbilities.GameplayCuePendingExecute
// Size: 0x148 (Inherited: 0x00)
struct FGameplayCuePendingExecute {
	struct FGameplayTag GameplayCueTag; // 0x00(0x08)
	struct FPredictionKey PredictionKey; // 0x08(0x18)
	char PayloadType; // 0x20(0x01)
	char UnknownData_21[0x7]; // 0x21(0x07)
	struct UAbilitySystemComponent* OwningComponent; // 0x28(0x08)
	struct FGameplayEffectSpecForRPC FromSpec; // 0x30(0x90)
	struct FGameplayCueParameters CueParameters; // 0xc0(0x88)
};

// ScriptStruct GameplayAbilities.GameplayCueNotifyData
// Size: 0x28 (Inherited: 0x00)
struct FGameplayCueNotifyData {
	struct FGameplayTag GameplayCueTag; // 0x00(0x08)
	struct FStringAssetReference GameplayCueNotifyObj; // 0x08(0x10)
	struct UClass* LoadedGameplayCueClass; // 0x18(0x08)
	char UnknownData_20[0x8]; // 0x20(0x08)
};

// ScriptStruct GameplayAbilities.GameplayEffectCustomExecutionOutput
// Size: 0x18 (Inherited: 0x00)
struct FGameplayEffectCustomExecutionOutput {
	struct TArray<struct FGameplayModifierEvaluatedData> OutputModifiers; // 0x00(0x10)
	char bTriggerConditionalGameplayEffects : 1; // 0x10(0x01)
	char bHandledStackCountManually : 1; // 0x10(0x01)
	char bHandledGameplayCuesManually : 1; // 0x10(0x01)
	char UnknownData_10_3 : 5; // 0x10(0x01)
	char UnknownData_11[0x7]; // 0x11(0x07)
};

// ScriptStruct GameplayAbilities.GameplayEffectCustomExecutionParameters
// Size: 0x88 (Inherited: 0x00)
struct FGameplayEffectCustomExecutionParameters {
	char UnknownData_0[0x88]; // 0x00(0x88)
};

// ScriptStruct GameplayAbilities.GameplayTagResponseTableEntry
// Size: 0x20 (Inherited: 0x00)
struct FGameplayTagResponseTableEntry {
	struct FGameplayTagReponsePair Positive; // 0x00(0x10)
	struct FGameplayTagReponsePair Negative; // 0x10(0x10)
};

// ScriptStruct GameplayAbilities.GameplayTagReponsePair
// Size: 0x10 (Inherited: 0x00)
struct FGameplayTagReponsePair {
	struct FGameplayTag Tag; // 0x00(0x08)
	struct UClass* ResponseGameplayEffect; // 0x08(0x08)
};

