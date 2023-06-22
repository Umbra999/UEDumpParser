// Enum TradeRouteFramework.ETradeRouteMapOrientation
enum class ETradeRouteMapOrientation : uint8_t {
	Landscape,
	Portrait,
	ETradeRouteMapOrientation_MAX,
};

// ScriptStruct TradeRouteFramework.QuestVariableTradeRouteData
// Size: 0x30 (Inherited: 0x30)
struct FQuestVariableTradeRouteData : FQuestVariable {
};

// ScriptStruct TradeRouteFramework.TradeRouteMapping
// Size: 0x20 (Inherited: 0x00)
struct FTradeRouteMapping {
	struct FIslandSelectionType StartIsland; // 0x00(0x08)
	struct UClass* DifficultyBand; // 0x08(0x08)
	struct FStringAssetReference TradeRouteReference; // 0x10(0x10)
};

