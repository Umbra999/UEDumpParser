// Enum AthenaProjectiles.EProjectileFiredFrom
enum class EProjectileFiredFrom : uint8_t {
	Cannon,
	Character,
	DeepSeaCannon,
	DeepSeaCharacter,
	RowboatCannon,
	SeaFortCannon,
	MAX,
	EProjectileFiredFrom_MAX,
};

// ScriptStruct AthenaProjectiles.ThrottledProjectileTickPool
// Size: 0x18 (Inherited: 0x00)
struct FThrottledProjectileTickPool {
	int32_t MaxNumberToTickPerFrame; // 0x00(0x04)
	char UnknownData_4[0x4]; // 0x04(0x04)
	struct TArray<struct UClass*> Projectiles; // 0x08(0x10)
};

// ScriptStruct AthenaProjectiles.GlobalProjectileSettings
// Size: 0x10 (Inherited: 0x00)
struct FGlobalProjectileSettings {
	char SettingsFor; // 0x00(0x01)
	char UnknownData_1[0x3]; // 0x01(0x03)
	float ProjectileDestroyDepth; // 0x04(0x04)
	float ProjectileOceanFloorDestroyDepth; // 0x08(0x04)
	float ProjectileMinimumFallDistance; // 0x0c(0x04)
};

