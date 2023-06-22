// Class DebugTeleportationFramework.DebugTeleportationLookupInterface
// Size: 0x28 (Inherited: 0x28)
struct UDebugTeleportationLookupInterface : UInterface {
};

// Class DebugTeleportationFramework.DebugTeleportationPresentationInterface
// Size: 0x28 (Inherited: 0x28)
struct UDebugTeleportationPresentationInterface : UInterface {
};

// Class DebugTeleportationFramework.DebugTeleportationRegistrationInterface
// Size: 0x28 (Inherited: 0x28)
struct UDebugTeleportationRegistrationInterface : UInterface {
};

// Class DebugTeleportationFramework.DebugTeleportationDestinationService
// Size: 0x3f0 (Inherited: 0x3c8)
struct ADebugTeleportationDestinationService : AActor {
	char UnknownData_3C8[0x18]; // 0x3c8(0x18)
	struct TArray<struct FDebugTeleportDestinationEntry> DebugTeleportationRegistry; // 0x3e0(0x10)
};

