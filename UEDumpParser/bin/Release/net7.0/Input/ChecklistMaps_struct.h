// Enum ChecklistMaps.EChecklistActionType
enum class EChecklistActionType : uint8_t {
	None,
	KillActor,
	NPCInteraction,
	DeliverBooty,
	EChecklistActionType_MAX,
};

// ScriptStruct ChecklistMaps.ChecklistItem
// Size: 0x50 (Inherited: 0x00)
struct FChecklistItem {
	struct FText Description; // 0x00(0x38)
	int32_t NumRequiredActionCompletions; // 0x38(0x04)
	char UnknownData_3C[0x4]; // 0x3c(0x04)
	struct TArray<struct UChecklistActionData*> ActionData; // 0x40(0x10)
};

// ScriptStruct ChecklistMaps.ChecklistMapItemData
// Size: 0x50 (Inherited: 0x00)
struct FChecklistMapItemData {
	struct FTreasureMapTextDesc Description; // 0x00(0x48)
	bool IsComplete; // 0x48(0x01)
	char UnknownData_49[0x7]; // 0x49(0x07)
};

// ScriptStruct ChecklistMaps.ChecklistMapContents
// Size: 0xe8 (Inherited: 0x00)
struct FChecklistMapContents {
	struct FTreasureMapTextDesc Title; // 0x00(0x48)
	struct FTreasureMapTextDesc Description; // 0x48(0x48)
	struct TArray<struct FChecklistMapItemData> ChecklistItems; // 0x90(0x10)
	struct FTreasureMapTextDesc Afternote; // 0xa0(0x48)
};

// ScriptStruct ChecklistMaps.CompleteEntireChecklistEvent
// Size: 0x01 (Inherited: 0x00)
struct FCompleteEntireChecklistEvent {
	char UnknownData_0[0x1]; // 0x00(0x01)
};

// ScriptStruct ChecklistMaps.ChecklistBootyDeliveredEvent
// Size: 0x10 (Inherited: 0x00)
struct FChecklistBootyDeliveredEvent {
	struct AActor* Seller; // 0x00(0x08)
	struct AActor* BuyingNPC; // 0x08(0x08)
};

// ScriptStruct ChecklistMaps.ChecklistCompletionEvent
// Size: 0x08 (Inherited: 0x00)
struct FChecklistCompletionEvent {
	struct UChecklistActionData* ActionData; // 0x00(0x08)
};

// ScriptStruct ChecklistMaps.ChecklistItemCompletedTelemetryEvent
// Size: 0x28 (Inherited: 0x00)
struct FChecklistItemCompletedTelemetryEvent {
	struct FGuid ChecklistMapId; // 0x00(0x10)
	char ReceivedActionType; // 0x10(0x01)
	char UnknownData_11[0x7]; // 0x11(0x07)
	struct FString ActionDescryption; // 0x18(0x10)
};

