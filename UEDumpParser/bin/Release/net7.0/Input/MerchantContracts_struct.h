// ScriptStruct MerchantContracts.MerchantContractItemDesc
// Size: 0x28 (Inherited: 0x00)
struct FMerchantContractItemDesc {
	struct UClass* AllocatedCrate; // 0x00(0x08)
	struct TArray<struct FItemAndReward> ItemData; // 0x08(0x10)
	struct UClass* FaunaSpecies; // 0x18(0x08)
	struct UClass* FaunaBreed; // 0x20(0x08)
};

// ScriptStruct MerchantContracts.ItemAndReward
// Size: 0x10 (Inherited: 0x00)
struct FItemAndReward {
	struct UClass* ItemDesc; // 0x00(0x08)
	struct FRewardId HandInOnTimeRewardId; // 0x08(0x08)
};

// ScriptStruct MerchantContracts.MerchantContractDeliveryRequest
// Size: 0x40 (Inherited: 0x00)
struct FMerchantContractDeliveryRequest {
	int32_t Id; // 0x00(0x04)
	char UnknownData_4[0x4]; // 0x04(0x04)
	struct FMerchantContractItemDesc ItemDesc; // 0x08(0x28)
	int32_t NumToAllocate; // 0x30(0x04)
	int32_t NumToCollect; // 0x34(0x04)
	int32_t NumToDeliver; // 0x38(0x04)
	char UnknownData_3C[0x4]; // 0x3c(0x04)
};

// ScriptStruct MerchantContracts.MerchantContract
// Size: 0xc0 (Inherited: 0x00)
struct FMerchantContract {
	char UnknownData_0[0x18]; // 0x00(0x18)
	struct TArray<struct FMerchantContractDeliveryRequest> DeliveryRequests; // 0x18(0x10)
	char UnknownData_28[0x98]; // 0x28(0x98)
};

// ScriptStruct MerchantContracts.PlayerMerchantContract
// Size: 0x28 (Inherited: 0x00)
struct FPlayerMerchantContract {
	struct FGuid Id; // 0x00(0x10)
	struct FName IslandName; // 0x10(0x08)
	struct TArray<struct FMerchantContractDeliveryRequest> Requests; // 0x18(0x10)
};

