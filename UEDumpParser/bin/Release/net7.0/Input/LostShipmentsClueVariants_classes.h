// Class LostShipmentsClueVariants.AbandonedNoteClueDescriptor
// Size: 0x30 (Inherited: 0x28)
struct UAbandonedNoteClueDescriptor : UClueDescriptor {
	struct UClueDestinationDescriptor* DestinationDescriptor; // 0x28(0x08)
};

// Class LostShipmentsClueVariants.AbandonedNoteClueDescriptorGenerator
// Size: 0x40 (Inherited: 0x40)
struct UAbandonedNoteClueDescriptorGenerator : UClueDescriptorGenerator {
};

// Class LostShipmentsClueVariants.AbandonedNoteClueTextChoiceSource
// Size: 0xe0 (Inherited: 0x28)
struct UAbandonedNoteClueTextChoiceSource : UObject {
	char UnknownData_28[0x18]; // 0x28(0x18)
	struct TMap<struct UClueDestinationDescriptor*, int16_t> ExistingDestinations; // 0x40(0x50)
	char UnknownData_90[0x50]; // 0x90(0x50)
};

// Class LostShipmentsClueVariants.AbandonedNoteClueTextChoiceSourceConsumerInterface
// Size: 0x28 (Inherited: 0x28)
struct UAbandonedNoteClueTextChoiceSourceConsumerInterface : UInterface {
};

// Class LostShipmentsClueVariants.AbandonedNoteClueTextAsset
// Size: 0x40 (Inherited: 0x28)
struct UAbandonedNoteClueTextAsset : UDataAsset {
	struct TArray<struct FText> Descriptions; // 0x28(0x10)
	struct UClass* DestinationType; // 0x38(0x08)
};

// Class LostShipmentsClueVariants.AbandonedNoteClueTextIndexAssetBase
// Size: 0x28 (Inherited: 0x28)
struct UAbandonedNoteClueTextIndexAssetBase : UDataAsset {
};

// Class LostShipmentsClueVariants.AbandonedNoteClueTextIndexAssetMap
// Size: 0x38 (Inherited: 0x28)
struct UAbandonedNoteClueTextIndexAssetMap : UDataAsset {
	struct TArray<struct FClueDestinationToTextIndex> TextIndexMappings; // 0x28(0x10)
};

// Class LostShipmentsClueVariants.AbandonedNoteClueTextSourceInterface
// Size: 0x28 (Inherited: 0x28)
struct UAbandonedNoteClueTextSourceInterface : UInterface {
};

// Class LostShipmentsClueVariants.ClueTitleInterface
// Size: 0x28 (Inherited: 0x28)
struct UClueTitleInterface : UInterface {
};

// Class LostShipmentsClueVariants.ClueDestinationContainerInterface
// Size: 0x28 (Inherited: 0x28)
struct UClueDestinationContainerInterface : UInterface {
};

// Class LostShipmentsClueVariants.AbandonedNoteClueDestinationContainerComponent
// Size: 0x1d0 (Inherited: 0xc8)
struct UAbandonedNoteClueDestinationContainerComponent : UActorComponent {
	char UnknownData_C8[0x20]; // 0xc8(0x20)
	struct UAbandonedNoteClueTextIndexAssetMap* ClueTextIndexAssetMap; // 0xe8(0x08)
	struct FString CompositeFormatString; // 0xf0(0x10)
	struct FClueDestinationChoice CurrentClueDestination; // 0x100(0x10)
	struct FText CurrentTitleText; // 0x110(0x38)
	struct UAbandonedNoteClueTextChoiceSource* ClueTextChoiceSource; // 0x148(0x08)
	char UnknownData_150[0x80]; // 0x150(0x80)

	void OnRep_CurrentTitleText(); // Function LostShipmentsClueVariants.AbandonedNoteClueDestinationContainerComponent.OnRep_CurrentTitleText // Final|Native|Private // @ game+0x14e6730
	void OnRep_CurrentClueDestination(); // Function LostShipmentsClueVariants.AbandonedNoteClueDestinationContainerComponent.OnRep_CurrentClueDestination // Final|Native|Private // @ game+0x14e6710
};

// Class LostShipmentsClueVariants.NPCByNameClueDestinationDescriptor
// Size: 0x50 (Inherited: 0x40)
struct UNPCByNameClueDestinationDescriptor : UClueDestinationDescriptor {
	struct FGuid NPCIdentifier; // 0x40(0x10)
};

// Class LostShipmentsClueVariants.AbandonedNoteClueGenderSpecificTextAsset
// Size: 0x40 (Inherited: 0x28)
struct UAbandonedNoteClueGenderSpecificTextAsset : UDataAsset {
	struct TArray<struct FGenderSpecificTextPairings> Descriptions; // 0x28(0x10)
	struct UClass* DestinationType; // 0x38(0x08)
};

// Class LostShipmentsClueVariants.AbandonedNoteClueGenderSpecificTextIndexAsset
// Size: 0x38 (Inherited: 0x28)
struct UAbandonedNoteClueGenderSpecificTextIndexAsset : UAbandonedNoteClueTextIndexAssetBase {
	struct TArray<struct UAbandonedNoteClueGenderSpecificTextAsset*> ClueDestinationDescriptions; // 0x28(0x10)
};

// Class LostShipmentsClueVariants.AbandonedNoteClueTextIndexAsset
// Size: 0x38 (Inherited: 0x28)
struct UAbandonedNoteClueTextIndexAsset : UAbandonedNoteClueTextIndexAssetBase {
	struct TArray<struct UAbandonedNoteClueTextAsset*> ClueDestinationDescriptions; // 0x28(0x10)
};

// Class LostShipmentsClueVariants.AbandonedNoteWieldableRenderingComponent
// Size: 0x1c0 (Inherited: 0xc8)
struct UAbandonedNoteWieldableRenderingComponent : UActorComponent {
	int32_t CanvasWidth; // 0xc8(0x04)
	int32_t CanvasHeight; // 0xcc(0x04)
	struct UFont* BodyTextFont; // 0xd0(0x08)
	struct UFont* TitleTextFont; // 0xd8(0x08)
	float FontLineSpacing; // 0xe0(0x04)
	float FontScale; // 0xe4(0x04)
	struct FTreasureMapWidgetText BodyTextLayout; // 0xe8(0x3c)
	struct FTreasureMapWidgetText TitleTextLayout; // 0x124(0x3c)
	struct TArray<struct FTextEntryWithLayout> ExtraTextFields; // 0x160(0x10)
	TScriptInterface<struct UWieldableItemCanvasRenderingInterface> WieldableRenderingInterface; // 0x170(0x10)
	char UnknownData_180[0x40]; // 0x180(0x40)
};

// Class LostShipmentsClueVariants.AbandonedNoteWieldable
// Size: 0x820 (Inherited: 0x7e0)
struct AAbandonedNoteWieldable : ASkeletalMeshWieldableItem {
	char UnknownData_7E0[0x10]; // 0x7e0(0x10)
	struct UWieldableItemCanvasRenderingComponent* WieldableItemCanvasRenderingComponent; // 0x7f0(0x08)
	struct UAbandonedNoteWieldableRenderingComponent* AbandonedNoteRenderingComponent; // 0x7f8(0x08)
	struct UInventoryItemComponent* InventoryItemComponent; // 0x800(0x08)
	struct UUsableWieldableComponent* UsableWieldableComponent; // 0x808(0x08)
	char QuestMapIcon; // 0x810(0x01)
	char UnknownData_811[0xf]; // 0x811(0x0f)
};

// Class LostShipmentsClueVariants.BarrelsOfPlentyClueDestinationGenerator
// Size: 0x90 (Inherited: 0x90)
struct UBarrelsOfPlentyClueDestinationGenerator : UClueDestinationGenerator {
};

// Class LostShipmentsClueVariants.BarrelsOfPlentyClueSiteData
// Size: 0x70 (Inherited: 0x38)
struct UBarrelsOfPlentyClueSiteData : UClueSiteData {
	struct FVector SpawnLocation; // 0x38(0x0c)
	char UnknownData_44[0x2c]; // 0x44(0x2c)
};

// Class LostShipmentsClueVariants.BarrelsOfPlentyClueSiteType
// Size: 0x28 (Inherited: 0x28)
struct UBarrelsOfPlentyClueSiteType : UClueSiteType {
};

// Class LostShipmentsClueVariants.BarrelsOfPlentySeaClueCreator
// Size: 0x38 (Inherited: 0x30)
struct UBarrelsOfPlentySeaClueCreator : USeaClueCreator {
	int32_t LootItemSpawnXYDistanceFromClueIncrementMin; // 0x30(0x04)
	int32_t LootItemSpawnXYDistanceFromClueIncrementMax; // 0x34(0x04)
};

// Class LostShipmentsClueVariants.CircleMapClueDescriptor
// Size: 0x30 (Inherited: 0x28)
struct UCircleMapClueDescriptor : UClueDescriptor {
	struct UClueDestinationDescriptor* DestinationDescriptor; // 0x28(0x08)
};

// Class LostShipmentsClueVariants.CircleMapClueDescriptorGenerator
// Size: 0x40 (Inherited: 0x40)
struct UCircleMapClueDescriptorGenerator : UClueDescriptorGenerator {
};

// Class LostShipmentsClueVariants.CircleMapClueRenderDataSourceInterface
// Size: 0x28 (Inherited: 0x28)
struct UCircleMapClueRenderDataSourceInterface : UInterface {
};

// Class LostShipmentsClueVariants.CircleMapClueDestinationContainerComponent
// Size: 0x160 (Inherited: 0xc8)
struct UCircleMapClueDestinationContainerComponent : UActorComponent {
	char UnknownData_C8[0x10]; // 0xc8(0x10)
	struct UClass* MapMarkId; // 0xd8(0x08)
	float MapMarkArea; // 0xe0(0x04)
	float MapMarkScaleMin; // 0xe4(0x04)
	float MapMarkScaleMax; // 0xe8(0x04)
	float MapMarkNoiseModifier; // 0xec(0x04)
	char MapMarkBlendMode; // 0xf0(0x01)
	char UnknownData_F1[0x7]; // 0xf1(0x07)
	struct UClass* DebugCrossId; // 0xf8(0x08)
	bool ShowCluePositionOnMap; // 0x100(0x01)
	char UnknownData_101[0x7]; // 0x101(0x07)
	struct TArray<struct FMapTextureRenderData> ClueRenderData; // 0x108(0x10)
	char UnknownData_118[0x48]; // 0x118(0x48)
};

// Class LostShipmentsClueVariants.ClueSiteCircleMapWieldable
// Size: 0x8d0 (Inherited: 0x890)
struct AClueSiteCircleMapWieldable : ARenderToTextureMapBase {
	struct UTexture2D* InventoryRadialBackgroundTexture; // 0x890(0x20)
	struct FMapRadialIconData MapRadialIconData; // 0x8b0(0x18)
	char UnknownData_8C8[0x8]; // 0x8c8(0x08)

	void OnRep_MapRadialIconData(); // Function LostShipmentsClueVariants.ClueSiteCircleMapWieldable.OnRep_MapRadialIconData // Final|Native|Private // @ game+0x14e6770
};

// Class LostShipmentsClueVariants.ClueVariantsBlueprintFunctionLibrary
// Size: 0x28 (Inherited: 0x28)
struct UClueVariantsBlueprintFunctionLibrary : UBlueprintFunctionLibrary {

	void GiveClueDescriptorToItem(struct AItemInfo* ItemInfo, struct UClueDescriptor* Clue); // Function LostShipmentsClueVariants.ClueVariantsBlueprintFunctionLibrary.GiveClueDescriptorToItem // Final|Native|Static|Public|BlueprintCallable // @ game+0x14e6660
};

// Class LostShipmentsClueVariants.CompositeClueDestinationDescriptor
// Size: 0x50 (Inherited: 0x40)
struct UCompositeClueDestinationDescriptor : UClueDestinationDescriptor {
	struct UClueDestinationDescriptor* PrimaryClueDestDescriptor; // 0x40(0x08)
	struct UClueDestinationDescriptor* SecondaryClueDestDescriptor; // 0x48(0x08)

	void OnRep_DestinationInfo(); // Function LostShipmentsClueVariants.CompositeClueDestinationDescriptor.OnRep_DestinationInfo // Final|Native|Private // @ game+0x14e6750
};

// Class LostShipmentsClueVariants.EndOfGooseChaseClueDestinationDescriptor
// Size: 0x40 (Inherited: 0x40)
struct UEndOfGooseChaseClueDestinationDescriptor : UClueDestinationDescriptor {
};

// Class LostShipmentsClueVariants.ExistingToPhasedNPCIndexAssetMap
// Size: 0x38 (Inherited: 0x28)
struct UExistingToPhasedNPCIndexAssetMap : UDataAsset {
	struct TArray<struct FExistingNPCToPhasedNPC> NPCIndexMappings; // 0x28(0x10)
};

// Class LostShipmentsClueVariants.FloatingMessageInABottleClueDestinationGenerator
// Size: 0x90 (Inherited: 0x90)
struct UFloatingMessageInABottleClueDestinationGenerator : UClueDestinationGenerator {
};

// Class LostShipmentsClueVariants.FloatingMessageInABottleClueSiteData
// Size: 0x70 (Inherited: 0x38)
struct UFloatingMessageInABottleClueSiteData : UClueSiteData {
	struct FVector SpawnLocation; // 0x38(0x0c)
	char UnknownData_44[0x2c]; // 0x44(0x2c)
};

// Class LostShipmentsClueVariants.FloatingMessageInABottleClueSiteType
// Size: 0x28 (Inherited: 0x28)
struct UFloatingMessageInABottleClueSiteType : UClueSiteType {
};

// Class LostShipmentsClueVariants.FloatingMessageInABottleSeaClueCreator
// Size: 0x38 (Inherited: 0x30)
struct UFloatingMessageInABottleSeaClueCreator : USeaClueCreator {
	int32_t LootItemSpawnXYDistanceFromClueIncrementMin; // 0x30(0x04)
	int32_t LootItemSpawnXYDistanceFromClueIncrementMax; // 0x34(0x04)
};

// Class LostShipmentsClueVariants.GooseChaseClueBlueprintFunctionLibrary
// Size: 0x28 (Inherited: 0x28)
struct UGooseChaseClueBlueprintFunctionLibrary : UBlueprintFunctionLibrary {

	struct UClueDescriptor* CreateEndOfGooseChaseClue(); // Function LostShipmentsClueVariants.GooseChaseClueBlueprintFunctionLibrary.CreateEndOfGooseChaseClue // Final|Native|Static|Public|BlueprintCallable // @ game+0x14e6600
};

// Class LostShipmentsClueVariants.IslandByCompassBearingClueDestinationDescriptor
// Size: 0x48 (Inherited: 0x40)
struct UIslandByCompassBearingClueDestinationDescriptor : UClueDestinationDescriptor {
	char CompassDirection; // 0x40(0x01)
	char UnknownData_41[0x7]; // 0x41(0x07)
};

// Class LostShipmentsClueVariants.IslandByNameClueDestinationDescriptor
// Size: 0x48 (Inherited: 0x40)
struct UIslandByNameClueDestinationDescriptor : UClueDestinationDescriptor {
	struct FName IslandIdentifier; // 0x40(0x08)
};

// Class LostShipmentsClueVariants.IslandNameForNPCContextDestinationDescriptor
// Size: 0x48 (Inherited: 0x40)
struct UIslandNameForNPCContextDestinationDescriptor : UClueDestinationDescriptor {
	struct FName IslandIdentifier; // 0x40(0x08)
};

// Class LostShipmentsClueVariants.LocationOnIslandClueDestinationDescriptor
// Size: 0x58 (Inherited: 0x40)
struct ULocationOnIslandClueDestinationDescriptor : UClueDestinationDescriptor {
	struct FName IslandIdentifier; // 0x40(0x08)
	struct FVector WorldPosition; // 0x48(0x0c)
	char UnknownData_54[0x4]; // 0x54(0x04)
};

// Class LostShipmentsClueVariants.LostShipwreckClueDestinationDescriptor
// Size: 0x40 (Inherited: 0x40)
struct ULostShipwreckClueDestinationDescriptor : UClueDestinationDescriptor {
};

// Class LostShipmentsClueVariants.MerchantCaptainSpawnInterface
// Size: 0x28 (Inherited: 0x28)
struct UMerchantCaptainSpawnInterface : UInterface {
};

// Class LostShipmentsClueVariants.MerchantCaptainSpawnComponent
// Size: 0x450 (Inherited: 0x440)
struct UMerchantCaptainSpawnComponent : UItemSpawnComponent {
	char UnknownData_440[0x10]; // 0x440(0x10)
};

// Class LostShipmentsClueVariants.NPCHintDialogueClueCreator
// Size: 0x48 (Inherited: 0x30)
struct UNPCHintDialogueClueCreator : ULandClueCreator {
	struct UExistingToPhasedNPCIndexAssetMap* NPCMappingAsset; // 0x30(0x08)
	int32_t LootItemSpawnXYDistanceFromClueIncrementMin; // 0x38(0x04)
	int32_t LootItemSpawnXYDistanceFromClueIncrementMax; // 0x3c(0x04)
	int32_t LootItemSpawnZOffset; // 0x40(0x04)
	char UnknownData_44[0x4]; // 0x44(0x04)
};

// Class LostShipmentsClueVariants.NPCHintDialogueClueDestinationGenerator
// Size: 0x90 (Inherited: 0x90)
struct UNPCHintDialogueClueDestinationGenerator : UClueDestinationGenerator {
};

// Class LostShipmentsClueVariants.NPCHintDialogueClueSiteData
// Size: 0x120 (Inherited: 0x38)
struct UNPCHintDialogueClueSiteData : UClueSiteData {
	struct FNPCData NPCData; // 0x38(0xb8)
	char UnknownData_F0[0x30]; // 0xf0(0x30)
};

// Class LostShipmentsClueVariants.NPCHintDialogueClueSiteType
// Size: 0x28 (Inherited: 0x28)
struct UNPCHintDialogueClueSiteType : UClueSiteType {
};

// Class LostShipmentsClueVariants.ObtainClueOnWieldComponent
// Size: 0x160 (Inherited: 0x148)
struct UObtainClueOnWieldComponent : UOnItemWieldedComponent {
	char UnknownData_148[0x8]; // 0x148(0x08)
	struct UClueDescriptor* ClueToObtain; // 0x150(0x08)
	struct UClass* ClueSiteType; // 0x158(0x08)
};

// Class LostShipmentsClueVariants.ObtainClueFromContainerOnWieldComponent
// Size: 0x1e0 (Inherited: 0x160)
struct UObtainClueFromContainerOnWieldComponent : UObtainClueOnWieldComponent {
	char UnknownData_160[0x80]; // 0x160(0x80)
};

// Class LostShipmentsClueVariants.SeaLocationByGridSquareClueDestinationDescriptor
// Size: 0x50 (Inherited: 0x40)
struct USeaLocationByGridSquareClueDestinationDescriptor : UClueDestinationDescriptor {
	struct FVector SeaLocationIdentifier; // 0x40(0x0c)
	char UnknownData_4C[0x4]; // 0x4c(0x04)
};

// Class LostShipmentsClueVariants.ShipwreckClueBlueprintFunctionLibrary
// Size: 0x28 (Inherited: 0x28)
struct UShipwreckClueBlueprintFunctionLibrary : UBlueprintFunctionLibrary {

	struct UClueDescriptor* CreateCluePointingToShipwreck(struct UClueConnectionConfig* ConnectionConfiguration, int32_t Difficulty, struct TArray<struct UClass*> AllowedClueTypes, struct UTaleQuestSelectorService* SelectorService, struct FVector SourceLocation, struct AShipwreck* Shipwreck); // Function LostShipmentsClueVariants.ShipwreckClueBlueprintFunctionLibrary.CreateCluePointingToShipwreck // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x14e6400
};

// Class LostShipmentsClueVariants.ShipwreckClueDestinationDescriptor
// Size: 0x40 (Inherited: 0x40)
struct UShipwreckClueDestinationDescriptor : UClueDestinationDescriptor {
};

// Class LostShipmentsClueVariants.ShipwreckClueDestinationGenerator
// Size: 0x90 (Inherited: 0x90)
struct UShipwreckClueDestinationGenerator : UClueDestinationGenerator {
};

// Class LostShipmentsClueVariants.ShipwreckClueSiteType
// Size: 0x28 (Inherited: 0x28)
struct UShipwreckClueSiteType : UClueSiteType {
};

// Class LostShipmentsClueVariants.TaleQuestClueInventoryService
// Size: 0x288 (Inherited: 0x60)
struct UTaleQuestClueInventoryService : UTaleQuestService {
	char UnknownData_60[0x18]; // 0x60(0x18)
	struct TArray<struct UClueDescriptor*> ObtainedClues; // 0x78(0x10)
	char UnknownData_88[0x50]; // 0x88(0x50)
	struct TMap<struct UClueDescriptor*, struct AActor*> DiscovererMap; // 0xd8(0x50)
	char UnknownData_128[0x120]; // 0x128(0x120)
	struct FText TitleText; // 0x248(0x38)
	struct UAbandonedNoteClueTextChoiceSource* ClueTextChoiceSource; // 0x280(0x08)

	void SetClueTitleText(struct FText InTitleText); // Function LostShipmentsClueVariants.TaleQuestClueInventoryService.SetClueTitleText // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x14e6790
	int32_t GetCollectedClueCount(); // Function LostShipmentsClueVariants.TaleQuestClueInventoryService.GetCollectedClueCount // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x14e6630
};

// Class LostShipmentsClueVariants.TaleQuestClueInventoryServiceDesc
// Size: 0x68 (Inherited: 0x28)
struct UTaleQuestClueInventoryServiceDesc : UTaleQuestServiceDesc {
	struct UClass* AbandonedNoteItem; // 0x28(0x20)
	struct UClass* CircleMapItem; // 0x48(0x20)
};

// Class LostShipmentsClueVariants.TaleQuestGetNPCActorFromClueSiteStep
// Size: 0x98 (Inherited: 0x98)
struct UTaleQuestGetNPCActorFromClueSiteStep : UTaleQuestStep {
};

// Class LostShipmentsClueVariants.TaleQuestGetNPCActorFromClueSiteStepDesc
// Size: 0xe0 (Inherited: 0x80)
struct UTaleQuestGetNPCActorFromClueSiteStepDesc : UTaleQuestStepDesc {
	struct FQuestVariableClueSite ClueSite; // 0x80(0x30)
	struct FQuestVariableActor NPCFromClueSite; // 0xb0(0x30)
};

// Class LostShipmentsClueVariants.TaleQuestGetPhasedVersionOfActorFromAssetMapStep
// Size: 0xa0 (Inherited: 0x98)
struct UTaleQuestGetPhasedVersionOfActorFromAssetMapStep : UTaleQuestStep {
	struct UExistingToPhasedNPCIndexAssetMap* NPCIndexAssetMap; // 0x98(0x08)
};

// Class LostShipmentsClueVariants.TaleQuestGetPhasedVersionOfActorFromAssetMapStepDesc
// Size: 0x118 (Inherited: 0x80)
struct UTaleQuestGetPhasedVersionOfActorFromAssetMapStepDesc : UTaleQuestStepDesc {
	struct FQuestVariableActor ExistingNPCActor; // 0x80(0x30)
	struct FQuestVariableActorAssetType ObtainedPhasedNPCActorType; // 0xb0(0x30)
	struct FQuestVariableActor PhasingSourceActor; // 0xe0(0x30)
	struct UExistingToPhasedNPCIndexAssetMap* IndexAssetMap; // 0x110(0x08)
};

// Class LostShipmentsClueVariants.TaleQuestRetrieveSpawnedMerchantCaptainFromShipwreckStep
// Size: 0x98 (Inherited: 0x98)
struct UTaleQuestRetrieveSpawnedMerchantCaptainFromShipwreckStep : UTaleQuestStep {
};

// Class LostShipmentsClueVariants.TaleQuestRetrieveSpawnedMerchantCaptainFromShipwreckStepDesc
// Size: 0xe0 (Inherited: 0x80)
struct UTaleQuestRetrieveSpawnedMerchantCaptainFromShipwreckStepDesc : UTaleQuestStepDesc {
	struct FQuestVariableShipwreck ShipwreckSpawnedOn; // 0x80(0x30)
	struct FQuestVariableActor SpawnedMerchantCaptain; // 0xb0(0x30)
};

// Class LostShipmentsClueVariants.TaleQuestSpawnWashedUpMessageInABottleClueStep
// Size: 0x98 (Inherited: 0x98)
struct UTaleQuestSpawnWashedUpMessageInABottleClueStep : UTaleQuestStep {
};

// Class LostShipmentsClueVariants.TaleQuestSpawnWashedUpMessageInABottleClueStepDesc
// Size: 0x110 (Inherited: 0x80)
struct UTaleQuestSpawnWashedUpMessageInABottleClueStepDesc : UTaleQuestStepDesc {
	struct FQuestVariableClueSite ClueSite; // 0x80(0x30)
	struct FQuestVariableClueDescriptor ClueDescriptor; // 0xb0(0x30)
	struct FQuestVariableActor MessageInABottle; // 0xe0(0x30)
};

// Class LostShipmentsClueVariants.TaleQuestSpawnWashedUpSkeletonClueStep
// Size: 0x98 (Inherited: 0x98)
struct UTaleQuestSpawnWashedUpSkeletonClueStep : UTaleQuestStep {
};

// Class LostShipmentsClueVariants.TaleQuestSpawnWashedUpSkeletonClueStepDesc
// Size: 0x148 (Inherited: 0x80)
struct UTaleQuestSpawnWashedUpSkeletonClueStepDesc : UTaleQuestStepDesc {
	struct FQuestVariableClueSite ClueSite; // 0x80(0x30)
	struct FQuestVariableClueDescriptor ClueDescriptor; // 0xb0(0x30)
	struct FQuestVariableActor SkeletonActor; // 0xe0(0x30)
	struct FQuestVariableItemInfo ClueItem; // 0x110(0x30)
	struct FName SkeletonClueSocketName; // 0x140(0x08)
};

// Class LostShipmentsClueVariants.WaitForClueCollectedStep
// Size: 0x140 (Inherited: 0x98)
struct UWaitForClueCollectedStep : UTaleQuestStep {
	struct UClueDescriptor* ClueDesc; // 0x98(0x08)
	struct AActor* ClueActor; // 0xa0(0x08)
	char UnknownData_A8[0x98]; // 0xa8(0x98)
};

// Class LostShipmentsClueVariants.WaitForClueCollectedStepDesc
// Size: 0x110 (Inherited: 0x80)
struct UWaitForClueCollectedStepDesc : UTaleQuestStepDesc {
	struct FQuestVariableClueDescriptor Clue; // 0x80(0x30)
	struct FQuestVariableActor ClueActor; // 0xb0(0x30)
	struct FQuestVariableActor Discoverer; // 0xe0(0x30)
};

// Class LostShipmentsClueVariants.WashedUpMessageInABottleClueCreator
// Size: 0x80 (Inherited: 0x30)
struct UWashedUpMessageInABottleClueCreator : ULandClueCreator {
	struct UClass* MessageInABottleItem; // 0x30(0x20)
	int32_t LootItemSpawnXYDistanceFromClueIncrementMin; // 0x50(0x04)
	int32_t LootItemSpawnXYDistanceFromClueIncrementMax; // 0x54(0x04)
	int32_t LootItemSpawnZOffset; // 0x58(0x04)
	float LootItemSinkIntoSandZDistanceMin; // 0x5c(0x04)
	float LootItemSinkIntoSandZDistanceMax; // 0x60(0x04)
	float LootItemSinkIntoSandRotationMin; // 0x64(0x04)
	float LootItemSinkIntoSandRotationMax; // 0x68(0x04)
	char UnknownData_6C[0x4]; // 0x6c(0x04)
	struct TArray<struct UClass*> SinkIntoSandItems; // 0x70(0x10)
};

// Class LostShipmentsClueVariants.WashedUpMessageInABottleClueDestinationGenerator
// Size: 0x90 (Inherited: 0x90)
struct UWashedUpMessageInABottleClueDestinationGenerator : UClueDestinationGenerator {
};

// Class LostShipmentsClueVariants.WashedUpMessageInABottleClueSiteData
// Size: 0xe0 (Inherited: 0x38)
struct UWashedUpMessageInABottleClueSiteData : UClueSiteData {
	struct UClass* BottleItemType; // 0x38(0x08)
	struct FName IslandNameToSpawnOn; // 0x40(0x08)
	struct FGuid IslandSpawnLocationReservationId; // 0x48(0x10)
	char UnknownData_58[0x8]; // 0x58(0x08)
	struct FTransform SpawnTransform; // 0x60(0x30)
	struct TArray<struct UClass*> SinkIntoSandItems; // 0x90(0x10)
	char UnknownData_A0[0x40]; // 0xa0(0x40)
};

// Class LostShipmentsClueVariants.WashedUpMessageInABottleClueSiteType
// Size: 0x28 (Inherited: 0x28)
struct UWashedUpMessageInABottleClueSiteType : UClueSiteType {
};

// Class LostShipmentsClueVariants.WashedUpSkeletonClueDestinationGenerator
// Size: 0x90 (Inherited: 0x90)
struct UWashedUpSkeletonClueDestinationGenerator : UClueDestinationGenerator {
};

// Class LostShipmentsClueVariants.WashedUpSkeletonClueSiteData
// Size: 0xc0 (Inherited: 0x38)
struct UWashedUpSkeletonClueSiteData : UClueSiteData {
	struct UClass* SkeletonPoseType; // 0x38(0x08)
	struct UClass* ClueItemType; // 0x40(0x08)
	struct FName IslandNameToSpawnOn; // 0x48(0x08)
	struct FGuid IslandSpawnLocationReservationId; // 0x50(0x10)
	struct FTransform SpawnTransform; // 0x60(0x30)
	char UnknownData_90[0x30]; // 0x90(0x30)
};

// Class LostShipmentsClueVariants.WashedUpSkeletonClueSiteType
// Size: 0x28 (Inherited: 0x28)
struct UWashedUpSkeletonClueSiteType : UClueSiteType {
};

// Class LostShipmentsClueVariants.WashedUpSkeletonLandClueCreator
// Size: 0x70 (Inherited: 0x30)
struct UWashedUpSkeletonLandClueCreator : ULandClueCreator {
	struct TArray<struct UClass*> SkeletonPoses; // 0x30(0x10)
	struct UClass* ClueItemDesc; // 0x40(0x20)
	int32_t LootItemSpawnXYDistanceFromClueIncrementMin; // 0x60(0x04)
	int32_t LootItemSpawnXYDistanceFromClueIncrementMax; // 0x64(0x04)
	int32_t LootItemSpawnZOffset; // 0x68(0x04)
	char UnknownData_6C[0x4]; // 0x6c(0x04)
};

// Class LostShipmentsClueVariants.InteractableGrammaticalGenderComponent
// Size: 0xd8 (Inherited: 0xc8)
struct UInteractableGrammaticalGenderComponent : UActorComponent {
	char UnknownData_C8[0x8]; // 0xc8(0x08)
	char GrammaticalGender; // 0xd0(0x01)
	char UnknownData_D1[0x7]; // 0xd1(0x07)
};

