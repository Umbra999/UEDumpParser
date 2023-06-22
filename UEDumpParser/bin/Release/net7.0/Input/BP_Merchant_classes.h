// BlueprintGeneratedClass BP_Merchant.BP_Merchant_C
// Size: 0x708 (Inherited: 0x6b0)
struct ABP_Merchant_C : ACompanyShopkeeper {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x6b0(0x08)
	struct UCommodityRedemptionComponent* CommodityRedemption; // 0x6b8(0x08)
	struct UEmissaryMaxRankQuestProvider* EmissaryMaxRankQuestProvider; // 0x6c0(0x08)
	struct UCargoRunParticipantComponent* CargoRunParticipant; // 0x6c8(0x08)
	struct UCapsuleComponent* SolidHits; // 0x6d0(0x08)
	struct UNPCDialogComponent* NPCDialogSellCrate; // 0x6d8(0x08)
	struct UNPCDialogComponent* NPCDialog; // 0x6e0(0x08)
	struct UMerchantCrateProviderComponent* MerchantCrateProvider; // 0x6e8(0x08)
	struct USkeletalMeshComponent* cmp_pocket_watch_mrh_01_e; // 0x6f0(0x08)
	struct UStaticMeshComponent* StaticMesh; // 0x6f8(0x08)
	struct UAnimNotifyWwiseEmitterComponent* AnimNotifyWwiseEmitter; // 0x700(0x08)

	void UserConstructionScript(); // Function BP_Merchant.BP_Merchant_C.UserConstructionScript // Event|Public|BlueprintCallable|BlueprintEvent // @ game+0x1848130
	void PlayItemAnimation(); // Function BP_Merchant.BP_Merchant_C.PlayItemAnimation // Public|BlueprintCallable|BlueprintEvent // @ game+0x1848130
	void ExecuteUbergraph_BP_Merchant(int32_t EntryPoint); // Function BP_Merchant.BP_Merchant_C.ExecuteUbergraph_BP_Merchant //  // @ game+0x1848130
};

