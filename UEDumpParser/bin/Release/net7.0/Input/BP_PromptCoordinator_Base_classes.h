// BlueprintGeneratedClass BP_PromptCoordinator_Base.BP_PromptCoordinator_Base_C
// Size: 0x138 (Inherited: 0x118)
struct UBP_PromptCoordinator_Base_C : UBasePromptCoordinator {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x118(0x08)
	bool IsCompleted; // 0x120(0x01)
	char UnknownData_121[0x7]; // 0x121(0x07)
	struct FMulticastDelegate OnComplete; // 0x128(0x10)

	void IsCharacterInsideRadius(struct FVector Center, float Radius, bool Result); // Function BP_PromptCoordinator_Base.BP_PromptCoordinator_Base_C.IsCharacterInsideRadius // Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const // @ game+0x1848130
	void UninitializeImplementable(); // Function BP_PromptCoordinator_Base.BP_PromptCoordinator_Base_C.UninitializeImplementable // Public|BlueprintCallable|BlueprintEvent // @ game+0x1848130
	void GetHUDObjectMessageDispatcher(struct FObjectMessagingDispatcherHandle HUD Dispatcher); // Function BP_PromptCoordinator_Base.BP_PromptCoordinator_Base_C.GetHUDObjectMessageDispatcher // Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure // @ game+0x1848130
	void Complete(); // Function BP_PromptCoordinator_Base.BP_PromptCoordinator_Base_C.Complete // Public|BlueprintCallable|BlueprintEvent // @ game+0x1848130
	void UnregisterHandles(); // Function BP_PromptCoordinator_Base.BP_PromptCoordinator_Base_C.UnregisterHandles // Public|BlueprintCallable|BlueprintEvent // @ game+0x1848130
	void PostInitialize(); // Function BP_PromptCoordinator_Base.BP_PromptCoordinator_Base_C.PostInitialize // Public|BlueprintCallable|BlueprintEvent // @ game+0x1848130
	void InitializeAndStart(struct AAthenaPlayerController* PlayerController); // Function BP_PromptCoordinator_Base.BP_PromptCoordinator_Base_C.InitializeAndStart // Public|BlueprintCallable|BlueprintEvent // @ game+0x1848130
	void GetCharacterObjectMessageDispatcher(struct FObjectMessagingDispatcherHandle Player Dispatcher); // Function BP_PromptCoordinator_Base.BP_PromptCoordinator_Base_C.GetCharacterObjectMessageDispatcher // Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure // @ game+0x1848130
	void Evaluate(); // Function BP_PromptCoordinator_Base.BP_PromptCoordinator_Base_C.Evaluate // Public|BlueprintCallable|BlueprintEvent // @ game+0x1848130
	void GetControllerObjectMessageDispatcher(struct FObjectMessagingDispatcherHandle Player Dispatcher); // Function BP_PromptCoordinator_Base.BP_PromptCoordinator_Base_C.GetControllerObjectMessageDispatcher // Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure // @ game+0x1848130
	void Start(); // Function BP_PromptCoordinator_Base.BP_PromptCoordinator_Base_C.Start // Event|Public|BlueprintCallable|BlueprintEvent // @ game+0x1848130
	void ExecuteUbergraph_BP_PromptCoordinator_Base(int32_t EntryPoint); // Function BP_PromptCoordinator_Base.BP_PromptCoordinator_Base_C.ExecuteUbergraph_BP_PromptCoordinator_Base //  // @ game+0x1848130
	void OnComplete__DelegateSignature(); // Function BP_PromptCoordinator_Base.BP_PromptCoordinator_Base_C.OnComplete__DelegateSignature // Public|Delegate|BlueprintCallable|BlueprintEvent // @ game+0x1848130
};

