// BlueprintGeneratedClass BP_Prompt_CTPurchaseVoyageSequence.BP_Prompt_CTPurchaseVoyageSequence_C
// Size: 0x90c (Inherited: 0x138)
struct UBP_Prompt_CTPurchaseVoyageSequence_C : UBP_PromptCoordinator_Base_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x138(0x08)
	float TriggerVolumeRadius; // 0x140(0x04)
	int32_t InsideGoldHoardersRadius; // 0x144(0x04)
	struct TArray<struct AOverlapTriggerActor*> GoldHoarderOverlapActors; // 0x148(0x10)
	struct TArray<struct AOverlapTriggerActor*> OutpostOverlapActors; // 0x158(0x10)
	float OutpostRadiusReduction; // 0x168(0x04)
	char UnknownData_16C[0x4]; // 0x16c(0x04)
	struct FPrioritisedPromptWithHandle Prompt_GoToVendors; // 0x170(0x68)
	struct FPrioritisedPromptWithHandle Prompt_GoToGoldhoarders; // 0x1d8(0x68)
	struct FPrioritisedPromptWithHandle Prompt_GoToOrderOfSouls; // 0x240(0x68)
	struct FPrioritisedPromptWithHandle Prompt_GoToMerchantAlliance; // 0x2a8(0x68)
	struct FPrioritisedPromptWithHandle Prompt_ProposeVoyage; // 0x310(0x68)
	struct FPrioritisedPromptWithHandle Prompt_VoteOnVoyage; // 0x378(0x68)
	struct FPrioritisedPromptWithHandle Prompt_BoardShip; // 0x3e0(0x68)
	struct FPrioritisedPromptWithHandle Prompt_VisitSignpost_GH; // 0x448(0x68)
	struct FPrioritisedPromptWithHandle Prompt_VisitSignpost_MA; // 0x4b0(0x68)
	struct FPrioritisedPromptWithHandle Prompt_VisitSignpost_OOS; // 0x518(0x68)
	struct FObjectMessagingHandle Handle_OfferPurchased; // 0x580(0x58)
	struct FObjectMessagingHandle Handle_VoyageProposalDiscarded; // 0x5d8(0x58)
	struct FObjectMessagingHandle Handle_VoyageProposed; // 0x630(0x58)
	struct FObjectMessagingHandle Handle_VoyageBegun; // 0x688(0x58)
	struct FObjectMessagingHandle Handle_VoyageComplete; // 0x6e0(0x58)
	struct FObjectMessagingHandle Handle_PlayerEnteredShip; // 0x738(0x58)
	struct FObjectMessagingHandle Handle_PlayerExitedShip; // 0x790(0x58)
	struct FObjectMessagingHandle Handle_PlayerWithdrewVoyage; // 0x7e8(0x58)
	struct FObjectMessagingHandle Handle_VoyageCancelled; // 0x840(0x58)
	bool State_InsideOutpostRadius; // 0x898(0x01)
	bool State_InsideGoldhoardersRadius; // 0x899(0x01)
	bool State_InsideOrderOfSouls; // 0x89a(0x01)
	bool State_InsideMerchantAllianceRadius; // 0x89b(0x01)
	bool State_OnShip; // 0x89c(0x01)
	bool State_IsHidden; // 0x89d(0x01)
	bool State_IsTutorialForceDisabled; // 0x89e(0x01)
	bool State_SeenSignpostPrompt; // 0x89f(0x01)
	struct UBP_CT_TutorialProgress_C* CompanyTutorialProgress; // 0x8a0(0x08)
	struct FObjectMessagingHandle Handle_CompanyRankPurchased; // 0x8a8(0x58)
	struct FFeatureFlag FeatureName; // 0x900(0x0c)

	void ShowAppropriateSignpostPrompt(); // Function BP_Prompt_CTPurchaseVoyageSequence.BP_Prompt_CTPurchaseVoyageSequence_C.ShowAppropriateSignpostPrompt // Public|BlueprintCallable|BlueprintEvent // @ game+0x1848130
	void ShowAppropriateMerchantPrompt(); // Function BP_Prompt_CTPurchaseVoyageSequence.BP_Prompt_CTPurchaseVoyageSequence_C.ShowAppropriateMerchantPrompt // Public|BlueprintCallable|BlueprintEvent // @ game+0x1848130
	void SetIsHidden(bool NewHidden); // Function BP_Prompt_CTPurchaseVoyageSequence.BP_Prompt_CTPurchaseVoyageSequence_C.SetIsHidden // Public|BlueprintCallable|BlueprintEvent // @ game+0x1848130
	void PlayerLeftGoldhoarderRadiusFunc(struct AActor* Actor); // Function BP_Prompt_CTPurchaseVoyageSequence.BP_Prompt_CTPurchaseVoyageSequence_C.PlayerLeftGoldhoarderRadiusFunc // Public|BlueprintCallable|BlueprintEvent // @ game+0x1848130
	void PlayerEnteredGoldhoarderRadiusFunc(struct AActor* Actor); // Function BP_Prompt_CTPurchaseVoyageSequence.BP_Prompt_CTPurchaseVoyageSequence_C.PlayerEnteredGoldhoarderRadiusFunc // Public|BlueprintCallable|BlueprintEvent // @ game+0x1848130
	void PlayerLeftOutpostRadiusFunc(struct AActor* Actor); // Function BP_Prompt_CTPurchaseVoyageSequence.BP_Prompt_CTPurchaseVoyageSequence_C.PlayerLeftOutpostRadiusFunc // Public|BlueprintCallable|BlueprintEvent // @ game+0x1848130
	void PlayerEnteredOutpostRadiusFunc(struct AActor* Actor); // Function BP_Prompt_CTPurchaseVoyageSequence.BP_Prompt_CTPurchaseVoyageSequence_C.PlayerEnteredOutpostRadiusFunc // Public|BlueprintCallable|BlueprintEvent // @ game+0x1848130
	void OnCompanyRankPurchasedFunc(struct FEventCompanyRankProgressUpdateNotification InputPin); // Function BP_Prompt_CTPurchaseVoyageSequence.BP_Prompt_CTPurchaseVoyageSequence_C.OnCompanyRankPurchasedFunc // Public|BlueprintCallable|BlueprintEvent // @ game+0x1848130
	void OnPlayerWithdrewVoyageFunc(struct FEventPlayerWithdrewVoyage EventPlayerWithdrewVoyage); // Function BP_Prompt_CTPurchaseVoyageSequence.BP_Prompt_CTPurchaseVoyageSequence_C.OnPlayerWithdrewVoyageFunc // Public|HasOutParms|BlueprintCallable|BlueprintEvent // @ game+0x1848130
	void OnVoyageDiscardFromInventoryFunc(struct FVoyageProposalDiscardEvent VoyageProposalDiscardEvent); // Function BP_Prompt_CTPurchaseVoyageSequence.BP_Prompt_CTPurchaseVoyageSequence_C.OnVoyageDiscardFromInventoryFunc // Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent // @ game+0x1848130
	void OnPlayerProposedVoyageFunc(struct FVoyageProposalSelectedEvent VoyageProposalSelectedEvent); // Function BP_Prompt_CTPurchaseVoyageSequence.BP_Prompt_CTPurchaseVoyageSequence_C.OnPlayerProposedVoyageFunc // Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent // @ game+0x1848130
	void OnOfferPurchasedFunc(struct FOfferPurchasedEvent OfferPurchasedEvent); // Function BP_Prompt_CTPurchaseVoyageSequence.BP_Prompt_CTPurchaseVoyageSequence_C.OnOfferPurchasedFunc // Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent // @ game+0x1848130
	void OnPlayerCancelledVoyageFunc(struct FVoyageCancelled VoyageCancelled); // Function BP_Prompt_CTPurchaseVoyageSequence.BP_Prompt_CTPurchaseVoyageSequence_C.OnPlayerCancelledVoyageFunc // Public|HasOutParms|BlueprintCallable|BlueprintEvent // @ game+0x1848130
	void OnPlayerExitedShipFunc(); // Function BP_Prompt_CTPurchaseVoyageSequence.BP_Prompt_CTPurchaseVoyageSequence_C.OnPlayerExitedShipFunc // Public|BlueprintCallable|BlueprintEvent // @ game+0x1848130
	void OnSomethingEnteredShipFunc(struct FEventEnteredShip EventEnteredShip); // Function BP_Prompt_CTPurchaseVoyageSequence.BP_Prompt_CTPurchaseVoyageSequence_C.OnSomethingEnteredShipFunc // Public|HasOutParms|BlueprintCallable|BlueprintEvent // @ game+0x1848130
	void OnVoyageCompletedFunc(struct FVoyageComplete VoyageComplete); // Function BP_Prompt_CTPurchaseVoyageSequence.BP_Prompt_CTPurchaseVoyageSequence_C.OnVoyageCompletedFunc // Public|HasOutParms|BlueprintCallable|BlueprintEvent // @ game+0x1848130
	void OnVoyageBegunFunc(struct FVoyageBegun VoyageBegun); // Function BP_Prompt_CTPurchaseVoyageSequence.BP_Prompt_CTPurchaseVoyageSequence_C.OnVoyageBegunFunc // Public|HasOutParms|BlueprintCallable|BlueprintEvent // @ game+0x1848130
	void IsNearAnyShopkeeper(bool Result); // Function BP_Prompt_CTPurchaseVoyageSequence.BP_Prompt_CTPurchaseVoyageSequence_C.IsNearAnyShopkeeper // Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure // @ game+0x1848130
	void AreTutorialsForceDisabled(bool Result); // Function BP_Prompt_CTPurchaseVoyageSequence.BP_Prompt_CTPurchaseVoyageSequence_C.AreTutorialsForceDisabled // Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure // @ game+0x1848130
	void IsCurrentlyControlledCharacter(struct AActor* Actor, bool Result); // Function BP_Prompt_CTPurchaseVoyageSequence.BP_Prompt_CTPurchaseVoyageSequence_C.IsCurrentlyControlledCharacter // Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure // @ game+0x1848130
	void ShouldShowMerchantAllianceCompanyPrompts(bool Result); // Function BP_Prompt_CTPurchaseVoyageSequence.BP_Prompt_CTPurchaseVoyageSequence_C.ShouldShowMerchantAllianceCompanyPrompts // Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure // @ game+0x1848130
	void ShouldShowOrderOfSoulsCompanyPrompts(bool Result); // Function BP_Prompt_CTPurchaseVoyageSequence.BP_Prompt_CTPurchaseVoyageSequence_C.ShouldShowOrderOfSoulsCompanyPrompts // Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure // @ game+0x1848130
	void ClearAllOutpostOverlapActors(); // Function BP_Prompt_CTPurchaseVoyageSequence.BP_Prompt_CTPurchaseVoyageSequence_C.ClearAllOutpostOverlapActors // Public|BlueprintCallable|BlueprintEvent // @ game+0x1848130
	void ShouldShowGoldHoarderCompanyPrompts(bool Result); // Function BP_Prompt_CTPurchaseVoyageSequence.BP_Prompt_CTPurchaseVoyageSequence_C.ShouldShowGoldHoarderCompanyPrompts // Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure // @ game+0x1848130
	void ClearAllGoldHoarderOverlapActors(); // Function BP_Prompt_CTPurchaseVoyageSequence.BP_Prompt_CTPurchaseVoyageSequence_C.ClearAllGoldHoarderOverlapActors // Public|BlueprintCallable|BlueprintEvent // @ game+0x1848130
	void SetGoldHoardersLocations(struct TArray<struct FVector> GoldHoarderLocations); // Function BP_Prompt_CTPurchaseVoyageSequence.BP_Prompt_CTPurchaseVoyageSequence_C.SetGoldHoardersLocations // HasOutParms|BlueprintCallable|BlueprintEvent // @ game+0x1848130
	void Evaluate(); // Function BP_Prompt_CTPurchaseVoyageSequence.BP_Prompt_CTPurchaseVoyageSequence_C.Evaluate // Public|BlueprintCallable|BlueprintEvent // @ game+0x1848130
	void Complete(); // Function BP_Prompt_CTPurchaseVoyageSequence.BP_Prompt_CTPurchaseVoyageSequence_C.Complete // Public|BlueprintCallable|BlueprintEvent // @ game+0x1848130
	void SetOutposts(struct TArray<struct FName> OutpostNames); // Function BP_Prompt_CTPurchaseVoyageSequence.BP_Prompt_CTPurchaseVoyageSequence_C.SetOutposts // HasOutParms|BlueprintCallable|BlueprintEvent // @ game+0x1848130
	void UninitializeImplementable(); // Function BP_Prompt_CTPurchaseVoyageSequence.BP_Prompt_CTPurchaseVoyageSequence_C.UninitializeImplementable // Public|BlueprintCallable|BlueprintEvent // @ game+0x1848130
	void PostInitialize(); // Function BP_Prompt_CTPurchaseVoyageSequence.BP_Prompt_CTPurchaseVoyageSequence_C.PostInitialize // Public|BlueprintCallable|BlueprintEvent // @ game+0x1848130
	void SetOrderOfSoulsLocations(struct TArray<struct FVector> Order of Souls Locations); // Function BP_Prompt_CTPurchaseVoyageSequence.BP_Prompt_CTPurchaseVoyageSequence_C.SetOrderOfSoulsLocations // HasOutParms|BlueprintCallable|BlueprintEvent // @ game+0x1848130
	void SetMerchantAllianceLocations(struct TArray<struct FVector> Merchant Alliance Locations); // Function BP_Prompt_CTPurchaseVoyageSequence.BP_Prompt_CTPurchaseVoyageSequence_C.SetMerchantAllianceLocations // HasOutParms|BlueprintCallable|BlueprintEvent // @ game+0x1848130
	void RegisterCharacterEvents_Implementable(struct FObjectMessagingDispatcherHandle CharacterDispatcher); // Function BP_Prompt_CTPurchaseVoyageSequence.BP_Prompt_CTPurchaseVoyageSequence_C.RegisterCharacterEvents_Implementable // Event|Public|HasOutParms|BlueprintEvent // @ game+0x1848130
	void UnregisterCharacterEvents_Implementable(struct FObjectMessagingDispatcherHandle CharacterDispatcher); // Function BP_Prompt_CTPurchaseVoyageSequence.BP_Prompt_CTPurchaseVoyageSequence_C.UnregisterCharacterEvents_Implementable // Event|Public|HasOutParms|BlueprintEvent // @ game+0x1848130
	void UnregisterOtherEvents_Implementable(); // Function BP_Prompt_CTPurchaseVoyageSequence.BP_Prompt_CTPurchaseVoyageSequence_C.UnregisterOtherEvents_Implementable // Event|Public|BlueprintEvent // @ game+0x1848130
	void RegisterOtherEvents_Implementable(); // Function BP_Prompt_CTPurchaseVoyageSequence.BP_Prompt_CTPurchaseVoyageSequence_C.RegisterOtherEvents_Implementable // Event|Public|BlueprintEvent // @ game+0x1848130
	void ForceDisableTutorials(); // Function BP_Prompt_CTPurchaseVoyageSequence.BP_Prompt_CTPurchaseVoyageSequence_C.ForceDisableTutorials // BlueprintCallable|BlueprintEvent // @ game+0x1848130
	void Unregister HUD Events(); // Function BP_Prompt_CTPurchaseVoyageSequence.BP_Prompt_CTPurchaseVoyageSequence_C.Unregister HUD Events // BlueprintCallable|BlueprintEvent // @ game+0x1848130
	void OnOfferPurchased(struct FOfferPurchasedEvent Event); // Function BP_Prompt_CTPurchaseVoyageSequence.BP_Prompt_CTPurchaseVoyageSequence_C.OnOfferPurchased // BlueprintCallable|BlueprintEvent // @ game+0x1848130
	void OnPlayerProposedVoyage(struct FVoyageProposalSelectedEvent Event); // Function BP_Prompt_CTPurchaseVoyageSequence.BP_Prompt_CTPurchaseVoyageSequence_C.OnPlayerProposedVoyage // BlueprintCallable|BlueprintEvent // @ game+0x1848130
	void OnVoyageDiscardFromInventory(struct FVoyageProposalDiscardEvent Event); // Function BP_Prompt_CTPurchaseVoyageSequence.BP_Prompt_CTPurchaseVoyageSequence_C.OnVoyageDiscardFromInventory // BlueprintCallable|BlueprintEvent // @ game+0x1848130
	void OnVoyageBegun(struct FVoyageBegun Event); // Function BP_Prompt_CTPurchaseVoyageSequence.BP_Prompt_CTPurchaseVoyageSequence_C.OnVoyageBegun // BlueprintCallable|BlueprintEvent // @ game+0x1848130
	void OnVoyageCompleted(struct FVoyageComplete Event); // Function BP_Prompt_CTPurchaseVoyageSequence.BP_Prompt_CTPurchaseVoyageSequence_C.OnVoyageCompleted // BlueprintCallable|BlueprintEvent // @ game+0x1848130
	void OnSomethingEnteredShip(struct FEventEnteredShip Event); // Function BP_Prompt_CTPurchaseVoyageSequence.BP_Prompt_CTPurchaseVoyageSequence_C.OnSomethingEnteredShip // BlueprintCallable|BlueprintEvent // @ game+0x1848130
	void OnPlayerExitedShip(struct FEventExitedShip Event); // Function BP_Prompt_CTPurchaseVoyageSequence.BP_Prompt_CTPurchaseVoyageSequence_C.OnPlayerExitedShip // BlueprintCallable|BlueprintEvent // @ game+0x1848130
	void PlayerLeftOutpostRadius(struct AActor* ActorInZone); // Function BP_Prompt_CTPurchaseVoyageSequence.BP_Prompt_CTPurchaseVoyageSequence_C.PlayerLeftOutpostRadius // BlueprintCallable|BlueprintEvent // @ game+0x1848130
	void PlayerEnteredOutpostRadius(struct AActor* ActorInZone); // Function BP_Prompt_CTPurchaseVoyageSequence.BP_Prompt_CTPurchaseVoyageSequence_C.PlayerEnteredOutpostRadius // BlueprintCallable|BlueprintEvent // @ game+0x1848130
	void PlayerLeftGoldhoarderRadius(struct AActor* ActorInZone); // Function BP_Prompt_CTPurchaseVoyageSequence.BP_Prompt_CTPurchaseVoyageSequence_C.PlayerLeftGoldhoarderRadius // BlueprintCallable|BlueprintEvent // @ game+0x1848130
	void PlayerEnteredGoldhoarderRadius(struct AActor* ActorInZone); // Function BP_Prompt_CTPurchaseVoyageSequence.BP_Prompt_CTPurchaseVoyageSequence_C.PlayerEnteredGoldhoarderRadius // BlueprintCallable|BlueprintEvent // @ game+0x1848130
	void OnPlayerWithdrewVoyage(struct FEventPlayerWithdrewVoyage Event); // Function BP_Prompt_CTPurchaseVoyageSequence.BP_Prompt_CTPurchaseVoyageSequence_C.OnPlayerWithdrewVoyage // BlueprintCallable|BlueprintEvent // @ game+0x1848130
	void OnPlayerCancelledVoyage(struct FVoyageCancelled Event); // Function BP_Prompt_CTPurchaseVoyageSequence.BP_Prompt_CTPurchaseVoyageSequence_C.OnPlayerCancelledVoyage // BlueprintCallable|BlueprintEvent // @ game+0x1848130
	void OnCompanyRankPurchased(struct FEventCompanyRankProgressUpdateNotification Event); // Function BP_Prompt_CTPurchaseVoyageSequence.BP_Prompt_CTPurchaseVoyageSequence_C.OnCompanyRankPurchased // BlueprintCallable|BlueprintEvent // @ game+0x1848130
	void OnEndPlay_HUD(char EndPlayReason); // Function BP_Prompt_CTPurchaseVoyageSequence.BP_Prompt_CTPurchaseVoyageSequence_C.OnEndPlay_HUD // BlueprintCallable|BlueprintEvent // @ game+0x1848130
	void ExecuteUbergraph_BP_Prompt_CTPurchaseVoyageSequence(int32_t EntryPoint); // Function BP_Prompt_CTPurchaseVoyageSequence.BP_Prompt_CTPurchaseVoyageSequence_C.ExecuteUbergraph_BP_Prompt_CTPurchaseVoyageSequence // HasDefaults // @ game+0x1848130
};

