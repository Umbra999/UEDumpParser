// Class ChecklistMaps.ChecklistActionData
// Size: 0x30 (Inherited: 0x28)
struct UChecklistActionData : UObject {
	int32_t NumRequiredActions; // 0x28(0x04)
	char ActionType; // 0x2c(0x01)
	char UnknownData_2D[0x3]; // 0x2d(0x03)
};

// Class ChecklistMaps.DeliverBootyChecklistActionData
// Size: 0x50 (Inherited: 0x30)
struct UDeliverBootyChecklistActionData : UChecklistActionData {
	struct TArray<struct UClass*> TargetBootyTypes; // 0x30(0x10)
	struct TArray<struct UClass*> TargetCompanies; // 0x40(0x10)
};

// Class ChecklistMaps.KillActorChecklistActionData
// Size: 0x40 (Inherited: 0x30)
struct UKillActorChecklistActionData : UChecklistActionData {
	struct TArray<struct UClass*> TargetAIClasses; // 0x30(0x10)
};

// Class ChecklistMaps.NamedChecklistEventActionData
// Size: 0x38 (Inherited: 0x30)
struct UNamedChecklistEventActionData : UChecklistActionData {
	struct FName Event; // 0x30(0x08)

	struct TArray<struct FString> EventsSource(); // Function ChecklistMaps.NamedChecklistEventActionData.EventsSource // Final|Native|Public|Const // @ game+0x3d9aa50
};

// Class ChecklistMaps.NPCInteractionChecklistActionData
// Size: 0x40 (Inherited: 0x30)
struct UNPCInteractionChecklistActionData : UChecklistActionData {
	struct TArray<struct FGuid> TargetNPCIds; // 0x30(0x10)
};

// Class ChecklistMaps.ChecklistItemsDataAsset
// Size: 0x38 (Inherited: 0x28)
struct UChecklistItemsDataAsset : UDataAsset {
	struct TArray<struct FChecklistItem> ChecklistItems; // 0x28(0x10)
};

// Class ChecklistMaps.ChecklistMap
// Size: 0x980 (Inherited: 0x830)
struct AChecklistMap : ATreasureMap {
	int32_t CanvasWidth; // 0x828(0x04)
	int32_t CanvasHeight; // 0x82c(0x04)
	struct UFont* Font; // 0x830(0x08)
	float FontScale; // 0x838(0x04)
	float FontLineSpacingScale; // 0x83c(0x04)
	struct UChecklistMapLayout* ChecklistMapLayout; // 0x848(0x08)
	struct FChecklistMapContents Contents; // 0x850(0xe8)
	char UnknownData_938[0x48]; // 0x938(0x48)

	void RefreshContents(); // Function ChecklistMaps.ChecklistMap.RefreshContents // Final|RequiredAPI|Native|Public|BlueprintCallable // @ game+0x3d9ad20
	void OnTextCanvasUpdate(struct UCanvas* Canvas, int32_t Width, int32_t Height); // Function ChecklistMaps.ChecklistMap.OnTextCanvasUpdate // Final|Native|Private // @ game+0x3d9ac20
	void OnRep_Contents(struct FChecklistMapContents InPreviousContents); // Function ChecklistMaps.ChecklistMap.OnRep_Contents // Final|Native|Private|HasOutParms // @ game+0x3d9ab60
};

// Class ChecklistMaps.ChecklistMapCollectionInterface
// Size: 0x28 (Inherited: 0x28)
struct UChecklistMapCollectionInterface : UInterface {
};

// Class ChecklistMaps.ChecklistMapCompletionComponent
// Size: 0x150 (Inherited: 0xc8)
struct UChecklistMapCompletionComponent : UActorComponent {
	struct UChecklistActionData* ActionData; // 0xc8(0x08)
	char UnknownData_D0[0x80]; // 0xd0(0x80)
};

// Class ChecklistMaps.ChecklistMapSettings
// Size: 0x58 (Inherited: 0x38)
struct UChecklistMapSettings : UDeveloperSettings {
	struct FStringAssetReference ChecklistMapItemDescClass; // 0x38(0x10)
	struct TArray<struct FName> ChecklistEvents; // 0x48(0x10)
};

