// Enum LostShipmentsClueFramework.EClueSiteLootType
enum class EClueSiteLootType : uint8_t {
	Loot,
	Debris,
	None,
	EClueSiteLootType_MAX,
};

// ScriptStruct LostShipmentsClueFramework.ClueSite
// Size: 0x20 (Inherited: 0x00)
struct FClueSite {
	struct UClass* SiteType; // 0x00(0x08)
	struct UClueSiteData* SiteData; // 0x08(0x08)
	struct FVector Location; // 0x10(0x0c)
	char UnknownData_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct LostShipmentsClueFramework.LandClueCreationChoice
// Size: 0x18 (Inherited: 0x00)
struct FLandClueCreationChoice {
	struct UClass* ClueSiteType; // 0x00(0x08)
	struct FName IslandIdentifier; // 0x08(0x08)
	struct ULandClueCreator* ClueCreator; // 0x10(0x08)
};

// ScriptStruct LostShipmentsClueFramework.SeaClueCreationChoice
// Size: 0x20 (Inherited: 0x00)
struct FSeaClueCreationChoice {
	struct UClass* SiteType; // 0x00(0x08)
	struct USeaClueCreator* ClueCreator; // 0x08(0x08)
	char UnknownData_10[0x10]; // 0x10(0x10)
};

// ScriptStruct LostShipmentsClueFramework.WeightedClueDestinationDescriptor
// Size: 0x18 (Inherited: 0x00)
struct FWeightedClueDestinationDescriptor {
	struct UClass* DestinationType; // 0x00(0x08)
	struct TArray<float> DifficultyWeightings; // 0x08(0x10)
};

// ScriptStruct LostShipmentsClueFramework.ClueSiteTypeSupportedDescribedByEntry
// Size: 0x18 (Inherited: 0x00)
struct FClueSiteTypeSupportedDescribedByEntry {
	struct UClass* SiteType; // 0x00(0x08)
	struct TArray<struct FWeightedClueDescriptor> SupportedDescriptors; // 0x08(0x10)
};

// ScriptStruct LostShipmentsClueFramework.WeightedClueDescriptor
// Size: 0x18 (Inherited: 0x00)
struct FWeightedClueDescriptor {
	struct UClass* Descriptor; // 0x00(0x08)
	struct TArray<float> DifficultyWeightings; // 0x08(0x10)
};

// ScriptStruct LostShipmentsClueFramework.RestrictedClueType
// Size: 0x10 (Inherited: 0x00)
struct FRestrictedClueType {
	struct UClass* Type; // 0x00(0x08)
	int32_t Max; // 0x08(0x04)
	char UnknownData_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct LostShipmentsClueFramework.ClueSiteLootRestriction
// Size: 0x10 (Inherited: 0x00)
struct FClueSiteLootRestriction {
	struct UClass* SiteType; // 0x00(0x08)
	int32_t LootMax; // 0x08(0x04)
	char UnknownData_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct LostShipmentsClueFramework.DebrisToRangeDist
// Size: 0x28 (Inherited: 0x00)
struct FDebrisToRangeDist {
	struct FWeightedProbabilityRange NumberOfDebrisItemsToSpawn; // 0x00(0x20)
	struct UWeightedDebrisDataAsset* WeightedDebrisTypeAsset; // 0x20(0x08)
};

// ScriptStruct LostShipmentsClueFramework.LootToRangeDist
// Size: 0x28 (Inherited: 0x00)
struct FLootToRangeDist {
	struct FWeightedProbabilityRange NumberOfLootItemsToSpawn; // 0x00(0x20)
	struct UWeightedTreasureChestDescAsset* WeightedLootDescAsset; // 0x20(0x08)
};

// ScriptStruct LostShipmentsClueFramework.QuestVariableClueSiteArray
// Size: 0x30 (Inherited: 0x30)
struct FQuestVariableClueSiteArray : FQuestVariable {
};

// ScriptStruct LostShipmentsClueFramework.QuestVariableClueSite
// Size: 0x30 (Inherited: 0x30)
struct FQuestVariableClueSite : FQuestVariable {
};

// ScriptStruct LostShipmentsClueFramework.ClueSiteLootHistory
// Size: 0x10 (Inherited: 0x00)
struct FClueSiteLootHistory {
	struct TArray<struct FLootSpawnedAtClueSite> History; // 0x00(0x10)
};

// ScriptStruct LostShipmentsClueFramework.LootSpawnedAtClueSite
// Size: 0x18 (Inherited: 0x00)
struct FLootSpawnedAtClueSite {
	struct UClass* SiteType; // 0x00(0x08)
	struct FVector SiteLocation; // 0x08(0x0c)
	int32_t NumLoot; // 0x14(0x04)
};

// ScriptStruct LostShipmentsClueFramework.QuestVariableClueDescriptor
// Size: 0x30 (Inherited: 0x30)
struct FQuestVariableClueDescriptor : FQuestVariable {
};

// ScriptStruct LostShipmentsClueFramework.WeightedDebris
// Size: 0x28 (Inherited: 0x00)
struct FWeightedDebris {
	struct UClass* DebrisClass; // 0x00(0x20)
	float Weight; // 0x20(0x04)
	char UnknownData_24[0x4]; // 0x24(0x04)
};

// ScriptStruct LostShipmentsClueFramework.EventClueObtained
// Size: 0x20 (Inherited: 0x00)
struct FEventClueObtained {
	struct UClueDescriptor* ObtainedClue; // 0x00(0x08)
	struct UClass* ObtainedSiteType; // 0x08(0x08)
	char UnknownData_10[0x10]; // 0x10(0x10)
};

