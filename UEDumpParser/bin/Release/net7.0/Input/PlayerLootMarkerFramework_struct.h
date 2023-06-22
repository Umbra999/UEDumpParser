// ScriptStruct PlayerLootMarkerFramework.PlayerLootMarkerWorldEdgeBatchData
// Size: 0x20 (Inherited: 0x00)
struct FPlayerLootMarkerWorldEdgeBatchData {
	struct FGuid BatchId; // 0x00(0x10)
	struct TArray<struct AActor*> Actors; // 0x10(0x10)
};

// ScriptStruct PlayerLootMarkerFramework.PlayerLootMarkerTelemetryEvent
// Size: 0x20 (Inherited: 0x00)
struct FPlayerLootMarkerTelemetryEvent {
	struct FVector Location; // 0x00(0x0c)
	int32_t ItemCount; // 0x0c(0x04)
	struct TArray<struct FString> LootTypes; // 0x10(0x10)
};

