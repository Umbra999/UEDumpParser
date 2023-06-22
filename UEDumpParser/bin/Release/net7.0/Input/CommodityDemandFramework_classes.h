// Class CommodityDemandFramework.CommodityTokenEntitlementDesc
// Size: 0xd8 (Inherited: 0xc8)
struct UCommodityTokenEntitlementDesc : UEntitlementDesc {
	struct FName NPCToRedeemAt; // 0xc8(0x08)
	struct UClass* ItemToRedeemFor; // 0xd0(0x08)
};

// Class CommodityDemandFramework.CommodityDemandFrameworkEditorSettings
// Size: 0x48 (Inherited: 0x38)
struct UCommodityDemandFrameworkEditorSettings : UDeveloperSettings {
	struct FStringAssetReference CommodityDataFileLocation; // 0x38(0x10)
};

// Class CommodityDemandFramework.CommodityDemandFrameworkSettings
// Size: 0x78 (Inherited: 0x38)
struct UCommodityDemandFrameworkSettings : UDeveloperSettings {
	float DemandRefreshFrequencyInSeconds; // 0x38(0x04)
	struct FName DemandCollectionId; // 0x3c(0x08)
	int32_t CommodityPurchaseLockoutInGameDays; // 0x44(0x04)
	int32_t InGameHourWhenCommoditiesRestock; // 0x48(0x04)
	char UnknownData_4C[0x4]; // 0x4c(0x04)
	struct FGameTime CommodityRedemptionTimeOutPeriodInDays; // 0x50(0x08)
	struct FStringAssetReference NPCListAsset; // 0x58(0x10)
	struct FStringAssetReference MerchantSovereignHandInNameFileLocation; // 0x68(0x10)
};

// Class CommodityDemandFramework.CommodityDemandServiceInterface
// Size: 0x28 (Inherited: 0x28)
struct UCommodityDemandServiceInterface : UInterface {
};

// Class CommodityDemandFramework.MerchantSovereignHandInNameInformationDataAsset
// Size: 0x38 (Inherited: 0x28)
struct UMerchantSovereignHandInNameInformationDataAsset : UDataAsset {
	struct TArray<struct FMerchantSovereignHandInNameInformation> MerchantSovereignHandInNameInformationArray; // 0x28(0x10)
};

// Class CommodityDemandFramework.CommodityDemandService
// Size: 0x440 (Inherited: 0x3c8)
struct ACommodityDemandService : AActor {
	char UnknownData_3C8[0x20]; // 0x3c8(0x20)
	struct FActiveNPCDemands ActiveCommodityDemands; // 0x3e8(0x20)
	struct UMerchantSovereignHandInNameInformationDataAsset* MerchantSovereignHandInNameInformationDataAsset; // 0x408(0x08)
	char UnknownData_410[0x30]; // 0x410(0x30)

	void OnRep_ActiveCommodityDemands(); // Function CommodityDemandFramework.CommodityDemandService.OnRep_ActiveCommodityDemands // Final|RequiredAPI|Native|Private // @ game+0x4008540
};

// Class CommodityDemandFramework.CommodityDemandStorageInterface
// Size: 0x28 (Inherited: 0x28)
struct UCommodityDemandStorageInterface : UInterface {
};

// Class CommodityDemandFramework.CommodityDemandStorageProviderInterface
// Size: 0x28 (Inherited: 0x28)
struct UCommodityDemandStorageProviderInterface : UInterface {
};

// Class CommodityDemandFramework.CommodityEntitlementRedemptionAsset
// Size: 0x38 (Inherited: 0x28)
struct UCommodityEntitlementRedemptionAsset : UDataAsset {
	struct TArray<struct FEntitlementToRedeemItems> CommoditiesForRedemption; // 0x28(0x10)
};

// Class CommodityDemandFramework.CommodityItemDesc
// Size: 0x130 (Inherited: 0x120)
struct UCommodityItemDesc : UBootyItemDesc {
	struct FCommoditySelectionType CommodityType; // 0x120(0x08)
	char CommodityDemand; // 0x128(0x01)
	char UnknownData_129[0x7]; // 0x129(0x07)
};

// Class CommodityDemandFramework.CommodityPurchaseTrackingComponent
// Size: 0x158 (Inherited: 0xc8)
struct UCommodityPurchaseTrackingComponent : UActorComponent {
	char UnknownData_C8[0x90]; // 0xc8(0x90)
};

// Class CommodityDemandFramework.CommodityRedemptionInterface
// Size: 0x28 (Inherited: 0x28)
struct UCommodityRedemptionInterface : UInterface {
};

// Class CommodityDemandFramework.CommodityRedemptionComponent
// Size: 0x190 (Inherited: 0xc8)
struct UCommodityRedemptionComponent : UActorComponent {
	char UnknownData_C8[0x8]; // 0xc8(0x08)
	struct FText RedeemTooltipText; // 0xd0(0x38)
	char UnknownData_108[0x78]; // 0x108(0x78)
	struct TArray<struct AActor*> PendingRedemptions; // 0x180(0x10)
};

// Class CommodityDemandFramework.CommoditySourceInterface
// Size: 0x28 (Inherited: 0x28)
struct UCommoditySourceInterface : UInterface {
};

// Class CommodityDemandFramework.CommoditySourceComponent
// Size: 0xf0 (Inherited: 0xc8)
struct UCommoditySourceComponent : UActorComponent {
	char UnknownData_C8[0x8]; // 0xc8(0x08)
	struct FName NPCIdentifier; // 0xd0(0x08)
	struct FName IslandIdentifier; // 0xd8(0x08)
	struct FGuid PurchasingCrewId; // 0xe0(0x10)
};

// Class CommodityDemandFramework.CommodityTypeDataAsset
// Size: 0x38 (Inherited: 0x28)
struct UCommodityTypeDataAsset : UDataAsset {
	struct TArray<struct FCommodityTypeDataEntry> CommodityEntries; // 0x28(0x10)
};

// Class CommodityDemandFramework.CrateFillerInterface
// Size: 0x28 (Inherited: 0x28)
struct UCrateFillerInterface : UInterface {
};

// Class CommodityDemandFramework.CrateFillerComponent
// Size: 0xd8 (Inherited: 0xc8)
struct UCrateFillerComponent : UActorComponent {
	char UnknownData_C8[0x10]; // 0xc8(0x10)
};

// Class CommodityDemandFramework.DeliverableCommodityRequirement
// Size: 0x30 (Inherited: 0x30)
struct UDeliverableCommodityRequirement : UDeliverableRequirementBase {
};

// Class CommodityDemandFramework.IsWieldedCommodityItemInDemandStatCondition
// Size: 0x50 (Inherited: 0x30)
struct UIsWieldedCommodityItemInDemandStatCondition : UTargetedStatCondition {
	char CommodityDemand; // 0x30(0x01)
	char UnknownData_31[0x1f]; // 0x31(0x1f)
};

// Class CommodityDemandFramework.SpecificItemsCrateFillerComponent
// Size: 0xe0 (Inherited: 0xc8)
struct USpecificItemsCrateFillerComponent : UActorComponent {
	char UnknownData_C8[0x8]; // 0xc8(0x08)
	struct TArray<struct FStorageContainerNode> ItemsToFillCrateWith; // 0xd0(0x10)
};

// Class CommodityDemandFramework.WasWieldedCommodityItemBoughtAtDemandStatCondition
// Size: 0x38 (Inherited: 0x30)
struct UWasWieldedCommodityItemBoughtAtDemandStatCondition : UTargetedStatCondition {
	char CommodityDemand; // 0x30(0x01)
	char UnknownData_31[0x7]; // 0x31(0x07)
};

