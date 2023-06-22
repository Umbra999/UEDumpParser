// ScriptStruct MysteriousNotes.MysteriousNotesCompletionEventsModel
// Size: 0x08 (Inherited: 0x00)
struct FMysteriousNotesCompletionEventsModel {
	struct FName CompletionIdent; // 0x00(0x08)
};

// ScriptStruct MysteriousNotes.MysteriousNotesCompletionEventsModelEntry
// Size: 0x08 (Inherited: 0x00)
struct FMysteriousNotesCompletionEventsModelEntry {
	struct FName CompletionIdent; // 0x00(0x08)
};

// ScriptStruct MysteriousNotes.EventListenForCinematicEndEvent
// Size: 0x01 (Inherited: 0x00)
struct FEventListenForCinematicEndEvent {
	char UnknownData_0[0x1]; // 0x00(0x01)
};

// ScriptStruct MysteriousNotes.EventTriggerMysteriousNotesPopup
// Size: 0x10 (Inherited: 0x00)
struct FEventTriggerMysteriousNotesPopup {
	struct APlayerController* PlayerController; // 0x00(0x08)
	bool CinematicSkipped; // 0x08(0x01)
	char UnknownData_9[0x7]; // 0x09(0x07)
};

// ScriptStruct MysteriousNotes.EventMarkNoteDeleted
// Size: 0x18 (Inherited: 0x00)
struct FEventMarkNoteDeleted {
	struct APlayerController* PlayerController; // 0x00(0x08)
	struct FGuid NoteId; // 0x08(0x10)
};

// ScriptStruct MysteriousNotes.EventNoteClientCompletionStep
// Size: 0x10 (Inherited: 0x00)
struct FEventNoteClientCompletionStep {
	struct APlayerController* PlayerController; // 0x00(0x08)
	struct FName CompletionStepID; // 0x08(0x08)
};

// ScriptStruct MysteriousNotes.EventNoteCompletionStep
// Size: 0x10 (Inherited: 0x00)
struct FEventNoteCompletionStep {
	struct APlayerController* PlayerController; // 0x00(0x08)
	struct FName CompletionStepID; // 0x08(0x08)
};

// ScriptStruct MysteriousNotes.EventNotesUpdated
// Size: 0x01 (Inherited: 0x00)
struct FEventNotesUpdated {
	char UnknownData_0[0x1]; // 0x00(0x01)
};

// ScriptStruct MysteriousNotes.EventMarkNoteRead
// Size: 0x18 (Inherited: 0x00)
struct FEventMarkNoteRead {
	struct APlayerController* PlayerController; // 0x00(0x08)
	struct FGuid NoteId; // 0x08(0x10)
};

// ScriptStruct MysteriousNotes.EventOnlineAthenaPlayerControllerUnpossessed
// Size: 0x08 (Inherited: 0x00)
struct FEventOnlineAthenaPlayerControllerUnpossessed {
	struct APlayerController* PlayerController; // 0x00(0x08)
};

// ScriptStruct MysteriousNotes.EventPlayerControllerPossessed
// Size: 0x08 (Inherited: 0x00)
struct FEventPlayerControllerPossessed {
	struct APlayerController* PlayerController; // 0x00(0x08)
};

// ScriptStruct MysteriousNotes.EventMysteriousNoteContentUpdated
// Size: 0x10 (Inherited: 0x00)
struct FEventMysteriousNoteContentUpdated {
	char UnknownData_0[0x10]; // 0x00(0x10)
};

// ScriptStruct MysteriousNotes.EventMysteriousNoteSettingsLoaded
// Size: 0x01 (Inherited: 0x00)
struct FEventMysteriousNoteSettingsLoaded {
	char UnknownData_0[0x1]; // 0x00(0x01)
};

// ScriptStruct MysteriousNotes.EventMysteriousNoteCustomContentUpdate
// Size: 0x01 (Inherited: 0x00)
struct FEventMysteriousNoteCustomContentUpdate {
	char UnknownData_0[0x1]; // 0x00(0x01)
};

// ScriptStruct MysteriousNotes.EventMysteriousNoteRemoved
// Size: 0x10 (Inherited: 0x00)
struct FEventMysteriousNoteRemoved {
	char UnknownData_0[0x10]; // 0x00(0x10)
};

// ScriptStruct MysteriousNotes.MysteriousNoteInfo
// Size: 0x14 (Inherited: 0x00)
struct FMysteriousNoteInfo {
	struct FGuid NoteId; // 0x00(0x10)
	bool NoteRead; // 0x10(0x01)
	bool ShowNoteAnimation; // 0x11(0x01)
	char UnknownData_12[0x2]; // 0x12(0x02)
};

// ScriptStruct MysteriousNotes.MysteriousNoteTheme
// Size: 0x10 (Inherited: 0x00)
struct FMysteriousNoteTheme {
	struct FString NoteType; // 0x00(0x10)
};

// ScriptStruct MysteriousNotes.WieldableMysteriousNoteLayoutItem
// Size: 0xe0 (Inherited: 0x00)
struct FWieldableMysteriousNoteLayoutItem {
	struct FString Theme; // 0x00(0x10)
	struct UFont* Font; // 0x10(0x08)
	struct FTreasureMapWidgetStreamedTexture Image; // 0x18(0x38)
	struct FStringAssetReference RadialIcon; // 0x50(0x10)
	struct FTreasureMapWidgetText NoteTitleWidgetText; // 0x60(0x3c)
	struct FTreasureMapWidgetText NoteBodyWidgetText; // 0x9c(0x3c)
	float NoteWidth; // 0xd8(0x04)
	float NoteLineSpacingMultiplier; // 0xdc(0x04)
};

// ScriptStruct MysteriousNotes.ActiveNoteData
// Size: 0x30 (Inherited: 0x00)
struct FActiveNoteData {
	struct TArray<struct FNotesRemoteServiceNoteModel> NotesRemoteServiceNoteModels; // 0x00(0x10)
	struct TArray<struct FNoteCompletionEntry> PendingCompletionEntries; // 0x10(0x10)
	struct TArray<struct FGuid> PendingDetailRequestIDs; // 0x20(0x10)
};

// ScriptStruct MysteriousNotes.NoteCompletionEntry
// Size: 0x20 (Inherited: 0x00)
struct FNoteCompletionEntry {
	struct FGuid NoteId; // 0x00(0x10)
	struct TArray<struct FString> CompletionEventIds; // 0x10(0x10)
};

// ScriptStruct MysteriousNotes.MysteriousNoteRequest
// Size: 0x80 (Inherited: 0x00)
struct FMysteriousNoteRequest {
	struct APlayerController* PlayerController; // 0x00(0x08)
	struct FPirateIdentity PirateIdentity; // 0x08(0x78)
};

// ScriptStruct MysteriousNotes.PlayerMysteriousNoteItem
// Size: 0x48 (Inherited: 0x00)
struct FPlayerMysteriousNoteItem {
	struct FGuid OriginalNoteID; // 0x00(0x10)
	struct FString LocalisedTitle; // 0x10(0x10)
	struct FString LocalisedBody; // 0x20(0x10)
	struct FString NoteType; // 0x30(0x10)
	char UnknownData_40[0x8]; // 0x40(0x08)
};

// ScriptStruct MysteriousNotes.ClientNoteData
// Size: 0x18 (Inherited: 0x00)
struct FClientNoteData {
	bool NotifyArrival; // 0x00(0x01)
	char UnknownData_1[0x7]; // 0x01(0x07)
	struct TArray<struct FMysteriousNoteInfo> PendingNotes; // 0x08(0x10)
};

// ScriptStruct MysteriousNotes.PlayerSentNotesTelemetryEvent
// Size: 0x04 (Inherited: 0x00)
struct FPlayerSentNotesTelemetryEvent {
	int32_t NoteCount; // 0x00(0x04)
};

// ScriptStruct MysteriousNotes.PlayerNoteStateChangeTelemetryEvent
// Size: 0x20 (Inherited: 0x00)
struct FPlayerNoteStateChangeTelemetryEvent {
	struct FGuid NoteId; // 0x00(0x10)
	struct FString NoteState; // 0x10(0x10)
};

