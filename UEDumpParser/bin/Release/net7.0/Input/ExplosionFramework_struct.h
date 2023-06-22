// Enum ExplosionFramework.EExplosionReceiverCurveType
enum class EExplosionReceiverCurveType : uint8_t {
	None,
	Other,
	Player,
	EExplosionReceiverCurveType_MAX,
};

// ScriptStruct ExplosionFramework.EventAffectedByExplosion
// Size: 0x18 (Inherited: 0x00)
struct FEventAffectedByExplosion {
	struct UClass* DamagerType; // 0x00(0x08)
	char UnknownData_8[0x10]; // 0x08(0x10)
};

// ScriptStruct ExplosionFramework.EventExplosionIgnitedActor
// Size: 0x08 (Inherited: 0x00)
struct FEventExplosionIgnitedActor {
	struct AActor* IgnitedActor; // 0x00(0x08)
};

// ScriptStruct ExplosionFramework.EventOnExploded
// Size: 0x0c (Inherited: 0x00)
struct FEventOnExploded {
	char UnknownData_0[0xc]; // 0x00(0x0c)
};

// ScriptStruct ExplosionFramework.EventExplosionOverlap
// Size: 0x08 (Inherited: 0x00)
struct FEventExplosionOverlap {
	struct UClass* DamagerType; // 0x00(0x08)
};

