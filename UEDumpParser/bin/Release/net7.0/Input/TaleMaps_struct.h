// ScriptStruct TaleMaps.TaleQuestVariableMapMarkType
// Size: 0x30 (Inherited: 0x30)
struct FTaleQuestVariableMapMarkType : FQuestVariable {
};

// ScriptStruct TaleMaps.TaleQuestChecklistItem
// Size: 0x50 (Inherited: 0x00)
struct FTaleQuestChecklistItem {
	struct TArray<struct FChecklistActionProgressTracker> ChecklistActions; // 0x00(0x10)
	char UnknownData_10[0x40]; // 0x10(0x40)
};

// ScriptStruct TaleMaps.ChecklistActionProgressTracker
// Size: 0x10 (Inherited: 0x00)
struct FChecklistActionProgressTracker {
	struct UChecklistActionData* ActionData; // 0x00(0x08)
	char UnknownData_8[0x8]; // 0x08(0x08)
};

// ScriptStruct TaleMaps.TaleQuestVariableTreasureMapItemDescType
// Size: 0x30 (Inherited: 0x30)
struct FTaleQuestVariableTreasureMapItemDescType : FQuestVariable {
};

