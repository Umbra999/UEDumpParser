// ScriptStruct GameServerWebSocket.GameServerWebSocketEntityEvent
// Size: 0x28 (Inherited: 0x00)
struct FGameServerWebSocketEntityEvent {
	struct FString EventID; // 0x00(0x10)
	struct FString ServerId; // 0x10(0x10)
	struct FDateTime ServerTimeUTC; // 0x20(0x08)
};

// ScriptStruct GameServerWebSocket.EventOverMemoryThreshold
// Size: 0x20 (Inherited: 0x00)
struct FEventOverMemoryThreshold {
	struct FString EventID; // 0x00(0x10)
	struct FDateTime ServerTimeUTC; // 0x10(0x08)
	int32_t MemoryUsedPercentage; // 0x18(0x04)
	char UnknownData_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct GameServerWebSocket.EntityEventSubscriptionGameServerRequestModel
// Size: 0x30 (Inherited: 0x00)
struct FEntityEventSubscriptionGameServerRequestModel {
	struct TArray<struct FEventEntityIdsSwitch> EventsSwitched; // 0x00(0x10)
	struct TArray<struct FName> EventsWithAllIdsEnabled; // 0x10(0x10)
	struct TArray<struct FName> EventsWithAllIdsDisabled; // 0x20(0x10)
};

// ScriptStruct GameServerWebSocket.EventEntityIdsSwitch
// Size: 0x28 (Inherited: 0x00)
struct FEventEntityIdsSwitch {
	struct FName Event; // 0x00(0x08)
	struct TArray<int32_t> EnableEntityIds; // 0x08(0x10)
	struct TArray<int32_t> DisableEntityIds; // 0x18(0x10)
};

// ScriptStruct GameServerWebSocket.GlobalEventSubscriptionGameServerRequestModel
// Size: 0x20 (Inherited: 0x00)
struct FGlobalEventSubscriptionGameServerRequestModel {
	struct TArray<struct FName> EnableEvents; // 0x00(0x10)
	struct TArray<struct FName> DisableEvents; // 0x10(0x10)
};

