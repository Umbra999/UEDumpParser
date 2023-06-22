// Enum Tethering.ETetherConstrainMode
enum class ETetherConstrainMode : uint8_t {
	ShrinkLength,
	ConstantLength,
	GrowLength,
	ETetherConstrainMode_MAX,
};

// ScriptStruct Tethering.TetherProjectileImpact
// Size: 0x08 (Inherited: 0x00)
struct FTetherProjectileImpact {
	struct AActor* HitActor; // 0x00(0x08)
};

