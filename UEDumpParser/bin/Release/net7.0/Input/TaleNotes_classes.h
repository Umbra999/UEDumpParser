// Class TaleNotes.TaleNote
// Size: 0xa50 (Inherited: 0x7e0)
struct ATaleNote : ASkeletalMeshWieldableItem {
	char UnknownData_7E0[0x10]; // 0x7e0(0x10)
	int32_t CanvasWidth; // 0x7f0(0x04)
	int32_t CanvasHeight; // 0x7f4(0x04)
	float FontScale; // 0x7f8(0x04)
	char UnknownData_7FC[0x4]; // 0x7fc(0x04)
	struct UFont* Font; // 0x800(0x08)
	struct FTreasureMapWidgetStreamedTexture Image; // 0x808(0x38)
	struct FTreasureMapWidgetText TitleWidgetText; // 0x840(0x3c)
	struct FTreasureMapWidgetText BodyWidgetText; // 0x87c(0x3c)
	struct TArray<struct FTreasureMapWidgetText> AdditionalBodyWidgetText; // 0x8b8(0x10)
	float NoteWidth; // 0x8c8(0x04)
	float NoteLineSpacingMultiplier; // 0x8cc(0x04)
	struct FText Title; // 0x8d0(0x38)
	struct FText Body; // 0x908(0x38)
	struct TArray<struct FText> AdditionalBody; // 0x940(0x10)
	struct UMaybeCompressedCanvasRenderTarget2D* RenderTarget; // 0x950(0x08)
	struct UUsableWieldableComponent* UsableWieldableComponent; // 0x958(0x08)
	struct UInventoryItemComponent* InventoryItemComponent; // 0x960(0x08)
	struct UZoomInOnWieldableItemComponent* ZoomInOnWieldableComponent; // 0x968(0x08)
	char UnknownData_970[0xe0]; // 0x970(0xe0)

	void OnTextCanvasUpdate(struct UCanvas* InCanvas, int32_t InWidth, int32_t InHeight); // Function TaleNotes.TaleNote.OnTextCanvasUpdate // Final|Native|Protected // @ game+0x47ff840
};

