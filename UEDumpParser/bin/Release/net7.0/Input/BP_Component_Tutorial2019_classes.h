// BlueprintGeneratedClass BP_Component_Tutorial2019.BP_Component_Tutorial2019_C
// Size: 0x188 (Inherited: 0xd8)
struct UBP_Component_Tutorial2019_C : UTutorial2019ContextualDelegatingComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xd8(0x08)
	struct TArray<struct AActor*> GoldHoarders; // 0xe0(0x10)
	struct TArray<struct FVector> GoldHoarderLocations; // 0xf0(0x10)
	struct UBP_Prompt_CTPurchaseVoyageSequence_C* GoToVendorPromptObject; // 0x100(0x08)
	struct TArray<struct AActor*> NPCBlacklist; // 0x108(0x10)
	struct TArray<struct FName> OutpostNames; // 0x118(0x10)
	bool GoldHoarderOnRepPrerequiste; // 0x128(0x01)
	char UnknownData_129[0x7]; // 0x129(0x07)
	struct FObjectMessagingHandle Handle_PlayerFinishedSpawning; // 0x130(0x58)

	void SwapMysteriousStrangerToTutorialModeOnClient(); // Function BP_Component_Tutorial2019.BP_Component_Tutorial2019_C.SwapMysteriousStrangerToTutorialModeOnClient // Public|HasDefaults|BlueprintCallable|BlueprintEvent // @ game+0x1848130
	void TeleportPlayerToOnboardingSpawnPoint(); // Function BP_Component_Tutorial2019.BP_Component_Tutorial2019_C.TeleportPlayerToOnboardingSpawnPoint // Public|HasDefaults|BlueprintCallable|BlueprintEvent // @ game+0x1848130
	void GetPlayerController(struct AAthenaPlayerController* Player Controller); // Function BP_Component_Tutorial2019.BP_Component_Tutorial2019_C.GetPlayerController // Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure // @ game+0x1848130
	void ConvertActorIdsToActors(struct TArray<struct AActor*> ActorRefs, struct TArray<struct AActor*> OutActors); // Function BP_Component_Tutorial2019.BP_Component_Tutorial2019_C.ConvertActorIdsToActors // Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent // @ game+0x1848130
	void Debug_SearchForMissingGoldHoarders(); // Function BP_Component_Tutorial2019.BP_Component_Tutorial2019_C.Debug_SearchForMissingGoldHoarders // Public|BlueprintCallable|BlueprintEvent // @ game+0x1848130
	void PopulateGoldHoarderLocationsFromGoldHoarders(); // Function BP_Component_Tutorial2019.BP_Component_Tutorial2019_C.PopulateGoldHoarderLocationsFromGoldHoarders // Public|HasDefaults|BlueprintCallable|BlueprintEvent // @ game+0x1848130
	void EnsurePurchaseVoyageSequenceCreatedAndPopulated(struct TArray<struct FVector> InputPin); // Function BP_Component_Tutorial2019.BP_Component_Tutorial2019_C.EnsurePurchaseVoyageSequenceCreatedAndPopulated // Public|HasOutParms|BlueprintCallable|BlueprintEvent // @ game+0x1848130
	void EnsurePurchaseVoyageSequenceObjectCreated(struct UBP_Prompt_CTPurchaseVoyageSequence_C* PromptObject); // Function BP_Component_Tutorial2019.BP_Component_Tutorial2019_C.EnsurePurchaseVoyageSequenceObjectCreated // Public|HasOutParms|BlueprintCallable|BlueprintEvent // @ game+0x1848130
	void OnRep_GoldHoarderLocations(); // Function BP_Component_Tutorial2019.BP_Component_Tutorial2019_C.OnRep_GoldHoarderLocations // BlueprintCallable|BlueprintEvent // @ game+0x1848130
	void TrySetUpCoordinator(); // Function BP_Component_Tutorial2019.BP_Component_Tutorial2019_C.TrySetUpCoordinator // BlueprintCallable|BlueprintEvent // @ game+0x1848130
	void ReceiveTutorial2019BeginPlayOnClient(); // Function BP_Component_Tutorial2019.BP_Component_Tutorial2019_C.ReceiveTutorial2019BeginPlayOnClient // Event|Public|BlueprintEvent // @ game+0x1848130
	void ReceiveTutorial2019BeginPlayOnServer(); // Function BP_Component_Tutorial2019.BP_Component_Tutorial2019_C.ReceiveTutorial2019BeginPlayOnServer // Event|Public|BlueprintEvent // @ game+0x1848130
	void ForceDisableComponent_Blueprint(); // Function BP_Component_Tutorial2019.BP_Component_Tutorial2019_C.ForceDisableComponent_Blueprint // Event|Public|BlueprintEvent // @ game+0x1848130
	void Set Prompts Visibility(bool IsHidden, bool ReEvaluate, float Delay In Seconds); // Function BP_Component_Tutorial2019.BP_Component_Tutorial2019_C.Set Prompts Visibility // BlueprintCallable|BlueprintEvent // @ game+0x1848130
	void ControllerOnEndPlay(char EndPlayReason); // Function BP_Component_Tutorial2019.BP_Component_Tutorial2019_C.ControllerOnEndPlay // BlueprintCallable|BlueprintEvent // @ game+0x1848130
	void ExecuteUbergraph_BP_Component_Tutorial2019(int32_t EntryPoint); // Function BP_Component_Tutorial2019.BP_Component_Tutorial2019_C.ExecuteUbergraph_BP_Component_Tutorial2019 // HasDefaults // @ game+0x1848130
};

