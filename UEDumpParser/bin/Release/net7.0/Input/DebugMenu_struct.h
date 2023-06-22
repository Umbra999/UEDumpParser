// ScriptStruct DebugMenu.DebugMenuButtonShortcut
// Size: 0x40 (Inherited: 0x00)
struct FDebugMenuButtonShortcut {
	struct FString DisplayName; // 0x00(0x10)
	struct FString ConsoleCommand; // 0x10(0x10)
	struct TArray<struct FKey> Buttons; // 0x20(0x10)
	float RequiredHoldTime; // 0x30(0x04)
	bool AvailableInShippingBuilds; // 0x34(0x01)
	char UnknownData_35[0xb]; // 0x35(0x0b)
};

// ScriptStruct DebugMenu.DebugMenuDataAssetEntry
// Size: 0x38 (Inherited: 0x00)
struct FDebugMenuDataAssetEntry {
	struct FString MenuPath; // 0x00(0x10)
	struct FString DisplayName; // 0x10(0x10)
	struct FString ConsoleCommand; // 0x20(0x10)
	bool CloseMenuWhenExecuted; // 0x30(0x01)
	bool AvailableInShippingBuilds; // 0x31(0x01)
	bool AddToCommonlyUsedMenu; // 0x32(0x01)
	char UnknownData_33[0x5]; // 0x33(0x05)
};

// ScriptStruct DebugMenu.DebugMenuUserItem
// Size: 0x20 (Inherited: 0x00)
struct FDebugMenuUserItem {
	struct FString path; // 0x00(0x10)
	struct FString Command; // 0x10(0x10)
};

// ScriptStruct DebugMenu.DebugErrorHappeningEvent
// Size: 0x01 (Inherited: 0x00)
struct FDebugErrorHappeningEvent {
	char UnknownData_0[0x1]; // 0x00(0x01)
};

// ScriptStruct DebugMenu.DebugMenuOptionExecutedEvent
// Size: 0x20 (Inherited: 0x00)
struct FDebugMenuOptionExecutedEvent {
	struct FString DebugMenuItemName; // 0x00(0x10)
	struct FString ConsoleCommand; // 0x10(0x10)
};

