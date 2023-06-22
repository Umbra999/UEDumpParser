// Class NudgeComposite.NudgeFromExplosionsPolicy
// Size: 0xd8 (Inherited: 0xc8)
struct UNudgeFromExplosionsPolicy : UNudgePolicy {
	struct TArray<struct FNudgeChancePerDamagerType> AcceptedDamagerTypes; // 0xc8(0x10)
};

// Class NudgeComposite.NudgeFromShipCollisionPolicy
// Size: 0xd0 (Inherited: 0xc8)
struct UNudgeFromShipCollisionPolicy : UNudgePolicy {
	int32_t DamageAmountRequiredToNudge; // 0xc8(0x04)
	float ChanceOfNudge; // 0xcc(0x04)
};

// Class NudgeComposite.NudgeFromStormPolicy
// Size: 0x158 (Inherited: 0xc8)
struct UNudgeFromStormPolicy : UNudgePolicy {
	float ChanceOfNudge; // 0xc8(0x04)
	char UnknownData_CC[0x4]; // 0xcc(0x04)
	struct FWeightedProbabilityRangeOfRanges WeightedTimers; // 0xd0(0x30)
	char UnknownData_100[0x58]; // 0x100(0x58)

	void OnTimerCompleted(); // Function NudgeComposite.NudgeFromStormPolicy.OnTimerCompleted // Final|Native|Private // @ game+0x47af200
};

// Class NudgeComposite.NudgeFromWaterLevelPolicy
// Size: 0xf0 (Inherited: 0xc8)
struct UNudgeFromWaterLevelPolicy : UNudgePolicy {
	float ChanceOfNudge; // 0xc8(0x04)
	char UnknownData_CC[0x14]; // 0xcc(0x14)
	float WaterLevelDifferenceBetweenUpdates; // 0xe0(0x04)
	float ZOffsetFromWaterToMountpoint; // 0xe4(0x04)
	char UnknownData_E8[0x8]; // 0xe8(0x08)
};

