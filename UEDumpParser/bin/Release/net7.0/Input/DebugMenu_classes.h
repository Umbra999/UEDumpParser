// Class DebugMenu.DebugMenuComponent
// Size: 0x118 (Inherited: 0xc8)
struct UDebugMenuComponent : UActorComponent {
	char UnknownData_C8[0x28]; // 0xc8(0x28)
	struct ADebugMenu* DebugMenuInstance; // 0xf0(0x08)
	char UnknownData_F8[0x20]; // 0xf8(0x20)
};

// Class DebugMenu.DebugMenuEntryGenerator
// Size: 0x28 (Inherited: 0x28)
struct UDebugMenuEntryGenerator : UObject {
};

// Class DebugMenu.DebugMenuDataAsset
// Size: 0x68 (Inherited: 0x28)
struct UDebugMenuDataAsset : UDataAsset {
	struct TArray<struct UDebugMenuDataAsset*> DataAssets; // 0x28(0x10)
	struct TArray<struct FDebugMenuDataAssetEntry> MenuEntires; // 0x38(0x10)
	struct TArray<struct FDebugMenuButtonShortcut> ButtonShortcuts; // 0x48(0x10)
	struct TArray<struct UDebugMenuEntryGenerator*> MenuEntryGenerators; // 0x58(0x10)
};

// Class DebugMenu.DebugMenu
// Size: 0x478 (Inherited: 0x3c8)
struct ADebugMenu : AActor {
	char UnknownData_3C8[0xb0]; // 0x3c8(0xb0)
};

// Class DebugMenu.DebugMenuComponentMock
// Size: 0x120 (Inherited: 0x118)
struct UDebugMenuComponentMock : UDebugMenuComponent {
	char UnknownData_118[0x8]; // 0x118(0x08)
};

// Class DebugMenu.DebugMenuTestFunctions
// Size: 0x28 (Inherited: 0x28)
struct UDebugMenuTestFunctions : UBlueprintFunctionLibrary {

	bool IsDebugMenuReady(struct UObject* WorldContextObject); // Function DebugMenu.DebugMenuTestFunctions.IsDebugMenuReady // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x33b3120
	bool IsDebugMenuOpen(struct UObject* WorldContextObject); // Function DebugMenu.DebugMenuTestFunctions.IsDebugMenuOpen // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x33b30a0
	bool IsDebugMenuAvailable(); // Function DebugMenu.DebugMenuTestFunctions.IsDebugMenuAvailable // Final|Native|Static|Public|BlueprintCallable // @ game+0x33b3070
	struct FKey GetDebugMenuToggleKeyComboBetaKeyboard(); // Function DebugMenu.DebugMenuTestFunctions.GetDebugMenuToggleKeyComboBetaKeyboard // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x33b2fe0
	struct FKey GetDebugMenuToggleKeyComboAlphaKeyboard(); // Function DebugMenu.DebugMenuTestFunctions.GetDebugMenuToggleKeyComboAlphaKeyboard // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x33b2f50
	struct FKey GetDebugMenuToggleButtonComboBetaGamepad(); // Function DebugMenu.DebugMenuTestFunctions.GetDebugMenuToggleButtonComboBetaGamepad // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x33b2ec0
	struct FKey GetDebugMenuToggleButtonComboAlphaGamepad(); // Function DebugMenu.DebugMenuTestFunctions.GetDebugMenuToggleButtonComboAlphaGamepad // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x33b2e30
};

