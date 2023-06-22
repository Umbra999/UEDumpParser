// ScriptStruct GameService.GameServiceMap
// Size: 0x70 (Inherited: 0x00)
struct FGameServiceMap {
	char UnknownData_0[0x70]; // 0x00(0x70)
};

// ScriptStruct GameService.GameServiceCoordinator
// Size: 0x20 (Inherited: 0x00)
struct FGameServiceCoordinator {
	struct TArray<struct FGameServiceCoordinatorUnit> Services; // 0x00(0x10)
	char UnknownData_10[0x10]; // 0x10(0x10)
};

// ScriptStruct GameService.GameServiceCoordinatorUnit
// Size: 0x18 (Inherited: 0x00)
struct FGameServiceCoordinatorUnit {
	struct UObject* Service; // 0x00(0x08)
	char UnknownData_8[0x10]; // 0x08(0x10)
};

