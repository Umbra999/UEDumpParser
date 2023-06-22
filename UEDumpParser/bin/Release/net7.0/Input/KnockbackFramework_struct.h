// Enum KnockbackFramework.ESolidState
enum class ESolidState : uint8_t {
	Disabled,
	Knockback,
	Solid,
	ESolidState_MAX,
};

// Enum KnockbackFramework.EKnockbackType
enum class EKnockbackType : uint8_t {
	AwayFromCentre,
	TowardsActor,
	EKnockbackType_MAX,
};

// ScriptStruct KnockbackFramework.KnockbackableInfo
// Size: 0x20 (Inherited: 0x00)
struct FKnockbackableInfo {
	char UnknownData_0[0x20]; // 0x00(0x20)
};

