// Enum AthenaAIAbilities.EMeleeAwarenessCollisionHitResult
enum class EMeleeAwarenessCollisionHitResult : uint8_t {
	None,
	Static,
	Character,
	ToggleableCollider,
	EMeleeAwarenessCollisionHitResult_MAX,
};

// ScriptStruct AthenaAIAbilities.MeleeAttackIdWeights
// Size: 0x10 (Inherited: 0x00)
struct FMeleeAttackIdWeights {
	struct UClass* MeleeAttackType; // 0x00(0x08)
	float Weight; // 0x08(0x04)
	char UnknownData_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct AthenaAIAbilities.AshenLordFireShroudParams
// Size: 0x18 (Inherited: 0x00)
struct FAshenLordFireShroudParams {
	struct UClass* FireShroudZoneClass; // 0x00(0x08)
	struct FVector FireShroudCollisionVolume; // 0x08(0x0c)
	char UnknownData_14[0x4]; // 0x14(0x04)
};

// ScriptStruct AthenaAIAbilities.AshenLordFireShroud
// Size: 0x20 (Inherited: 0x00)
struct FAshenLordFireShroud {
	struct AStatusEffectOverlapZone* FireShroudOverlapZone; // 0x00(0x08)
	struct FAshenLordFireShroudParams Params; // 0x08(0x18)
};

