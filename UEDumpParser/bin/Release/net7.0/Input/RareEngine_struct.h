// Enum RareEngine.EMemoryUsageVisualiserInstanceType
enum class EMemoryUsageVisualiserInstanceType : uint8_t {
	Server,
	Client,
	EMemoryUsageVisualiserInstanceType_MAX,
};

// Enum RareEngine.EMemoryGatheringMode
enum class EMemoryGatheringMode : uint8_t {
	Exclusive,
	Inclusive,
	EMemoryGatheringMode_MAX,
};

// Enum RareEngine.ETestEnum
enum class ETestEnum : uint8_t {
	Alpha,
	Beta,
	ETestEnum_MAX,
};

// ScriptStruct RareEngine.MemoryVisualiserCategory
// Size: 0x58 (Inherited: 0x00)
struct FMemoryVisualiserCategory {
	struct FString CategoryName; // 0x00(0x10)
	struct TArray<struct FMemoryVisualiserStat> CategoryStats; // 0x10(0x10)
	struct TArray<struct FMemoryVisualiserClass> CategoryClasses; // 0x20(0x10)
	bool CollectOnServer; // 0x30(0x01)
	char UnknownData_31[0x3]; // 0x31(0x03)
	float XboxOneBudgetMB; // 0x34(0x04)
	float XboxOneSBudgetMB; // 0x38(0x04)
	float XboxOneXBudgetMB; // 0x3c(0x04)
	float PCLowSpecBudgetMB; // 0x40(0x04)
	float PCMidSpecBudgetMB; // 0x44(0x04)
	float PCHighSpecBudgetMB; // 0x48(0x04)
	float PCUltraSpecBudgetMB; // 0x4c(0x04)
	float MemoryUsageMB; // 0x50(0x04)
	char UnknownData_54[0x4]; // 0x54(0x04)
};

// ScriptStruct RareEngine.MemoryVisualiserClass
// Size: 0x28 (Inherited: 0x00)
struct FMemoryVisualiserClass {
	struct UClass* ClassType; // 0x00(0x08)
	char MemoryGatheringMode; // 0x08(0x01)
	char UnknownData_9[0x7]; // 0x09(0x07)
	struct FString DisplayName; // 0x10(0x10)
	float MemoryUsageMB; // 0x20(0x04)
	char UnknownData_24[0x4]; // 0x24(0x04)
};

// ScriptStruct RareEngine.MemoryVisualiserStat
// Size: 0x20 (Inherited: 0x00)
struct FMemoryVisualiserStat {
	struct FName StatName; // 0x00(0x08)
	struct FString DisplayName; // 0x08(0x10)
	float MemoryUsageMB; // 0x18(0x04)
	char UnknownData_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct RareEngine.MemoryCommonData
// Size: 0x50 (Inherited: 0x00)
struct FMemoryCommonData {
	float mUsedPhysicalMB; // 0x00(0x04)
	float mUsedPhysicalPercentage; // 0x04(0x04)
	float mAvailablePhysicalMB; // 0x08(0x04)
	float mAvailablePhysicalPercentage; // 0x0c(0x04)
	float mOOMBackupPoolSize; // 0x10(0x04)
	float mExecutableSize; // 0x14(0x04)
	float mConfigCacheMemoryUsage; // 0x18(0x04)
	float mFNameTableMemoryUsage; // 0x1c(0x04)
	float mAssetRegistrySize; // 0x20(0x04)
	float mGCWorkingMemoryPoolSizeMB; // 0x24(0x04)
	float mGCAllocated; // 0x28(0x04)
	float mObjectsArraySizeMB; // 0x2c(0x04)
	int32_t mMaxObjectsAllowed; // 0x30(0x04)
	int32_t mNumPermanentObjects; // 0x34(0x04)
	int32_t mNumTransientObjects; // 0x38(0x04)
	int32_t mUnsetSlotCound; // 0x3c(0x04)
	uint32_t mClusterMemoryUsedBytes; // 0x40(0x04)
	int32_t mNumClusters; // 0x44(0x04)
	int32_t mNumClusteredObjects; // 0x48(0x04)
	int32_t mMaxClusterSize; // 0x4c(0x04)
};

// ScriptStruct RareEngine.StaticMeshComponentList
// Size: 0x10 (Inherited: 0x00)
struct FStaticMeshComponentList {
	struct TArray<struct UStaticMeshComponent*> Components; // 0x00(0x10)
};

// ScriptStruct RareEngine.StaticMeshActorList
// Size: 0x10 (Inherited: 0x00)
struct FStaticMeshActorList {
	struct TArray<struct AStaticMeshActor*> Actors; // 0x00(0x10)
};

