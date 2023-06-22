// Class FireworkFramework.FireworkAmbientLightComponent
// Size: 0x4f0 (Inherited: 0x4a0)
struct UFireworkAmbientLightComponent : UAmbientLightSourceComponent {
	char UnknownData_4A0[0x50]; // 0x4a0(0x50)
};

// Class FireworkFramework.FireworkDamagerType
// Size: 0x28 (Inherited: 0x28)
struct UFireworkDamagerType : UDamagerType {
};

// Class FireworkFramework.FireworkFeedbackDataAsset
// Size: 0x48 (Inherited: 0x28)
struct UFireworkFeedbackDataAsset : UDataAsset {
	float MaxExplosionRadius; // 0x28(0x04)
	char UnknownData_2C[0x4]; // 0x2c(0x04)
	struct UClass* CameraShake; // 0x30(0x08)
	float CameraShakeInnerRadiusMultiplier; // 0x38(0x04)
	char UnknownData_3C[0x4]; // 0x3c(0x04)
	struct UForceFeedbackEffect* ExplosionRumble; // 0x40(0x08)
};

// Class FireworkFramework.FireworkDataAsset
// Size: 0x150 (Inherited: 0x28)
struct UFireworkDataAsset : UDataAsset {
	struct FWeightedProbabilityRangeOfRanges PercentageTimeUntilTrailDisappears; // 0x28(0x30)
	struct FWeightedProbabilityRangeOfRanges TimeUntilExplosion; // 0x58(0x30)
	bool IsFlare; // 0x88(0x01)
	bool ShouldCastAmbientLight; // 0x89(0x01)
	char UnknownData_8A[0x2]; // 0x8a(0x02)
	struct FFireworkAmbientLightData FireworkAmbientLightData; // 0x8c(0x14)
	struct TArray<struct FWeightedFireworkVFXData> Explosions; // 0xa0(0x10)
	struct FWeightedProbabilityRange NumExplosions; // 0xb0(0x20)
	struct FWeightedProbabilityRangeOfRanges TimeBetweenExplosions; // 0xd0(0x30)
	struct FWeightedProbabilityRangeOfRanges ExplosionLocationOffset; // 0x100(0x30)
	float FlashbangRadius; // 0x130(0x04)
	char UnknownData_134[0x4]; // 0x134(0x04)
	struct UWwiseObjectPoolWrapper* ExplosionSfxPool; // 0x138(0x08)
	struct UWwiseEvent* LaunchSfx; // 0x140(0x08)
	struct UFireworkFeedbackDataAsset* FireworkFeedbackData; // 0x148(0x08)
};

// Class FireworkFramework.FireworkExplosion
// Size: 0x4a0 (Inherited: 0x3c8)
struct AFireworkExplosion : AActor {
	char UnknownData_3C8[0x8]; // 0x3c8(0x08)
	struct FGeneratedFireworkData GeneratedFireworkData; // 0x3d0(0x58)
	struct USceneComponent* RootSceneComponent; // 0x428(0x08)
	struct UFireworkAmbientLightComponent* FireworkAmbientLightComponent; // 0x430(0x08)
	struct UParticleSystemComponent* SpawnedExplosionParticles; // 0x438(0x08)
	struct FWwiseEmitter AudioEmitter; // 0x440(0x20)
	char UnknownData_460[0x40]; // 0x460(0x40)
};

// Class FireworkFramework.FireworkItemInfo
// Size: 0x530 (Inherited: 0x510)
struct AFireworkItemInfo : AItemInfo {
	struct ULoadableFireworkComponent* LoadableProjectileComponent; // 0x510(0x08)
	struct FStringAssetReference FireworkDataAsset; // 0x518(0x10)
	int32_t GeneratedDataRNGSeed; // 0x528(0x04)
	char UnknownData_52C[0x4]; // 0x52c(0x04)
};

// Class FireworkFramework.FireworkServiceInterface
// Size: 0x28 (Inherited: 0x28)
struct UFireworkServiceInterface : UInterface {
};

// Class FireworkFramework.FireworkProjectile
// Size: 0x708 (Inherited: 0x600)
struct AFireworkProjectile : ALaunchableProjectile {
	char UnknownData_600[0x10]; // 0x600(0x10)
	struct USphereComponent* CollisionComponent; // 0x610(0x08)
	struct UStaticMeshComponent* MeshComponent; // 0x618(0x08)
	struct UExplosionComponent* ExplosionComponent; // 0x620(0x08)
	struct UFireworkStatsComponent* FireworkStatsComponent; // 0x628(0x08)
	struct USceneComponent* MeshDirectionComponent; // 0x630(0x08)
	struct UProjectileAnimationComponent* AnimationComponent; // 0x638(0x08)
	struct FGeneratedFireworkData GeneratedFireworkData; // 0x640(0x58)
	char UnknownData_698[0x70]; // 0x698(0x70)
};

// Class FireworkFramework.FireworkService
// Size: 0x460 (Inherited: 0x3c8)
struct AFireworkService : AActor {
	char UnknownData_3C8[0x78]; // 0x3c8(0x78)
	int32_t NumberOfCachedFlares; // 0x440(0x04)
	char UnknownData_444[0x1c]; // 0x444(0x1c)
};

// Class FireworkFramework.FireworksSettings
// Size: 0x50 (Inherited: 0x38)
struct UFireworksSettings : UDeveloperSettings {
	float FlashbangRadius; // 0x38(0x04)
	float FlashbangFlashTimer; // 0x3c(0x04)
	float FlashbangFadeOutTimer; // 0x40(0x04)
	float FlashbangCooldown; // 0x44(0x04)
	float LoadedFuseTimer; // 0x48(0x04)
	char UnknownData_4C[0x4]; // 0x4c(0x04)
};

// Class FireworkFramework.FireworksSettingsDataAsset
// Size: 0x68 (Inherited: 0x28)
struct UFireworksSettingsDataAsset : UDataAsset {
	float LoadedFuseTimer; // 0x28(0x04)
	char UnknownData_2C[0x4]; // 0x2c(0x04)
	struct UWwiseObjectPoolWrapper* FuseSoundWisePool; // 0x30(0x08)
	struct UWwiseEvent* FuseActivateSoundPlayEvent; // 0x38(0x08)
	struct UWwiseEvent* FuseSoundPlayEvent; // 0x40(0x08)
	struct UWwiseEvent* FuseSoundStopEvent; // 0x48(0x08)
	struct UObject* FuseParticleSystem; // 0x50(0x08)
	struct FStringAssetReference FuseMeshAssetReference; // 0x58(0x10)
};

// Class FireworkFramework.FireworkStatsComponent
// Size: 0x198 (Inherited: 0xc8)
struct UFireworkStatsComponent : UActorComponent {
	float FlareRadius; // 0xc8(0x04)
	char UnknownData_CC[0x4]; // 0xcc(0x04)
	int32_t NumberOfFireworksFiredAtNight; // 0xd0(0x04)
	float FireworksFiredAtNightRadius; // 0xd4(0x04)
	float FiredFireworksAtNightTimer; // 0xd8(0x04)
	char UnknownData_DC[0xbc]; // 0xdc(0xbc)
};

// Class FireworkFramework.ImpactProjectileIdFirework
// Size: 0x28 (Inherited: 0x28)
struct UImpactProjectileIdFirework : UImpactProjectileId {
};

// Class FireworkFramework.LoadableFireworkComponent
// Size: 0x140 (Inherited: 0x130)
struct ULoadableFireworkComponent : ULoadableProjectileComponent {
	bool ShouldProjectileTrailDoReflections; // 0x130(0x01)
	bool ShouldUseGlobalOverrideFuseTimer; // 0x131(0x01)
	bool ShouldUseGlobalOverrideFuseSfx; // 0x132(0x01)
	bool ShouldUseGlobalOverrideFuseVfx; // 0x133(0x01)
	bool ShouldUseGlobalOverrideFuseMesh; // 0x134(0x01)
	char UnknownData_135[0x3]; // 0x135(0x03)
	struct UFireworksSettingsDataAsset* FireworksSettingsDataAsset; // 0x138(0x08)
};

// Class FireworkFramework.ProjectileAnimationComponent
// Size: 0x290 (Inherited: 0xc8)
struct UProjectileAnimationComponent : UActorComponent {
	struct TArray<struct FWeightedProjectileMeshAnimationData> ProjectileAnimationCurves; // 0xc8(0x10)
	struct UStaticMeshComponent* MeshComponent; // 0xd8(0x08)
	struct FRuntimeVectorCurve AnimationOffsetCurve; // 0xe0(0x170)
	char UnknownData_250[0x40]; // 0x250(0x40)
};

