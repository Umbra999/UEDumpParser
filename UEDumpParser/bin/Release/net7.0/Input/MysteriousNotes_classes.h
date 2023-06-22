// Class MysteriousNotes.HasPlayerMysteriousNotesRadialContext
// Size: 0x28 (Inherited: 0x28)
struct UHasPlayerMysteriousNotesRadialContext : URadialContextBase {
};

// Class MysteriousNotes.LookingAtMysteriousNoteInputComponent
// Size: 0x2d0 (Inherited: 0x2a0)
struct ULookingAtMysteriousNoteInputComponent : ULookingAtWieldableInputComponent {
	char UnknownData_2A0[0x30]; // 0x2a0(0x30)
};

// Class MysteriousNotes.MysteriousNoteDesc
// Size: 0x120 (Inherited: 0x120)
struct UMysteriousNoteDesc : UItemDesc {
};

// Class MysteriousNotes.MysteriousNotesCompletionEventsModelDataAsset
// Size: 0x38 (Inherited: 0x28)
struct UMysteriousNotesCompletionEventsModelDataAsset : UDataAsset {
	struct TArray<struct FMysteriousNotesCompletionEventsModel> MysteriousNoteCompletionEvents; // 0x28(0x10)
};

// Class MysteriousNotes.MysteriousNoteSettings
// Size: 0x70 (Inherited: 0x28)
struct UMysteriousNoteSettings : UObject {
	int32_t LookAheadInMinutes; // 0x28(0x04)
	float RequestTimeout; // 0x2c(0x04)
	struct FStringAssetReference MysteriousNotesCompletionStringsAsset; // 0x30(0x10)
	struct FStringAssetReference WieldableNoteDataAsset; // 0x40(0x10)
	struct FStringAssetReference Image; // 0x50(0x10)
	struct FStringAssetReference NotificationBackground; // 0x60(0x10)
};

// Class MysteriousNotes.MysteriousNotesServiceInterface
// Size: 0x28 (Inherited: 0x28)
struct UMysteriousNotesServiceInterface : UInterface {
};

// Class MysteriousNotes.WieldableMysteriousNoteLayout
// Size: 0x188 (Inherited: 0x28)
struct UWieldableMysteriousNoteLayout : UDataAsset {
	struct FText DefaultTitle; // 0x28(0x38)
	struct FText DefaultBody; // 0x60(0x38)
	struct FWieldableMysteriousNoteLayoutItem DefaultNoteLayoutItem; // 0x98(0xe0)
	struct TArray<struct FWieldableMysteriousNoteLayoutItem> NoteLayoutItems; // 0x178(0x10)
};

// Class MysteriousNotes.WieldableMysteriousNoteDataAsset
// Size: 0x38 (Inherited: 0x28)
struct UWieldableMysteriousNoteDataAsset : UDataAsset {
	struct UClass* WieldableNoteDesc; // 0x28(0x08)
	struct UWieldableMysteriousNoteLayout* NoteLayout; // 0x30(0x08)
};

// Class MysteriousNotes.MysteriousNotesService
// Size: 0x490 (Inherited: 0x3c8)
struct AMysteriousNotesService : AActor {
	char UnknownData_3C8[0x28]; // 0x3c8(0x28)
	struct UMysteriousNoteSettings* CachedNoteSettings; // 0x3f0(0x08)
	struct UWieldableMysteriousNoteDataAsset* WieldableNoteDataAsset; // 0x3f8(0x08)
	struct UMysteriousNotesCompletionEventsModelDataAsset* CompletionEventsModelData; // 0x400(0x08)
	char UnknownData_408[0x88]; // 0x408(0x88)
};

// Class MysteriousNotes.PlayerMysteriousNoteInterface
// Size: 0x28 (Inherited: 0x28)
struct UPlayerMysteriousNoteInterface : UInterface {
};

// Class MysteriousNotes.PlayerMysteriousNoteComponent
// Size: 0x268 (Inherited: 0xc8)
struct UPlayerMysteriousNoteComponent : UActorComponent {
	char UnknownData_C8[0x8]; // 0xc8(0x08)
	bool CinematicPlayed; // 0xd0(0x01)
	char UnknownData_D1[0xef]; // 0xd1(0xef)
	struct FClientNoteData NoteData; // 0x1c0(0x18)
	bool BeenPossessed; // 0x1d8(0x01)
	char UnknownData_1D9[0x8f]; // 0x1d9(0x8f)

	void TriggerNotesReceivedPopup(bool InCinematicSkipped); // Function MysteriousNotes.PlayerMysteriousNoteComponent.TriggerNotesReceivedPopup // RequiredAPI|Net|NetReliableNative|Event|Public|NetClient // @ game+0x4354db0
	void Server_NoteCompletionStepReceived(struct APlayerController* InPlayerController, struct FName InCompletionID); // Function MysteriousNotes.PlayerMysteriousNoteComponent.Server_NoteCompletionStepReceived // Net|NetReliableNative|Event|Protected|NetServer|NetValidate // @ game+0x4354cb0
	void Server_MarkNoteAsRead(struct APlayerController* InPlayerController, struct FGuid NoteId); // Function MysteriousNotes.PlayerMysteriousNoteComponent.Server_MarkNoteAsRead // Net|NetReliableNative|Event|Protected|NetServer|HasDefaults|NetValidate // @ game+0x4354bb0
	void Server_MarkNoteAsDeleted(struct APlayerController* InPlayerController, struct FGuid NoteId); // Function MysteriousNotes.PlayerMysteriousNoteComponent.Server_MarkNoteAsDeleted // Net|NetReliableNative|Event|Protected|NetServer|HasDefaults|NetValidate // @ game+0x4354ab0
	void OnRep_NoteData(); // Function MysteriousNotes.PlayerMysteriousNoteComponent.OnRep_NoteData // Final|RequiredAPI|Native|Private // @ game+0x4354970
	void OnRep_BeenPossessed(); // Function MysteriousNotes.PlayerMysteriousNoteComponent.OnRep_BeenPossessed // Final|RequiredAPI|Native|Private // @ game+0x4354950
	void CustomServerUpdateDetailNotes(struct TArray<struct FNotesRemoteServiceNoteDetailModel> InNotes); // Function MysteriousNotes.PlayerMysteriousNoteComponent.CustomServerUpdateDetailNotes // RequiredAPI|Net|NetReliableNative|Event|Public|NetClient // @ game+0x43548b0
	void AddFakeNote(struct FString NoteType, struct FString NoteTitle, struct FString NoteBody, struct TArray<struct FString> CompletionStrings); // Function MysteriousNotes.PlayerMysteriousNoteComponent.AddFakeNote // RequiredAPI|Net|NetReliableNative|Event|Public|NetClient // @ game+0x43546d0
};

// Class MysteriousNotes.WieldableMysteriousNote
// Size: 0x980 (Inherited: 0x7e0)
struct AWieldableMysteriousNote : ASkeletalMeshWieldableItem {
	char UnknownData_7E0[0x10]; // 0x7e0(0x10)
	struct UMaybeCompressedCanvasRenderTarget2D* RenderTarget; // 0x7f0(0x08)
	int32_t CanvasWidth; // 0x7f8(0x04)
	int32_t CanvasHeight; // 0x7fc(0x04)
	float FontScale; // 0x800(0x04)
	char UnknownData_804[0x5c]; // 0x804(0x5c)
	struct UWieldableMysteriousNoteLayout* NoteLayout; // 0x860(0x08)
	struct UUsableWieldableComponent* UsableWieldableComponent; // 0x868(0x08)
	struct UInventoryItemComponent* InventoryItemComponent; // 0x870(0x08)
	char UnknownData_878[0x108]; // 0x878(0x108)

	void OnTextCanvasUpdate(struct UCanvas* Canvas, int32_t Width, int32_t Height); // Function MysteriousNotes.WieldableMysteriousNote.OnTextCanvasUpdate // Final|Native|Private // @ game+0x43549b0
	void OnRep_NoteLayout(); // Function MysteriousNotes.WieldableMysteriousNote.OnRep_NoteLayout // Final|RequiredAPI|Native|Private // @ game+0x4354990
};

