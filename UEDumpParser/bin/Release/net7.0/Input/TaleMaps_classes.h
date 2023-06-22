// Class TaleMaps.AddMarkToTornMapStep
// Size: 0xc0 (Inherited: 0x98)
struct UAddMarkToTornMapStep : UTaleQuestStep {
	char UnknownData_98[0x20]; // 0x98(0x20)
	struct UClass* MapMark; // 0xb8(0x08)
};

// Class TaleMaps.AddMarkToTornMapStepDescBase
// Size: 0xe0 (Inherited: 0x80)
struct UAddMarkToTornMapStepDescBase : UTaleQuestStepDesc {
	struct FQuestVariableGuid MapId; // 0x80(0x30)
	struct FTaleQuestVariableMapMarkType MapMark; // 0xb0(0x30)
};

// Class TaleMaps.AddMarkToTornMapAtLocationStepDesc
// Size: 0x110 (Inherited: 0xe0)
struct UAddMarkToTornMapAtLocationStepDesc : UAddMarkToTornMapStepDescBase {
	struct FQuestVariableVector MarkLocation; // 0xe0(0x30)
};

// Class TaleMaps.AddMarkToTornMapAtActorLocationStepDesc
// Size: 0x110 (Inherited: 0xe0)
struct UAddMarkToTornMapAtActorLocationStepDesc : UAddMarkToTornMapStepDescBase {
	struct FQuestVariableActor MarkLocation; // 0xe0(0x30)
};

// Class TaleMaps.GetNumberOfCollectedTornMapPiecesStep
// Size: 0xd8 (Inherited: 0x98)
struct UGetNumberOfCollectedTornMapPiecesStep : UTaleQuestStep {
	char UnknownData_98[0x40]; // 0x98(0x40)
};

// Class TaleMaps.GetNumberOfCollectedTornMapPiecesStepDesc
// Size: 0xe0 (Inherited: 0x80)
struct UGetNumberOfCollectedTornMapPiecesStepDesc : UTaleQuestStepDesc {
	struct FQuestVariableGuid MapId; // 0x80(0x30)
	struct FQuestVariableInt NumPieces; // 0xb0(0x30)
};

// Class TaleMaps.RegionIslandSelectionStrategyBase
// Size: 0x28 (Inherited: 0x28)
struct URegionIslandSelectionStrategyBase : UObject {
};

// Class TaleMaps.RegionIslandFilteredSelectionStrategy
// Size: 0x40 (Inherited: 0x28)
struct URegionIslandFilteredSelectionStrategy : URegionIslandSelectionStrategyBase {
	struct TArray<char> IslandTypes; // 0x28(0x10)
	bool UseMaxDistance; // 0x38(0x01)
	char UnknownData_39[0x3]; // 0x39(0x03)
	float MaxDistanceFromStartingIsland; // 0x3c(0x04)
};

// Class TaleMaps.RegionIslandRandomSelectionStrategy
// Size: 0x28 (Inherited: 0x28)
struct URegionIslandRandomSelectionStrategy : URegionIslandSelectionStrategyBase {
};

// Class TaleMaps.SelectIslandsFromRegionStep
// Size: 0xf8 (Inherited: 0x98)
struct USelectIslandsFromRegionStep : UTaleQuestStep {
	struct URegionMapDataAsset* RegionData; // 0x98(0x08)
	struct URegionIslandSelectionStrategyBase* SelectionStrategy; // 0xa0(0x08)
	char UnknownData_A8[0x50]; // 0xa8(0x50)
};

// Class TaleMaps.SelectIslandsFromRegionStepDesc
// Size: 0x150 (Inherited: 0x80)
struct USelectIslandsFromRegionStepDesc : UTaleQuestStepDesc {
	struct FQuestVariableDataAsset Region; // 0x80(0x30)
	struct FQuestVariableInt NumIslands; // 0xb0(0x30)
	struct FQuestVariableInt MaxDifferentIslands; // 0xe0(0x30)
	struct FQuestVariableNameArray SelectedIslands; // 0x110(0x30)
	struct URegionIslandSelectionStrategyBase* SelectionStrategy; // 0x140(0x08)
	int32_t DefaultNumIslands; // 0x148(0x04)
	int32_t DefaultMaxDifferentIslands; // 0x14c(0x04)
};

// Class TaleMaps.TaleQuestAddLocationMapStep
// Size: 0x158 (Inherited: 0x98)
struct UTaleQuestAddLocationMapStep : UTaleQuestStep {
	char UnknownData_98[0xc0]; // 0x98(0xc0)
};

// Class TaleMaps.TaleQuestAddTornMapStep
// Size: 0x170 (Inherited: 0x98)
struct UTaleQuestAddTornMapStep : UTaleQuestStep {
	char UnknownData_98[0xd8]; // 0x98(0xd8)
};

// Class TaleMaps.TaleQuestAddTradeRouteMapStep
// Size: 0x128 (Inherited: 0x98)
struct UTaleQuestAddTradeRouteMapStep : UTaleQuestStep {
	char UnknownData_98[0x90]; // 0x98(0x90)
};

// Class TaleMaps.TaleQuestCustomMapFunctionLibrary
// Size: 0x198 (Inherited: 0x180)
struct UTaleQuestCustomMapFunctionLibrary : UTaleQuestFunctionStepLibrary {
	char UnknownData_180[0x18]; // 0x180(0x18)

	void UpdateStrikeThoughTextElement(struct FGuid MapGuid, struct FGuid ElementGuid, bool StrikeThroughEnabled); // Function TaleMaps.TaleQuestCustomMapFunctionLibrary.UpdateStrikeThoughTextElement // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x47fb070
	void AddCustomMap(struct UCustomMapData* Data, struct FGuid MapGuid); // Function TaleMaps.TaleQuestCustomMapFunctionLibrary.AddCustomMap // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x47faa90
};

// Class TaleMaps.TaleQuestLocationMapChestFoundStep
// Size: 0xa0 (Inherited: 0x98)
struct UTaleQuestLocationMapChestFoundStep : UTaleQuestStep {
	char UnknownData_98[0x8]; // 0x98(0x08)
};

// Class TaleMaps.TaleQuestMapStepDescBase
// Size: 0x80 (Inherited: 0x80)
struct UTaleQuestMapStepDescBase : UTaleQuestStepDesc {
};

// Class TaleMaps.TaleQuestAddLocationMapStepDesc
// Size: 0x148 (Inherited: 0x80)
struct UTaleQuestAddLocationMapStepDesc : UTaleQuestMapStepDescBase {
	struct FName MapId; // 0x80(0x08)
	struct FQuestVariableInt NumberOfChests; // 0x88(0x30)
	struct FQuestVariableDataAsset RegionMapData; // 0xb8(0x30)
	struct FQuestVariableDataAsset VaultData; // 0xe8(0x30)
	struct FQuestVariableDataAsset MapParams; // 0x118(0x30)
};

// Class TaleMaps.TaleQuestAddTornMapStepDesc
// Size: 0x140 (Inherited: 0x80)
struct UTaleQuestAddTornMapStepDesc : UTaleQuestMapStepDescBase {
	struct FQuestVariableName IslandName; // 0x80(0x30)
	struct FQuestVariableInt NumberOfPieces; // 0xb0(0x30)
	struct FQuestVariableDataAsset MapParams; // 0xe0(0x30)
	struct FQuestVariableGuid MapId; // 0x110(0x30)
};

// Class TaleMaps.TaleQuestAddTradeRouteMapStepDesc
// Size: 0x118 (Inherited: 0x80)
struct UTaleQuestAddTradeRouteMapStepDesc : UTaleQuestMapStepDescBase {
	struct FQuestVariableDataAsset TradeRouteData; // 0x80(0x30)
	struct FQuestVariableText VesselName; // 0xb0(0x30)
	struct FQuestVariableGuid MapId; // 0xe0(0x30)
	struct UClueSiteTypeToMapMarkIdDataAsset* ClueSiteToMapMarkIdMap; // 0x110(0x08)
};

// Class TaleMaps.TaleQuestLocationMapChestFoundStepDesc
// Size: 0x88 (Inherited: 0x80)
struct UTaleQuestLocationMapChestFoundStepDesc : UTaleQuestMapStepDescBase {
	struct FName MapId; // 0x80(0x08)
};

// Class TaleMaps.TaleQuestWaitForChecklistMapCompletionStep
// Size: 0xa0 (Inherited: 0x98)
struct UTaleQuestWaitForChecklistMapCompletionStep : UTaleQuestStep {
	char UnknownData_98[0x8]; // 0x98(0x08)
};

// Class TaleMaps.TaleQuestTornMapFunctionLibrary
// Size: 0x180 (Inherited: 0x180)
struct UTaleQuestTornMapFunctionLibrary : UTaleQuestFunctionStepLibrary {

	void AddTornMap(struct FName IslandName, int32_t NumPieces, struct UTornMapParams* MapParams, float MaskRotation, struct FGuid OutMapId); // Function TaleMaps.TaleQuestTornMapFunctionLibrary.AddTornMap // Final|Native|Public|HasOutParms|HasDefaults|Const // @ game+0x47fabc0
};

// Class TaleMaps.TaleQuestTriggerNamedChecklistEventStep
// Size: 0x98 (Inherited: 0x98)
struct UTaleQuestTriggerNamedChecklistEventStep : UTaleQuestStep {
};

// Class TaleMaps.TaleQuestTriggerNamedChecklistEventStepDesc
// Size: 0x88 (Inherited: 0x80)
struct UTaleQuestTriggerNamedChecklistEventStepDesc : UTaleQuestStepDesc {
	struct FName Event; // 0x80(0x08)

	struct TArray<struct FString> EventsSource(); // Function TaleMaps.TaleQuestTriggerNamedChecklistEventStepDesc.EventsSource // Final|Native|Private|Const // @ game+0x47fae00
};

