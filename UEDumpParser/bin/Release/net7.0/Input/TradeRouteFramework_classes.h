// Class TradeRouteFramework.TradeRouteDifficultyBand
// Size: 0x30 (Inherited: 0x28)
struct UTradeRouteDifficultyBand : UObject {
	int32_t MinimumRank; // 0x28(0x04)
	char UnknownData_2C[0x4]; // 0x2c(0x04)
};

// Class TradeRouteFramework.TradeRouteData
// Size: 0xc0 (Inherited: 0x28)
struct UTradeRouteData : UDataAsset {
	struct FIslandSelectionType StartIsland; // 0x28(0x08)
	struct FIslandSelectionType EndIsland; // 0x30(0x08)
	struct FPlayerStat RouteCompletionStat; // 0x38(0x04)
	char MapOrientation; // 0x3c(0x01)
	char UnknownData_3D[0x3]; // 0x3d(0x03)
	struct FTradeRouteMapData TradeRouteMapData; // 0x40(0x80)
};

// Class TradeRouteFramework.TaleQuestGetProjectionPointOnTradeRouteStep
// Size: 0x130 (Inherited: 0x98)
struct UTaleQuestGetProjectionPointOnTradeRouteStep : UTaleQuestStep {
	char UnknownData_98[0x98]; // 0x98(0x98)
};

// Class TradeRouteFramework.TaleQuestGetProjectionPointOnTradeRouteStepDesc
// Size: 0x118 (Inherited: 0x80)
struct UTaleQuestGetProjectionPointOnTradeRouteStepDesc : UTaleQuestStepDesc {
	float ProjectionProportion; // 0x80(0x04)
	char UnknownData_84[0x4]; // 0x84(0x04)
	struct FQuestVariableVector SourcePoint; // 0x88(0x30)
	struct FQuestVariableTradeRouteData TradeRouteData; // 0xb8(0x30)
	struct FQuestVariableVector ProjectedPoint; // 0xe8(0x30)
};

// Class TradeRouteFramework.TaleQuestSelectTradeRouteStep
// Size: 0xb8 (Inherited: 0x98)
struct UTaleQuestSelectTradeRouteStep : UTaleQuestStep {
	struct UTaleQuestSelectTradeRouteStepDesc* Desc; // 0x98(0x08)
	char UnknownData_A0[0x18]; // 0xa0(0x18)
};

// Class TradeRouteFramework.TaleQuestSelectTradeRouteStepDesc
// Size: 0x148 (Inherited: 0x80)
struct UTaleQuestSelectTradeRouteStepDesc : UTaleQuestStepDesc {
	int32_t NumSelectFromClosestIslands; // 0x80(0x04)
	char UnknownData_84[0x4]; // 0x84(0x04)
	struct FQuestVariableVector SelectionOriginPointVar; // 0x88(0x30)
	struct FQuestVariableInt TradeRouteDifficulty; // 0xb8(0x30)
	struct FQuestVariableTradeRouteData TradeRoute; // 0xe8(0x30)
	struct FQuestVariableTaleResourceHandle AllocatedTradeRouteHandleVar; // 0x118(0x30)
};

// Class TradeRouteFramework.TradeRoutesDataAsset
// Size: 0x38 (Inherited: 0x28)
struct UTradeRoutesDataAsset : UDataAsset {
	struct TArray<struct FTradeRouteMapping> TradeRouteMappings; // 0x28(0x10)
};

// Class TradeRouteFramework.WorldTradeRouteInterface
// Size: 0x28 (Inherited: 0x28)
struct UWorldTradeRouteInterface : UInterface {
};

