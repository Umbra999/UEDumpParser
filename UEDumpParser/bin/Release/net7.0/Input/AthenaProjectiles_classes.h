// Class AthenaProjectiles.AthenaProjectilesThrottledTickCollectionAsset
// Size: 0x38 (Inherited: 0x28)
struct UAthenaProjectilesThrottledTickCollectionAsset : UDataAsset {
	struct TArray<struct FThrottledProjectileTickPool> ProjectileTickPools; // 0x28(0x10)
};

// Class AthenaProjectiles.ProjectileLauncherSpecificSettings
// Size: 0x48 (Inherited: 0x38)
struct UProjectileLauncherSpecificSettings : UDeveloperSettings {
	struct TArray<struct FGlobalProjectileSettings> GlobalSettings; // 0x38(0x10)
};

