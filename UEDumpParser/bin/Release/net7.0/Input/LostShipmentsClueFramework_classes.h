// Class LostShipmentsClueFramework.ClueSiteData
// Size: 0x38 (Inherited: 0x28)
struct UClueSiteData : UObject {
	char DebrisTrackingType; // 0x28(0x01)
	char UnknownData_29[0xf]; // 0x29(0x0f)
};

// Class LostShipmentsClueFramework.ClueSiteType
// Size: 0x28 (Inherited: 0x28)
struct UClueSiteType : UObject {
};

// Class LostShipmentsClueFramework.LandClueCreator
// Size: 0x30 (Inherited: 0x28)
struct ULandClueCreator : UObject {
	char UnknownData_28[0x8]; // 0x28(0x08)
};

// Class LostShipmentsClueFramework.SeaClueCreator
// Size: 0x30 (Inherited: 0x28)
struct USeaClueCreator : UObject {
	char UnknownData_28[0x8]; // 0x28(0x08)
};

// Class LostShipmentsClueFramework.ClueChoiceSelectionStrategy
// Size: 0x28 (Inherited: 0x28)
struct UClueChoiceSelectionStrategy : UObject {
};

// Class LostShipmentsClueFramework.FixedClueChoiceSelectionStrategy
// Size: 0x30 (Inherited: 0x28)
struct UFixedClueChoiceSelectionStrategy : UClueChoiceSelectionStrategy {
	int32_t IndexToSelect; // 0x28(0x04)
	char UnknownData_2C[0x4]; // 0x2c(0x04)
};

// Class LostShipmentsClueFramework.RandomClueChoiceSelectionStrategy
// Size: 0x28 (Inherited: 0x28)
struct URandomClueChoiceSelectionStrategy : UClueChoiceSelectionStrategy {
};

// Class LostShipmentsClueFramework.ClueDestinationDescriptor
// Size: 0x40 (Inherited: 0x28)
struct UClueDestinationDescriptor : UObject {
	char UnknownData_28[0x18]; // 0x28(0x18)

	void OnRep_DestinationInfo(); // Function LostShipmentsClueFramework.ClueDestinationDescriptor.OnRep_DestinationInfo // Native|Public // @ game+0x14b0150
};

// Class LostShipmentsClueFramework.ClueDescriptor
// Size: 0x28 (Inherited: 0x28)
struct UClueDescriptor : UObject {
};

// Class LostShipmentsClueFramework.ClueConnectionBlueprintFunctionLibrary
// Size: 0x28 (Inherited: 0x28)
struct UClueConnectionBlueprintFunctionLibrary : UBlueprintFunctionLibrary {

	struct UClueDescriptor* CreateCluePointingToSite(struct UClueConnectionConfig* ConnectionConfiguration, int32_t Difficulty, struct TArray<struct UClass*> AllowedClueTypes, struct UTaleQuestSelectorService* SelectorService, struct FVector SourceLocation, struct FClueSite TargetSite); // Function LostShipmentsClueFramework.ClueConnectionBlueprintFunctionLibrary.CreateCluePointingToSite // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x14afdb0
};

// Class LostShipmentsClueFramework.ClueDescriptorGenerator
// Size: 0x40 (Inherited: 0x28)
struct UClueDescriptorGenerator : UObject {
	struct UClass* DescriptorType; // 0x28(0x08)
	struct TArray<struct UClass*> SupportedDestinationTypes; // 0x30(0x10)
};

// Class LostShipmentsClueFramework.ClueDestinationGenerator
// Size: 0x90 (Inherited: 0x28)
struct UClueDestinationGenerator : UObject {
	struct UClass* RequiredClueSiteDataType; // 0x28(0x08)
	struct TArray<struct FWeightedClueDestinationDescriptor> WeightedSupportedDescriptorTypes; // 0x30(0x10)
	char UnknownData_40[0x50]; // 0x40(0x50)
};

// Class LostShipmentsClueFramework.ClueConnectionConfig
// Size: 0x58 (Inherited: 0x28)
struct UClueConnectionConfig : UDataAsset {
	struct TArray<struct FClueSiteTypeSupportedDescribedByEntry> CluesThatCanDescribeSites; // 0x28(0x10)
	struct TArray<struct UClueDescriptorGenerator*> ClueGenerators; // 0x38(0x10)
	struct TArray<struct UClueDestinationGenerator*> DestinationGenerators; // 0x48(0x10)
};

// Class LostShipmentsClueFramework.ClueDescriptorContainerInterface
// Size: 0x28 (Inherited: 0x28)
struct UClueDescriptorContainerInterface : UInterface {
};

// Class LostShipmentsClueFramework.ClueDescriptorContainerComponent
// Size: 0xe0 (Inherited: 0xc8)
struct UClueDescriptorContainerComponent : UActorComponent {
	char UnknownData_C8[0x8]; // 0xc8(0x08)
	struct UClueDescriptor* CurrentClue; // 0xd0(0x08)
	bool HasClueBeenGiven; // 0xd8(0x01)
	char UnknownData_D9[0x7]; // 0xd9(0x07)
};

// Class LostShipmentsClueFramework.ClueFactoryConfig
// Size: 0x60 (Inherited: 0x28)
struct UClueFactoryConfig : UDataAsset {
	struct TArray<struct ULandClueCreator*> LandClueCreators; // 0x28(0x10)
	struct TArray<struct USeaClueCreator*> SeaClueCreators; // 0x38(0x10)
	struct UClueChoiceSelectionStrategy* ChoiceStrategy; // 0x48(0x08)
	struct TArray<struct FRestrictedClueType> RestrictedClueTypes; // 0x50(0x10)
};

// Class LostShipmentsClueFramework.ClueFactory
// Size: 0x30 (Inherited: 0x28)
struct UClueFactory : UObject {
	struct UClueFactoryConfig* Config; // 0x28(0x08)
};

// Class LostShipmentsClueFramework.ClueLifetimeBlueprintFunctionLibrary
// Size: 0x28 (Inherited: 0x28)
struct UClueLifetimeBlueprintFunctionLibrary : UBlueprintFunctionLibrary {

	void GiveClueToParticipant(struct AActor* Participant, struct UClueDescriptor* Clue, struct UClass* ClueSite); // Function LostShipmentsClueFramework.ClueLifetimeBlueprintFunctionLibrary.GiveClueToParticipant // Final|Native|Static|Public|BlueprintCallable // @ game+0x14b0060
};

// Class LostShipmentsClueFramework.ClueSiteLootRestrictionsDataAsset
// Size: 0x38 (Inherited: 0x28)
struct UClueSiteLootRestrictionsDataAsset : UDataAsset {
	struct TArray<struct FClueSiteLootRestriction> ClueSiteLootRestrictions; // 0x28(0x10)
};

// Class LostShipmentsClueFramework.DebrisForVoyageRankDescAsset
// Size: 0x38 (Inherited: 0x28)
struct UDebrisForVoyageRankDescAsset : UDataAsset {
	struct TArray<struct FDebrisToRangeDist> RankBasedDebrisDistribution; // 0x28(0x10)
};

// Class LostShipmentsClueFramework.EnvQueryTest_SeaClueSpawnLocation
// Size: 0x198 (Inherited: 0x170)
struct UEnvQueryTest_SeaClueSpawnLocation : UEnvQueryTest {
	float MinProjectionDistance; // 0x170(0x04)
	float MaxProjectionDistance; // 0x174(0x04)
	float ProjectionAngleInDegrees; // 0x178(0x04)
	float IslandProximitySafeThreshold; // 0x17c(0x04)
	struct UClass* ContextSourcePoint; // 0x180(0x08)
	struct UClass* ContextProjectionPoint; // 0x188(0x08)
	char UnknownData_190[0x8]; // 0x190(0x08)
};

// Class LostShipmentsClueFramework.LootForVoyageRankDescAsset
// Size: 0x38 (Inherited: 0x28)
struct ULootForVoyageRankDescAsset : UDataAsset {
	struct TArray<struct FLootToRangeDist> RankBasedLootDistribution; // 0x28(0x10)
};

// Class LostShipmentsClueFramework.NPCLootSpawnInterface
// Size: 0x28 (Inherited: 0x28)
struct UNPCLootSpawnInterface : UInterface {
};

// Class LostShipmentsClueFramework.NPCLootSpawnComponent
// Size: 0xe0 (Inherited: 0xc8)
struct UNPCLootSpawnComponent : UActorComponent {
	char UnknownData_C8[0x8]; // 0xc8(0x08)
	struct TArray<struct FVector> LootItemSpawnRelativeLocations; // 0xd0(0x10)
};

// Class LostShipmentsClueFramework.SeaClueSiteTypesDataAsset
// Size: 0x38 (Inherited: 0x28)
struct USeaClueSiteTypesDataAsset : UDataAsset {
	struct TArray<struct UClass*> ClueSiteTypes; // 0x28(0x10)
};

// Class LostShipmentsClueFramework.TaleQuestChooseLandOrSeaStep
// Size: 0x198 (Inherited: 0x98)
struct UTaleQuestChooseLandOrSeaStep : UTaleQuestStep {
	char UnknownData_98[0x18]; // 0x98(0x18)
	struct USeaClueSiteTypesDataAsset* SeaClueSiteTypes; // 0xb0(0x08)
	char UnknownData_B8[0xe0]; // 0xb8(0xe0)
};

// Class LostShipmentsClueFramework.TaleQuestClueSiteService
// Size: 0xd8 (Inherited: 0x60)
struct UTaleQuestClueSiteService : UTaleQuestService {
	struct UTaleQuestClueSiteServiceDesc* Desc; // 0x60(0x08)
	struct TArray<struct FClueSite> ClueSites; // 0x68(0x10)
	struct TMap<char, struct FClueSiteLootHistory> SpawnedLoot; // 0x78(0x50)
	struct TArray<struct FGuid> DebugClueSiteIds; // 0xc8(0x10)

	struct TArray<struct FClueSite> GetClueSites(); // Function LostShipmentsClueFramework.TaleQuestClueSiteService.GetClueSites // Final|Native|Public|BlueprintCallable // @ game+0x14affc0
};

// Class LostShipmentsClueFramework.TaleQuestClueSiteServiceDesc
// Size: 0x28 (Inherited: 0x28)
struct UTaleQuestClueSiteServiceDesc : UTaleQuestServiceDesc {
};

// Class LostShipmentsClueFramework.TaleQuestChooseLandOrSeaStepDesc
// Size: 0x160 (Inherited: 0x80)
struct UTaleQuestChooseLandOrSeaStepDesc : UTaleQuestStepDesc {
	struct USeaClueSiteTypesDataAsset* SeaClueSiteTypes; // 0x80(0x08)
	float ProjectionAngleInDegrees; // 0x88(0x04)
	float MinProjectionProportion; // 0x8c(0x04)
	float MaxProjectionProportion; // 0x90(0x04)
	float LandClueChanceWhenPreviousClueWasSea; // 0x94(0x04)
	float LandClueChanceWhenPreviousClueWasLand; // 0x98(0x04)
	char UnknownData_9C[0x4]; // 0x9c(0x04)
	struct FQuestVariableVector ProjectionPoint; // 0xa0(0x30)
	struct FQuestVariableTradeRouteData TradeRouteData; // 0xd0(0x30)
	struct FQuestVariableBool IsSeaLocation; // 0x100(0x30)
	struct FQuestVariableNameArray ValidIslandNames; // 0x130(0x30)
};

// Class LostShipmentsClueFramework.TaleQuestGenerateCluePointingToSiteStep
// Size: 0x158 (Inherited: 0x98)
struct UTaleQuestGenerateCluePointingToSiteStep : UTaleQuestStep {
	char UnknownData_98[0xc0]; // 0x98(0xc0)
};

// Class LostShipmentsClueFramework.TaleQuestGenerateCluePointingToSiteStepDesc
// Size: 0x158 (Inherited: 0x80)
struct UTaleQuestGenerateCluePointingToSiteStepDesc : UTaleQuestStepDesc {
	struct FQuestVariableInt Difficulty; // 0x80(0x30)
	struct FQuestVariableVector SourceLocation; // 0xb0(0x30)
	struct FQuestVariableClueSite TargetClueSite; // 0xe0(0x30)
	struct FQuestVariableClueDescriptor GeneratedClue; // 0x110(0x30)
	struct TArray<struct UClass*> AllowedClueTypes; // 0x140(0x10)
	struct UClueConnectionConfig* ConnectionConfiguration; // 0x150(0x08)
};

// Class LostShipmentsClueFramework.TaleQuestGenerateClueSiteAtSeaLocationStep
// Size: 0xf8 (Inherited: 0x98)
struct UTaleQuestGenerateClueSiteAtSeaLocationStep : UTaleQuestStep {
	char UnknownData_98[0x60]; // 0x98(0x60)
};

// Class LostShipmentsClueFramework.TaleQuestGenerateClueSiteAtSeaLocationStepDesc
// Size: 0xe8 (Inherited: 0x80)
struct UTaleQuestGenerateClueSiteAtSeaLocationStepDesc : UTaleQuestStepDesc {
	struct FQuestVariableVector ApproximateLocation; // 0x80(0x30)
	struct FQuestVariableClueSite ClueSite; // 0xb0(0x30)
	struct UClueFactoryConfig* ClueFactoryConfiguration; // 0xe0(0x08)
};

// Class LostShipmentsClueFramework.TaleQuestGenerateClueSiteOnIslandStep
// Size: 0xf8 (Inherited: 0x98)
struct UTaleQuestGenerateClueSiteOnIslandStep : UTaleQuestStep {
	char UnknownData_98[0x60]; // 0x98(0x60)
};

// Class LostShipmentsClueFramework.TaleQuestGenerateClueSiteOnIslandStepDesc
// Size: 0xe8 (Inherited: 0x80)
struct UTaleQuestGenerateClueSiteOnIslandStepDesc : UTaleQuestStepDesc {
	struct FQuestVariableName IslandName; // 0x80(0x30)
	struct FQuestVariableClueSite ClueSite; // 0xb0(0x30)
	struct UClueFactoryConfig* ClueGenerationConfiguration; // 0xe0(0x08)
};

// Class LostShipmentsClueFramework.TaleQuestGenerateDebrisTypeForVoyageRankStep
// Size: 0xf8 (Inherited: 0x98)
struct UTaleQuestGenerateDebrisTypeForVoyageRankStep : UTaleQuestStep {
	char UnknownData_98[0x60]; // 0x98(0x60)
};

// Class LostShipmentsClueFramework.TaleQuestGenerateDebrisTypeForVoyageRankStepDesc
// Size: 0xe8 (Inherited: 0x80)
struct UTaleQuestGenerateDebrisTypeForVoyageRankStepDesc : UTaleQuestStepDesc {
	struct FQuestVariableInt VoyageRank; // 0x80(0x30)
	struct FQuestVariableActorAssetTypeArray DebrisTypeArray; // 0xb0(0x30)
	struct UDebrisForVoyageRankDescAsset* DebrisForRankDescAsset; // 0xe0(0x08)
};

// Class LostShipmentsClueFramework.TaleQuestGenerateLootDescForVoyageRankStep
// Size: 0xf8 (Inherited: 0x98)
struct UTaleQuestGenerateLootDescForVoyageRankStep : UTaleQuestStep {
	char UnknownData_98[0x60]; // 0x98(0x60)
};

// Class LostShipmentsClueFramework.TaleQuestGenerateLootDescForVoyageRankStepDesc
// Size: 0xe8 (Inherited: 0x80)
struct UTaleQuestGenerateLootDescForVoyageRankStepDesc : UTaleQuestStepDesc {
	struct FQuestVariableInt VoyageRank; // 0x80(0x30)
	struct FQuestVariableItemDescTypeArray LootDescArray; // 0xb0(0x30)
	struct ULootForVoyageRankDescAsset* LootForRankDescAsset; // 0xe0(0x08)
};

// Class LostShipmentsClueFramework.TaleQuestIsClueOfTypeStep
// Size: 0x98 (Inherited: 0x98)
struct UTaleQuestIsClueOfTypeStep : UTaleQuestStep {
};

// Class LostShipmentsClueFramework.TaleQuestIsClueOfTypeStepDesc
// Size: 0xe8 (Inherited: 0x80)
struct UTaleQuestIsClueOfTypeStepDesc : UTaleQuestStepDesc {
	struct UClass* ClueSiteTypeToMatch; // 0x80(0x08)
	struct FQuestVariableClueSite ClueSite; // 0x88(0x30)
	struct FQuestVariableBool IsMatchingType; // 0xb8(0x30)
};

// Class LostShipmentsClueFramework.TaleQuestSelectClueSiteForLootStep
// Size: 0x100 (Inherited: 0x98)
struct UTaleQuestSelectClueSiteForLootStep : UTaleQuestStep {
	struct UTaleQuestSelectClueSiteForLootStepDesc* StepDesc; // 0x98(0x08)
	char UnknownData_A0[0x60]; // 0xa0(0x60)
};

// Class LostShipmentsClueFramework.TaleQuestSelectClueSiteForLootStepDesc
// Size: 0xf8 (Inherited: 0x80)
struct UTaleQuestSelectClueSiteForLootStepDesc : UTaleQuestStepDesc {
	struct UTaleQuestArrayEntrySelectionStrategy* SelectionStrategy; // 0x80(0x08)
	struct UClueSiteLootRestrictionsDataAsset* ClueSiteLootRestrictions; // 0x88(0x08)
	char LootType; // 0x90(0x01)
	char UnknownData_91[0x7]; // 0x91(0x07)
	struct FQuestVariableClueSite OutputClueSite; // 0x98(0x30)
	struct FQuestVariableBool MaxedAllClueSites; // 0xc8(0x30)
};

// Class LostShipmentsClueFramework.TaleQuestSpawnDebrisAtClueSiteStep
// Size: 0x140 (Inherited: 0x98)
struct UTaleQuestSpawnDebrisAtClueSiteStep : UTaleQuestStep {
	char UnknownData_98[0xa8]; // 0x98(0xa8)
};

// Class LostShipmentsClueFramework.TaleQuestSpawnDebrisAtClueSiteStepDesc
// Size: 0x110 (Inherited: 0x80)
struct UTaleQuestSpawnDebrisAtClueSiteStepDesc : UTaleQuestStepDesc {
	struct FQuestVariableClueSite ClueSiteVar; // 0x80(0x30)
	struct FQuestVariableActorAssetType DebrisTypeVar; // 0xb0(0x30)
	struct FQuestVariableActor OutDebrisActorVar; // 0xe0(0x30)
};

// Class LostShipmentsClueFramework.TaleQuestSpawnLootItemInClueSiteStep
// Size: 0x98 (Inherited: 0x98)
struct UTaleQuestSpawnLootItemInClueSiteStep : UTaleQuestStep {
};

// Class LostShipmentsClueFramework.TaleQuestSpawnLootItemInClueSiteStepDesc
// Size: 0x118 (Inherited: 0x80)
struct UTaleQuestSpawnLootItemInClueSiteStepDesc : UTaleQuestStepDesc {
	struct FQuestVariableClass LootItem; // 0x80(0x30)
	struct FQuestVariableClueSite ClueSite; // 0xb0(0x30)
	struct FQuestVariableItemInfo SpawnedLootItem; // 0xe0(0x30)
	bool Tracked; // 0x110(0x01)
	char UnknownData_111[0x7]; // 0x111(0x07)
};

// Class LostShipmentsClueFramework.TaleQuestStoreClueOnActorStep
// Size: 0x98 (Inherited: 0x98)
struct UTaleQuestStoreClueOnActorStep : UTaleQuestStep {
};

// Class LostShipmentsClueFramework.TaleQuestStoreClueOnActorStepDesc
// Size: 0x110 (Inherited: 0x80)
struct UTaleQuestStoreClueOnActorStepDesc : UTaleQuestStepDesc {
	struct FQuestVariableClueDescriptor ClueDescriptor; // 0x80(0x30)
	struct FQuestVariableActor Actor; // 0xb0(0x30)
	struct FQuestVariableActor ClueActor; // 0xe0(0x30)
};

// Class LostShipmentsClueFramework.TaleQuestUpdateBuoyancyAutoSinkSettingForItemStep
// Size: 0xd0 (Inherited: 0x98)
struct UTaleQuestUpdateBuoyancyAutoSinkSettingForItemStep : UTaleQuestStep {
	char UnknownData_98[0x38]; // 0x98(0x38)
};

// Class LostShipmentsClueFramework.TaleQuestUpdateBuoyancyAutoSinkSettingForItemStepDesc
// Size: 0xb8 (Inherited: 0x80)
struct UTaleQuestUpdateBuoyancyAutoSinkSettingForItemStepDesc : UTaleQuestStepDesc {
	struct FQuestVariableItemInfo Item; // 0x80(0x30)
	bool EnableAutoSink; // 0xb0(0x01)
	char UnknownData_B1[0x7]; // 0xb1(0x07)
};

// Class LostShipmentsClueFramework.WeightedDebrisDataAsset
// Size: 0x38 (Inherited: 0x28)
struct UWeightedDebrisDataAsset : UDataAsset {
	struct TArray<struct FWeightedDebris> Debris; // 0x28(0x10)
};

