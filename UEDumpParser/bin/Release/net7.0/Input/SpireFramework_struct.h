// Enum SpireFramework.EDirectionOfMovement
enum class EDirectionOfMovement : uint8_t {
	None,
	Rising,
	Lowering,
	EDirectionOfMovement_MAX,
};

// ScriptStruct SpireFramework.ServerSpireInfo
// Size: 0x68 (Inherited: 0x00)
struct FServerSpireInfo {
	int32_t LevelId; // 0x00(0x04)
	struct FVector Location; // 0x04(0x0c)
	struct AActor* SpireActor; // 0x10(0x08)
	struct TMap<struct FString, struct FName> InstancedLevelPaths; // 0x18(0x50)
};

// ScriptStruct SpireFramework.SpireInfo
// Size: 0x08 (Inherited: 0x00)
struct FSpireInfo {
	int32_t LevelId; // 0x00(0x04)
	bool ShouldBeLoaded; // 0x04(0x01)
	bool ShouldBeVisible; // 0x05(0x01)
	char UnknownData_6[0x2]; // 0x06(0x02)
};

// ScriptStruct SpireFramework.SpireEntry
// Size: 0x14 (Inherited: 0x00)
struct FSpireEntry {
	struct FVector Location; // 0x00(0x0c)
	struct FName IslandName; // 0x0c(0x08)
};

