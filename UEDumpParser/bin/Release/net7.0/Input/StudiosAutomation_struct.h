// Enum StudiosAutomation.EComparisonMethod
enum class EComparisonMethod : uint8_t {
	Equal_To,
	Not_Equal_To,
	Greater_Than_Or_Equal_To,
	Less_Than_Or_Equal_To,
	Greater_Than,
	Less_Than,
	EComparisonMethod_MAX,
};

// Enum StudiosAutomation.ETestAutomationPlayModeOverride
enum class ETestAutomationPlayModeOverride : uint8_t {
	Adventure,
	Contest,
	Tutorial,
	NotSelectedYet,
	ETestAutomationPlayModeOverride_MAX,
};

// Enum StudiosAutomation.EPerformanceCaptureType
enum class EPerformanceCaptureType : uint8_t {
	None,
	FrameTime,
	StreamingMemory,
	StreamingPositional,
	EPerformanceCaptureType_MAX,
};

// Enum StudiosAutomation.ETestArea
enum class ETestArea : uint8_t {
	None,
	Rendering,
	UserInterface,
	UserInterfaceInitialization,
	Art,
	Audio,
	AI,
	ETestArea_MAX,
};

// Enum StudiosAutomation.ETestCategory
enum class ETestCategory : uint8_t {
	Unit,
	Integration,
	Acceptance,
	Stress,
	Soak,
	Performance,
	ETestCategory_MAX,
};

// Enum StudiosAutomation.ETextureAuditorMipSetting
enum class ETextureAuditorMipSetting : uint8_t {
	MipGenRequired,
	NoMipGenRequired,
	MipGenOptional,
	ETextureAuditorMipSetting_MAX,
};

// Enum StudiosAutomation.ECollectionAuditType
enum class ECollectionAuditType : uint8_t {
	NoneSet,
	UseParentType,
	Totals,
	MeshLimits,
	AnimSequenceLimits,
	PhysicsAudits,
	ExceptionList,
	WIP,
	ECollectionAuditType_MAX,
};

// ScriptStruct StudiosAutomation.TestLevelMetadataEntry
// Size: 0x20 (Inherited: 0x00)
struct FTestLevelMetadataEntry {
	struct FString Property; // 0x00(0x10)
	struct FString Value; // 0x10(0x10)
};

// ScriptStruct StudiosAutomation.ClientPawnDetails
// Size: 0x10 (Inherited: 0x00)
struct FClientPawnDetails {
	struct TArray<struct APawn*> Pawns; // 0x00(0x10)
};

// ScriptStruct StudiosAutomation.TextureAuditorGroupProperties
// Size: 0x28 (Inherited: 0x00)
struct FTextureAuditorGroupProperties {
	char TextureGroup; // 0x00(0x01)
	char UnknownData_1[0x7]; // 0x01(0x07)
	struct FTextureAuditorProperties Properties; // 0x08(0x20)
};

// ScriptStruct StudiosAutomation.TextureAuditorProperties
// Size: 0x20 (Inherited: 0x00)
struct FTextureAuditorProperties {
	char RequiredMipsSetting; // 0x00(0x01)
	char UnknownData_1[0x7]; // 0x01(0x07)
	struct TArray<char> AllowedTextureFormats; // 0x08(0x10)
	uint32_t MinSizeToValidateFormatX; // 0x18(0x04)
	uint32_t MinSizeToValidateFormatY; // 0x1c(0x04)
};

// ScriptStruct StudiosAutomation.MeshAuditLimits
// Size: 0x38 (Inherited: 0x00)
struct FMeshAuditLimits {
	struct TArray<struct FSubstringAuditQueryData> SubstringQueries; // 0x00(0x10)
	struct FFolderTotals FolderMeshLimits; // 0x10(0x28)
};

// ScriptStruct StudiosAutomation.FolderTotals
// Size: 0x28 (Inherited: 0x00)
struct FFolderTotals {
	bool EnforceCollectionMembership; // 0x00(0x01)
	char UnknownData_1[0x7]; // 0x01(0x07)
	struct TArray<struct FName> CollectionsAllowedForFolder; // 0x08(0x10)
	struct TArray<struct FName> AssetTypesToTest; // 0x18(0x10)
};

// ScriptStruct StudiosAutomation.SubstringAuditQueryData
// Size: 0x18 (Inherited: 0x00)
struct FSubstringAuditQueryData {
	struct TArray<struct FString> QueryStringArray; // 0x00(0x10)
	int32_t SearchSetSize; // 0x10(0x04)
	int32_t MemoryLimitForSet; // 0x14(0x04)
};

// ScriptStruct StudiosAutomation.AssetAuditConstants
// Size: 0x10 (Inherited: 0x00)
struct FAssetAuditConstants {
	struct TArray<struct FAssetAuditConstantEntry> AssetAuditConstants; // 0x00(0x10)
};

// ScriptStruct StudiosAutomation.AssetAuditConstantEntry
// Size: 0x18 (Inherited: 0x00)
struct FAssetAuditConstantEntry {
	struct FString Name; // 0x00(0x10)
	int32_t Value; // 0x10(0x04)
	char UnknownData_14[0x4]; // 0x14(0x04)
};

// ScriptStruct StudiosAutomation.CollectionLimits
// Size: 0x34 (Inherited: 0x00)
struct FCollectionLimits {
	struct FName CollectionName; // 0x00(0x08)
	char AuditType; // 0x08(0x01)
	bool IsOnlyParentCollection; // 0x09(0x01)
	char UnknownData_A[0x2]; // 0x0a(0x02)
	struct FCollectionTotalsLimits CollectionTotals; // 0x0c(0x10)
	struct FCollectionStaticMeshLimits StaticMeshLimits; // 0x1c(0x08)
	struct FCollectionSkeleMeshLimits SkeleMeshLimits; // 0x24(0x08)
	struct FCollectionAnimSequenceLimits AnimLimits; // 0x2c(0x04)
	bool CanUseComplexCollisionAsSimple; // 0x30(0x01)
	bool CanUseLOD0Collision; // 0x31(0x01)
	char UnknownData_32[0x2]; // 0x32(0x02)
};

// ScriptStruct StudiosAutomation.CollectionAnimSequenceLimits
// Size: 0x04 (Inherited: 0x00)
struct FCollectionAnimSequenceLimits {
	int32_t MaxMemory; // 0x00(0x04)
};

// ScriptStruct StudiosAutomation.CollectionSkeleMeshLimits
// Size: 0x08 (Inherited: 0x08)
struct FCollectionSkeleMeshLimits : FCollectionMeshLimitsBase {
};

// ScriptStruct StudiosAutomation.CollectionMeshLimitsBase
// Size: 0x08 (Inherited: 0x00)
struct FCollectionMeshLimitsBase {
	int32_t MaxVerts; // 0x00(0x04)
	int32_t MaxMemory; // 0x04(0x04)
};

// ScriptStruct StudiosAutomation.CollectionStaticMeshLimits
// Size: 0x08 (Inherited: 0x08)
struct FCollectionStaticMeshLimits : FCollectionMeshLimitsBase {
};

// ScriptStruct StudiosAutomation.CollectionTotalsLimits
// Size: 0x10 (Inherited: 0x00)
struct FCollectionTotalsLimits {
	int32_t MaxTotalVerts; // 0x00(0x04)
	int32_t MaxTotalMemory; // 0x04(0x04)
	int32_t MostExpensiveAssetsSetSize; // 0x08(0x04)
	int32_t ExpensiveAssetSetMaxTotalMemory; // 0x0c(0x04)
};

// ScriptStruct StudiosAutomation.CollectionLimitsArray
// Size: 0x10 (Inherited: 0x00)
struct FCollectionLimitsArray {
	struct TArray<struct FCollectionLimits> CollectionLimits; // 0x00(0x10)
};

