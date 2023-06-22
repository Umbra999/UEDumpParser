// Class StatusEffects.StatusBase
// Size: 0x30 (Inherited: 0x28)
struct UStatusBase : UObject {
	char UnknownData_28[0x8]; // 0x28(0x08)
};

// Class StatusEffects.StatusResponse
// Size: 0x30 (Inherited: 0x28)
struct UStatusResponse : UObject {
	char UnknownData_28[0x8]; // 0x28(0x08)
};

// Class StatusEffects.ActivateableSurfaceMaterialStatusZoneInterface
// Size: 0x28 (Inherited: 0x28)
struct UActivateableSurfaceMaterialStatusZoneInterface : UInterface {
};

// Class StatusEffects.AppliedStatusToSelfStatCondition
// Size: 0x48 (Inherited: 0x30)
struct UAppliedStatusToSelfStatCondition : UTargetedStatCondition {
	struct TArray<struct UClass*> Status; // 0x30(0x10)
	char ComparisonMode; // 0x40(0x01)
	char UnknownData_41[0x7]; // 0x41(0x07)
};

// Class StatusEffects.BuffReceiverInterface
// Size: 0x28 (Inherited: 0x28)
struct UBuffReceiverInterface : UInterface {
};

// Class StatusEffects.BuffReceiverComponent
// Size: 0xd8 (Inherited: 0xc8)
struct UBuffReceiverComponent : UActorComponent {
	char UnknownData_C8[0x8]; // 0xc8(0x08)
	bool CanReceiveBuff; // 0xd0(0x01)
	char UnknownData_D1[0x7]; // 0xd1(0x07)
};

// Class StatusEffects.DebugMenuStatusDataAsset
// Size: 0x48 (Inherited: 0x28)
struct UDebugMenuStatusDataAsset : UDataAsset {
	struct TArray<struct FDebugMenuStatusDefinition> StatusDefinitions; // 0x28(0x10)
	struct TArray<float> Durations; // 0x38(0x10)
};

// Class StatusEffects.DebugStatusTicketHolder
// Size: 0x3d0 (Inherited: 0x3c8)
struct ADebugStatusTicketHolder : AActor {
	struct AActor* StatusRecipient; // 0x3c8(0x08)
};

// Class StatusEffects.StatusEffectCancellationInterface
// Size: 0x28 (Inherited: 0x28)
struct UStatusEffectCancellationInterface : UInterface {
};

// Class StatusEffects.StatusEffectRecipientInterface
// Size: 0x28 (Inherited: 0x28)
struct UStatusEffectRecipientInterface : UInterface {
};

// Class StatusEffects.StatusEffectResponseConfigurationInterface
// Size: 0x28 (Inherited: 0x28)
struct UStatusEffectResponseConfigurationInterface : UInterface {
};

// Class StatusEffects.StatusEffectSuspensionInterface
// Size: 0x28 (Inherited: 0x28)
struct UStatusEffectSuspensionInterface : UInterface {
};

// Class StatusEffects.StatusResponseAsset
// Size: 0x80 (Inherited: 0x28)
struct UStatusResponseAsset : UDataAsset {
	struct FText HighFrequencyTriggerStatusHelper; // 0x28(0x38)
	struct TArray<struct UClass*> TriggerStatus; // 0x60(0x10)
	struct TArray<struct UStatusResponse*> Responses; // 0x70(0x10)
};

// Class StatusEffects.StatusRecipientResponseList
// Size: 0x58 (Inherited: 0x28)
struct UStatusRecipientResponseList : UDataAsset {
	struct TArray<struct UStatusResponseAsset*> ResponseAssets; // 0x28(0x10)
	struct TArray<struct FFeatureToggledStatusResponseList> FeatureToggledResponseLists; // 0x38(0x10)
	struct TArray<struct UStatusResponseAsset*> FinalResponseAssets; // 0x48(0x10)
};

// Class StatusEffects.LightWeightStatusEffectManagerComponent
// Size: 0x100 (Inherited: 0xc8)
struct ULightWeightStatusEffectManagerComponent : UActorComponent {
	char UnknownData_C8[0x20]; // 0xc8(0x20)
	struct UStatusRecipientResponseList* RecipientResponseList; // 0xe8(0x08)
	struct TArray<struct FActiveStatusEffect> ActiveEffects; // 0xf0(0x10)

	void OnRep_ActiveEffects(struct TArray<struct FActiveStatusEffect> OldEffects); // Function StatusEffects.LightWeightStatusEffectManagerComponent.OnRep_ActiveEffects // Final|Native|Private|HasOutParms // @ game+0x33d8930
	void MultiCast_ApplyOneShotStatus(struct TArray<struct FActiveStatusEffect> AddedEffects, struct TArray<struct FActiveStatusEffect> RemovedEffects); // Function StatusEffects.LightWeightStatusEffectManagerComponent.MultiCast_ApplyOneShotStatus // Net|NetReliableNative|Event|NetMulticast|Public // @ game+0x33d8480
};

// Class StatusEffects.MaterialStatusSusceptibilityInterface
// Size: 0x28 (Inherited: 0x28)
struct UMaterialStatusSusceptibilityInterface : UInterface {
};

// Class StatusEffects.SurfaceMaterialStatusZoneInterface
// Size: 0x28 (Inherited: 0x28)
struct USurfaceMaterialStatusZoneInterface : UInterface {
};

// Class StatusEffects.MaterialStatusSusceptibilityComponent
// Size: 0xf8 (Inherited: 0xc8)
struct UMaterialStatusSusceptibilityComponent : UActorComponent {
	char UnknownData_C8[0x8]; // 0xc8(0x08)
	struct UPhysicalMaterial* CurrentSurfaceMaterial; // 0xd0(0x08)
	TScriptInterface<struct USurfaceMaterialStatusZoneInterface> CurrentMaterialStatusZone; // 0xd8(0x10)
	char UnknownData_E8[0x10]; // 0xe8(0x10)
};

// Class StatusEffects.SphericalStatusEffectZone
// Size: 0x488 (Inherited: 0x3c8)
struct ASphericalStatusEffectZone : AActor {
	char UnknownData_3C8[0x8]; // 0x3c8(0x08)
	struct UActorActivationComponent* ActorActivationComponent; // 0x3d0(0x08)
	struct USphereComponent* SphereComponent; // 0x3d8(0x08)
	struct UStatusEffectVolumeComponent* StatusEffectVolumeComponent; // 0x3e0(0x08)
	char UnknownData_3E8[0xa0]; // 0x3e8(0xa0)
};

// Class StatusEffects.StatusApplicationDesc
// Size: 0x50 (Inherited: 0x28)
struct UStatusApplicationDesc : UObject {
	struct FEventAppliedStatusToTargets ApplicationEvent; // 0x28(0x28)
};

// Class StatusEffects.StatusApplicationMonitorComponent
// Size: 0xd0 (Inherited: 0xc8)
struct UStatusApplicationMonitorComponent : UActorComponent {
	struct UClass* StatusApplicationTrigger; // 0xc8(0x08)
};

// Class StatusEffects.StatusEffectHelperFunctionLibrary
// Size: 0x28 (Inherited: 0x28)
struct UStatusEffectHelperFunctionLibrary : UBlueprintFunctionLibrary {

	void ApplyOneShotStatus(struct AActor* Recipient, struct FStatus Status); // Function StatusEffects.StatusEffectHelperFunctionLibrary.ApplyOneShotStatus // Final|BlueprintAuthorityOnly|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x33d83b0
};

// Class StatusEffects.StatusEffectTicketDispenserInterface
// Size: 0x28 (Inherited: 0x28)
struct UStatusEffectTicketDispenserInterface : UInterface {
};

// Class StatusEffects.StatusEffectManagerComponent
// Size: 0x108 (Inherited: 0xc8)
struct UStatusEffectManagerComponent : UActorComponent {
	char UnknownData_C8[0x28]; // 0xc8(0x28)
	struct UStatusRecipientResponseList* RecipientResponseList; // 0xf0(0x08)
	struct TArray<struct FActiveStatusEffect> ActiveEffects; // 0xf8(0x10)

	void OnRep_ActiveEffects(struct TArray<struct FActiveStatusEffect> OldEffects); // Function StatusEffects.StatusEffectManagerComponent.OnRep_ActiveEffects // Final|Native|Private|HasOutParms // @ game+0x33d89e0
	void MultiCast_ApplyOneShotStatus(struct TArray<struct FActiveStatusEffect> AddedEffects, struct TArray<struct FActiveStatusEffect> RemovedEffects); // Function StatusEffects.StatusEffectManagerComponent.MultiCast_ApplyOneShotStatus // Net|NetReliableNative|Event|NetMulticast|Public // @ game+0x33d8570
};

// Class StatusEffects.StatusEffectOverlapZone
// Size: 0x4c0 (Inherited: 0x4a0)
struct AStatusEffectOverlapZone : ASimpleOverlapZone {
	struct TArray<struct FDelayedStatusEffect> StatusesToApplyOnOverlap; // 0x4a0(0x10)
	char UnknownData_4B0[0x10]; // 0x4b0(0x10)
};

// Class StatusEffects.StatusEffectPersistenceInterface
// Size: 0x28 (Inherited: 0x28)
struct UStatusEffectPersistenceInterface : UInterface {
};

// Class StatusEffects.StatusEffectPersistenceComponent
// Size: 0xd0 (Inherited: 0xc8)
struct UStatusEffectPersistenceComponent : UActorComponent {
	char UnknownData_C8[0x8]; // 0xc8(0x08)
};

// Class StatusEffects.StatusEffectsSettings
// Size: 0x48 (Inherited: 0x38)
struct UStatusEffectsSettings : UDeveloperSettings {
	struct FStringAssetReference DebugMenuStatusDefinitionsDataAsset; // 0x38(0x10)
};

// Class StatusEffects.StatusEffectVolumeComponent
// Size: 0x300 (Inherited: 0x2e0)
struct UStatusEffectVolumeComponent : USceneComponent {
	bool UseOverlapEventsFromParentComponent; // 0x2e0(0x01)
	char UnknownData_2E1[0x7]; // 0x2e1(0x07)
	struct TArray<struct FStatus> StatusEffectsToMaintain; // 0x2e8(0x10)
	char UnknownData_2F8[0x8]; // 0x2f8(0x08)

	void UnaffectActor(struct AActor* Actor); // Function StatusEffects.StatusEffectVolumeComponent.UnaffectActor // Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable // @ game+0x33d8a90
	void OnParentComponentEndOverlap(struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // Function StatusEffects.StatusEffectVolumeComponent.OnParentComponentEndOverlap // Final|Native|Private // @ game+0x33d8830
	void OnParentComponentBeginOverlap(struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult SweepResult); // Function StatusEffects.StatusEffectVolumeComponent.OnParentComponentBeginOverlap // Final|Native|Private|HasOutParms // @ game+0x33d8660
	void AffectActor(struct AActor* Actor); // Function StatusEffects.StatusEffectVolumeComponent.AffectActor // Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable // @ game+0x33d8330
};

// Class StatusEffects.SetCanReceiveBuffStatusResponse
// Size: 0x38 (Inherited: 0x30)
struct USetCanReceiveBuffStatusResponse : UStatusResponse {
	bool LockBuffReceiver; // 0x30(0x01)
	bool RevertOnDeactivate; // 0x31(0x01)
	char UnknownData_32[0x6]; // 0x32(0x06)
};

// Class StatusEffects.StatusResponseNull
// Size: 0x30 (Inherited: 0x30)
struct UStatusResponseNull : UStatusResponse {
};

