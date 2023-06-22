// Enum OnlineSubsystem.EOnlineStatsSuccess
enum class EOnlineStatsSuccess : uint8_t {
	Success,
	UnknownError,
	InvalidStatId,
	InvalidArgument,
	InvalidUser,
	EOnlineStatsSuccess_MAX,
};

// Enum OnlineSubsystem.EInAppPurchaseState
enum class EInAppPurchaseState : uint8_t {
	Success,
	Failed,
	Cancelled,
	Invalid,
	NotAllowed,
	Restored,
	Unknown,
	EInAppPurchaseState_MAX,
};

// Enum OnlineSubsystem.EMPMatchOutcome
enum class EMPMatchOutcome : uint8_t {
	None,
	Quit,
	Won,
	Lost,
	Tied,
	TimeExpired,
	First,
	Second,
	Third,
	Fourth,
	EMPMatchOutcome_MAX,
};

// Enum OnlineSubsystem.EPlatformId
enum class EPlatformId : uint8_t {
	Unknown,
	XboxLive,
	Steam,
	EPlatformId_MAX,
};

// ScriptStruct OnlineSubsystem.InAppPurchaseProductInfo
// Size: 0xa0 (Inherited: 0x00)
struct FInAppPurchaseProductInfo {
	struct FString Identifier; // 0x00(0x10)
	struct FString TransactionIdentifier; // 0x10(0x10)
	struct FString DisplayName; // 0x20(0x10)
	struct FString DisplayDescription; // 0x30(0x10)
	struct FString DisplayPrice; // 0x40(0x10)
	struct FString CurrencyCode; // 0x50(0x10)
	struct FString CurrencySymbol; // 0x60(0x10)
	struct FString DecimalSeparator; // 0x70(0x10)
	struct FString GroupingSeparator; // 0x80(0x10)
	struct FString ReceiptData; // 0x90(0x10)
};

// ScriptStruct OnlineSubsystem.InAppPurchaseRestoreInfo
// Size: 0x20 (Inherited: 0x00)
struct FInAppPurchaseRestoreInfo {
	struct FString Identifier; // 0x00(0x10)
	struct FString ReceiptData; // 0x10(0x10)
};

// ScriptStruct OnlineSubsystem.AchievementUpdatedEvent
// Size: 0x38 (Inherited: 0x00)
struct FAchievementUpdatedEvent {
	struct FString AchievementId; // 0x00(0x10)
	uint32_t Progress; // 0x10(0x04)
	bool Successful; // 0x14(0x01)
	char UnknownData_15[0x3]; // 0x15(0x03)
	struct FString Reason; // 0x18(0x10)
	struct FString Platform; // 0x28(0x10)
};

// ScriptStruct OnlineSubsystem.NamedInterfaceDef
// Size: 0x18 (Inherited: 0x00)
struct FNamedInterfaceDef {
	struct FName InterfaceName; // 0x00(0x08)
	struct FString InterfaceClassName; // 0x08(0x10)
};

// ScriptStruct OnlineSubsystem.NamedInterface
// Size: 0x10 (Inherited: 0x00)
struct FNamedInterface {
	struct FName InterfaceName; // 0x00(0x08)
	struct UObject* InterfaceObject; // 0x08(0x08)
};

// ScriptStruct OnlineSubsystem.OnlineStoreCatalogItem
// Size: 0x90 (Inherited: 0x00)
struct FOnlineStoreCatalogItem {
	struct FString ProductId; // 0x00(0x10)
	struct FString Title; // 0x10(0x10)
	struct FString Description; // 0x20(0x10)
	struct FString FormattedPrice; // 0x30(0x10)
	struct FString FormattedBasePrice; // 0x40(0x10)
	bool IsOnSale; // 0x50(0x01)
	char UnknownData_51[0x7]; // 0x51(0x07)
	struct FDateTime SaleEndDate; // 0x58(0x08)
	struct FString ImageUri; // 0x60(0x10)
	struct FString CurrencyCode; // 0x70(0x10)
	struct TArray<struct FString> MetaTags; // 0x80(0x10)
};

// ScriptStruct OnlineSubsystem.InAppPurchaseProductRequest
// Size: 0x18 (Inherited: 0x00)
struct FInAppPurchaseProductRequest {
	struct FString ProductIdentifier; // 0x00(0x10)
	bool bIsConsumable; // 0x10(0x01)
	char UnknownData_11[0x7]; // 0x11(0x07)
};

