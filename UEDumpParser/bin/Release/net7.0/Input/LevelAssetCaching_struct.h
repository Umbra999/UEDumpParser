// ScriptStruct LevelAssetCaching.WorldRegionSetup
// Size: 0x28 (Inherited: 0x00)
struct FWorldRegionSetup {
	struct FVector2D WorldBoundsOrigin; // 0x00(0x08)
	struct FVector2D RegionSize; // 0x08(0x08)
	struct FIntPoint GridSize; // 0x10(0x08)
	struct TArray<struct FName> RegionNames; // 0x18(0x10)
};

