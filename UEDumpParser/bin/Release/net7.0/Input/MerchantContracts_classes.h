// Class MerchantContracts.MerchantContractsBlueprintLibrary
// Size: 0x28 (Inherited: 0x28)
struct UMerchantContractsBlueprintLibrary : UBlueprintFunctionLibrary {

	struct FText GetDateFromTimeLimit(TScriptInterface<struct UGameServiceProviderInterface> ServiceProviderInterface, float TimeLimit); // Function MerchantContracts.MerchantContractsBlueprintLibrary.GetDateFromTimeLimit // Final|Native|Static|Public|BlueprintCallable // @ game+0x3e224e0
};

// Class MerchantContracts.MerchantContractsServiceInterface
// Size: 0x28 (Inherited: 0x28)
struct UMerchantContractsServiceInterface : UInterface {
};

// Class MerchantContracts.MerchantContractsService
// Size: 0xd8 (Inherited: 0x28)
struct UMerchantContractsService : UObject {
	char UnknownData_28[0x8]; // 0x28(0x08)
	struct TArray<struct FMerchantContract> Contracts; // 0x30(0x10)
	char UnknownData_40[0x98]; // 0x40(0x98)
};

// Class MerchantContracts.PlayerMerchantContractsInterface
// Size: 0x28 (Inherited: 0x28)
struct UPlayerMerchantContractsInterface : UInterface {
};

// Class MerchantContracts.PlayerMerchantContractsComponent
// Size: 0xe0 (Inherited: 0xc8)
struct UPlayerMerchantContractsComponent : UActorComponent {
	char UnknownData_C8[0x8]; // 0xc8(0x08)
	struct TArray<struct FPlayerMerchantContract> Contracts; // 0xd0(0x10)
};

