// Class ItemQuality.ItemQualityInterface
// Size: 0x28 (Inherited: 0x28)
struct UItemQualityInterface : UInterface {
};

// Class ItemQuality.ItemQualityComponent
// Size: 0x110 (Inherited: 0xc8)
struct UItemQualityComponent : UActorComponent {
	char UnknownData_C8[0x8]; // 0xc8(0x08)
	char ItemQualityLevel; // 0xd0(0x01)
	char UnknownData_D1[0x7]; // 0xd1(0x07)
	struct TArray<struct FPerComanyItemQualityEntry> CompanySpecificItemQualityLevels; // 0xd8(0x10)
	struct TArray<struct FPerComanyComplexItemQualityEntry> CompanySpecificComplexItemQualityLevels; // 0xe8(0x10)
	struct TArray<struct FPerComanyComplexItemQualityEntry> CompanySpecificComplexItemQualityLevelsHandin; // 0xf8(0x10)
	struct UGuildSettings* GuildSettings; // 0x108(0x08)
};

