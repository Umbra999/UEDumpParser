// Enum CommodityDemandFramework.ECommodityDemand
enum class ECommodityDemand : uint8_t {
	None,
	Low,
	Normal,
	High,
	ECommodityDemand_MAX,
};

// ScriptStruct CommodityDemandFramework.CommoditySelectionType
// Size: 0x08 (Inherited: 0x00)
struct FCommoditySelectionType {
	struct FName CommodityType; // 0x00(0x08)
};

// ScriptStruct CommodityDemandFramework.ActiveNPCDemands
// Size: 0x20 (Inherited: 0x00)
struct FActiveNPCDemands {
	struct TArray<uint32_t> NPCIdHashes; // 0x00(0x10)
	struct TArray<struct FActiveCommodityDemands> NPCDemands; // 0x10(0x10)
};

// ScriptStruct CommodityDemandFramework.ActiveCommodityDemands
// Size: 0x20 (Inherited: 0x00)
struct FActiveCommodityDemands {
	struct TArray<uint32_t> CommodityIdHashes; // 0x00(0x10)
	struct TArray<char> CommodityDemands; // 0x10(0x10)
};

// ScriptStruct CommodityDemandFramework.MerchantSovereignHandInNameInformation
// Size: 0x10 (Inherited: 0x00)
struct FMerchantSovereignHandInNameInformation {
	struct FName MerchantNPCName; // 0x00(0x08)
	struct FName SovereignNPCName; // 0x08(0x08)
};

// ScriptStruct CommodityDemandFramework.CommodityDescWithRedeemId
// Size: 0x10 (Inherited: 0x00)
struct FCommodityDescWithRedeemId {
	struct FCommoditySelectionType RedeemId; // 0x00(0x08)
	struct UClass* RedeemItemDesc; // 0x08(0x08)
};

// ScriptStruct CommodityDemandFramework.EntitlementToRedeemItems
// Size: 0x18 (Inherited: 0x00)
struct FEntitlementToRedeemItems {
	struct UClass* RequiredEntitlement; // 0x00(0x08)
	struct TArray<struct FCommodityDescWithRedeemId> RedeemItems; // 0x08(0x10)
};

// ScriptStruct CommodityDemandFramework.CommoditySourceMetaWrapper
// Size: 0x28 (Inherited: 0x18)
struct FCommoditySourceMetaWrapper : FItemMetaBase {
	struct FName NPCIdentifier; // 0x18(0x08)
	struct FName IslandIdentifier; // 0x20(0x08)
};

// ScriptStruct CommodityDemandFramework.CommodityTypeDataEntry
// Size: 0x10 (Inherited: 0x00)
struct FCommodityTypeDataEntry {
	struct FName CommodityType; // 0x00(0x08)
	struct FName DisplayName; // 0x08(0x08)
};

// ScriptStruct CommodityDemandFramework.EventCommodityCrateRedeemed
// Size: 0x18 (Inherited: 0x00)
struct FEventCommodityCrateRedeemed {
	char UnknownData_0[0x18]; // 0x00(0x18)
};

// ScriptStruct CommodityDemandFramework.CommodityRedemptionTrackingModel
// Size: 0x10 (Inherited: 0x00)
struct FCommodityRedemptionTrackingModel {
	uint16_t EntitlementDesc; // 0x00(0x02)
	char NPCName; // 0x02(0x01)
	char UnknownData_3[0x5]; // 0x03(0x05)
	int64_t TickWhenTracked; // 0x08(0x08)
};

// ScriptStruct CommodityDemandFramework.CommodityTrackingModel
// Size: 0x20 (Inherited: 0x00)
struct FCommodityTrackingModel {
	struct FGuid ItemOfferId; // 0x00(0x10)
	char NPCName; // 0x10(0x01)
	char UnknownData_11[0x7]; // 0x11(0x07)
	int64_t TickWhenTracked; // 0x18(0x08)
};

// ScriptStruct CommodityDemandFramework.TrackCommodityPurchaseOnServerRpc
// Size: 0x40 (Inherited: 0x10)
struct FTrackCommodityPurchaseOnServerRpc : FBoxedRpc {
	struct UObject* CommodityDemandStorageObject; // 0x10(0x08)
	struct FName NPCName; // 0x18(0x08)
	struct FGuid ItemOfferId; // 0x20(0x10)
	struct FString ItemClientId; // 0x30(0x10)
};

