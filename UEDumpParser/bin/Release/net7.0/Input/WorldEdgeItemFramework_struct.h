// ScriptStruct WorldEdgeItemFramework.WorldEdgeItemServiceBatchCompletedEvent
// Size: 0x10 (Inherited: 0x00)
struct FWorldEdgeItemServiceBatchCompletedEvent {
	struct FGuid BatchId; // 0x00(0x10)
};

// ScriptStruct WorldEdgeItemFramework.WorldEdgeItemBatchTelemetryEvent
// Size: 0x1c (Inherited: 0x00)
struct FWorldEdgeItemBatchTelemetryEvent {
	struct FVector ShipLocation; // 0x00(0x0c)
	struct FVector TeleportLocation; // 0x0c(0x0c)
	int32_t NumItems; // 0x18(0x04)
};

// ScriptStruct WorldEdgeItemFramework.WorldEdgeItemDroppedInRedSeaTelemetryEvent
// Size: 0x18 (Inherited: 0x00)
struct FWorldEdgeItemDroppedInRedSeaTelemetryEvent {
	struct FVector DropLocation; // 0x00(0x0c)
	struct FVector TeleportLocation; // 0x0c(0x0c)
};

