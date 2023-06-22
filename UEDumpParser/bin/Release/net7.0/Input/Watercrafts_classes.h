// Class Watercrafts.CheckRowboatLiveriesStatCondition
// Size: 0x48 (Inherited: 0x28)
struct UCheckRowboatLiveriesStatCondition : UStatCondition {
	struct UClass* RowboatLiveryEntitlement; // 0x28(0x20)
};

// Class Watercrafts.CheckRowboatTypeStatCondition
// Size: 0x48 (Inherited: 0x28)
struct UCheckRowboatTypeStatCondition : UStatCondition {
	struct UClass* RowboatType; // 0x28(0x20)
};

// Class Watercrafts.ControllableOarsInterface
// Size: 0x28 (Inherited: 0x28)
struct UControllableOarsInterface : UInterface {
};

// Class Watercrafts.FakeShip
// Size: 0x4d8 (Inherited: 0x3c8)
struct AFakeShip : AActor {
	char UnknownData_3C8[0x8]; // 0x3c8(0x08)
	struct TArray<struct AItemProxy*> AttachedItems; // 0x3d0(0x10)
	char UnknownData_3E0[0xf8]; // 0x3e0(0xf8)

	void OnAttachedItemEndPlay(struct AActor* Actor); // Function Watercrafts.FakeShip.OnAttachedItemEndPlay // Final|Native|Private // @ game+0x3fc5e00
};

// Class Watercrafts.WatercraftTrackerInterface
// Size: 0x28 (Inherited: 0x28)
struct UWatercraftTrackerInterface : UInterface {
};

// Class Watercrafts.ItemProxyWatercraftTrackerComponent
// Size: 0x160 (Inherited: 0xc8)
struct UItemProxyWatercraftTrackerComponent : UActorComponent {
	char UnknownData_C8[0x8]; // 0xc8(0x08)
	struct UItemProxyWatercraftTrackerComponentDataAsset* WatercraftTrackingData; // 0xd0(0x08)
	struct AActor* CurrentWatercraft; // 0xd8(0x08)
	char UnknownData_E0[0x80]; // 0xe0(0x80)

	void OnRep_CurrentWatercraft(struct AActor* PreviousWatercraft); // Function Watercrafts.ItemProxyWatercraftTrackerComponent.OnRep_CurrentWatercraft // Final|Native|Private // @ game+0x3fc5f00
	void OnCurrentWatercraftDestroyed(struct AActor* DestroyedWatercraft); // Function Watercrafts.ItemProxyWatercraftTrackerComponent.OnCurrentWatercraftDestroyed // Final|Native|Private // @ game+0x3fc5e80
};

// Class Watercrafts.ItemProxyWatercraftTrackerComponentDataAsset
// Size: 0x38 (Inherited: 0x28)
struct UItemProxyWatercraftTrackerComponentDataAsset : UDataAsset {
	struct TArray<struct UClass*> WatercraftTypes; // 0x28(0x10)
};

// Class Watercrafts.RowboatAudioComponent
// Size: 0x4c0 (Inherited: 0x2e0)
struct URowboatAudioComponent : USceneComponent {
	struct URowboatAudioComponentParams* Params; // 0x2e0(0x08)
	struct ARowboat* ParentRowboat; // 0x2e8(0x08)
	char UnknownData_2F0[0x1d0]; // 0x2f0(0x1d0)
};

// Class Watercrafts.RowboatAudioComponentParams
// Size: 0xe8 (Inherited: 0x28)
struct URowboatAudioComponentParams : UDataAsset {
	struct UWwiseObjectPoolWrapper* RowboatObjectPool; // 0x28(0x08)
	struct UWwiseEvent* RowboatWakeStart; // 0x30(0x08)
	struct UWwiseEvent* RowboatWakeStop; // 0x38(0x08)
	struct FName RowboatSpeedRtpcName; // 0x40(0x08)
	float RowboatMaxSpeedRtpc; // 0x48(0x04)
	char UnknownData_4C[0x4]; // 0x4c(0x04)
	struct UWwiseEvent* RowboatLaunch; // 0x50(0x08)
	struct UWwiseEvent* RowboatImpactAndScrapeStart; // 0x58(0x08)
	struct UWwiseEvent* RowboatImpactAndScrapeStop; // 0x60(0x08)
	struct UWwiseEvent* RowboatStrainStart; // 0x68(0x08)
	struct UWwiseEvent* RowboatStrainStop; // 0x70(0x08)
	struct FName RowboatStrainRtpcName; // 0x78(0x08)
	float RowboatMaxStrainRtpc; // 0x80(0x04)
	char UnknownData_84[0x4]; // 0x84(0x04)
	struct UWwiseEvent* RowboatTakenDamage; // 0x88(0x08)
	float DamageAmountRequiredForNoiseToPlay; // 0x90(0x04)
	char UnknownData_94[0x4]; // 0x94(0x04)
	struct UWwiseEvent* RowboatAttach; // 0x98(0x08)
	struct UWwiseEvent* RowboatDetach; // 0xa0(0x08)
	struct UWwiseObjectPoolWrapper* WwiseOarEmitterPool; // 0xa8(0x08)
	struct UWwiseEvent* PlayOarInOarLayer; // 0xb0(0x08)
	struct UWwiseEvent* PlayOarInWaterLayer; // 0xb8(0x08)
	struct UWwiseEvent* PlayOarOutOarLayer; // 0xc0(0x08)
	struct UWwiseEvent* PlayOarOutWaterLayer; // 0xc8(0x08)
	struct UWwiseEvent* PlayOarBrakingLoop; // 0xd0(0x08)
	struct UWwiseEvent* StopOarBrakingLoop; // 0xd8(0x08)
	struct UWwiseEvent* PlayOarPullFinished; // 0xe0(0x08)
};

// Class Watercrafts.RowboatCustomizationLoadoutInterface
// Size: 0x28 (Inherited: 0x28)
struct URowboatCustomizationLoadoutInterface : UInterface {
};

// Class Watercrafts.RowboatCustomizationLoadoutComponent
// Size: 0x110 (Inherited: 0xc8)
struct URowboatCustomizationLoadoutComponent : UActorComponent {
	char UnknownData_C8[0x8]; // 0xc8(0x08)
	struct UClass* DefaultCustomization; // 0xd0(0x20)
	struct UClass* EquippedCustomization; // 0xf0(0x08)
	char UnknownData_F8[0x18]; // 0xf8(0x18)
};

// Class Watercrafts.RowboatDescDataAsset
// Size: 0x48 (Inherited: 0x28)
struct URowboatDescDataAsset : UDataAsset {
	struct FPartDesc PartDesc; // 0x28(0x20)
};

// Class Watercrafts.RowboatDockedToShipConditionalStatTrigger
// Size: 0x30 (Inherited: 0x30)
struct URowboatDockedToShipConditionalStatTrigger : UConditionalStatsTriggerType {
};

// Class Watercrafts.RowboatTypeCategory
// Size: 0x78 (Inherited: 0x78)
struct URowboatTypeCategory : UCategoryBase {
};

// Class Watercrafts.RowboatEntitlementDesc
// Size: 0xd8 (Inherited: 0xc8)
struct URowboatEntitlementDesc : UEntitlementDesc {
	struct FStringClassReference Rowboat; // 0xc8(0x10)
};

// Class Watercrafts.RowboatInterface
// Size: 0x28 (Inherited: 0x28)
struct URowboatInterface : UInterface {
};

// Class Watercrafts.RowboatLiveryCategory
// Size: 0x78 (Inherited: 0x78)
struct URowboatLiveryCategory : UCategoryBase {
};

// Class Watercrafts.RowboatLiveryDesc
// Size: 0xd8 (Inherited: 0xc8)
struct URowboatLiveryDesc : UEntitlementDesc {
	struct FStringAssetReference RowboatDescDataAsset; // 0xc8(0x10)
};

// Class Watercrafts.RowboatLiveryPicker
// Size: 0x28 (Inherited: 0x28)
struct URowboatLiveryPicker : UObject {
};

// Class Watercrafts.RowboatLiveryPickerDataAsset
// Size: 0x48 (Inherited: 0x28)
struct URowboatLiveryPickerDataAsset : UDataAsset {
	struct TArray<struct FRowboatLiveryByWeight> LiveriesInThisGroup; // 0x28(0x10)
	struct TArray<struct FRowboatLiveryPickerDataAssetConditions> SubgroupsInPriorityOrder; // 0x38(0x10)
};

// Class Watercrafts.DataAssetRowboatLiveryPicker
// Size: 0x30 (Inherited: 0x28)
struct UDataAssetRowboatLiveryPicker : URowboatLiveryPicker {
	struct URowboatLiveryPickerDataAsset* DataAsset; // 0x28(0x08)
};

// Class Watercrafts.FixedRowboatLiveryPicker
// Size: 0x48 (Inherited: 0x28)
struct UFixedRowboatLiveryPicker : URowboatLiveryPicker {
	struct UClass* Livery; // 0x28(0x20)
};

// Class Watercrafts.RowboatOarsLeftForwardNotificationInputId
// Size: 0x38 (Inherited: 0x38)
struct URowboatOarsLeftForwardNotificationInputId : UNotificationInputId {
};

// Class Watercrafts.RowboatOarsLeftForwardDeactivatedNotificationInputId
// Size: 0x38 (Inherited: 0x38)
struct URowboatOarsLeftForwardDeactivatedNotificationInputId : UNotificationInputId {
};

// Class Watercrafts.RowboatOarsRightForwardNotificationInputId
// Size: 0x38 (Inherited: 0x38)
struct URowboatOarsRightForwardNotificationInputId : UNotificationInputId {
};

// Class Watercrafts.RowboatOarsRightForwardDeactivatedNotificationInputId
// Size: 0x38 (Inherited: 0x38)
struct URowboatOarsRightForwardDeactivatedNotificationInputId : UNotificationInputId {
};

// Class Watercrafts.RowboatOarsLeftBrakingActivatedNotificationInputId
// Size: 0x38 (Inherited: 0x38)
struct URowboatOarsLeftBrakingActivatedNotificationInputId : UNotificationInputId {
};

// Class Watercrafts.RowboatOarsLeftBrakingDeactivatedNotificationInputId
// Size: 0x38 (Inherited: 0x38)
struct URowboatOarsLeftBrakingDeactivatedNotificationInputId : UNotificationInputId {
};

// Class Watercrafts.RowboatOarsRightBrakingActivatedNotificationInputId
// Size: 0x38 (Inherited: 0x38)
struct URowboatOarsRightBrakingActivatedNotificationInputId : UNotificationInputId {
};

// Class Watercrafts.RowboatOarsRightBrakingDeactivatedNotificationInputId
// Size: 0x38 (Inherited: 0x38)
struct URowboatOarsRightBrakingDeactivatedNotificationInputId : UNotificationInputId {
};

// Class Watercrafts.ScrapeableDamageDataAsset
// Size: 0x38 (Inherited: 0x28)
struct UScrapeableDamageDataAsset : UDataAsset {
	struct TArray<struct FScrapeableDamageSpeedEntry> DamageSpeedParams; // 0x28(0x10)
};

// Class Watercrafts.ScrapeableInterface
// Size: 0x28 (Inherited: 0x28)
struct UScrapeableInterface : UInterface {
};

// Class Watercrafts.ScrapeableComponent
// Size: 0xf8 (Inherited: 0xc8)
struct UScrapeableComponent : UActorComponent {
	char UnknownData_C8[0x8]; // 0xc8(0x08)
	float MinIntervalBetweenScrapeDamage; // 0xd0(0x04)
	char UnknownData_D4[0x4]; // 0xd4(0x04)
	struct UScrapeableDamageDataAsset* ScrapeDamageSettings; // 0xd8(0x08)
	struct FVector SafeZoneCenterDirection; // 0xe0(0x0c)
	float SafeZoneMaximumAngle; // 0xec(0x04)
	struct UClass* ScrapeDamagerType; // 0xf0(0x08)
};

// Class Watercrafts.Watercraft
// Size: 0x728 (Inherited: 0x3c8)
struct AWatercraft : AActor {
	char UnknownData_3C8[0x30]; // 0x3c8(0x30)
	struct UBuoyancyComponent* BuoyancyComponent; // 0x3f8(0x08)
	struct FWatercraftRolloverCorrector RolloverCorrector; // 0x400(0x0c)
	char UnknownData_40C[0x4]; // 0x40c(0x04)
	struct UShipNosediveBrake* NosediveBrake; // 0x410(0x08)
	struct UBowSplashContainer* BowSplashContainer; // 0x418(0x08)
	struct UStaticMeshComponent* CollisionMesh; // 0x420(0x08)
	struct UStaticMeshComponent* CraftMesh; // 0x428(0x08)
	struct UBoxComponent* OverlapHits; // 0x430(0x08)
	struct UStaticMeshComponent* WaterOcclusionVolume; // 0x438(0x08)
	struct UWaterInteractionComponent* WaterInteractionComponent; // 0x440(0x08)
	struct FName ClientConvexHullCollisionProfile; // 0x448(0x08)
	struct FNetTimeStampCalculator MovementTimeStamp; // 0x450(0x70)
	struct FRigidBodyErrorCorrection PhysicsErrorCorrection; // 0x4c0(0x1c)
	char UnknownData_4DC[0x3c]; // 0x4dc(0x3c)
	struct FBuoyancySampleMovement BuoyancySampleMovement; // 0x518(0x68)
	struct UCurveFloat* SpeedToChoppinessScalarCurve; // 0x580(0x08)
	float DeepWaterSubmersionThreshold; // 0x588(0x04)
	float BuoyancyChoppinessWhileSinking; // 0x58c(0x04)
	bool IsCritical; // 0x590(0x01)
	bool RigidBodyAwake; // 0x591(0x01)
	bool InContactWithLand; // 0x592(0x01)
	bool InDeepWater; // 0x593(0x01)
	char UnknownData_594[0x4]; // 0x594(0x04)
	TScriptInterface<struct UScrapeableInterface> Scrapeable; // 0x598(0x10)
	char UnknownData_5A8[0x180]; // 0x5a8(0x180)

	void OnRigidBodyWake(struct FName InBoneName); // Function Watercrafts.Watercraft.OnRigidBodyWake // Final|Native|Protected // @ game+0x3fc6120
	void OnRigidBodySleep(struct FName InBoneName); // Function Watercrafts.Watercraft.OnRigidBodySleep // Final|Native|Protected // @ game+0x3fc60a0
};

// Class Watercrafts.Rowboat
// Size: 0xa70 (Inherited: 0x728)
struct ARowboat : AWatercraft {
	char UnknownData_728[0x48]; // 0x728(0x48)
	struct UChildActorComponent* LeftSideClamberSpot; // 0x770(0x08)
	struct UChildActorComponent* RightSideClamberSpot; // 0x778(0x08)
	struct UChildActorComponent* ForceSpot; // 0x780(0x08)
	struct UChildActorComponent* Lantern; // 0x788(0x08)
	struct UChildActorComponent* RowingSeat; // 0x790(0x08)
	struct UChildActorComponent* StorageSeat; // 0x798(0x08)
	struct URowboatCustomizationLoadoutComponent* CustomizationLoadoutComponent; // 0x7a0(0x08)
	struct UShipLiveryComponent* LiveryComponent; // 0x7a8(0x08)
	struct UReplicatedShipPartCustomizationComponent* CustomizationComponent; // 0x7b0(0x08)
	struct FVector WaterExclusionOffset; // 0x7b8(0x0c)
	char UnknownData_7C4[0x4]; // 0x7c4(0x04)
	struct UTetherCustomisationComponent* TetherCustomisationComponent; // 0x7c8(0x08)
	struct UHealthComponent* HealthComponent; // 0x7d0(0x08)
	struct UActorDamageableComponent* ActorDamageableComponent; // 0x7d8(0x08)
	struct URammableComponent* RammableComponent; // 0x7e0(0x08)
	struct UScrapeableComponent* ScrapeableComponent; // 0x7e8(0x08)
	struct URowboatAudioComponent* RowboatAudio; // 0x7f0(0x08)
	struct UBaseHullDragDynamicsDesc* HullDragDynamicsDesc; // 0x7f8(0x08)
	struct UBowSplashContainer* OarSplashContainer; // 0x800(0x08)
	struct UMountableComponent* MountableComponent; // 0x808(0x08)
	struct UCurveFloat* LinearDampingOverTimeWhileBeachedScalarCurve; // 0x810(0x08)
	struct UCurveFloat* AngularDampingOverTimeWhileBeachedScalarCurve; // 0x818(0x08)
	struct FRowboatDamageEffectData DamageEffectData; // 0x820(0x18)
	struct FRowboatStrainDamageData StrainDamageData; // 0x838(0x20)
	struct TArray<struct UChildActorComponent*> AlwaysEnabledInteractables; // 0x858(0x10)
	struct UShroudBreakerTrackerComponent* ShroudBreakerTrackerComponent; // 0x868(0x08)
	bool IsBeingLaunched; // 0x870(0x01)
	bool IsSinking; // 0x871(0x01)
	char UnknownData_872[0x2]; // 0x872(0x02)
	float MaxPushingAngle; // 0x874(0x04)
	float CurrentStrainAmount; // 0x878(0x04)
	bool IsDocked; // 0x87c(0x01)
	char UnknownData_87D[0x1]; // 0x87d(0x01)
	char CoverCollisionChannel; // 0x87e(0x01)
	char UnknownData_87F[0x1]; // 0x87f(0x01)
	float UnderCoverCheckInterval; // 0x880(0x04)
	float UnderCoverHeight; // 0x884(0x04)
	struct TArray<struct FVector> RelativeUnderCoverProbeRoots; // 0x888(0x10)
	char TrackedActorType; // 0x898(0x01)
	char UnknownData_899[0x1d7]; // 0x899(0x1d7)

	void SetAlwaysEnabledInteractables(struct TArray<struct UChildActorComponent*> InAlwaysEnabledInteractables); // Function Watercrafts.Rowboat.SetAlwaysEnabledInteractables // Final|Native|Protected|HasOutParms|BlueprintCallable // @ game+0x3fc6320
	void OnRep_IsSinking(); // Function Watercrafts.Rowboat.OnRep_IsSinking // Final|Native|Private // @ game+0x3fc5f80
};

// Class Watercrafts.RowboatPartInterface
// Size: 0x28 (Inherited: 0x28)
struct URowboatPartInterface : UInterface {
};

// Class Watercrafts.RowboatSpawnParamsDataAsset
// Size: 0x38 (Inherited: 0x28)
struct URowboatSpawnParamsDataAsset : UDataAsset {
	struct TArray<struct UClass*> RowboatTypes; // 0x28(0x10)
};

// Class Watercrafts.RowingActionStateId
// Size: 0x28 (Inherited: 0x28)
struct URowingActionStateId : UActionStateId {
};

// Class Watercrafts.RowingInputComponent
// Size: 0x2a8 (Inherited: 0x2a0)
struct URowingInputComponent : ULookAtOffsetInputComponent {
	struct ARowingSeat* TargetOars; // 0x2a0(0x08)
};

// Class Watercrafts.StorageSeat
// Size: 0x6b0 (Inherited: 0x680)
struct AStorageSeat : ASeat {
	struct UClass* StorageInteractionInput; // 0x680(0x08)
	struct UStorageContainerComponent* StorageContainerComponent; // 0x688(0x08)
	char UnknownData_690[0x20]; // 0x690(0x20)
};

// Class Watercrafts.TaleQuestSinkWatercraftStep
// Size: 0x98 (Inherited: 0x98)
struct UTaleQuestSinkWatercraftStep : UTaleQuestStep {
};

// Class Watercrafts.TaleQuestWatercraftService
// Size: 0x88 (Inherited: 0x60)
struct UTaleQuestWatercraftService : UTaleQuestService {
	char UnknownData_60[0x28]; // 0x60(0x28)
};

// Class Watercrafts.TaleQuestWatercraftServiceDesc
// Size: 0x28 (Inherited: 0x28)
struct UTaleQuestWatercraftServiceDesc : UTaleQuestServiceDesc {
};

// Class Watercrafts.TaleQuestSinkWatercraftStepDesc
// Size: 0xb0 (Inherited: 0x80)
struct UTaleQuestSinkWatercraftStepDesc : UTaleQuestStepDesc {
	struct FQuestVariableWatercraft Watercraft; // 0x80(0x30)
};

// Class Watercrafts.TaleQuestSpawnWatercraftStep
// Size: 0x98 (Inherited: 0x98)
struct UTaleQuestSpawnWatercraftStep : UTaleQuestStep {
};

// Class Watercrafts.TaleQuestSpawnWatercraftStepDesc
// Size: 0x128 (Inherited: 0x80)
struct UTaleQuestSpawnWatercraftStepDesc : UTaleQuestStepDesc {
	struct FQuestVariableTransform SpawnLocation; // 0x80(0x38)
	struct UClass* WatercraftClass; // 0xb8(0x20)
	struct UClass* LiveryEntitlement; // 0xd8(0x20)
	struct FQuestVariableWatercraft Watercraft; // 0xf8(0x30)
};

// Class Watercrafts.TaleQuestWatercraftFunctionLibrary
// Size: 0x180 (Inherited: 0x180)
struct UTaleQuestWatercraftFunctionLibrary : UTaleQuestFunctionStepLibrary {

	struct AWatercraft* GetFirstSpawnedWatercraft(); // Function Watercrafts.TaleQuestWatercraftFunctionLibrary.GetFirstSpawnedWatercraft // Final|Native|Public // @ game+0x3fc5dd0
	void FilterPointsByDistanceFromWatercraft(float MinDistance, struct TArray<struct FOrientedPoint> Points); // Function Watercrafts.TaleQuestWatercraftFunctionLibrary.FilterPointsByDistanceFromWatercraft // Final|Native|Public|HasOutParms|Const // @ game+0x3fc5cd0
};

// Class Watercrafts.WatercraftBlueprintFunctionLibrary
// Size: 0x28 (Inherited: 0x28)
struct UWatercraftBlueprintFunctionLibrary : UBlueprintFunctionLibrary {

	struct AWatercraft* SpawnWatercraft(struct UObject* WorldContextObject, struct UClass* WatercraftClass, struct FVector Location, struct FRotator Rotation); // Function Watercrafts.WatercraftBlueprintFunctionLibrary.SpawnWatercraft // Final|Native|Static|Public|HasDefaults|BlueprintCallable // @ game+0x3fc63d0
};

// Class Watercrafts.WatercraftServiceInterface
// Size: 0x28 (Inherited: 0x28)
struct UWatercraftServiceInterface : UInterface {
};

// Class Watercrafts.WatercraftService
// Size: 0x3d0 (Inherited: 0x3c8)
struct AWatercraftService : AActor {
	char UnknownData_3C8[0x8]; // 0x3c8(0x08)
};

// Class Watercrafts.WatercraftSpawnData
// Size: 0x88 (Inherited: 0x58)
struct UWatercraftSpawnData : UItemSpawnData {
	struct UClass* WatercraftClass; // 0x58(0x20)
	struct URowboatLiveryPicker* LiveryPicker; // 0x78(0x08)
	float MinDistanceToNearestWatercraftInMetres; // 0x80(0x04)
	char UnknownData_84[0x4]; // 0x84(0x04)
};

// Class Watercrafts.WatercraftsSettings
// Size: 0x58 (Inherited: 0x38)
struct UWatercraftsSettings : UDeveloperSettings {
	struct FStringAssetReference RowboatTypesEntitlementsMapDataAsset; // 0x38(0x10)
	struct FStringAssetReference RowboatLiveryEntitlementsMapDataAsset; // 0x48(0x10)
};

// Class Watercrafts.WatercraftTrackerComponent
// Size: 0xe0 (Inherited: 0xc8)
struct UWatercraftTrackerComponent : UActorComponent {
	char UnknownData_C8[0x8]; // 0xc8(0x08)
	struct TArray<struct AActor*> CurrentWatercrafts; // 0xd0(0x10)

	void OnWatercraftDestroyed(struct AActor* WatercraftActor); // Function Watercrafts.WatercraftTrackerComponent.OnWatercraftDestroyed // Final|Native|Private // @ game+0x3fc61a0
};

