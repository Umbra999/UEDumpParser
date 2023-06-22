// Enum Fire.EFireCellState
enum class EFireCellState : uint8_t {
	Deactivated,
	Flooded,
	Wet,
	Kindled,
	Smouldering,
	Steaming,
	Burning,
	MAX,
	EFireCellState_MAX,
};

// Enum Fire.ELastIgnitionState
enum class ELastIgnitionState : uint8_t {
	None,
	Success,
	Failure,
	ELastIgnitionState_MAX,
};

// ScriptStruct Fire.HullCharringPersistenceModel
// Size: 0x18 (Inherited: 0x01)
struct FHullCharringPersistenceModel : FPersistenceModel {
	struct TArray<float> TimeSpentCharring; // 0x00(0x10)
	int32_t TotalCellsOnFire; // 0x10(0x04)
	char UnknownData_15[0x3]; // 0x15(0x03)
};

// ScriptStruct Fire.PlayerNearBurningFireGridUpdatedEvent
// Size: 0x08 (Inherited: 0x00)
struct FPlayerNearBurningFireGridUpdatedEvent {
	char UnknownData_0[0x8]; // 0x00(0x08)
};

// ScriptStruct Fire.ShipOnFireEndEvent
// Size: 0x01 (Inherited: 0x00)
struct FShipOnFireEndEvent {
	char UnknownData_0[0x1]; // 0x00(0x01)
};

// ScriptStruct Fire.ShipOnFireBeginEvent
// Size: 0x01 (Inherited: 0x00)
struct FShipOnFireBeginEvent {
	char UnknownData_0[0x1]; // 0x00(0x01)
};

// ScriptStruct Fire.OnShipIgnitedEvent
// Size: 0x01 (Inherited: 0x00)
struct FOnShipIgnitedEvent {
	char UnknownData_0[0x1]; // 0x00(0x01)
};

// ScriptStruct Fire.FireExtinguishedEvent
// Size: 0x0c (Inherited: 0x00)
struct FFireExtinguishedEvent {
	struct FVector ExtinguishLocation; // 0x00(0x0c)
};

// ScriptStruct Fire.OnFireChangedEvent
// Size: 0x01 (Inherited: 0x00)
struct FOnFireChangedEvent {
	bool OnFire; // 0x00(0x01)
};

// ScriptStruct Fire.FireGridCellSelectionParams
// Size: 0x50 (Inherited: 0x00)
struct FFireGridCellSelectionParams {
	struct UClass* ActorClassFilter; // 0x00(0x08)
	float ChanceToAffectTheActor; // 0x08(0x04)
	struct FFireGridCellSelection FireGridCellSelectionParams; // 0x0c(0x44)
};

// ScriptStruct Fire.FireGridCellSelection
// Size: 0x44 (Inherited: 0x00)
struct FFireGridCellSelection {
	int32_t NumberOfAffectedCells; // 0x00(0x04)
	int32_t AdjacencyRadius; // 0x04(0x04)
	float ChanceToAffectCellsAbove; // 0x08(0x04)
	float ChanceToAffectCellsBelow; // 0x0c(0x04)
	bool TreatDiagonalsAsAdjacent; // 0x10(0x01)
	bool OverrideFirePropagationTimesForAffectedCells; // 0x11(0x01)
	char UnknownData_12[0x2]; // 0x12(0x02)
	struct FFloatRange SidewaysPropagationTimeOverride; // 0x14(0x10)
	struct FFloatRange UpwardPropagationTimeOverride; // 0x24(0x10)
	struct FFloatRange DownwardPropagationTimeOverride; // 0x34(0x10)
};

// ScriptStruct Fire.FireCellStateData
// Size: 0x30 (Inherited: 0x00)
struct FFireCellStateData {
	char UnknownData_0[0x30]; // 0x00(0x30)
};

// ScriptStruct Fire.CookerIgnitionParams
// Size: 0x78 (Inherited: 0x00)
struct FCookerIgnitionParams {
	struct FFloatRange InitialIgnitionTime; // 0x00(0x10)
	struct FFloatRange SuccessIgnitionTime; // 0x10(0x10)
	struct FFloatRange FailureIgnitionTime; // 0x20(0x10)
	float ChanceToIgnite; // 0x30(0x04)
	struct FFireGridCellSelection IgnitionSelection; // 0x34(0x44)
};

// ScriptStruct Fire.FireCellStateTimingParams
// Size: 0x94 (Inherited: 0x00)
struct FFireCellStateTimingParams {
	struct FFloatRange KindleTime; // 0x00(0x10)
	struct FFloatRange BurningTime; // 0x10(0x10)
	struct FFloatRange RainExposureTime; // 0x20(0x10)
	float CharringTime; // 0x30(0x04)
	struct FFloatRange SmoulderingTime; // 0x34(0x10)
	struct FFloatRange SteamingTime; // 0x44(0x10)
	struct FFloatRange WetTime; // 0x54(0x10)
	struct FFloatRange SidewaysPropagationTime; // 0x64(0x10)
	struct FFloatRange UpwardPropagationTime; // 0x74(0x10)
	struct FFloatRange DownwardPropagationTime; // 0x84(0x10)
};

// ScriptStruct Fire.FireCellAudioParams
// Size: 0x40 (Inherited: 0x00)
struct FFireCellAudioParams {
	struct UWwiseObjectPoolWrapper* EmitterPool; // 0x00(0x08)
	struct UWwiseObjectPoolWrapper* DousePool; // 0x08(0x08)
	struct UWwiseEvent* FirePlay; // 0x10(0x08)
	struct UWwiseEvent* FireStop; // 0x18(0x08)
	struct UWwiseEvent* FireDouse; // 0x20(0x08)
	struct FName FireSwitchGroup; // 0x28(0x08)
	struct FName FireSwitchBurning; // 0x30(0x08)
	struct FName FireSwitchKindled; // 0x38(0x08)
};

// ScriptStruct Fire.FireCellStateParticleTemplate
// Size: 0x38 (Inherited: 0x00)
struct FFireCellStateParticleTemplate {
	struct UParticleSystem* Template; // 0x00(0x08)
	int32_t TranslucencySortPriority; // 0x08(0x04)
	char UnknownData_C[0x4]; // 0x0c(0x04)
	struct UStaticMesh* Mesh; // 0x10(0x08)
	float MeshSpawnTime; // 0x18(0x04)
	float MeshDespawnTime; // 0x1c(0x04)
	struct FVector MeshScale; // 0x20(0x0c)
	char State; // 0x2c(0x01)
	bool OverrideMaxLODToSpawnFor; // 0x2d(0x01)
	char UnknownData_2E[0x2]; // 0x2e(0x02)
	int32_t MaxLODToSpawnFor; // 0x30(0x04)
	bool SpawnWithLowFrequencySettings; // 0x34(0x01)
	bool VisibleInLowDetailMode; // 0x35(0x01)
	char UnknownData_36[0x2]; // 0x36(0x02)
};

// ScriptStruct Fire.FireCellDesc
// Size: 0x100 (Inherited: 0x00)
struct FFireCellDesc {
	struct FVector Position; // 0x00(0x0c)
	struct FBox BoundingBox; // 0x0c(0x1c)
	struct FIntVector GridPosition; // 0x28(0x0c)
	bool CanBurn; // 0x34(0x01)
	bool IsExposedToWeather; // 0x35(0x01)
	char Deck; // 0x36(0x01)
	char UnknownData_37[0x1]; // 0x37(0x01)
	int32_t CellIndex; // 0x38(0x04)
	int32_t MasterCellFlatIndex; // 0x3c(0x04)
	bool ShouldSpawnDefaultParticleEffect; // 0x40(0x01)
	char UnknownData_41[0xf]; // 0x41(0x0f)
	struct FTransform DefaultParticleEffectSpawnTransform; // 0x50(0x30)
	struct FPlane DefaultParticleEffectPlane; // 0x80(0x10)
	struct TArray<struct FFireCellStateParticleTemplate> CustomParticleEffectTemplates; // 0x90(0x10)
	struct FTransform CustomParticleEffectSpawnTransform; // 0xa0(0x30)
	struct TArray<int32_t> NeighbourCellIndices; // 0xd0(0x10)
	struct TArray<struct FIntVector> CustomAddedDiagonalNeighbourOffsets; // 0xe0(0x10)
	struct TArray<struct FIntVector> CustomRemovedDefaultNeighbourOffsets; // 0xf0(0x10)
};

// ScriptStruct Fire.FireGridVFXParams
// Size: 0x40 (Inherited: 0x00)
struct FFireGridVFXParams {
	struct TArray<struct FFireCellStateParticleTemplate> DefaultParticleTemplates; // 0x00(0x10)
	struct UParticleSystem* ExteriorLowDetailParticleSystem; // 0x10(0x08)
	struct UParticleSystem* ExteriorSmokeParticleSystem; // 0x18(0x08)
	struct UParticleSystem* InteriorSmokeParticleSystem; // 0x20(0x08)
	int32_t InteriorSmokeTranslucencySortPriority; // 0x28(0x04)
	int32_t NumInterleaveSpawnSteps; // 0x2c(0x04)
	float TickIntervalForAllCells; // 0x30(0x04)
	float KillSphereRadiusForDousingFire; // 0x34(0x04)
	float ExteriorLowDetailTransitionWarmupTime; // 0x38(0x04)
	int32_t MaxDefaultVFXToSpawnPerFrame; // 0x3c(0x04)
};

// ScriptStruct Fire.FireGridRelativeSpawnDesc
// Size: 0x30 (Inherited: 0x00)
struct FFireGridRelativeSpawnDesc {
	struct FVector Location; // 0x00(0x0c)
	struct FIntVector GridLocation; // 0x0c(0x0c)
	int32_t NumCellRowsToSpawnFor; // 0x18(0x04)
	int32_t MinNumCellsToActivate; // 0x1c(0x04)
	struct TArray<int32_t> CellIndicesToSpawnFor; // 0x20(0x10)
};

// ScriptStruct Fire.FireGridLowDetailRelativeSpawnDesc
// Size: 0x38 (Inherited: 0x30)
struct FFireGridLowDetailRelativeSpawnDesc : FFireGridRelativeSpawnDesc {
	struct FName EmitterName; // 0x30(0x08)
};

// ScriptStruct Fire.FireParticleSpawnData
// Size: 0x10 (Inherited: 0x00)
struct FFireParticleSpawnData {
	float MaximumLODDistance; // 0x00(0x04)
	float SpawnInterval; // 0x04(0x04)
	char UnknownData_8[0x8]; // 0x08(0x08)
};

// ScriptStruct Fire.FireParticleSpawnList
// Size: 0x20 (Inherited: 0x00)
struct FFireParticleSpawnList {
	struct TArray<struct FFireParticleSpawnData> ParticleSpawnLODs; // 0x00(0x10)
	char UnknownData_10[0x10]; // 0x10(0x10)
};

// ScriptStruct Fire.FireDefaultVFXSpawnData
// Size: 0x140 (Inherited: 0x00)
struct FFireDefaultVFXSpawnData {
	struct FFireCellStateParticleTemplate Template; // 0x00(0x38)
	char UnknownData_38[0x8]; // 0x38(0x08)
	struct FFireCellDesc CellDesc; // 0x40(0x100)
};

// ScriptStruct Fire.FireGridVfxSpawnSettings
// Size: 0x58 (Inherited: 0x00)
struct FFireGridVfxSpawnSettings {
	struct TArray<struct FFireGridRelativeSpawnDesc> InteriorSmokeSpawnDescs; // 0x00(0x10)
	struct TArray<struct FFireGridLowDetailRelativeSpawnDesc> LowDetailVFXSpawnDescs; // 0x10(0x10)
	struct TArray<struct FFireParticleSpawnData> ParticleSpawnLODSettings; // 0x20(0x10)
	struct FFireParticleSpawnData LowFrequencyParticleSpawnSettings; // 0x30(0x10)
	struct TArray<struct FFireGridLowDetailRelativeSpawnDesc> ExteriorSmokeVFXSpawnDescs; // 0x40(0x10)
	struct UFireGridVFXParamsDataAsset* VFXParams; // 0x50(0x08)
};

// ScriptStruct Fire.FireParticleSystem
// Size: 0x48 (Inherited: 0x00)
struct FFireParticleSystem {
	struct UParticleSystemComponent* SpawnedParticleSystem; // 0x00(0x08)
	char UnknownData_8[0x8]; // 0x08(0x08)
	struct FFireCellStateParticleTemplate ParticleTemplate; // 0x10(0x38)
};

// ScriptStruct Fire.FireMesh
// Size: 0x10 (Inherited: 0x00)
struct FFireMesh {
	struct UStaticMeshComponent* Mesh; // 0x00(0x08)
	char UnknownData_8[0x8]; // 0x08(0x08)
};

// ScriptStruct Fire.ShipFireDamageParams
// Size: 0x18 (Inherited: 0x00)
struct FShipFireDamageParams {
	struct UClass* DamagerType; // 0x00(0x08)
	struct TArray<struct FActorFireDamageParams> ShipFireDamageParams; // 0x08(0x10)
};

// ScriptStruct Fire.ActorFireDamageParams
// Size: 0x38 (Inherited: 0x00)
struct FActorFireDamageParams {
	struct UClass* ActorClass; // 0x00(0x20)
	struct FFloatRange TimeInFireBeforeDamage; // 0x20(0x10)
	int32_t LevelsOfDamage; // 0x30(0x04)
	char UnknownData_34[0x4]; // 0x34(0x04)
};

// ScriptStruct Fire.ShipFireLightParams
// Size: 0x14 (Inherited: 0x00)
struct FShipFireLightParams {
	float FadeOutTime; // 0x00(0x04)
	struct FName FirePostprocessComponentName; // 0x04(0x08)
	float DistanceToFireToActivatePostProcessSq; // 0x0c(0x04)
	float PostProcessSpringAcceleration; // 0x10(0x04)
};

// ScriptStruct Fire.ReplicatedFireCellCharringData
// Size: 0x18 (Inherited: 0x00)
struct FReplicatedFireCellCharringData {
	float MaxCharringTime; // 0x00(0x04)
	char UnknownData_4[0x4]; // 0x04(0x04)
	struct TArray<float> TimeSpentCharring; // 0x08(0x10)
};

// ScriptStruct Fire.ReplicatedFireCellData
// Size: 0x01 (Inherited: 0x00)
struct FReplicatedFireCellData {
	char State; // 0x00(0x01)
};

// ScriptStruct Fire.FireGridCharringManager
// Size: 0xd8 (Inherited: 0x00)
struct FFireGridCharringManager {
	struct TArray<struct UMaterialInterface*> OwnerMaterials; // 0x00(0x10)
	struct FVector AdditionalGridOffsetForCharring; // 0x10(0x0c)
	char UnknownData_1C[0x4]; // 0x1c(0x04)
	struct UTexture2DDynamic* FireGridTexture; // 0x20(0x08)
	char UnknownData_28[0xb0]; // 0x28(0xb0)
};

// ScriptStruct Fire.ShipFireLightRelativeSpawnDesc
// Size: 0x58 (Inherited: 0x30)
struct FShipFireLightRelativeSpawnDesc : FFireGridRelativeSpawnDesc {
	struct FVector LightPositionOffset; // 0x30(0x0c)
	char UnknownData_3C[0x4]; // 0x3c(0x04)
	struct TArray<char> DormantShipRegions; // 0x40(0x10)
	float DormantFadeDistance; // 0x50(0x04)
	float AreaLightScaleWhenNotOnShip; // 0x54(0x04)
};

// ScriptStruct Fire.ShipFireLight
// Size: 0x90 (Inherited: 0x00)
struct FShipFireLight {
	struct FShipFireLightRelativeSpawnDesc Desc; // 0x00(0x58)
	struct UPointLightComponent* PointLight; // 0x58(0x08)
	struct UStaticMeshComponent* AreaLight; // 0x60(0x08)
	struct UMaterialInstanceDynamic* AreaLightMaterial; // 0x68(0x08)
	char UnknownData_70[0x20]; // 0x70(0x20)
};

// ScriptStruct Fire.ShipFireLightManager
// Size: 0x150 (Inherited: 0x00)
struct FShipFireLightManager {
	struct TArray<struct FShipFireLightRelativeSpawnDesc> LightSpawnDescs; // 0x00(0x10)
	struct FGenericLightTemplate LightTemplate; // 0x10(0xd0)
	struct TArray<struct FShipFireLight> Lights; // 0xe0(0x10)
	struct UFirePropagator* Propagator; // 0xf0(0x08)
	struct UStaticMesh* AreaLightMesh; // 0xf8(0x08)
	float AreaLightZScale; // 0x100(0x04)
	float MinLightRadius; // 0x104(0x04)
	float MaxLightRadius; // 0x108(0x04)
	float MinFlickerScale; // 0x10c(0x04)
	float LightMovementSpeedCmPerSecond; // 0x110(0x04)
	char UnknownData_114[0x4]; // 0x114(0x04)
	struct UShipFireLightParamsDataAsset* LightParams; // 0x118(0x08)
	struct UPostProcessComponent* ShipPostProcessComponent; // 0x120(0x08)
	char UnknownData_128[0x28]; // 0x128(0x28)
};

// ScriptStruct Fire.PlayerFireGridTickParams
// Size: 0x48 (Inherited: 0x00)
struct FPlayerFireGridTickParams {
	char UnknownData_0[0x28]; // 0x00(0x28)
	struct AActor* FireGridActorPlayerIsInsideOf; // 0x28(0x08)
	struct UClass* PlayerShipSize; // 0x30(0x08)
	char UnknownData_38[0x10]; // 0x38(0x10)
};

