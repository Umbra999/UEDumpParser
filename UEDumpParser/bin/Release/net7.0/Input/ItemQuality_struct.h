// Enum ItemQuality.EItemQualityQueryReason
enum class EItemQualityQueryReason : uint8_t {
	DontCare,
	ChangeOwnership,
	DropOnShip,
	HandIn,
	EItemQualityQueryReason_MAX,
};

// Enum ItemQuality.EEmissaryQualityLevel
enum class EEmissaryQualityLevel : uint8_t {
	Invalid,
	Level1,
	Level2,
	Level3,
	Level4,
	Level5,
	Level6,
	Level7,
	Level8,
	MAX,
	EEmissaryQualityLevel_MAX,
};

// Enum ItemQuality.EHealthIndex
enum class EHealthIndex : uint8_t {
	DontCare,
	Level1,
	Level2,
	Level3,
	Level4,
	Level5,
	Level6,
	Level7,
	MAX,
	EHealthIndex_MAX,
};

// Enum ItemQuality.EStatusType
enum class EStatusType : uint8_t {
	DontCare,
	Yes,
	No,
	EStatusType_MAX,
};

// ScriptStruct ItemQuality.PerComanyItemQualityEntry
// Size: 0x10 (Inherited: 0x00)
struct FPerComanyItemQualityEntry {
	struct UClass* Company; // 0x00(0x08)
	char Quality; // 0x08(0x01)
	char UnknownData_9[0x7]; // 0x09(0x07)
};

// ScriptStruct ItemQuality.PerComanyComplexItemQualityEntry
// Size: 0x18 (Inherited: 0x00)
struct FPerComanyComplexItemQualityEntry {
	struct UClass* Company; // 0x00(0x08)
	struct TArray<struct FComplexItemQualityEntry> QualityData; // 0x08(0x10)
};

// ScriptStruct ItemQuality.ComplexItemQualityEntry
// Size: 0x10 (Inherited: 0x00)
struct FComplexItemQualityEntry {
	char OnTime; // 0x00(0x01)
	char HealthLevel; // 0x01(0x01)
	char IsComissioned; // 0x02(0x01)
	char IsStolen; // 0x03(0x01)
	char QueryReason; // 0x04(0x01)
	char QualityLevel; // 0x05(0x01)
	char UnknownData_6[0x2]; // 0x06(0x02)
	struct FName Rarity; // 0x08(0x08)
};

