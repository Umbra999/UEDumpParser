// ScriptStruct CustomMysteriousNotes.DestroyMysteriousNoteGameServerRequestModel
// Size: 0x14 (Inherited: 0x00)
struct FDestroyMysteriousNoteGameServerRequestModel {
	int32_t PlayerNetGUID; // 0x00(0x04)
	struct FGuid NoteGUID; // 0x04(0x10)
};

// ScriptStruct CustomMysteriousNotes.CreateMysteriousNoteGameServerResponseModel
// Size: 0x14 (Inherited: 0x00)
struct FCreateMysteriousNoteGameServerResponseModel {
	bool Success; // 0x00(0x01)
	char UnknownData_1[0x3]; // 0x01(0x03)
	struct FGuid NoteId; // 0x04(0x10)
};

// ScriptStruct CustomMysteriousNotes.CreateMysteriousNoteGameServerRequestModel
// Size: 0x38 (Inherited: 0x00)
struct FCreateMysteriousNoteGameServerRequestModel {
	int32_t PlayerNetGUID; // 0x00(0x04)
	char UnknownData_4[0x4]; // 0x04(0x04)
	struct FString NoteType; // 0x08(0x10)
	struct FString NoteTitle; // 0x18(0x10)
	struct FString NoteBody; // 0x28(0x10)
};

// ScriptStruct CustomMysteriousNotes.CustomPlayerNoteList
// Size: 0x10 (Inherited: 0x00)
struct FCustomPlayerNoteList {
	struct TArray<struct FNotesRemoteServiceNoteDetailModel> Notes; // 0x00(0x10)
};

