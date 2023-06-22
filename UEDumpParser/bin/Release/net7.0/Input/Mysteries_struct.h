// ScriptStruct Mysteries.AbandonedNoteWeightedTextEntry
// Size: 0x78 (Inherited: 0x00)
struct FAbandonedNoteWeightedTextEntry {
	struct FText Title; // 0x00(0x38)
	struct FText Body; // 0x38(0x38)
	float Weight; // 0x70(0x04)
	char UnknownData_74[0x4]; // 0x74(0x04)
};

// ScriptStruct Mysteries.SirenPuzzleLockState
// Size: 0x30 (Inherited: 0x00)
struct FSirenPuzzleLockState {
	struct FGuid LockId; // 0x00(0x10)
	struct TArray<struct FLandmarkReactionKeyFrame> UnlockReactions; // 0x10(0x10)
	struct TArray<struct FGuid> UnlockingCrews; // 0x20(0x10)
};

// ScriptStruct Mysteries.SirenPuzzleCompleteEvent
// Size: 0x01 (Inherited: 0x00)
struct FSirenPuzzleCompleteEvent {
	char UnknownData_0[0x1]; // 0x00(0x01)
};

