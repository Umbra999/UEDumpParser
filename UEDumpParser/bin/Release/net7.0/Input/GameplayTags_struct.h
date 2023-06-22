// Enum GameplayTags.EGameplayTagQueryExprType
enum class EGameplayTagQueryExprType : uint8_t {
	Undefined,
	AnyTagsMatch,
	AllTagsMatch,
	NoTagsMatch,
	AnyExprMatch,
	AllExprMatch,
	NoExprMatch,
	EGameplayTagQueryExprType_MAX,
};

// Enum GameplayTags.EGameplayContainerMatchType
enum class EGameplayContainerMatchType : uint8_t {
	Any,
	All,
	EGameplayContainerMatchType_MAX,
};

// Enum GameplayTags.EGameplayTagMatchType
enum class EGameplayTagMatchType : uint8_t {
	Explicit,
	IncludeParentTags,
	EGameplayTagMatchType_MAX,
};

// ScriptStruct GameplayTags.GameplayTagContainer
// Size: 0x28 (Inherited: 0x00)
struct FGameplayTagContainer {
	char UnknownData_0[0x8]; // 0x00(0x08)
	struct TArray<struct FGameplayTag> GameplayTags; // 0x08(0x10)
	struct TArray<struct FName> Tags; // 0x18(0x10)
};

// ScriptStruct GameplayTags.GameplayTag
// Size: 0x08 (Inherited: 0x00)
struct FGameplayTag {
	struct FName TagName; // 0x00(0x08)
};

// ScriptStruct GameplayTags.GameplayTagQuery
// Size: 0x48 (Inherited: 0x00)
struct FGameplayTagQuery {
	int32_t TokenStreamVersion; // 0x00(0x04)
	char UnknownData_4[0x4]; // 0x04(0x04)
	struct TArray<struct FGameplayTag> TagDictionary; // 0x08(0x10)
	struct TArray<char> QueryTokenStream; // 0x18(0x10)
	struct FString UserDescription; // 0x28(0x10)
	struct FString AutoDescription; // 0x38(0x10)
};

// ScriptStruct GameplayTags.GameplayTagNode
// Size: 0x78 (Inherited: 0x00)
struct FGameplayTagNode {
	char UnknownData_0[0x78]; // 0x00(0x78)
};

// ScriptStruct GameplayTags.GameplayTagTableRow
// Size: 0x48 (Inherited: 0x01)
struct FGameplayTagTableRow : FTableRowBase {
	struct FString Tag; // 0x00(0x10)
	struct FText CategoryText; // 0x10(0x38)
};

