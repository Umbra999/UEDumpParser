// Class GameplayDebugger.GameplayDebuggingComponent
// Size: 0x7f0 (Inherited: 0x5c0)
struct UGameplayDebuggingComponent : UPrimitiveComponent {
	struct FString DebugComponentClassName; // 0x5c0(0x10)
	int32_t ShowExtendedInformatiomCounter; // 0x5d0(0x04)
	char UnknownData_5D4[0x4]; // 0x5d4(0x04)
	struct TArray<int32_t> ReplicateViewDataCounters; // 0x5d8(0x10)
	struct FString ControllerName; // 0x5e8(0x10)
	struct FString PawnName; // 0x5f8(0x10)
	struct FString PawnClass; // 0x608(0x10)
	struct FString DebugIcon; // 0x618(0x10)
	struct FString MovementBaseInfo; // 0x628(0x10)
	struct FString MovementModeInfo; // 0x638(0x10)
	struct FString PathFollowingInfo; // 0x648(0x10)
	struct FString CurrentAITask; // 0x658(0x10)
	struct FString CurrentAIState; // 0x668(0x10)
	struct FString CurrentAIAssets; // 0x678(0x10)
	struct FString GameplayTasksState; // 0x688(0x10)
	struct FString NavDataInfo; // 0x698(0x10)
	struct FString AbilityInfo; // 0x6a8(0x10)
	struct FString MontageInfo; // 0x6b8(0x10)
	struct FString BrainComponentName; // 0x6c8(0x10)
	struct FString BrainComponentString; // 0x6d8(0x10)
	struct TArray<char> BlackboardRepData; // 0x6e8(0x10)
	char UnknownData_6F8[0x10]; // 0x6f8(0x10)
	struct TArray<struct FVector> PathPoints; // 0x708(0x10)
	struct TArray<char> PathCorridorData; // 0x718(0x10)
	char UnknownData_728[0x10]; // 0x728(0x10)
	struct TArray<char> NavmeshRepData; // 0x738(0x10)
	struct TArray<char> EQSRepData; // 0x748(0x10)
	struct FVector SensingComponentLocation; // 0x758(0x0c)
	int32_t NextPathPointIndex; // 0x764(0x04)
	char bIsUsingPathFollowing : 1; // 0x768(0x01)
	char bIsUsingCharacter : 1; // 0x768(0x01)
	char bIsUsingBehaviorTree : 1; // 0x768(0x01)
	char bIsUsingAbilities : 1; // 0x768(0x01)
	char UnknownData_768_4 : 4; // 0x768(0x01)
	char UnknownData_769[0x7]; // 0x769(0x07)
	struct AActor* TargetActor; // 0x770(0x08)
	char UnknownData_778[0x78]; // 0x778(0x78)

	void ServerReplicateData(uint32_t InMessage, uint32_t DataView); // Function GameplayDebugger.GameplayDebuggingComponent.ServerReplicateData // Final|Exec|Native|Public // @ game+0x4775640
	void ServerDiscardNavmeshData(); // Function GameplayDebugger.GameplayDebuggingComponent.ServerDiscardNavmeshData // Net|NetReliableNative|Event|Public|NetServer|NetValidate // @ game+0x47755f0
	void ServerCollectNavmeshData(struct FVector_NetQuantize10 TargetLocation); // Function GameplayDebugger.GameplayDebuggingComponent.ServerCollectNavmeshData // Net|NetReliableNative|Event|Public|NetServer|NetValidate // @ game+0x4775520
	void OnRep_UpdateNavmesh(); // Function GameplayDebugger.GameplayDebuggingComponent.OnRep_UpdateNavmesh // Native|Public // @ game+0x4775500
	void OnRep_UpdateEQS(); // Function GameplayDebugger.GameplayDebuggingComponent.OnRep_UpdateEQS // Native|Public // @ game+0x47754e0
	void OnRep_UpdateBlackboard(); // Function GameplayDebugger.GameplayDebuggingComponent.OnRep_UpdateBlackboard // Native|Public // @ game+0x47754c0
	void OnRep_PathCorridorData(); // Function GameplayDebugger.GameplayDebuggingComponent.OnRep_PathCorridorData // Native|Public // @ game+0x47754a0
	void OnCycleDetailsView(); // Function GameplayDebugger.GameplayDebuggingComponent.OnCycleDetailsView // Native|Public // @ game+0x4775460
	void ClientEnableTargetSelection(bool bEnable); // Function GameplayDebugger.GameplayDebuggingComponent.ClientEnableTargetSelection // Net|NetReliableNative|Event|Public|NetClient|NetValidate // @ game+0x4775270
};

// Class GameplayDebugger.GameplayDebuggingHUDComponent
// Size: 0x4b8 (Inherited: 0x3c8)
struct AGameplayDebuggingHUDComponent : AActor {
	float MenuStartX; // 0x3c8(0x04)
	float MenuStartY; // 0x3cc(0x04)
	float DebugInfoStartX; // 0x3d0(0x04)
	float DebugInfoStartY; // 0x3d4(0x04)
	struct UCanvas* Canvas; // 0x3d8(0x08)
	struct APlayerController* PlayerOwner; // 0x3e0(0x08)
	char UnknownData_3E8[0xd0]; // 0x3e8(0xd0)
};

// Class GameplayDebugger.GameplayDebuggerSettings
// Size: 0xa8 (Inherited: 0x28)
struct UGameplayDebuggerSettings : UObject {
	struct FGDTCustomViewNames CustomViewNames; // 0x28(0x50)
	bool OverHead; // 0x78(0x01)
	bool Basic; // 0x79(0x01)
	bool BehaviorTree; // 0x7a(0x01)
	bool EQS; // 0x7b(0x01)
	bool EnableEQSOnHUD; // 0x7c(0x01)
	char UnknownData_7D[0x3]; // 0x7d(0x03)
	int32_t ActiveEQSIndex; // 0x80(0x04)
	bool Perception; // 0x84(0x01)
	bool GameView1; // 0x85(0x01)
	bool GameView2; // 0x86(0x01)
	bool GameView3; // 0x87(0x01)
	bool GameView4; // 0x88(0x01)
	bool GameView5; // 0x89(0x01)
	char UnknownData_8A[0x1e]; // 0x8a(0x1e)
};

// Class GameplayDebugger.GameplayDebuggingControllerComponent
// Size: 0x368 (Inherited: 0xc8)
struct UGameplayDebuggingControllerComponent : UActorComponent {
	struct AGameplayDebuggingHUDComponent* OnDebugAIHUD; // 0xc8(0x08)
	struct AActor* DebugAITargetActor; // 0xd0(0x08)
	struct UInputComponent* AIDebugViewInputComponent; // 0xd8(0x08)
	struct UInputComponent* DebugCameraInputComponent; // 0xe0(0x08)
	char UnknownData_E8[0x28]; // 0xe8(0x28)
	struct FInputChord ActivationKey; // 0x110(0x28)
	struct FInputChord CategoryZeroBind; // 0x138(0x28)
	struct FInputChord CategoryOneBind; // 0x160(0x28)
	struct FInputChord CategoryTwoBind; // 0x188(0x28)
	struct FInputChord CategoryThreeBind; // 0x1b0(0x28)
	struct FInputChord CategoryFourBind; // 0x1d8(0x28)
	struct FInputChord CategoryFiveBind; // 0x200(0x28)
	struct FInputChord CategorySixBind; // 0x228(0x28)
	struct FInputChord CategorySevenBind; // 0x250(0x28)
	struct FInputChord CategoryEightBind; // 0x278(0x28)
	struct FInputChord CategoryNineBind; // 0x2a0(0x28)
	struct FInputChord CycleDetailsViewBind; // 0x2c8(0x28)
	struct FInputChord DebugCameraBind; // 0x2f0(0x28)
	struct FInputChord OnScreenDebugMessagesBind; // 0x318(0x28)
	struct FInputChord GameHUDBind; // 0x340(0x28)
};

// Class GameplayDebugger.GaneplayDebuggerProxyHUD
// Size: 0x4f0 (Inherited: 0x4c0)
struct AGaneplayDebuggerProxyHUD : AHUD {
	char UnknownData_4C0[0x30]; // 0x4c0(0x30)
};

// Class GameplayDebugger.GameplayDebuggingReplicator
// Size: 0x478 (Inherited: 0x3c8)
struct AGameplayDebuggingReplicator : AActor {
	struct FString DebugComponentClassName; // 0x3c8(0x10)
	struct FString DebugComponentHUDClassName; // 0x3d8(0x10)
	struct FString DebugComponentControllerClassName; // 0x3e8(0x10)
	int32_t MaxEQSQueries; // 0x3f8(0x04)
	char UnknownData_3FC[0x4]; // 0x3fc(0x04)
	struct UGameplayDebuggingComponent* DebugComponent; // 0x400(0x08)
	struct APlayerController* LocalPlayerOwner; // 0x408(0x08)
	struct AActor* LastSelectedActorToDebug; // 0x410(0x08)
	bool bIsGlobalInWorld; // 0x418(0x01)
	bool bAutoActivate; // 0x419(0x01)
	bool OverHead; // 0x41a(0x01)
	bool Basic; // 0x41b(0x01)
	bool BehaviorTree; // 0x41c(0x01)
	bool EQS; // 0x41d(0x01)
	bool EnableEQSOnHUD; // 0x41e(0x01)
	char UnknownData_41F[0x1]; // 0x41f(0x01)
	int32_t ActiveEQSIndex; // 0x420(0x04)
	bool Perception; // 0x424(0x01)
	bool GameView1; // 0x425(0x01)
	bool GameView2; // 0x426(0x01)
	bool GameView3; // 0x427(0x01)
	bool GameView4; // 0x428(0x01)
	bool GameView5; // 0x429(0x01)
	char UnknownData_42A[0x4e]; // 0x42a(0x4e)

	void ServerSetActorToDebug(struct AActor* InActor); // Function GameplayDebugger.GameplayDebuggingReplicator.ServerSetActorToDebug // Net|NetReliableNative|Event|Public|NetServer|NetValidate // @ game+0x4775830
	void ServerReplicateMessage(struct AActor* Actor, uint32_t InMessage, uint32_t DataView); // Function GameplayDebugger.GameplayDebuggingReplicator.ServerReplicateMessage // Net|NetReliableNative|Event|Public|NetServer|NetValidate // @ game+0x4775700
	void OnRep_AutoActivate(); // Function GameplayDebugger.GameplayDebuggingReplicator.OnRep_AutoActivate // Native|Public // @ game+0x4775480
	void ClientReplicateMessage(struct AActor* Actor, uint32_t InMessage, uint32_t DataView); // Function GameplayDebugger.GameplayDebuggingReplicator.ClientReplicateMessage // Net|NetReliableNative|Event|Public|NetClient|NetValidate // @ game+0x4775330
	void ClientEnableTargetSelection(bool bEnable, struct APlayerController* Context); // Function GameplayDebugger.GameplayDebuggingReplicator.ClientEnableTargetSelection // Net|NetReliableNative|Event|Public|NetClient|NetValidate // @ game+0x4775170
	void ClientAutoActivate(); // Function GameplayDebugger.GameplayDebuggingReplicator.ClientAutoActivate // Net|NetReliableNative|Event|Public|NetClient // @ game+0x4775150
};

