// Class CustomMysteriousNotes.CustomMysteriousNotesInterface
// Size: 0x28 (Inherited: 0x28)
struct UCustomMysteriousNotesInterface : UInterface {
};

// Class CustomMysteriousNotes.CustomMysteriousNotesService
// Size: 0x420 (Inherited: 0x3c8)
struct ACustomMysteriousNotesService : AActor {
	char UnknownData_3C8[0x8]; // 0x3c8(0x08)
	struct TMap<int32_t, struct FCustomPlayerNoteList> CustomMysteriousNotes; // 0x3d0(0x50)
};

