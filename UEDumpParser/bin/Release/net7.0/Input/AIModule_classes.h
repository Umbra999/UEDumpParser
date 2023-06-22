// Class AIModule.BTNode
// Size: 0x58 (Inherited: 0x28)
struct UBTNode : UObject {
	char UnknownData_28[0x8]; // 0x28(0x08)
	struct FString NodeName; // 0x30(0x10)
	struct UBehaviorTree* TreeAsset; // 0x40(0x08)
	struct UBTCompositeNode* ParentNode; // 0x48(0x08)
	char UnknownData_50[0x8]; // 0x50(0x08)
};

// Class AIModule.BTAuxiliaryNode
// Size: 0x60 (Inherited: 0x58)
struct UBTAuxiliaryNode : UBTNode {
	char UnknownData_58[0x8]; // 0x58(0x08)
};

// Class AIModule.BTService
// Size: 0x70 (Inherited: 0x60)
struct UBTService : UBTAuxiliaryNode {
	float Interval; // 0x60(0x04)
	float RandomDeviation; // 0x64(0x04)
	char bCallTickOnSearchStart : 1; // 0x68(0x01)
	char bRestartTimerOnEachActivation : 1; // 0x68(0x01)
	char UnknownData_68_2 : 6; // 0x68(0x01)
	char UnknownData_69[0x7]; // 0x69(0x07)
};

// Class AIModule.BTDecorator
// Size: 0x68 (Inherited: 0x60)
struct UBTDecorator : UBTAuxiliaryNode {
	char UnknownData_60_0 : 7; // 0x60(0x01)
	char bInverseCondition : 1; // 0x60(0x01)
	char UnknownData_61[0x3]; // 0x61(0x03)
	char FlowAbortMode; // 0x64(0x01)
	char UnknownData_65[0x3]; // 0x65(0x03)
};

// Class AIModule.BTDecorator_BlackboardBase
// Size: 0x90 (Inherited: 0x68)
struct UBTDecorator_BlackboardBase : UBTDecorator {
	struct FBlackboardKeySelector BlackboardKey; // 0x68(0x28)
};

// Class AIModule.BTTaskNode
// Size: 0x60 (Inherited: 0x58)
struct UBTTaskNode : UBTNode {
	char UnknownData_58[0x8]; // 0x58(0x08)
};

// Class AIModule.BTTask_BlackboardBase
// Size: 0x88 (Inherited: 0x60)
struct UBTTask_BlackboardBase : UBTTaskNode {
	struct FBlackboardKeySelector BlackboardKey; // 0x60(0x28)
};

// Class AIModule.BTTask_RunEQSQuery
// Size: 0xa8 (Inherited: 0x88)
struct UBTTask_RunEQSQuery : UBTTask_BlackboardBase {
	struct UEnvQuery* QueryTemplate; // 0x88(0x08)
	struct TArray<struct FEnvNamedValue> QueryParams; // 0x90(0x10)
	char RunMode; // 0xa0(0x01)
	char UnknownData_A1[0x7]; // 0xa1(0x07)
};

// Class AIModule.BTTask_RotateToFaceBBEntry
// Size: 0x90 (Inherited: 0x88)
struct UBTTask_RotateToFaceBBEntry : UBTTask_BlackboardBase {
	float Precision; // 0x88(0x04)
	char UnknownData_8C[0x4]; // 0x8c(0x04)
};

// Class AIModule.EnvQueryContext
// Size: 0x28 (Inherited: 0x28)
struct UEnvQueryContext : UObject {
};

// Class AIModule.EnvQueryNode
// Size: 0x30 (Inherited: 0x28)
struct UEnvQueryNode : UObject {
	int32_t VerNum; // 0x28(0x04)
	char UnknownData_2C[0x4]; // 0x2c(0x04)
};

// Class AIModule.EnvQueryGenerator
// Size: 0x58 (Inherited: 0x30)
struct UEnvQueryGenerator : UEnvQueryNode {
	struct FString OptionName; // 0x30(0x10)
	bool NonShippingOnly; // 0x40(0x01)
	char UnknownData_41[0x3]; // 0x41(0x03)
	struct FFeatureFlag Feature; // 0x44(0x0c)
	struct UClass* ItemType; // 0x50(0x08)
};

// Class AIModule.EnvQueryTest
// Size: 0x170 (Inherited: 0x30)
struct UEnvQueryTest : UEnvQueryNode {
	int32_t TestOrder; // 0x30(0x04)
	char TestPurpose; // 0x34(0x01)
	char MultipleContextFilterOp; // 0x35(0x01)
	char MultipleContextScoreOp; // 0x36(0x01)
	char FilterType; // 0x37(0x01)
	struct FAIDataProviderBoolValue BoolValue; // 0x38(0x30)
	struct FAIDataProviderFloatValue FloatValueMin; // 0x68(0x30)
	struct FAIDataProviderFloatValue FloatValueMax; // 0x98(0x30)
	char UnknownData_C8[0x1]; // 0xc8(0x01)
	char ScoringEquation; // 0xc9(0x01)
	char ClampMinType; // 0xca(0x01)
	char ClampMaxType; // 0xcb(0x01)
	char UnknownData_CC[0x4]; // 0xcc(0x04)
	struct FAIDataProviderFloatValue ScoreClampMin; // 0xd0(0x30)
	struct FAIDataProviderFloatValue ScoreClampMax; // 0x100(0x30)
	struct FAIDataProviderFloatValue ScoringFactor; // 0x130(0x30)
	char UnknownData_160[0x8]; // 0x160(0x08)
	char bWorkOnFloatValues : 1; // 0x168(0x01)
	char UnknownData_168_1 : 7; // 0x168(0x01)
	char UnknownData_169[0x7]; // 0x169(0x07)
};

// Class AIModule.AIResourceInterface
// Size: 0x28 (Inherited: 0x28)
struct UAIResourceInterface : UInterface {
};

// Class AIModule.PathFollowingComponent
// Size: 0x2b8 (Inherited: 0xc8)
struct UPathFollowingComponent : UActorComponent {
	char UnknownData_C8[0x58]; // 0xc8(0x58)
	struct UNavMovementComponent* MovementComp; // 0x120(0x08)
	char UnknownData_128[0x8]; // 0x128(0x08)
	struct ANavigationData* MyNavData; // 0x130(0x08)
	char UnknownData_138[0xbc]; // 0x138(0xbc)
	char bUseVisibilityTestsSimplification : 1; // 0x1f4(0x01)
	char UnknownData_1F4_1 : 7; // 0x1f4(0x01)
	char UnknownData_1F5[0xc3]; // 0x1f5(0xc3)

	void OnActorBump(struct AActor* SelfActor, struct AActor* OtherActor, struct FVector NormalImpulse, struct FHitResult Hit); // Function AIModule.PathFollowingComponent.OnActorBump // Native|Public|HasOutParms|HasDefaults // @ game+0x240ab80
	struct FVector GetPathDestination(); // Function AIModule.PathFollowingComponent.GetPathDestination // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x2409060
	char GetPathActionType(); // Function AIModule.PathFollowingComponent.GetPathActionType // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x2409030
};

// Class AIModule.AIAsyncTaskBlueprintProxy
// Size: 0x60 (Inherited: 0x28)
struct UAIAsyncTaskBlueprintProxy : UObject {
	struct FMulticastDelegate OnSuccess; // 0x28(0x10)
	struct FMulticastDelegate OnFail; // 0x38(0x10)
	char UnknownData_48[0x18]; // 0x48(0x18)

	void OnMoveCompleted(struct FAIRequestID RequestID, char MovementResult); // Function AIModule.AIAsyncTaskBlueprintProxy.OnMoveCompleted // Final|Native|Public // @ game+0x240adf0
};

// Class AIModule.AIBlueprintHelperLibrary
// Size: 0x28 (Inherited: 0x28)
struct UAIBlueprintHelperLibrary : UBlueprintFunctionLibrary {

	void UnlockAIResourcesWithAnimation(struct UAnimInstance* AnimInstance, bool bUnlockMovement, bool UnlockAILogic); // Function AIModule.AIBlueprintHelperLibrary.UnlockAIResourcesWithAnimation // Final|BlueprintAuthorityOnly|Native|Static|Public|BlueprintCallable // @ game+0x240d970
	struct APawn* SpawnAIFromClass(struct UObject* WorldContextObject, struct UClass* PawnClass, struct UBehaviorTree* BehaviorTree, struct FVector Location, struct FRotator Rotation, bool bNoCollisionFail); // Function AIModule.AIBlueprintHelperLibrary.SpawnAIFromClass // Final|Native|Static|Public|HasDefaults|BlueprintCallable // @ game+0x240d540
	void SendAIMessage(struct APawn* Target, struct FName Message, struct UObject* MessageSource, bool bSuccess); // Function AIModule.AIBlueprintHelperLibrary.SendAIMessage // Final|Native|Static|Public|BlueprintCallable // @ game+0x240ba70
	void LockAIResourcesWithAnimation(struct UAnimInstance* AnimInstance, bool bLockMovement, bool LockAILogic); // Function AIModule.AIBlueprintHelperLibrary.LockAIResourcesWithAnimation // Final|BlueprintAuthorityOnly|Native|Static|Public|BlueprintCallable // @ game+0x240a5e0
	bool IsValidAIRotation(struct FRotator Rotation); // Function AIModule.AIBlueprintHelperLibrary.IsValidAIRotation // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x240a060
	bool IsValidAILocation(struct FVector Location); // Function AIModule.AIBlueprintHelperLibrary.IsValidAILocation // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x2409fd0
	bool IsValidAIDirection(struct FVector DirectionVector); // Function AIModule.AIBlueprintHelperLibrary.IsValidAIDirection // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x2409f40
	struct UBlackboardComponent* GetBlackboard(struct AActor* Target); // Function AIModule.AIBlueprintHelperLibrary.GetBlackboard // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x2408020
	struct AAIController* GetAIController(struct AActor* ControlledActor); // Function AIModule.AIBlueprintHelperLibrary.GetAIController // Final|Native|Static|Public|BlueprintCallable // @ game+0x2407ce0
	struct UAIAsyncTaskBlueprintProxy* CreateMoveToProxyObject(struct UObject* WorldContextObject, struct APawn* Pawn, struct FVector Destination, struct AActor* TargetActor, float AcceptanceRadius, bool bStopOnOverlap); // Function AIModule.AIBlueprintHelperLibrary.CreateMoveToProxyObject // Final|Native|Static|Public|HasDefaults|BlueprintCallable // @ game+0x2407950
};

// Class AIModule.PawnActionsComponent
// Size: 0x100 (Inherited: 0xc8)
struct UPawnActionsComponent : UActorComponent {
	struct APawn* ControlledPawn; // 0xc8(0x08)
	struct TArray<struct FPawnActionStack> ActionStacks; // 0xd0(0x10)
	struct TArray<struct FPawnActionEvent> ActionEvents; // 0xe0(0x10)
	struct UPawnAction* CurrentAction; // 0xf0(0x08)
	char UnknownData_F8[0x8]; // 0xf8(0x08)

	bool K2_PushAction(struct UPawnAction* NewAction, char Priority, struct UObject* Instigator); // Function AIModule.PawnActionsComponent.K2_PushAction // Final|Native|Public|BlueprintCallable // @ game+0x240a3d0
	bool K2_PerformAction(struct APawn* Pawn, struct UPawnAction* Action, char Priority); // Function AIModule.PawnActionsComponent.K2_PerformAction // Final|Native|Static|Public|BlueprintCallable // @ game+0x240a2d0
	char K2_ForceAbortAction(struct UPawnAction* ActionToAbort); // Function AIModule.PawnActionsComponent.K2_ForceAbortAction // Final|Native|Public|BlueprintCallable // @ game+0x240a240
	char K2_AbortAction(struct UPawnAction* ActionToAbort); // Function AIModule.PawnActionsComponent.K2_AbortAction // Final|Native|Public|BlueprintCallable // @ game+0x240a190
};

// Class AIModule.AIPerceptionListenerInterface
// Size: 0x28 (Inherited: 0x28)
struct UAIPerceptionListenerInterface : UInterface {
};

// Class AIModule.BlackboardKeyType
// Size: 0x30 (Inherited: 0x28)
struct UBlackboardKeyType : UObject {
	char UnknownData_28[0x8]; // 0x28(0x08)
};

// Class AIModule.BehaviorTreeTypes
// Size: 0x28 (Inherited: 0x28)
struct UBehaviorTreeTypes : UObject {
};

// Class AIModule.GenericTeamAgentInterface
// Size: 0x28 (Inherited: 0x28)
struct UGenericTeamAgentInterface : UInterface {
};

// Class AIModule.AIController
// Size: 0x4b8 (Inherited: 0x428)
struct AAIController : AController {
	char UnknownData_428[0x28]; // 0x428(0x28)
	char bLOSflag : 1; // 0x450(0x01)
	char bSkipExtraLOSChecks : 1; // 0x450(0x01)
	char bAllowStrafe : 1; // 0x450(0x01)
	char bWantsPlayerState : 1; // 0x450(0x01)
	char bDisableControlRotation : 1; // 0x450(0x01)
	char UnknownData_450_5 : 3; // 0x450(0x01)
	char UnknownData_451[0x7]; // 0x451(0x07)
	struct UPathFollowingComponent* PathFollowingComponent; // 0x458(0x08)
	struct UBrainComponent* BrainComponent; // 0x460(0x08)
	struct UAIPerceptionComponent* PerceptionComponent; // 0x468(0x08)
	struct UPawnActionsComponent* ActionsComp; // 0x470(0x08)
	struct UBlackboardComponent* Blackboard; // 0x478(0x08)
	struct UGameplayTasksComponent* CachedGameplayTasksComponent; // 0x480(0x08)
	char UnknownData_488[0x10]; // 0x488(0x10)
	struct FMulticastDelegate ReceiveMoveCompleted; // 0x498(0x10)
	char UnknownData_4A8[0x10]; // 0x4a8(0x10)

	bool UseBlackboard(struct UBlackboardData* BlackboardAsset, struct UBlackboardComponent* BlackboardComponent); // Function AIModule.AIController.UseBlackboard // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x240db20
	void SetMoveBlockDetection(bool bEnable); // Function AIModule.AIController.SetMoveBlockDetection // Final|Native|Public|BlueprintCallable // @ game+0x240ca90
	bool RunBehaviorTree(struct UBehaviorTree* BTAsset); // Function AIModule.AIController.RunBehaviorTree // Native|Public|BlueprintCallable // @ game+0x240b840
	void OnUsingBlackBoard(struct UBlackboardComponent* BlackboardComp, struct UBlackboardData* BlackboardAsset); // Function AIModule.AIController.OnUsingBlackBoard // Event|Protected|BlueprintEvent // @ game+0x1848130
	void OnPossess(struct APawn* PossessedPawn); // Function AIModule.AIController.OnPossess // Event|Public|BlueprintEvent // @ game+0x1848130
	void OnGameplayTaskResourcesClaimed(struct FGameplayResourceSet NewlyClaimed, struct FGameplayResourceSet FreshlyReleased); // Function AIModule.AIController.OnGameplayTaskResourcesClaimed // Native|Public // @ game+0x240ad20
	char MoveToLocation(struct FVector Dest, float AcceptanceRadius, bool bStopOnOverlap, bool bUsePathfinding, bool bProjectDestinationToNavigation, bool bCanStrafe, struct UClass* FilterClass, bool bAllowPartialPath); // Function AIModule.AIController.MoveToLocation // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x240a910
	char MoveToActor(struct AActor* Goal, float AcceptanceRadius, bool bStopOnOverlap, bool bUsePathfinding, bool bCanStrafe, struct UClass* FilterClass, bool bAllowPartialPath); // Function AIModule.AIController.MoveToActor // Final|Native|Public|BlueprintCallable // @ game+0x240a6f0
	void K2_SetFocus(struct AActor* NewFocus); // Function AIModule.AIController.K2_SetFocus // Final|Native|Public|BlueprintCallable // @ game+0x240a560
	void K2_SetFocalPoint(struct FVector FP); // Function AIModule.AIController.K2_SetFocalPoint // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x240a4d0
	void K2_ClearFocus(); // Function AIModule.AIController.K2_ClearFocus // Final|Native|Public|BlueprintCallable // @ game+0x240a220
	bool HasPartialPath(); // Function AIModule.AIController.HasPartialPath // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x2409d90
	struct UPathFollowingComponent* GetPathFollowingComponent(); // Function AIModule.AIController.GetPathFollowingComponent // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x24090a0
	char GetMoveStatus(); // Function AIModule.AIController.GetMoveStatus // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x2408f00
	struct FVector GetImmediateMoveDestination(); // Function AIModule.AIController.GetImmediateMoveDestination // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x2408d40
	struct AActor* GetFocusActor(); // Function AIModule.AIController.GetFocusActor // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x2408d10
	struct FVector GetFocalPointOnActor(struct AActor* Actor); // Function AIModule.AIController.GetFocalPointOnActor // Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x2408c60
	struct FVector GetFocalPoint(); // Function AIModule.AIController.GetFocalPoint // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x2408c20
	struct UAIPerceptionComponent* GetAIPerceptionComponent(); // Function AIModule.AIController.GetAIPerceptionComponent // Final|Native|Public|BlueprintCallable|BlueprintPure // @ game+0x2407d60
};

// Class AIModule.DetourCrowdAIController
// Size: 0x4b8 (Inherited: 0x4b8)
struct ADetourCrowdAIController : AAIController {
};

// Class AIModule.AIDataProvider
// Size: 0x28 (Inherited: 0x28)
struct UAIDataProvider : UObject {
};

// Class AIModule.CustomDataProviderObject
// Size: 0x28 (Inherited: 0x28)
struct UCustomDataProviderObject : UObject {
};

// Class AIModule.AIDataProvider_QueryParamFromCustomObjectProperty
// Size: 0x48 (Inherited: 0x28)
struct UAIDataProvider_QueryParamFromCustomObjectProperty : UAIDataProvider {
	struct FCustomDataProviderObjectPropertySelector ObjectProperty; // 0x28(0x10)
	float FloatValue; // 0x38(0x04)
	int32_t IntValue; // 0x3c(0x04)
	bool BoolValue; // 0x40(0x01)
	char UnknownData_41[0x7]; // 0x41(0x07)
};

// Class AIModule.AIDataProvider_QueryParams
// Size: 0x40 (Inherited: 0x28)
struct UAIDataProvider_QueryParams : UAIDataProvider {
	struct FName ParamName; // 0x28(0x08)
	float FloatValue; // 0x30(0x04)
	int32_t IntValue; // 0x34(0x04)
	bool BoolValue; // 0x38(0x01)
	char UnknownData_39[0x7]; // 0x39(0x07)
};

// Class AIModule.AIHotSpotManager
// Size: 0x28 (Inherited: 0x28)
struct UAIHotSpotManager : UObject {
};

// Class AIModule.AISystem
// Size: 0xf0 (Inherited: 0x40)
struct UAISystem : UAISystemBase {
	struct FStringClassReference PerceptionSystemClassName; // 0x40(0x10)
	struct FStringClassReference HotSpotManagerClassName; // 0x50(0x10)
	float AcceptanceRadius; // 0x60(0x04)
	bool bFinishMoveOnGoalOverlap; // 0x64(0x01)
	bool bAcceptPartialPaths; // 0x65(0x01)
	bool bAllowStrafing; // 0x66(0x01)
	bool bEnableBTAITasks; // 0x67(0x01)
	struct UBehaviorTreeManager* BehaviorTreeManager; // 0x68(0x08)
	struct UEnvQueryManager* EnvironmentQueryManager; // 0x70(0x08)
	struct UAIPerceptionSystem* PerceptionSystem; // 0x78(0x08)
	struct TArray<struct UAIAsyncTaskBlueprintProxy*> AllProxyObjects; // 0x80(0x10)
	struct UAIHotSpotManager* HotSpotManager; // 0x90(0x08)
	char UnknownData_98[0x58]; // 0x98(0x58)

	void AILoggingVerbose(); // Function AIModule.AISystem.AILoggingVerbose // Exec|Native|Public // @ game+0x2407080
	void AIIgnorePlayers(); // Function AIModule.AISystem.AIIgnorePlayers // Exec|Native|Public // @ game+0x2407060
};

// Class AIModule.AISense
// Size: 0x88 (Inherited: 0x28)
struct UAISense : UObject {
	struct FColor DebugDrawColor; // 0x28(0x04)
	char UnknownData_2C[0x4]; // 0x2c(0x04)
	struct FString DebugName; // 0x30(0x10)
	float DefaultExpirationAge; // 0x40(0x04)
	char NotifyType; // 0x44(0x01)
	char UnknownData_45[0x3]; // 0x45(0x03)
	char bWantsNewPawnNotification : 1; // 0x48(0x01)
	char bAutoRegisterAllPawnsAsSources : 1; // 0x48(0x01)
	char UnknownData_48_2 : 6; // 0x48(0x01)
	char UnknownData_49[0x7]; // 0x49(0x07)
	struct UAIPerceptionSystem* PerceptionSystemInstance; // 0x50(0x08)
	char UnknownData_58[0x30]; // 0x58(0x30)
};

// Class AIModule.AIPerceptionSystem
// Size: 0x128 (Inherited: 0x28)
struct UAIPerceptionSystem : UObject {
	char UnknownData_28[0x58]; // 0x28(0x58)
	struct TArray<struct UAISense*> Senses; // 0x80(0x10)
	float PerceptionAgingRate; // 0x90(0x04)
	char UnknownData_94[0x94]; // 0x94(0x94)

	void ReportPerceptionEvent(struct UObject* WorldContext, struct UAISenseEvent* PerceptionEvent); // Function AIModule.AIPerceptionSystem.ReportPerceptionEvent // Final|Native|Static|Public|BlueprintCallable // @ game+0x240b550
	void ReportEvent(struct UAISenseEvent* PerceptionEvent); // Function AIModule.AIPerceptionSystem.ReportEvent // Final|Native|Public|BlueprintCallable // @ game+0x240b310
	bool RegisterPerceptionStimuliSource(struct UObject* WorldContext, struct UClass* Sense, struct AActor* Target); // Function AIModule.AIPerceptionSystem.RegisterPerceptionStimuliSource // Final|Native|Static|Public|BlueprintCallable // @ game+0x240b030
	void OnPerceptionStimuliSourceEndPlay(char EndPlayReason); // Function AIModule.AIPerceptionSystem.OnPerceptionStimuliSourceEndPlay // Final|Native|Protected // @ game+0x240af30
	struct UClass* GetSenseClassForStimulus(struct UObject* WorldContext, struct FAIStimulus Stimulus); // Function AIModule.AIPerceptionSystem.GetSenseClassForStimulus // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x2409510
};

// Class AIModule.AIPerceptionComponent
// Size: 0x1c8 (Inherited: 0xc8)
struct UAIPerceptionComponent : UActorComponent {
	float HearingRange; // 0xc8(0x04)
	float LoSHearingRange; // 0xcc(0x04)
	float SightRadius; // 0xd0(0x04)
	float LoseSightRadius; // 0xd4(0x04)
	float PeripheralVisionAngle; // 0xd8(0x04)
	char UnknownData_DC[0x4]; // 0xdc(0x04)
	struct TArray<struct UAISenseConfig*> SensesConfig; // 0xe0(0x10)
	struct UClass* DominantSense; // 0xf0(0x08)
	char UnknownData_F8[0x10]; // 0xf8(0x10)
	struct AAIController* AIOwner; // 0x108(0x08)
	char UnknownData_110[0x80]; // 0x110(0x80)
	struct FMulticastDelegate OnPerceptionUpdated; // 0x190(0x10)
	struct FMulticastDelegate OnTargetPerceptionUpdated; // 0x1a0(0x10)
	char UnknownData_1B0[0x18]; // 0x1b0(0x18)

	void RequestStimuliListenerUpdate(); // Function AIModule.AIPerceptionComponent.RequestStimuliListenerUpdate // Final|Native|Public|BlueprintCallable // @ game+0x240b800
	void OnOwnerEndPlay(char EndPlayReason); // Function AIModule.AIPerceptionComponent.OnOwnerEndPlay // Final|Native|Public // @ game+0x240aeb0
	bool IsIgnored(struct AActor* Actor); // Function AIModule.AIPerceptionComponent.IsIgnored // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x2409e20
	void GetPerceivedHostileActors(struct TArray<struct AActor*> OutActors); // Function AIModule.AIPerceptionComponent.GetPerceivedHostileActors // Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const // @ game+0x24091c0
	void GetPerceivedActors(struct UClass* SenseToUse, struct TArray<struct AActor*> OutActors); // Function AIModule.AIPerceptionComponent.GetPerceivedActors // Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const // @ game+0x24090d0
	bool GetActorsPerception(struct AActor* Actor, struct FActorPerceptionBlueprintInfo Info); // Function AIModule.AIPerceptionComponent.GetActorsPerception // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x2407db0
};

// Class AIModule.AIPerceptionStimuliSourceComponent
// Size: 0xe0 (Inherited: 0xc8)
struct UAIPerceptionStimuliSourceComponent : UActorComponent {
	char bAutoRegisterAsSource : 1; // 0xc8(0x01)
	char UnknownData_C8_1 : 7; // 0xc8(0x01)
	char UnknownData_C9[0x7]; // 0xc9(0x07)
	struct TArray<struct UClass*> RegisterAsSourceForSenses; // 0xd0(0x10)

	void UnregisterFromSense(struct UClass* SenseClass); // Function AIModule.AIPerceptionStimuliSourceComponent.UnregisterFromSense // Final|Native|Public|BlueprintCallable // @ game+0x240daa0
	void UnregisterFromPerceptionSystem(); // Function AIModule.AIPerceptionStimuliSourceComponent.UnregisterFromPerceptionSystem // Final|Native|Public|BlueprintCallable // @ game+0x240da80
	void RegisterWithPerceptionSystem(); // Function AIModule.AIPerceptionStimuliSourceComponent.RegisterWithPerceptionSystem // Final|Native|Public|BlueprintCallable // @ game+0x240b120
	void RegisterForSense(struct UClass* SenseClass); // Function AIModule.AIPerceptionStimuliSourceComponent.RegisterForSense // Final|Native|Public|BlueprintCallable // @ game+0x240afb0
};

// Class AIModule.AIResource_Movement
// Size: 0x38 (Inherited: 0x38)
struct UAIResource_Movement : UGameplayTaskResource {
};

// Class AIModule.AIResource_Logic
// Size: 0x38 (Inherited: 0x38)
struct UAIResource_Logic : UGameplayTaskResource {
};

// Class AIModule.AISense_Blueprint
// Size: 0xb0 (Inherited: 0x88)
struct UAISense_Blueprint : UAISense {
	struct UClass* ListenerDataType; // 0x88(0x08)
	struct TArray<struct UAIPerceptionComponent*> ListenerContainer; // 0x90(0x10)
	struct TArray<struct UAISenseEvent*> UnprocessedEvents; // 0xa0(0x10)

	float OnUpdate(struct TArray<struct UAISenseEvent*> EventsToProcess); // Function AIModule.AISense_Blueprint.OnUpdate // Event|Public|HasOutParms|BlueprintEvent // @ game+0x1848130
	void OnListenerUpdated(struct AActor* ActorListener, struct UAIPerceptionComponent* PerceptionComponent); // Function AIModule.AISense_Blueprint.OnListenerUpdated // Event|Public|BlueprintEvent // @ game+0x1848130
	void OnListenerUnregistered(struct AActor* ActorListener, struct UAIPerceptionComponent* PerceptionComponent); // Function AIModule.AISense_Blueprint.OnListenerUnregistered // Event|Public|BlueprintEvent // @ game+0x1848130
	void OnListenerRegistered(struct AActor* ActorListener, struct UAIPerceptionComponent* PerceptionComponent); // Function AIModule.AISense_Blueprint.OnListenerRegistered // Event|Public|BlueprintEvent // @ game+0x1848130
	void K2_OnNewPawn(struct APawn* NewPawn); // Function AIModule.AISense_Blueprint.K2_OnNewPawn // Event|Public|BlueprintEvent // @ game+0x1848130
	void GetAllListenerComponents(struct TArray<struct UAIPerceptionComponent*> ListenerComponents); // Function AIModule.AISense_Blueprint.GetAllListenerComponents // Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const // @ game+0x2407f70
	void GetAllListenerActors(struct TArray<struct AActor*> ListenerActors); // Function AIModule.AISense_Blueprint.GetAllListenerActors // Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const // @ game+0x2407ec0
};

// Class AIModule.AISense_Damage
// Size: 0x98 (Inherited: 0x88)
struct UAISense_Damage : UAISense {
	struct TArray<struct FAIDamageEvent> RegisteredEvents; // 0x88(0x10)

	void ReportDamageEvent(struct UObject* WorldContext, struct AActor* DamagedActor, struct AActor* Instigator, float DamageAmount, struct FVector EventLocation, struct FVector HitLocation); // Function AIModule.AISense_Damage.ReportDamageEvent // Final|Native|Static|Public|HasDefaults|BlueprintCallable // @ game+0x240b140
};

// Class AIModule.AISense_Hearing
// Size: 0x120 (Inherited: 0x88)
struct UAISense_Hearing : UAISense {
	int32_t MaxNoisesPerTick; // 0x88(0x04)
	int32_t MaxNoisesStored; // 0x8c(0x04)
	char UnknownData_90[0x8]; // 0x90(0x08)
	struct TArray<struct FAINoiseEvent> NoiseEventsArrayA; // 0x98(0x10)
	struct TArray<struct FAINoiseEvent> NoiseEventsArrayB; // 0xa8(0x10)
	char UnknownData_B8[0x10]; // 0xb8(0x10)
	float SpeedOfSoundSq; // 0xc8(0x04)
	char UnknownData_CC[0x54]; // 0xcc(0x54)

	void ReportNoiseEvent(struct UObject* WorldContext, struct FVector NoiseLocation, float Loudness, struct AActor* Instigator, float MaxRange, struct FName Tag); // Function AIModule.AISense_Hearing.ReportNoiseEvent // Final|Native|Static|Public|HasDefaults|BlueprintCallable // @ game+0x240b390
};

// Class AIModule.AISense_Prediction
// Size: 0x98 (Inherited: 0x88)
struct UAISense_Prediction : UAISense {
	struct TArray<struct FAIPredictionEvent> RegisteredEvents; // 0x88(0x10)

	void RequestPawnPredictionEvent(struct APawn* Requestor, struct AActor* PredictedActor, float PredictionTime); // Function AIModule.AISense_Prediction.RequestPawnPredictionEvent // Final|Native|Static|Public|BlueprintCallable // @ game+0x240b700
	void RequestControllerPredictionEvent(struct AAIController* Requestor, struct AActor* PredictedActor, float PredictionTime); // Function AIModule.AISense_Prediction.RequestControllerPredictionEvent // Final|Native|Static|Public|BlueprintCallable // @ game+0x240b600
};

// Class AIModule.AISense_Sight
// Size: 0x150 (Inherited: 0x88)
struct UAISense_Sight : UAISense {
	char UnknownData_88[0xb0]; // 0x88(0xb0)
	int32_t MaxTracesPerTick; // 0x138(0x04)
	float HighImportanceQueryDistanceThreshold; // 0x13c(0x04)
	char UnknownData_140[0x4]; // 0x140(0x04)
	float MaxQueryImportance; // 0x144(0x04)
	float SightLimitQueryImportance; // 0x148(0x04)
	char UnknownData_14C[0x4]; // 0x14c(0x04)
};

// Class AIModule.AISense_Team
// Size: 0x98 (Inherited: 0x88)
struct UAISense_Team : UAISense {
	struct TArray<struct FAITeamStimulusEvent> RegisteredEvents; // 0x88(0x10)
};

// Class AIModule.AISense_Touch
// Size: 0x98 (Inherited: 0x88)
struct UAISense_Touch : UAISense {
	struct TArray<struct FAITouchEvent> RegisteredEvents; // 0x88(0x10)
};

// Class AIModule.AISenseBlueprintListener
// Size: 0xa8 (Inherited: 0xa8)
struct UAISenseBlueprintListener : UUserDefinedStruct {
};

// Class AIModule.AISenseConfig
// Size: 0x30 (Inherited: 0x28)
struct UAISenseConfig : UObject {
	float MaxAge; // 0x28(0x04)
	char bStartsEnabled : 1; // 0x2c(0x01)
	char UnknownData_2C_1 : 7; // 0x2c(0x01)
	char UnknownData_2D[0x3]; // 0x2d(0x03)
};

// Class AIModule.AISenseConfig_Blueprint
// Size: 0x38 (Inherited: 0x30)
struct UAISenseConfig_Blueprint : UAISenseConfig {
	struct UClass* Implementation; // 0x30(0x08)
};

// Class AIModule.AISenseConfig_Damage
// Size: 0x38 (Inherited: 0x30)
struct UAISenseConfig_Damage : UAISenseConfig {
	struct UClass* Implementation; // 0x30(0x08)
};

// Class AIModule.AISenseConfig_Hearing
// Size: 0x48 (Inherited: 0x30)
struct UAISenseConfig_Hearing : UAISenseConfig {
	struct UClass* Implementation; // 0x30(0x08)
	float HearingRange; // 0x38(0x04)
	float LoSHearingRange; // 0x3c(0x04)
	char bUseLoSHearing : 1; // 0x40(0x01)
	char UnknownData_40_1 : 7; // 0x40(0x01)
	char UnknownData_41[0x3]; // 0x41(0x03)
	struct FAISenseAffiliationFilter DetectionByAffiliation; // 0x44(0x04)
};

// Class AIModule.AISenseConfig_Prediction
// Size: 0x30 (Inherited: 0x30)
struct UAISenseConfig_Prediction : UAISenseConfig {
};

// Class AIModule.AISenseConfig_Sight
// Size: 0x50 (Inherited: 0x30)
struct UAISenseConfig_Sight : UAISenseConfig {
	struct UClass* Implementation; // 0x30(0x08)
	float SightRadius; // 0x38(0x04)
	float LoseSightRadius; // 0x3c(0x04)
	float PeripheralVisionAngleDegrees; // 0x40(0x04)
	struct FAISenseAffiliationFilter DetectionByAffiliation; // 0x44(0x04)
	float AutoSuccessRangeFromLastSeenLocation; // 0x48(0x04)
	char UnknownData_4C[0x4]; // 0x4c(0x04)
};

// Class AIModule.AISenseConfig_Team
// Size: 0x30 (Inherited: 0x30)
struct UAISenseConfig_Team : UAISenseConfig {
};

// Class AIModule.AISenseConfig_Touch
// Size: 0x30 (Inherited: 0x30)
struct UAISenseConfig_Touch : UAISenseConfig {
};

// Class AIModule.AISenseEvent
// Size: 0x28 (Inherited: 0x28)
struct UAISenseEvent : UObject {
};

// Class AIModule.AISenseEvent_Damage
// Size: 0x58 (Inherited: 0x28)
struct UAISenseEvent_Damage : UAISenseEvent {
	struct FAIDamageEvent Event; // 0x28(0x30)
};

// Class AIModule.AISenseEvent_Hearing
// Size: 0x58 (Inherited: 0x28)
struct UAISenseEvent_Hearing : UAISenseEvent {
	struct FAINoiseEvent Event; // 0x28(0x30)
};

// Class AIModule.AISightTargetInterface
// Size: 0x28 (Inherited: 0x28)
struct UAISightTargetInterface : UInterface {
};

// Class AIModule.AITask
// Size: 0x60 (Inherited: 0x58)
struct UAITask : UGameplayTask {
	struct AAIController* OwnerController; // 0x58(0x08)
};

// Class AIModule.AITask_MoveTo
// Size: 0xb0 (Inherited: 0x60)
struct UAITask_MoveTo : UAITask {
	struct FMulticastDelegate OnRequestFailed; // 0x60(0x10)
	struct FMulticastDelegate OnMoveFinished; // 0x70(0x10)
	struct FVector MoveGoalLocation; // 0x80(0x0c)
	char UnknownData_8C[0xc]; // 0x8c(0x0c)
	struct AActor* MoveGoalActor; // 0x98(0x08)
	float MoveAcceptanceRadius; // 0xa0(0x04)
	bool bShouldStopOnOverlap; // 0xa4(0x01)
	bool bShouldAcceptPartialPath; // 0xa5(0x01)
	bool bShouldUsePathfinding; // 0xa6(0x01)
	char UnknownData_A7[0x9]; // 0xa7(0x09)

	struct UAITask_MoveTo* AIMoveTo(struct AAIController* Controller, struct FVector GoalLocation, struct AActor* GoalActor, float AcceptanceRadius, char StopOnOverlap, char AcceptPartialPath, bool bUsePathfinding, bool bLockAILogic); // Function AIModule.AITask_MoveTo.AIMoveTo // Final|Native|Static|Public|HasDefaults|BlueprintCallable // @ game+0x24070a0
};

// Class AIModule.BrainComponent
// Size: 0x128 (Inherited: 0xc8)
struct UBrainComponent : UActorComponent {
	char UnknownData_C8[0x8]; // 0xc8(0x08)
	struct UBlackboardComponent* BlackboardComp; // 0xd0(0x08)
	struct AAIController* AIOwner; // 0xd8(0x08)
	char UnknownData_E0[0x48]; // 0xe0(0x48)

	void StopLogic(struct FString Reason); // Function AIModule.BrainComponent.StopLogic // Native|Public|BlueprintCallable // @ game+0x240d7c0
	void RestartLogic(); // Function AIModule.BrainComponent.RestartLogic // Native|Public|BlueprintCallable // @ game+0x240b820
};

// Class AIModule.BehaviorTreeComponent
// Size: 0x288 (Inherited: 0x128)
struct UBehaviorTreeComponent : UBrainComponent {
	char UnknownData_128[0x20]; // 0x128(0x20)
	struct TArray<struct UBTNode*> NodeInstances; // 0x148(0x10)
	char UnknownData_158[0x130]; // 0x158(0x130)

	void SetDynamicSubtree(struct FGameplayTag InjectTag, struct UBehaviorTree* BehaviorAsset); // Function AIModule.BehaviorTreeComponent.SetDynamicSubtree // Native|Public|BlueprintCallable // @ game+0x240c880
	float GetTagCooldownEndTime(struct FGameplayTag CooldownTag); // Function AIModule.BehaviorTreeComponent.GetTagCooldownEndTime // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x2409640
	void AddCooldownTagDuration(struct FGameplayTag CooldownTag, float CoolDownDuration, bool bAddToExistingDuration); // Function AIModule.BehaviorTreeComponent.AddCooldownTagDuration // Final|Native|Public|BlueprintCallable // @ game+0x24072e0
};

// Class AIModule.BTCompositeNode
// Size: 0x88 (Inherited: 0x58)
struct UBTCompositeNode : UBTNode {
	struct TArray<struct FBTCompositeChild> Children; // 0x58(0x10)
	struct TArray<struct UBTService*> Services; // 0x68(0x10)
	char UnknownData_78[0x10]; // 0x78(0x10)
};

// Class AIModule.BehaviorTree
// Size: 0x60 (Inherited: 0x28)
struct UBehaviorTree : UObject {
	struct UBTCompositeNode* RootNode; // 0x28(0x08)
	struct UBlackboardData* BlackboardAsset; // 0x30(0x08)
	struct TArray<struct UBTDecorator*> RootDecorators; // 0x38(0x10)
	struct TArray<struct FBTDecoratorLogic> RootDecoratorOps; // 0x48(0x10)
	char UnknownData_58[0x8]; // 0x58(0x08)
};

// Class AIModule.BehaviorTreeManager
// Size: 0x50 (Inherited: 0x28)
struct UBehaviorTreeManager : UObject {
	int32_t MaxDebuggerSteps; // 0x28(0x04)
	char UnknownData_2C[0x4]; // 0x2c(0x04)
	struct TArray<struct FBehaviorTreeTemplateInfo> LoadedTemplates; // 0x30(0x10)
	struct TArray<struct UBehaviorTreeComponent*> ActiveComponents; // 0x40(0x10)
};

// Class AIModule.BlackboardKeyType_Enum
// Size: 0x50 (Inherited: 0x30)
struct UBlackboardKeyType_Enum : UBlackboardKeyType {
	struct UEnum* EnumType; // 0x30(0x08)
	struct FString EnumName; // 0x38(0x10)
	char bIsEnumNameValid : 1; // 0x48(0x01)
	char UnknownData_48_1 : 7; // 0x48(0x01)
	char UnknownData_49[0x7]; // 0x49(0x07)
};

// Class AIModule.BlackboardKeyType_NativeEnum
// Size: 0x48 (Inherited: 0x30)
struct UBlackboardKeyType_NativeEnum : UBlackboardKeyType {
	struct FString EnumName; // 0x30(0x10)
	struct UEnum* EnumType; // 0x40(0x08)
};

// Class AIModule.BlackboardData
// Size: 0x48 (Inherited: 0x28)
struct UBlackboardData : UDataAsset {
	struct UBlackboardData* Parent; // 0x28(0x08)
	struct TArray<struct FBlackboardEntry> Keys; // 0x30(0x10)
	char bHasSynchronizedKeys : 1; // 0x40(0x01)
	char UnknownData_40_1 : 7; // 0x40(0x01)
	char UnknownData_41[0x7]; // 0x41(0x07)
};

// Class AIModule.BlackboardComponent
// Size: 0x210 (Inherited: 0xc8)
struct UBlackboardComponent : UActorComponent {
	struct UBrainComponent* BrainComp; // 0xc8(0x08)
	struct UBlackboardData* BlackboardAsset; // 0xd0(0x08)
	char UnknownData_D8[0x20]; // 0xd8(0x20)
	struct TArray<struct UBlackboardKeyType*> KeyInstances; // 0xf8(0x10)
	char UnknownData_108[0x108]; // 0x108(0x108)

	void SetValueAsVector(struct FName KeyName, struct FVector VectorValue); // Function AIModule.BlackboardComponent.SetValueAsVector // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x240d450
	void SetValueAsString(struct FName KeyName, struct FString StringValue); // Function AIModule.BlackboardComponent.SetValueAsString // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x240d350
	void SetValueAsRotator(struct FName KeyName, struct FRotator VectorValue); // Function AIModule.BlackboardComponent.SetValueAsRotator // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x240d260
	void SetValueAsObject(struct FName KeyName, struct UObject* ObjectValue); // Function AIModule.BlackboardComponent.SetValueAsObject // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x240d190
	void SetValueAsName(struct FName KeyName, struct FName NameValue); // Function AIModule.BlackboardComponent.SetValueAsName // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x240d0c0
	void SetValueAsInt(struct FName KeyName, int32_t IntValue); // Function AIModule.BlackboardComponent.SetValueAsInt // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x240cff0
	void SetValueAsFloat(struct FName KeyName, float FloatValue); // Function AIModule.BlackboardComponent.SetValueAsFloat // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x240cf20
	void SetValueAsEnum(struct FName KeyName, char EnumValue); // Function AIModule.BlackboardComponent.SetValueAsEnum // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x240ce50
	void SetValueAsClass(struct FName KeyName, struct UClass* ClassValue); // Function AIModule.BlackboardComponent.SetValueAsClass // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x240cd80
	void SetValueAsBool(struct FName KeyName, bool BoolValue); // Function AIModule.BlackboardComponent.SetValueAsBool // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x240ccb0
	bool IsVectorValueSet(struct FName KeyName); // Function AIModule.BlackboardComponent.IsVectorValueSet // Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const // @ game+0x240a0f0
	struct FVector GetValueAsVector(struct FName KeyName); // Function AIModule.BlackboardComponent.GetValueAsVector // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x2409ce0
	struct FString GetValueAsString(struct FName KeyName); // Function AIModule.BlackboardComponent.GetValueAsString // Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const // @ game+0x2409be0
	struct FRotator GetValueAsRotator(struct FName KeyName); // Function AIModule.BlackboardComponent.GetValueAsRotator // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x2409b30
	struct UObject* GetValueAsObject(struct FName KeyName); // Function AIModule.BlackboardComponent.GetValueAsObject // Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const // @ game+0x2409a90
	struct FName GetValueAsName(struct FName KeyName); // Function AIModule.BlackboardComponent.GetValueAsName // Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const // @ game+0x24099f0
	int32_t GetValueAsInt(struct FName KeyName); // Function AIModule.BlackboardComponent.GetValueAsInt // Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const // @ game+0x2409950
	float GetValueAsFloat(struct FName KeyName); // Function AIModule.BlackboardComponent.GetValueAsFloat // Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const // @ game+0x24098b0
	char GetValueAsEnum(struct FName KeyName); // Function AIModule.BlackboardComponent.GetValueAsEnum // Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const // @ game+0x2409810
	struct UClass* GetValueAsClass(struct FName KeyName); // Function AIModule.BlackboardComponent.GetValueAsClass // Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const // @ game+0x2409770
	bool GetValueAsBool(struct FName KeyName); // Function AIModule.BlackboardComponent.GetValueAsBool // Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const // @ game+0x24096d0
	bool GetRotationFromEntry(struct FName KeyName, struct FRotator ResultRotation); // Function AIModule.BlackboardComponent.GetRotationFromEntry // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x2409420
	bool GetLocationFromEntry(struct FName KeyName, struct FVector ResultLocation); // Function AIModule.BlackboardComponent.GetLocationFromEntry // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x2408e10
	void ClearValueAsVector(struct FName KeyName); // Function AIModule.BlackboardComponent.ClearValueAsVector // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x2407800
	void ClearValueAsRotator(struct FName KeyName); // Function AIModule.BlackboardComponent.ClearValueAsRotator // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x2407770
	void ClearValue(struct FName KeyName); // Function AIModule.BlackboardComponent.ClearValue // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x24076e0
};

// Class AIModule.BlackboardKeyType_Bool
// Size: 0x30 (Inherited: 0x30)
struct UBlackboardKeyType_Bool : UBlackboardKeyType {
};

// Class AIModule.BlackboardKeyType_Class
// Size: 0x38 (Inherited: 0x30)
struct UBlackboardKeyType_Class : UBlackboardKeyType {
	struct UClass* BaseClass; // 0x30(0x08)
};

// Class AIModule.BlackboardKeyType_Float
// Size: 0x30 (Inherited: 0x30)
struct UBlackboardKeyType_Float : UBlackboardKeyType {
};

// Class AIModule.BlackboardKeyType_Int
// Size: 0x30 (Inherited: 0x30)
struct UBlackboardKeyType_Int : UBlackboardKeyType {
};

// Class AIModule.BlackboardKeyType_Name
// Size: 0x30 (Inherited: 0x30)
struct UBlackboardKeyType_Name : UBlackboardKeyType {
};

// Class AIModule.BlackboardKeyType_Object
// Size: 0x38 (Inherited: 0x30)
struct UBlackboardKeyType_Object : UBlackboardKeyType {
	struct UClass* BaseClass; // 0x30(0x08)
};

// Class AIModule.BlackboardKeyType_Rotator
// Size: 0x30 (Inherited: 0x30)
struct UBlackboardKeyType_Rotator : UBlackboardKeyType {
};

// Class AIModule.BlackboardKeyType_String
// Size: 0x40 (Inherited: 0x30)
struct UBlackboardKeyType_String : UBlackboardKeyType {
	struct FString StringValue; // 0x30(0x10)
};

// Class AIModule.BlackboardKeyType_Vector
// Size: 0x30 (Inherited: 0x30)
struct UBlackboardKeyType_Vector : UBlackboardKeyType {
};

// Class AIModule.BTFunctionLibrary
// Size: 0x28 (Inherited: 0x28)
struct UBTFunctionLibrary : UBlueprintFunctionLibrary {

	void StopUsingExternalEvent(struct UBTNode* NodeOwner); // Function AIModule.BTFunctionLibrary.StopUsingExternalEvent // Final|Native|Static|Public|BlueprintCallable // @ game+0x240d870
	void StartUsingExternalEvent(struct UBTNode* NodeOwner, struct AActor* OwningActor); // Function AIModule.BTFunctionLibrary.StartUsingExternalEvent // Final|Native|Static|Public|BlueprintCallable // @ game+0x240d710
	void SetBlackboardValueAsVector(struct UBTNode* NodeOwner, struct FBlackboardKeySelector Key, struct FVector Value); // Function AIModule.BTFunctionLibrary.SetBlackboardValueAsVector // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x240c720
	void SetBlackboardValueAsString(struct UBTNode* NodeOwner, struct FBlackboardKeySelector Key, struct FString Value); // Function AIModule.BTFunctionLibrary.SetBlackboardValueAsString // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x240c5c0
	void SetBlackboardValueAsRotator(struct UBTNode* NodeOwner, struct FBlackboardKeySelector Key, struct FRotator Value); // Function AIModule.BTFunctionLibrary.SetBlackboardValueAsRotator // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x240c460
	void SetBlackboardValueAsObject(struct UBTNode* NodeOwner, struct FBlackboardKeySelector Key, struct UObject* Value); // Function AIModule.BTFunctionLibrary.SetBlackboardValueAsObject // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x240c320
	void SetBlackboardValueAsName(struct UBTNode* NodeOwner, struct FBlackboardKeySelector Key, struct FName Value); // Function AIModule.BTFunctionLibrary.SetBlackboardValueAsName // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x240c1e0
	void SetBlackboardValueAsInt(struct UBTNode* NodeOwner, struct FBlackboardKeySelector Key, int32_t Value); // Function AIModule.BTFunctionLibrary.SetBlackboardValueAsInt // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x240c0a0
	void SetBlackboardValueAsFloat(struct UBTNode* NodeOwner, struct FBlackboardKeySelector Key, float Value); // Function AIModule.BTFunctionLibrary.SetBlackboardValueAsFloat // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x240bf60
	void SetBlackboardValueAsEnum(struct UBTNode* NodeOwner, struct FBlackboardKeySelector Key, char Value); // Function AIModule.BTFunctionLibrary.SetBlackboardValueAsEnum // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x240be20
	void SetBlackboardValueAsClass(struct UBTNode* NodeOwner, struct FBlackboardKeySelector Key, struct UClass* Value); // Function AIModule.BTFunctionLibrary.SetBlackboardValueAsClass // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x240bce0
	void SetBlackboardValueAsBool(struct UBTNode* NodeOwner, struct FBlackboardKeySelector Key, bool Value); // Function AIModule.BTFunctionLibrary.SetBlackboardValueAsBool // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x240bba0
	struct UBlackboardComponent* GetOwnersBlackboard(struct UBTNode* NodeOwner); // Function AIModule.BTFunctionLibrary.GetOwnersBlackboard // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x2408fb0
	struct UBehaviorTreeComponent* GetOwnerComponent(struct UBTNode* NodeOwner); // Function AIModule.BTFunctionLibrary.GetOwnerComponent // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x2408f30
	struct FVector GetBlackboardValueAsVector(struct UBTNode* NodeOwner, struct FBlackboardKeySelector Key); // Function AIModule.BTFunctionLibrary.GetBlackboardValueAsVector // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x2408b10
	struct FString GetBlackboardValueAsString(struct UBTNode* NodeOwner, struct FBlackboardKeySelector Key); // Function AIModule.BTFunctionLibrary.GetBlackboardValueAsString // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x24089c0
	struct FRotator GetBlackboardValueAsRotator(struct UBTNode* NodeOwner, struct FBlackboardKeySelector Key); // Function AIModule.BTFunctionLibrary.GetBlackboardValueAsRotator // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x24088b0
	struct UObject* GetBlackboardValueAsObject(struct UBTNode* NodeOwner, struct FBlackboardKeySelector Key); // Function AIModule.BTFunctionLibrary.GetBlackboardValueAsObject // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x24087b0
	struct FName GetBlackboardValueAsName(struct UBTNode* NodeOwner, struct FBlackboardKeySelector Key); // Function AIModule.BTFunctionLibrary.GetBlackboardValueAsName // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x24086a0
	int32_t GetBlackboardValueAsInt(struct UBTNode* NodeOwner, struct FBlackboardKeySelector Key); // Function AIModule.BTFunctionLibrary.GetBlackboardValueAsInt // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x24085a0
	float GetBlackboardValueAsFloat(struct UBTNode* NodeOwner, struct FBlackboardKeySelector Key); // Function AIModule.BTFunctionLibrary.GetBlackboardValueAsFloat // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x24084a0
	char GetBlackboardValueAsEnum(struct UBTNode* NodeOwner, struct FBlackboardKeySelector Key); // Function AIModule.BTFunctionLibrary.GetBlackboardValueAsEnum // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x24083a0
	struct UClass* GetBlackboardValueAsClass(struct UBTNode* NodeOwner, struct FBlackboardKeySelector Key); // Function AIModule.BTFunctionLibrary.GetBlackboardValueAsClass // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x24082a0
	bool GetBlackboardValueAsBool(struct UBTNode* NodeOwner, struct FBlackboardKeySelector Key); // Function AIModule.BTFunctionLibrary.GetBlackboardValueAsBool // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x24081a0
	struct AActor* GetBlackboardValueAsActor(struct UBTNode* NodeOwner, struct FBlackboardKeySelector Key); // Function AIModule.BTFunctionLibrary.GetBlackboardValueAsActor // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x24080a0
	void ClearBlackboardValueAsVector(struct UBTNode* NodeOwner, struct FBlackboardKeySelector Key); // Function AIModule.BTFunctionLibrary.ClearBlackboardValueAsVector // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x24075f0
	void ClearBlackboardValue(struct UBTNode* NodeOwner, struct FBlackboardKeySelector Key); // Function AIModule.BTFunctionLibrary.ClearBlackboardValue // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x2407500
};

// Class AIModule.BTDecorator_Blackboard
// Size: 0xc0 (Inherited: 0x90)
struct UBTDecorator_Blackboard : UBTDecorator_BlackboardBase {
	int32_t IntValue; // 0x90(0x04)
	float FloatValue; // 0x94(0x04)
	struct FString StringValue; // 0x98(0x10)
	struct FString CachedDescription; // 0xa8(0x10)
	char OperationType; // 0xb8(0x01)
	char NotifyObserver; // 0xb9(0x01)
	char UnknownData_BA[0x6]; // 0xba(0x06)
};

// Class AIModule.BTDecorator_ConditionalLoop
// Size: 0xc0 (Inherited: 0xc0)
struct UBTDecorator_ConditionalLoop : UBTDecorator_Blackboard {
};

// Class AIModule.BTDecorator_IsAtLocation
// Size: 0x98 (Inherited: 0x90)
struct UBTDecorator_IsAtLocation : UBTDecorator_BlackboardBase {
	float AcceptableRadius; // 0x90(0x04)
	bool bUseNavAgentGoalLocation; // 0x94(0x01)
	char UnknownData_95[0x3]; // 0x95(0x03)
};

// Class AIModule.BTDecorator_IsBBEntryOfClass
// Size: 0x98 (Inherited: 0x90)
struct UBTDecorator_IsBBEntryOfClass : UBTDecorator_BlackboardBase {
	struct UClass* TestClass; // 0x90(0x08)
};

// Class AIModule.BTDecorator_BlueprintBase
// Size: 0xa0 (Inherited: 0x68)
struct UBTDecorator_BlueprintBase : UBTDecorator {
	struct AAIController* AIOwner; // 0x68(0x08)
	struct AActor* ActorOwner; // 0x70(0x08)
	struct TArray<struct FName> ObservedKeyNames; // 0x78(0x10)
	char UnknownData_88[0x10]; // 0x88(0x10)
	char bShowPropertyDetails : 1; // 0x98(0x01)
	char bCheckConditionOnlyBlackBoardChanges : 1; // 0x98(0x01)
	char bIsObservingBB : 1; // 0x98(0x01)
	char UnknownData_98_3 : 5; // 0x98(0x01)
	char UnknownData_99[0x7]; // 0x99(0x07)

	void ReceiveTickAI(struct AAIController* OwnerController, struct APawn* ControlledPawn, float DeltaSeconds); // Function AIModule.BTDecorator_BlueprintBase.ReceiveTickAI // Event|Protected|BlueprintEvent // @ game+0x1848130
	void ReceiveTick(struct AActor* OwnerActor, float DeltaSeconds); // Function AIModule.BTDecorator_BlueprintBase.ReceiveTick // Event|Protected|BlueprintEvent // @ game+0x1848130
	void ReceiveObserverDeactivatedAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // Function AIModule.BTDecorator_BlueprintBase.ReceiveObserverDeactivatedAI // Event|Protected|BlueprintEvent // @ game+0x1848130
	void ReceiveObserverDeactivated(struct AActor* OwnerActor); // Function AIModule.BTDecorator_BlueprintBase.ReceiveObserverDeactivated // Event|Protected|BlueprintEvent // @ game+0x1848130
	void ReceiveObserverActivatedAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // Function AIModule.BTDecorator_BlueprintBase.ReceiveObserverActivatedAI // Event|Protected|BlueprintEvent // @ game+0x1848130
	void ReceiveObserverActivated(struct AActor* OwnerActor); // Function AIModule.BTDecorator_BlueprintBase.ReceiveObserverActivated // Event|Protected|BlueprintEvent // @ game+0x1848130
	void ReceiveExecutionStartAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // Function AIModule.BTDecorator_BlueprintBase.ReceiveExecutionStartAI // Event|Protected|BlueprintEvent // @ game+0x1848130
	void ReceiveExecutionStart(struct AActor* OwnerActor); // Function AIModule.BTDecorator_BlueprintBase.ReceiveExecutionStart // Event|Protected|BlueprintEvent // @ game+0x1848130
	void ReceiveExecutionFinishAI(struct AAIController* OwnerController, struct APawn* ControlledPawn, char NodeResult); // Function AIModule.BTDecorator_BlueprintBase.ReceiveExecutionFinishAI // Event|Protected|BlueprintEvent // @ game+0x1848130
	void ReceiveExecutionFinish(struct AActor* OwnerActor, char NodeResult); // Function AIModule.BTDecorator_BlueprintBase.ReceiveExecutionFinish // Event|Protected|BlueprintEvent // @ game+0x1848130
	void ReceiveConditionCheck(struct AActor* OwnerActor); // Function AIModule.BTDecorator_BlueprintBase.ReceiveConditionCheck // Event|Protected|BlueprintEvent // @ game+0x1848130
	bool PerformConditionCheckAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // Function AIModule.BTDecorator_BlueprintBase.PerformConditionCheckAI // Event|Protected|BlueprintEvent // @ game+0x1848130
	bool PerformConditionCheck(struct AActor* OwnerActor); // Function AIModule.BTDecorator_BlueprintBase.PerformConditionCheck // Event|Protected|BlueprintEvent // @ game+0x1848130
	bool IsDecoratorObserverActive(); // Function AIModule.BTDecorator_BlueprintBase.IsDecoratorObserverActive // Final|Native|Protected|BlueprintCallable|BlueprintPure|Const // @ game+0x2409df0
	bool IsDecoratorExecutionActive(); // Function AIModule.BTDecorator_BlueprintBase.IsDecoratorExecutionActive // Final|Native|Protected|BlueprintCallable|BlueprintPure|Const // @ game+0x2409dc0
	void FinishConditionCheck(bool bAllowExecution); // Function AIModule.BTDecorator_BlueprintBase.FinishConditionCheck // Final|Native|Protected|BlueprintCallable // @ game+0x2407bc0
};

// Class AIModule.BTDecorator_CheckGameplayTagsOnActor
// Size: 0xd0 (Inherited: 0x68)
struct UBTDecorator_CheckGameplayTagsOnActor : UBTDecorator {
	struct FBlackboardKeySelector ActorToCheck; // 0x68(0x28)
	char TagsToMatch; // 0x90(0x01)
	char UnknownData_91[0x7]; // 0x91(0x07)
	struct FGameplayTagContainer GameplayTags; // 0x98(0x28)
	struct FString CachedDescription; // 0xc0(0x10)
};

// Class AIModule.BTDecorator_CompareBBEntries
// Size: 0xc0 (Inherited: 0x68)
struct UBTDecorator_CompareBBEntries : UBTDecorator {
	char Operator; // 0x68(0x01)
	char UnknownData_69[0x7]; // 0x69(0x07)
	struct FBlackboardKeySelector BlackboardKeyA; // 0x70(0x28)
	struct FBlackboardKeySelector BlackboardKeyB; // 0x98(0x28)
};

// Class AIModule.BTDecorator_ConeCheck
// Size: 0xf0 (Inherited: 0x68)
struct UBTDecorator_ConeCheck : UBTDecorator {
	float ConeHalfAngle; // 0x68(0x04)
	char UnknownData_6C[0x4]; // 0x6c(0x04)
	struct FBlackboardKeySelector ConeOrigin; // 0x70(0x28)
	struct FBlackboardKeySelector ConeDirection; // 0x98(0x28)
	struct FBlackboardKeySelector Observed; // 0xc0(0x28)
	char UnknownData_E8[0x8]; // 0xe8(0x08)
};

// Class AIModule.BTDecorator_Cooldown
// Size: 0x70 (Inherited: 0x68)
struct UBTDecorator_Cooldown : UBTDecorator {
	float CoolDownTime; // 0x68(0x04)
	char UnknownData_6C[0x4]; // 0x6c(0x04)
};

// Class AIModule.BTDecorator_DoesPathExist
// Size: 0xc8 (Inherited: 0x68)
struct UBTDecorator_DoesPathExist : UBTDecorator {
	struct FBlackboardKeySelector BlackboardKeyA; // 0x68(0x28)
	struct FBlackboardKeySelector BlackboardKeyB; // 0x90(0x28)
	char bUseSelf : 1; // 0xb8(0x01)
	char UnknownData_B8_1 : 7; // 0xb8(0x01)
	char UnknownData_B9[0x3]; // 0xb9(0x03)
	char PathQueryType; // 0xbc(0x01)
	char UnknownData_BD[0x3]; // 0xbd(0x03)
	struct UClass* FilterClass; // 0xc0(0x08)
};

// Class AIModule.BTDecorator_ForceSuccess
// Size: 0x68 (Inherited: 0x68)
struct UBTDecorator_ForceSuccess : UBTDecorator {
};

// Class AIModule.BTDecorator_KeepInCone
// Size: 0xc8 (Inherited: 0x68)
struct UBTDecorator_KeepInCone : UBTDecorator {
	float ConeHalfAngle; // 0x68(0x04)
	char UnknownData_6C[0x4]; // 0x6c(0x04)
	struct FBlackboardKeySelector ConeOrigin; // 0x70(0x28)
	struct FBlackboardKeySelector Observed; // 0x98(0x28)
	char bUseSelfAsOrigin : 1; // 0xc0(0x01)
	char bUseSelfAsObserved : 1; // 0xc0(0x01)
	char UnknownData_C0_2 : 6; // 0xc0(0x01)
	char UnknownData_C1[0x7]; // 0xc1(0x07)
};

// Class AIModule.BTDecorator_Loop
// Size: 0x70 (Inherited: 0x68)
struct UBTDecorator_Loop : UBTDecorator {
	int32_t NumLoops; // 0x68(0x04)
	bool bInfiniteLoop; // 0x6c(0x01)
	char UnknownData_6D[0x3]; // 0x6d(0x03)
};

// Class AIModule.BTDecorator_ReachedMoveGoal
// Size: 0x68 (Inherited: 0x68)
struct UBTDecorator_ReachedMoveGoal : UBTDecorator {
};

// Class AIModule.BTDecorator_SetTagCooldown
// Size: 0x78 (Inherited: 0x68)
struct UBTDecorator_SetTagCooldown : UBTDecorator {
	struct FGameplayTag CooldownTag; // 0x68(0x08)
	float CoolDownDuration; // 0x70(0x04)
	bool bAddToExistingDuration; // 0x74(0x01)
	char UnknownData_75[0x3]; // 0x75(0x03)
};

// Class AIModule.BTDecorator_TagCooldown
// Size: 0x78 (Inherited: 0x68)
struct UBTDecorator_TagCooldown : UBTDecorator {
	struct FGameplayTag CooldownTag; // 0x68(0x08)
	float CoolDownDuration; // 0x70(0x04)
	bool bAddToExistingDuration; // 0x74(0x01)
	bool bActivatesCooldown; // 0x75(0x01)
	char UnknownData_76[0x2]; // 0x76(0x02)
};

// Class AIModule.BTDecorator_TimeLimit
// Size: 0x70 (Inherited: 0x68)
struct UBTDecorator_TimeLimit : UBTDecorator {
	float TimeLimit; // 0x68(0x04)
	char UnknownData_6C[0x4]; // 0x6c(0x04)
};

// Class AIModule.BTService_BlackboardBase
// Size: 0x98 (Inherited: 0x70)
struct UBTService_BlackboardBase : UBTService {
	struct FBlackboardKeySelector BlackboardKey; // 0x70(0x28)
};

// Class AIModule.BTService_DefaultFocus
// Size: 0xa0 (Inherited: 0x98)
struct UBTService_DefaultFocus : UBTService_BlackboardBase {
	char FocusPriority; // 0x98(0x01)
	char UnknownData_99[0x7]; // 0x99(0x07)
};

// Class AIModule.BTService_BlueprintBase
// Size: 0x98 (Inherited: 0x70)
struct UBTService_BlueprintBase : UBTService {
	struct AAIController* AIOwner; // 0x70(0x08)
	struct AActor* ActorOwner; // 0x78(0x08)
	char UnknownData_80[0x10]; // 0x80(0x10)
	char bShowPropertyDetails : 1; // 0x90(0x01)
	char bShowEventDetails : 1; // 0x90(0x01)
	char UnknownData_90_2 : 6; // 0x90(0x01)
	char UnknownData_91[0x7]; // 0x91(0x07)

	void ReceiveTickAI(struct AAIController* OwnerController, struct APawn* ControlledPawn, float DeltaSeconds); // Function AIModule.BTService_BlueprintBase.ReceiveTickAI // Event|Protected|BlueprintEvent // @ game+0x1848130
	void ReceiveTick(struct AActor* OwnerActor, float DeltaSeconds); // Function AIModule.BTService_BlueprintBase.ReceiveTick // Event|Protected|BlueprintEvent // @ game+0x1848130
	void ReceiveSearchStartAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // Function AIModule.BTService_BlueprintBase.ReceiveSearchStartAI // Event|Protected|BlueprintEvent // @ game+0x1848130
	void ReceiveSearchStart(struct AActor* OwnerActor); // Function AIModule.BTService_BlueprintBase.ReceiveSearchStart // Event|Protected|BlueprintEvent // @ game+0x1848130
	void ReceiveDeactivationAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // Function AIModule.BTService_BlueprintBase.ReceiveDeactivationAI // Event|Protected|BlueprintEvent // @ game+0x1848130
	void ReceiveDeactivation(struct AActor* OwnerActor); // Function AIModule.BTService_BlueprintBase.ReceiveDeactivation // Event|Protected|BlueprintEvent // @ game+0x1848130
	void ReceiveActivationAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // Function AIModule.BTService_BlueprintBase.ReceiveActivationAI // Event|Protected|BlueprintEvent // @ game+0x1848130
	void ReceiveActivation(struct AActor* OwnerActor); // Function AIModule.BTService_BlueprintBase.ReceiveActivation // Event|Protected|BlueprintEvent // @ game+0x1848130
	bool IsServiceActive(); // Function AIModule.BTService_BlueprintBase.IsServiceActive // Final|Native|Protected|BlueprintCallable|BlueprintPure|Const // @ game+0x2409eb0
};

// Class AIModule.BTComposite_Selector
// Size: 0x88 (Inherited: 0x88)
struct UBTComposite_Selector : UBTCompositeNode {
};

// Class AIModule.BTComposite_Sequence
// Size: 0x88 (Inherited: 0x88)
struct UBTComposite_Sequence : UBTCompositeNode {
};

// Class AIModule.BTComposite_SimpleParallel
// Size: 0x90 (Inherited: 0x88)
struct UBTComposite_SimpleParallel : UBTCompositeNode {
	char FinishMode; // 0x88(0x01)
	char UnknownData_89[0x7]; // 0x89(0x07)
};

// Class AIModule.BTTask_MoveDirectlyToward
// Size: 0x90 (Inherited: 0x88)
struct UBTTask_MoveDirectlyToward : UBTTask_BlackboardBase {
	float AcceptableRadius; // 0x88(0x04)
	char bDisablePathUpdateOnGoalLocationChange : 1; // 0x8c(0x01)
	char bProjectVectorGoalToNavigation : 1; // 0x8c(0x01)
	char bAllowStrafe : 1; // 0x8c(0x01)
	char bStopOnOverlap : 1; // 0x8c(0x01)
	char UnknownData_8C_4 : 4; // 0x8c(0x01)
	char UnknownData_8D[0x3]; // 0x8d(0x03)
};

// Class AIModule.BTTask_MoveTo
// Size: 0xa0 (Inherited: 0x88)
struct UBTTask_MoveTo : UBTTask_BlackboardBase {
	float AcceptableRadius; // 0x88(0x04)
	char UnknownData_8C[0x4]; // 0x8c(0x04)
	struct UClass* FilterClass; // 0x90(0x08)
	char bAllowStrafe : 1; // 0x98(0x01)
	char bAllowPartialPath : 1; // 0x98(0x01)
	char bStopOnOverlap : 1; // 0x98(0x01)
	char UnknownData_98_3 : 5; // 0x98(0x01)
	char UnknownData_99[0x7]; // 0x99(0x07)
};

// Class AIModule.EnvQueryItemType
// Size: 0x30 (Inherited: 0x28)
struct UEnvQueryItemType : UObject {
	char UnknownData_28[0x8]; // 0x28(0x08)
};

// Class AIModule.EnvQueryTypes
// Size: 0x28 (Inherited: 0x28)
struct UEnvQueryTypes : UObject {
};

// Class AIModule.BTTask_BlueprintBase
// Size: 0x90 (Inherited: 0x60)
struct UBTTask_BlueprintBase : UBTTaskNode {
	struct AAIController* AIOwner; // 0x60(0x08)
	struct AActor* ActorOwner; // 0x68(0x08)
	char UnknownData_70[0x18]; // 0x70(0x18)
	char bShowPropertyDetails : 1; // 0x88(0x01)
	char UnknownData_88_1 : 7; // 0x88(0x01)
	char UnknownData_89[0x7]; // 0x89(0x07)

	void SetFinishOnMessageWithId(struct FName MessageName, int32_t RequestID); // Function AIModule.BTTask_BlueprintBase.SetFinishOnMessageWithId // Final|Native|Protected|BlueprintCallable // @ game+0x240c9d0
	void SetFinishOnMessage(struct FName MessageName); // Function AIModule.BTTask_BlueprintBase.SetFinishOnMessage // Final|Native|Protected|BlueprintCallable // @ game+0x240c950
	void ReceiveTickAI(struct AAIController* OwnerController, struct APawn* ControlledPawn, float DeltaSeconds); // Function AIModule.BTTask_BlueprintBase.ReceiveTickAI // Event|Protected|BlueprintEvent // @ game+0x1848130
	void ReceiveTick(struct AActor* OwnerActor, float DeltaSeconds); // Function AIModule.BTTask_BlueprintBase.ReceiveTick // Event|Protected|BlueprintEvent // @ game+0x1848130
	void ReceiveExecuteAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // Function AIModule.BTTask_BlueprintBase.ReceiveExecuteAI // Event|Protected|BlueprintEvent // @ game+0x1848130
	void ReceiveExecute(struct AActor* OwnerActor); // Function AIModule.BTTask_BlueprintBase.ReceiveExecute // Event|Protected|BlueprintEvent // @ game+0x1848130
	void ReceiveAbortAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // Function AIModule.BTTask_BlueprintBase.ReceiveAbortAI // Event|Protected|BlueprintEvent // @ game+0x1848130
	void ReceiveAbort(struct AActor* OwnerActor); // Function AIModule.BTTask_BlueprintBase.ReceiveAbort // Event|Protected|BlueprintEvent // @ game+0x1848130
	bool IsTaskExecuting(); // Function AIModule.BTTask_BlueprintBase.IsTaskExecuting // Final|Native|Protected|BlueprintCallable|BlueprintPure|Const // @ game+0x2409f10
	bool IsTaskAborting(); // Function AIModule.BTTask_BlueprintBase.IsTaskAborting // Final|Native|Protected|BlueprintCallable|BlueprintPure|Const // @ game+0x2409ee0
	void FinishExecute(bool bSuccess); // Function AIModule.BTTask_BlueprintBase.FinishExecute // Final|Native|Protected|BlueprintCallable // @ game+0x2407c50
	void FinishAbort(); // Function AIModule.BTTask_BlueprintBase.FinishAbort // Final|Native|Protected|BlueprintCallable // @ game+0x2407ba0
};

// Class AIModule.BTTask_MakeNoise
// Size: 0x68 (Inherited: 0x60)
struct UBTTask_MakeNoise : UBTTaskNode {
	float Loudnes; // 0x60(0x04)
	char UnknownData_64[0x4]; // 0x64(0x04)
};

// Class AIModule.PawnAction
// Size: 0x90 (Inherited: 0x28)
struct UPawnAction : UObject {
	struct UPawnAction* ChildAction; // 0x28(0x08)
	struct UPawnAction* ParentAction; // 0x30(0x08)
	struct UPawnActionsComponent* OwnerComponent; // 0x38(0x08)
	struct UObject* Instigator; // 0x40(0x08)
	struct UBrainComponent* BrainComp; // 0x48(0x08)
	char UnknownData_50[0x28]; // 0x50(0x28)
	char bAllowNewSameClassInstance : 1; // 0x78(0x01)
	char bReplaceActiveSameClassInstance : 1; // 0x78(0x01)
	char bShouldPauseMovement : 1; // 0x78(0x01)
	char UnknownData_78_3 : 5; // 0x78(0x01)
	char UnknownData_79[0x17]; // 0x79(0x17)

	char GetActionPriority(); // Function AIModule.PawnAction.GetActionPriority // Final|Native|Public|BlueprintCallable|BlueprintPure // @ game+0x2407d90
	void Finish(char WithResult); // Function AIModule.PawnAction.Finish // Native|Protected|BlueprintCallable // @ game+0x2407b10
	struct UPawnAction* CreateActionInstance(struct UObject* WorldContextObject, struct UClass* ActionClass); // Function AIModule.PawnAction.CreateActionInstance // Final|Native|Static|Public|BlueprintCallable // @ game+0x2407890
};

// Class AIModule.BTTask_PawnActionBase
// Size: 0x60 (Inherited: 0x60)
struct UBTTask_PawnActionBase : UBTTaskNode {
};

// Class AIModule.BTTask_PushPawnAction
// Size: 0x68 (Inherited: 0x60)
struct UBTTask_PushPawnAction : UBTTask_PawnActionBase {
	struct UPawnAction* Action; // 0x60(0x08)
};

// Class AIModule.BTTask_PlayAnimation
// Size: 0x98 (Inherited: 0x60)
struct UBTTask_PlayAnimation : UBTTaskNode {
	struct UAnimationAsset* AnimationToPlay; // 0x60(0x08)
	char bLooping : 1; // 0x68(0x01)
	char bNonBlocking : 1; // 0x68(0x01)
	char UnknownData_68_2 : 6; // 0x68(0x01)
	char UnknownData_69[0x7]; // 0x69(0x07)
	struct UBehaviorTreeComponent* MyOwnerComp; // 0x70(0x08)
	struct USkeletalMeshComponent* CachedSkelMesh; // 0x78(0x08)
	char UnknownData_80[0x18]; // 0x80(0x18)
};

// Class AIModule.BTTask_PlaySound
// Size: 0x68 (Inherited: 0x60)
struct UBTTask_PlaySound : UBTTaskNode {
	struct USoundCue* SoundToPlay; // 0x60(0x08)
};

// Class AIModule.BTTask_RunBehavior
// Size: 0x68 (Inherited: 0x60)
struct UBTTask_RunBehavior : UBTTaskNode {
	struct UBehaviorTree* BehaviorAsset; // 0x60(0x08)
};

// Class AIModule.BTTask_RunBehaviorDynamic
// Size: 0x78 (Inherited: 0x60)
struct UBTTask_RunBehaviorDynamic : UBTTaskNode {
	struct FGameplayTag InjectionTag; // 0x60(0x08)
	struct UBehaviorTree* DefaultBehaviorAsset; // 0x68(0x08)
	struct UBehaviorTree* BehaviorAsset; // 0x70(0x08)
};

// Class AIModule.BTTask_SetTagCooldown
// Size: 0x70 (Inherited: 0x60)
struct UBTTask_SetTagCooldown : UBTTaskNode {
	struct FGameplayTag CooldownTag; // 0x60(0x08)
	bool bAddToExistingDuration; // 0x68(0x01)
	char UnknownData_69[0x3]; // 0x69(0x03)
	float CoolDownDuration; // 0x6c(0x04)
};

// Class AIModule.BTTask_Wait
// Size: 0x68 (Inherited: 0x60)
struct UBTTask_Wait : UBTTaskNode {
	float WaitTime; // 0x60(0x04)
	float RandomDeviation; // 0x64(0x04)
};

// Class AIModule.BTTask_WaitBlackboardTime
// Size: 0x90 (Inherited: 0x68)
struct UBTTask_WaitBlackboardTime : UBTTask_Wait {
	struct FBlackboardKeySelector BlackboardKey; // 0x68(0x28)
};

// Class AIModule.CrowdAgentInterface
// Size: 0x28 (Inherited: 0x28)
struct UCrowdAgentInterface : UInterface {
};

// Class AIModule.CrowdManager
// Size: 0xe0 (Inherited: 0x28)
struct UCrowdManager : UObject {
	struct ANavigationData* MyNavData; // 0x28(0x08)
	struct TArray<struct FCrowdAvoidanceConfig> AvoidanceConfig; // 0x30(0x10)
	struct TArray<struct FCrowdAvoidanceSamplingPattern> SamplingPatterns; // 0x40(0x10)
	int32_t MaxAgents; // 0x50(0x04)
	float MaxAgentRadius; // 0x54(0x04)
	int32_t MaxAvoidedAgents; // 0x58(0x04)
	int32_t MaxAvoidedWalls; // 0x5c(0x04)
	float NavmeshCheckInterval; // 0x60(0x04)
	float PathOptimizationInterval; // 0x64(0x04)
	char UnknownData_68_0 : 3; // 0x68(0x01)
	char bResolveCollisions : 1; // 0x68(0x01)
	char UnknownData_68_4 : 4; // 0x68(0x01)
	char UnknownData_69[0x77]; // 0x69(0x77)
};

// Class AIModule.EnvQuery
// Size: 0x38 (Inherited: 0x28)
struct UEnvQuery : UObject {
	struct TArray<struct UEnvQueryOption*> Options; // 0x28(0x10)
};

// Class AIModule.EnvQueryContext_BlueprintBase
// Size: 0x30 (Inherited: 0x28)
struct UEnvQueryContext_BlueprintBase : UEnvQueryContext {
	char UnknownData_28[0x8]; // 0x28(0x08)

	void ProvideSingleLocation(struct AActor* QuerierActor, struct FVector ResultingLocation); // Function AIModule.EnvQueryContext_BlueprintBase.ProvideSingleLocation // Event|Public|HasOutParms|HasDefaults|BlueprintEvent|Const // @ game+0x1848130
	void ProvideSingleActor(struct AActor* QuerierActor, struct AActor* ResultingActor); // Function AIModule.EnvQueryContext_BlueprintBase.ProvideSingleActor // Event|Public|HasOutParms|BlueprintEvent|Const // @ game+0x1848130
	void ProvideLocationsSet(struct AActor* QuerierActor, struct TArray<struct FVector> ResultingLocationSet); // Function AIModule.EnvQueryContext_BlueprintBase.ProvideLocationsSet // Event|Public|HasOutParms|BlueprintEvent|Const // @ game+0x1848130
	void ProvideActorsSet(struct AActor* QuerierActor, struct TArray<struct AActor*> ResultingActorsSet); // Function AIModule.EnvQueryContext_BlueprintBase.ProvideActorsSet // Event|Public|HasOutParms|BlueprintEvent|Const // @ game+0x1848130
};

// Class AIModule.EnvQueryContext_Item
// Size: 0x28 (Inherited: 0x28)
struct UEnvQueryContext_Item : UEnvQueryContext {
};

// Class AIModule.EnvQueryContext_Querier
// Size: 0x28 (Inherited: 0x28)
struct UEnvQueryContext_Querier : UEnvQueryContext {
};

// Class AIModule.VisualLoggerExtension
// Size: 0x28 (Inherited: 0x28)
struct UVisualLoggerExtension : UObject {
};

// Class AIModule.EnvQueryDebugHelpers
// Size: 0x28 (Inherited: 0x28)
struct UEnvQueryDebugHelpers : UObject {
};

// Class AIModule.EQSQueryResultSourceInterface
// Size: 0x28 (Inherited: 0x28)
struct UEQSQueryResultSourceInterface : UInterface {
};

// Class AIModule.EnvQueryInstanceBlueprintWrapper
// Size: 0x70 (Inherited: 0x28)
struct UEnvQueryInstanceBlueprintWrapper : UObject {
	char UnknownData_28[0x8]; // 0x28(0x08)
	int32_t QueryID; // 0x30(0x04)
	char UnknownData_34[0x1c]; // 0x34(0x1c)
	struct UClass* ItemType; // 0x50(0x08)
	int32_t OptionIndex; // 0x58(0x04)
	char UnknownData_5C[0x4]; // 0x5c(0x04)
	struct FMulticastDelegate OnQueryFinishedEvent; // 0x60(0x10)

	struct TArray<struct FVector> GetResultsAsLocations(); // Function AIModule.EnvQueryInstanceBlueprintWrapper.GetResultsAsLocations // Final|Native|Public|BlueprintCallable|BlueprintPure // @ game+0x2409380
	struct TArray<struct AActor*> GetResultsAsActors(); // Function AIModule.EnvQueryInstanceBlueprintWrapper.GetResultsAsActors // Final|Native|Public|BlueprintCallable|BlueprintPure // @ game+0x24092e0
	float GetItemScore(int32_t ItemIndex); // Function AIModule.EnvQueryInstanceBlueprintWrapper.GetItemScore // Final|Native|Public|BlueprintCallable|BlueprintPure // @ game+0x2408d80
	void EQSQueryDoneSignature__DelegateSignature(struct UEnvQueryInstanceBlueprintWrapper* QueryInstance, char QueryStatus); // DelegateFunction AIModule.EnvQueryInstanceBlueprintWrapper.EQSQueryDoneSignature__DelegateSignature // MulticastDelegate|Public|Delegate // @ game+0x1848130
};

// Class AIModule.EnvQueryItemType_VectorBase
// Size: 0x30 (Inherited: 0x30)
struct UEnvQueryItemType_VectorBase : UEnvQueryItemType {
};

// Class AIModule.EnvQueryItemType_ActorBase
// Size: 0x30 (Inherited: 0x30)
struct UEnvQueryItemType_ActorBase : UEnvQueryItemType_VectorBase {
};

// Class AIModule.EnvQueryItemType_Actor
// Size: 0x30 (Inherited: 0x30)
struct UEnvQueryItemType_Actor : UEnvQueryItemType_ActorBase {
};

// Class AIModule.EnvQueryItemType_Direction
// Size: 0x30 (Inherited: 0x30)
struct UEnvQueryItemType_Direction : UEnvQueryItemType_VectorBase {
};

// Class AIModule.EnvQueryItemType_Point
// Size: 0x30 (Inherited: 0x30)
struct UEnvQueryItemType_Point : UEnvQueryItemType_VectorBase {
};

// Class AIModule.EnvQueryManager
// Size: 0x110 (Inherited: 0x28)
struct UEnvQueryManager : UObject {
	char UnknownData_28[0x70]; // 0x28(0x70)
	struct TArray<struct FEnvQueryInstanceCache> InstanceCache; // 0x98(0x10)
	struct TArray<struct UEnvQueryContext*> LocalContexts; // 0xa8(0x10)
	char UnknownData_B8[0x58]; // 0xb8(0x58)

	struct UEnvQueryInstanceBlueprintWrapper* RunEQSQuery(struct UObject* WorldContext, struct UEnvQuery* QueryTemplate, struct UObject* Querier, char RunMode, struct UClass* WrapperClass); // Function AIModule.EnvQueryManager.RunEQSQuery // Final|Native|Static|Public|BlueprintCallable // @ game+0x240b8e0
};

// Class AIModule.EnvQueryGenerator_ActorsOfClass
// Size: 0x98 (Inherited: 0x58)
struct UEnvQueryGenerator_ActorsOfClass : UEnvQueryGenerator {
	struct FAIDataProviderFloatValue SearchRadius; // 0x58(0x30)
	struct UClass* SearchedActorClass; // 0x88(0x08)
	struct UClass* SearchCenter; // 0x90(0x08)
};

// Class AIModule.EnvQueryGenerator_BlueprintBase
// Size: 0xa8 (Inherited: 0x58)
struct UEnvQueryGenerator_BlueprintBase : UEnvQueryGenerator {
	struct FText GeneratorsActionDescription; // 0x58(0x38)
	struct UClass* Context; // 0x90(0x08)
	struct UClass* GeneratedItemType; // 0x98(0x08)
	char UnknownData_A0[0x8]; // 0xa0(0x08)

	struct UObject* GetQuerier(); // Function AIModule.EnvQueryGenerator_BlueprintBase.GetQuerier // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x24092b0
	void DoItemGeneration(struct TArray<struct FVector> ContextLocations); // Function AIModule.EnvQueryGenerator_BlueprintBase.DoItemGeneration // Event|Public|HasOutParms|BlueprintEvent|Const // @ game+0x1848130
	void AddGeneratedVector(struct FVector GeneratedVector); // Function AIModule.EnvQueryGenerator_BlueprintBase.AddGeneratedVector // Final|Native|Public|HasDefaults|BlueprintCallable|Const // @ game+0x2407470
	void AddGeneratedActor(struct AActor* GeneratedActor); // Function AIModule.EnvQueryGenerator_BlueprintBase.AddGeneratedActor // Final|Native|Public|BlueprintCallable|Const // @ game+0x24073f0
};

// Class AIModule.EnvQueryGenerator_Composite
// Size: 0x70 (Inherited: 0x58)
struct UEnvQueryGenerator_Composite : UEnvQueryGenerator {
	struct TArray<struct UEnvQueryGenerator*> Generators; // 0x58(0x10)
	bool bHasMatchingItemType; // 0x68(0x01)
	char UnknownData_69[0x7]; // 0x69(0x07)
};

// Class AIModule.EnvQueryGenerator_ProjectedPoints
// Size: 0x98 (Inherited: 0x58)
struct UEnvQueryGenerator_ProjectedPoints : UEnvQueryGenerator {
	struct FEnvTraceData ProjectionData; // 0x58(0x40)
};

// Class AIModule.EnvQueryGenerator_Donut
// Size: 0x1c0 (Inherited: 0x98)
struct UEnvQueryGenerator_Donut : UEnvQueryGenerator_ProjectedPoints {
	struct FAIDataProviderFloatValue InnerRadius; // 0x98(0x30)
	struct FAIDataProviderFloatValue OuterRadius; // 0xc8(0x30)
	struct FAIDataProviderIntValue NumberOfRings; // 0xf8(0x30)
	struct FAIDataProviderIntValue PointsPerRing; // 0x128(0x30)
	struct FEnvDirection ArcDirection; // 0x158(0x20)
	struct FAIDataProviderFloatValue ArcAngle; // 0x178(0x30)
	bool RandomiseRadius; // 0x1a8(0x01)
	char UnknownData_1A9[0x7]; // 0x1a9(0x07)
	struct UClass* Center; // 0x1b0(0x08)
	char bDefineArc : 1; // 0x1b8(0x01)
	char UnknownData_1B8_1 : 7; // 0x1b8(0x01)
	char UnknownData_1B9[0x7]; // 0x1b9(0x07)
};

// Class AIModule.EnvQueryGenerator_OnCircle
// Size: 0x1a0 (Inherited: 0x98)
struct UEnvQueryGenerator_OnCircle : UEnvQueryGenerator_ProjectedPoints {
	struct FAIDataProviderFloatValue CircleRadius; // 0x98(0x30)
	struct FAIDataProviderFloatValue SpaceBetween; // 0xc8(0x30)
	struct FEnvDirection ArcDirection; // 0xf8(0x20)
	struct FAIDataProviderFloatValue ArcAngle; // 0x118(0x30)
	float AngleRadians; // 0x148(0x04)
	char UnknownData_14C[0x4]; // 0x14c(0x04)
	struct UClass* CircleCenter; // 0x150(0x08)
	struct FEnvTraceData TraceData; // 0x158(0x40)
	char bDefineArc : 1; // 0x198(0x01)
	char UnknownData_198_1 : 7; // 0x198(0x01)
	char UnknownData_199[0x7]; // 0x199(0x07)
};

// Class AIModule.EnvQueryGenerator_SimpleGrid
// Size: 0x100 (Inherited: 0x98)
struct UEnvQueryGenerator_SimpleGrid : UEnvQueryGenerator_ProjectedPoints {
	struct FAIDataProviderFloatValue GridSize; // 0x98(0x30)
	struct FAIDataProviderFloatValue SpaceBetween; // 0xc8(0x30)
	struct UClass* GenerateAround; // 0xf8(0x08)
};

// Class AIModule.EnvQueryGenerator_PathingGrid
// Size: 0x168 (Inherited: 0x100)
struct UEnvQueryGenerator_PathingGrid : UEnvQueryGenerator_SimpleGrid {
	struct FAIDataProviderBoolValue PathToItem; // 0x100(0x30)
	struct UClass* NavigationFilter; // 0x130(0x08)
	struct FAIDataProviderFloatValue ScanRangeMultiplier; // 0x138(0x30)
};

// Class AIModule.EnvQueryTest_Distance
// Size: 0x180 (Inherited: 0x170)
struct UEnvQueryTest_Distance : UEnvQueryTest {
	char TestMode; // 0x170(0x01)
	char UnknownData_171[0x7]; // 0x171(0x07)
	struct UClass* DistanceTo; // 0x178(0x08)
};

// Class AIModule.EnvQueryTest_Dot
// Size: 0x1b8 (Inherited: 0x170)
struct UEnvQueryTest_Dot : UEnvQueryTest {
	struct FEnvDirection LineA; // 0x170(0x20)
	struct FEnvDirection LineB; // 0x190(0x20)
	char TestMode; // 0x1b0(0x01)
	bool bAbsoluteValue; // 0x1b1(0x01)
	char UnknownData_1B2[0x6]; // 0x1b2(0x06)
};

// Class AIModule.EnvQueryTest_GameplayTags
// Size: 0x1a0 (Inherited: 0x170)
struct UEnvQueryTest_GameplayTags : UEnvQueryTest {
	char TagsToMatch; // 0x170(0x01)
	char UnknownData_171[0x7]; // 0x171(0x07)
	struct FGameplayTagContainer GameplayTags; // 0x178(0x28)
};

// Class AIModule.EnvQueryTest_Pathfinding
// Size: 0x248 (Inherited: 0x170)
struct UEnvQueryTest_Pathfinding : UEnvQueryTest {
	char TestMode; // 0x170(0x01)
	char UnknownData_171[0x7]; // 0x171(0x07)
	struct UClass* Context; // 0x178(0x08)
	struct FAIDataProviderBoolValue PathFromContext; // 0x180(0x30)
	struct FAIDataProviderBoolValue SkipUnreachable; // 0x1b0(0x30)
	struct FAIDataProviderIntValue MaxNumPathSegments; // 0x1e0(0x30)
	struct FAIDataProviderBoolValue PassThroughUnreachable; // 0x210(0x30)
	struct UClass* FilterClass; // 0x240(0x08)
};

// Class AIModule.EnvQueryTest_PathfindingBatch
// Size: 0x278 (Inherited: 0x248)
struct UEnvQueryTest_PathfindingBatch : UEnvQueryTest_Pathfinding {
	struct FAIDataProviderFloatValue ScanRangeMultiplier; // 0x248(0x30)
};

// Class AIModule.EnvQueryTest_Random
// Size: 0x170 (Inherited: 0x170)
struct UEnvQueryTest_Random : UEnvQueryTest {
};

// Class AIModule.EnvQueryTest_Trace
// Size: 0x248 (Inherited: 0x170)
struct UEnvQueryTest_Trace : UEnvQueryTest {
	struct FEnvTraceData TraceData; // 0x170(0x40)
	struct FAIDataProviderBoolValue TraceFromContext; // 0x1b0(0x30)
	struct FAIDataProviderFloatValue ItemHeightOffset; // 0x1e0(0x30)
	struct FAIDataProviderFloatValue ContextHeightOffset; // 0x210(0x30)
	struct UClass* Context; // 0x240(0x08)
};

// Class AIModule.EnvQueryOption
// Size: 0x40 (Inherited: 0x28)
struct UEnvQueryOption : UObject {
	struct UEnvQueryGenerator* Generator; // 0x28(0x08)
	struct TArray<struct UEnvQueryTest*> Tests; // 0x30(0x10)
};

// Class AIModule.EQSRenderingComponent
// Size: 0x5d0 (Inherited: 0x5c0)
struct UEQSRenderingComponent : UPrimitiveComponent {
	char UnknownData_5C0[0x10]; // 0x5c0(0x10)
};

// Class AIModule.EQSTestingPawn
// Size: 0x640 (Inherited: 0x5e0)
struct AEQSTestingPawn : ACharacter {
	struct UEnvQuery* QueryTemplate; // 0x5e0(0x08)
	struct TArray<struct FEnvNamedValue> QueryParams; // 0x5e8(0x10)
	struct UClass* ContextToLinkWithThis; // 0x5f8(0x08)
	float TimeLimitPerStep; // 0x600(0x04)
	int32_t StepToDebugDraw; // 0x604(0x04)
	char HighlightMode; // 0x608(0x01)
	char UnknownData_609[0x3]; // 0x609(0x03)
	char bDrawLabels : 1; // 0x60c(0x01)
	char bDrawFailedItems : 1; // 0x60c(0x01)
	char bReRunQueryOnlyOnFinishedMove : 1; // 0x60c(0x01)
	char bShouldBeVisibleInGame : 1; // 0x60c(0x01)
	char UnknownData_60C_4 : 4; // 0x60c(0x01)
	char UnknownData_60D[0x3]; // 0x60d(0x03)
	char QueryingMode; // 0x610(0x01)
	char UnknownData_611[0x2f]; // 0x611(0x2f)
};

// Class AIModule.CrowdFollowingComponent
// Size: 0x308 (Inherited: 0x2b8)
struct UCrowdFollowingComponent : UPathFollowingComponent {
	char UnknownData_2B8[0x8]; // 0x2b8(0x08)
	struct FVector CrowdAgentMoveDirection; // 0x2c0(0x0c)
	char UnknownData_2CC[0x4]; // 0x2cc(0x04)
	struct UCharacterMovementComponent* CharacterMovement; // 0x2d0(0x08)
	struct FNavAvoidanceMask AvoidanceGroup; // 0x2d8(0x04)
	struct FNavAvoidanceMask GroupsToAvoid; // 0x2dc(0x04)
	struct FNavAvoidanceMask GroupsToIgnore; // 0x2e0(0x04)
	char UnknownData_2E4[0x24]; // 0x2e4(0x24)

	void SuspendCrowdSteering(bool bSuspend); // Function AIModule.CrowdFollowingComponent.SuspendCrowdSteering // Native|Public|BlueprintCallable // @ game+0x240d8e0
};

// Class AIModule.PawnAction_BlueprintBase
// Size: 0x90 (Inherited: 0x90)
struct UPawnAction_BlueprintBase : UPawnAction {

	void ActionTick(struct APawn* ControlledPawn, float DeltaSeconds); // Function AIModule.PawnAction_BlueprintBase.ActionTick // Event|Public|BlueprintEvent // @ game+0x1848130
	void ActionStart(struct APawn* ControlledPawn); // Function AIModule.PawnAction_BlueprintBase.ActionStart // Event|Public|BlueprintEvent // @ game+0x1848130
	void ActionResume(struct APawn* ControlledPawn); // Function AIModule.PawnAction_BlueprintBase.ActionResume // Event|Public|BlueprintEvent // @ game+0x1848130
	void ActionPause(struct APawn* ControlledPawn); // Function AIModule.PawnAction_BlueprintBase.ActionPause // Event|Public|BlueprintEvent // @ game+0x1848130
	void ActionFinished(struct APawn* ControlledPawn, char WithResult); // Function AIModule.PawnAction_BlueprintBase.ActionFinished // Event|Public|BlueprintEvent // @ game+0x1848130
};

// Class AIModule.PawnAction_Move
// Size: 0xe0 (Inherited: 0x90)
struct UPawnAction_Move : UPawnAction {
	struct AActor* GoalActor; // 0x90(0x08)
	struct FVector GoalLocation; // 0x98(0x0c)
	float AcceptableRadius; // 0xa4(0x04)
	struct UClass* FilterClass; // 0xa8(0x08)
	char bAllowStrafe : 1; // 0xb0(0x01)
	char bFinishOnOverlap : 1; // 0xb0(0x01)
	char bUsePathfinding : 1; // 0xb0(0x01)
	char bAllowPartialPath : 1; // 0xb0(0x01)
	char bProjectGoalToNavigation : 1; // 0xb0(0x01)
	char bUpdatePathToGoal : 1; // 0xb0(0x01)
	char bAbortChildActionOnPathChange : 1; // 0xb0(0x01)
	char UnknownData_B1[0x2f]; // 0xb1(0x2f)
};

// Class AIModule.PawnAction_Repeat
// Size: 0xb0 (Inherited: 0x90)
struct UPawnAction_Repeat : UPawnAction {
	struct UPawnAction* ActionToRepeat; // 0x90(0x08)
	struct UPawnAction* RecentActionCopy; // 0x98(0x08)
	char ChildFailureHandlingMode; // 0xa0(0x01)
	char UnknownData_A1[0xf]; // 0xa1(0x0f)
};

// Class AIModule.PawnAction_Sequence
// Size: 0xb8 (Inherited: 0x90)
struct UPawnAction_Sequence : UPawnAction {
	struct TArray<struct UPawnAction*> ActionSequence; // 0x90(0x10)
	char ChildFailureHandlingMode; // 0xa0(0x01)
	char UnknownData_A1[0x7]; // 0xa1(0x07)
	struct UPawnAction* RecentActionCopy; // 0xa8(0x08)
	char UnknownData_B0[0x8]; // 0xb0(0x08)
};

// Class AIModule.PawnAction_Wait
// Size: 0xa0 (Inherited: 0x90)
struct UPawnAction_Wait : UPawnAction {
	float TimeToWait; // 0x90(0x04)
	char UnknownData_94[0xc]; // 0x94(0x0c)
};

// Class AIModule.PawnSensingComponent
// Size: 0x110 (Inherited: 0xc8)
struct UPawnSensingComponent : UActorComponent {
	float HearingThreshold; // 0xc8(0x04)
	float LOSHearingThreshold; // 0xcc(0x04)
	float SightRadius; // 0xd0(0x04)
	float SensingInterval; // 0xd4(0x04)
	float HearingMaxSoundAge; // 0xd8(0x04)
	char bEnableSensingUpdates : 1; // 0xdc(0x01)
	char bOnlySensePlayers : 1; // 0xdc(0x01)
	char bSeePawns : 1; // 0xdc(0x01)
	char bHearNoises : 1; // 0xdc(0x01)
	char UnknownData_DC_4 : 4; // 0xdc(0x01)
	char UnknownData_DD[0xb]; // 0xdd(0x0b)
	struct FMulticastDelegate OnSeePawn; // 0xe8(0x10)
	struct FMulticastDelegate OnHearNoise; // 0xf8(0x10)
	float PeripheralVisionAngle; // 0x108(0x04)
	float PeripheralVisionCosine; // 0x10c(0x04)

	void SetSensingUpdatesEnabled(bool bEnabled); // Function AIModule.PawnSensingComponent.SetSensingUpdatesEnabled // BlueprintAuthorityOnly|Native|Public|BlueprintCallable // @ game+0x240cc20
	void SetSensingInterval(float NewSensingInterval); // Function AIModule.PawnSensingComponent.SetSensingInterval // BlueprintAuthorityOnly|Native|Public|BlueprintCallable // @ game+0x240cba0
	void SetPeripheralVisionAngle(float NewPeripheralVisionAngle); // Function AIModule.PawnSensingComponent.SetPeripheralVisionAngle // BlueprintAuthorityOnly|Native|Public|BlueprintCallable // @ game+0x240cb20
	void SeePawnDelegate__DelegateSignature(struct APawn* Pawn); // DelegateFunction AIModule.PawnSensingComponent.SeePawnDelegate__DelegateSignature // MulticastDelegate|Public|Delegate // @ game+0x1848130
	void HearNoiseDelegate__DelegateSignature(struct APawn* Instigator, struct FVector Location, float Volume); // DelegateFunction AIModule.PawnSensingComponent.HearNoiseDelegate__DelegateSignature // MulticastDelegate|Public|Delegate|HasOutParms|HasDefaults // @ game+0x1848130
	float GetPeripheralVisionCosine(); // Function AIModule.PawnSensingComponent.GetPeripheralVisionCosine // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x2409290
	float GetPeripheralVisionAngle(); // Function AIModule.PawnSensingComponent.GetPeripheralVisionAngle // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x2409270
};

