// Class Cleanliness.CleanlinessInterface
// Size: 0x28 (Inherited: 0x28)
struct UCleanlinessInterface : UInterface {
};

// Class Cleanliness.CleanlinessTransferInterface
// Size: 0x28 (Inherited: 0x28)
struct UCleanlinessTransferInterface : UInterface {
};

// Class Cleanliness.CleanlinessComponent
// Size: 0x148 (Inherited: 0xc8)
struct UCleanlinessComponent : UActorComponent {
	char UnknownData_C8[0x10]; // 0xc8(0x10)
	struct UCurveFloat* DirtinessStrengthToMaterialStrength; // 0xd8(0x08)
	struct FCleanlinessInfo CleanlinessInfo; // 0xe0(0x0c)
	float DirtinessDecayRatePerSecond; // 0xec(0x04)
	float QuickCleanDirtynessDecayRatePerSecond; // 0xf0(0x04)
	char UnknownData_F4[0x54]; // 0xf4(0x54)

	void OnRep_CleanlinessInfo(); // Function Cleanliness.CleanlinessComponent.OnRep_CleanlinessInfo // Final|Native|Private // @ game+0x41d3820
};

