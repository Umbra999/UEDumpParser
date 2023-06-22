// ScriptStruct TrinketFramework.ChestEntitlementTrinketItem
// Size: 0x28 (Inherited: 0x00)
struct FChestEntitlementTrinketItem {
	struct FString ItemDesc; // 0x00(0x10)
	int32_t PlacedValue; // 0x10(0x04)
	int32_t PlacedThreshold; // 0x14(0x04)
	struct FString OwnerGamerTag; // 0x18(0x10)
};

// ScriptStruct TrinketFramework.TrinketLoadout
// Size: 0x48 (Inherited: 0x00)
struct FTrinketLoadout {
	struct TArray<struct FTrinketLoadoutEntry> TrinketEntries; // 0x00(0x10)
	struct TArray<struct FUniqueNetIdRepl> TrinketOwnerXUIDs; // 0x10(0x10)
	char UnknownData_20[0x28]; // 0x20(0x28)
};

// ScriptStruct TrinketFramework.TrinketLoadoutEntry
// Size: 0x08 (Inherited: 0x00)
struct FTrinketLoadoutEntry {
	int32_t TrinketEntitlementIndex; // 0x00(0x04)
	int32_t TrinketOwnerPlayerXUIDIndex; // 0x04(0x04)
};

// ScriptStruct TrinketFramework.RemoveInteractingPlayerFromTrinketMountpointRpc
// Size: 0x28 (Inherited: 0x10)
struct FRemoveInteractingPlayerFromTrinketMountpointRpc : FBoxedRpc {
	struct FNetSubObjectPtr TrinketMountpointManager; // 0x10(0x14)
	int32_t MountpointIndex; // 0x24(0x04)
};

// ScriptStruct TrinketFramework.TrinketLoadoutUpdatedEvent
// Size: 0x10 (Inherited: 0x00)
struct FTrinketLoadoutUpdatedEvent {
	char UnknownData_0[0x10]; // 0x00(0x10)
};

// ScriptStruct TrinketFramework.TrinketLoadoutModelEntry
// Size: 0x20 (Inherited: 0x00)
struct FTrinketLoadoutModelEntry {
	struct FName EntitlementId; // 0x00(0x08)
	int32_t LocationIndex; // 0x08(0x04)
	char UnknownData_C[0x4]; // 0x0c(0x04)
	struct FString UserId; // 0x10(0x10)
};

// ScriptStruct TrinketFramework.TrinketLoadoutModel
// Size: 0x10 (Inherited: 0x01)
struct FTrinketLoadoutModel : FPersistenceModel {
	struct TArray<struct FTrinketLoadoutModelEntry> Trinkets; // 0x00(0x10)
};

// ScriptStruct TrinketFramework.EventTrinketSetReady
// Size: 0x10 (Inherited: 0x00)
struct FEventTrinketSetReady {
	char UnknownData_0[0x10]; // 0x00(0x10)
};

// ScriptStruct TrinketFramework.RequestTrinketChestItemInfoEvent
// Size: 0x01 (Inherited: 0x00)
struct FRequestTrinketChestItemInfoEvent {
	char UnknownData_0[0x1]; // 0x00(0x01)
};

// ScriptStruct TrinketFramework.RequestTrinketLoadoutUIEvent
// Size: 0x10 (Inherited: 0x00)
struct FRequestTrinketLoadoutUIEvent {
	struct TArray<struct FString> Categories; // 0x00(0x10)
};

// ScriptStruct TrinketFramework.RequestTrinketEntitlementsUIEvent
// Size: 0x10 (Inherited: 0x00)
struct FRequestTrinketEntitlementsUIEvent {
	struct FString TrinketCategory; // 0x00(0x10)
};

// ScriptStruct TrinketFramework.RequestUnequipTrinketsOfClassUIEvent
// Size: 0x10 (Inherited: 0x00)
struct FRequestUnequipTrinketsOfClassUIEvent {
	struct FString TrinketDesc; // 0x00(0x10)
};

