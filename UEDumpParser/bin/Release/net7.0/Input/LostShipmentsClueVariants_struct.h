// Enum LostShipmentsClueVariants.EInteractableGrammaticalGender
enum class EInteractableGrammaticalGender : uint8_t {
	Default,
	Masculine,
	Feminine,
	EInteractableGrammaticalGender_MAX,
};

// ScriptStruct LostShipmentsClueVariants.ClueDestinationToTextIndex
// Size: 0x28 (Inherited: 0x00)
struct FClueDestinationToTextIndex {
	struct UClass* DestinationType; // 0x00(0x08)
	struct UAbandonedNoteClueTextIndexAssetBase* RequiredIndexAsset; // 0x08(0x20)
};

// ScriptStruct LostShipmentsClueVariants.ClueDestinationChoice
// Size: 0x10 (Inherited: 0x00)
struct FClueDestinationChoice {
	struct UClueDestinationDescriptor* Destination; // 0x00(0x08)
	int16_t ClueChoice; // 0x08(0x02)
	char UnknownData_A[0x6]; // 0x0a(0x06)
};

// ScriptStruct LostShipmentsClueVariants.GenderSpecificTextPairings
// Size: 0x70 (Inherited: 0x00)
struct FGenderSpecificTextPairings {
	struct FText MasculineClueDestinationDescription; // 0x00(0x38)
	struct FText FeminineClueDestinationDescription; // 0x38(0x38)
};

// ScriptStruct LostShipmentsClueVariants.TextEntryWithLayout
// Size: 0x78 (Inherited: 0x00)
struct FTextEntryWithLayout {
	struct FText TextEntry; // 0x00(0x38)
	struct FTreasureMapWidgetText TextLayout; // 0x38(0x3c)
	char UnknownData_74[0x4]; // 0x74(0x04)
};

// ScriptStruct LostShipmentsClueVariants.MapRadialIconData
// Size: 0x18 (Inherited: 0x00)
struct FMapRadialIconData {
	struct FStringAssetReference AssetReference; // 0x00(0x10)
	float Rotation; // 0x10(0x04)
	char UnknownData_14[0x4]; // 0x14(0x04)
};

// ScriptStruct LostShipmentsClueVariants.ExistingNPCToPhasedNPC
// Size: 0x40 (Inherited: 0x00)
struct FExistingNPCToPhasedNPC {
	struct UClass* ExistingNPC; // 0x00(0x20)
	struct UClass* PhasedNPC; // 0x20(0x20)
};

