// Enum EnchantedCompass.ETargetUpdateReason
enum class ETargetUpdateReason : uint8_t {
	Update,
	Replace,
	ETargetUpdateReason_MAX,
};

// Enum EnchantedCompass.ERotatingCompassRotationStates
enum class ERotatingCompassRotationStates : uint8_t {
	RotationSequence,
	SplinePath,
	MAX,
	ERotatingCompassRotationStates_MAX,
};

// ScriptStruct EnchantedCompass.CompassTargetSet
// Size: 0x0c (Inherited: 0x00)
struct FCompassTargetSet {
	struct FVector TargetLocation; // 0x00(0x0c)
};

