// Class Tutorial.CaptaincyTutorialDesc
// Size: 0xc8 (Inherited: 0xc8)
struct UCaptaincyTutorialDesc : UEntitlementDesc {
};

// Class Tutorial.CompanyTutorialVoyageProgress
// Size: 0xe0 (Inherited: 0x28)
struct UCompanyTutorialVoyageProgress : UObject {
	struct UClass* AssignedVoyageProposalDescClass; // 0x28(0x08)
	struct UClass* AssignedTaleRankDescClass; // 0x30(0x08)
	char UnknownData_38[0xa8]; // 0x38(0xa8)

	bool IsSameVoyage(struct FText VoyageName); // Function Tutorial.CompanyTutorialVoyageProgress.IsSameVoyage // Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const // @ game+0x4153290
	void AssignVoyage(struct UClass* VoyageProposalDescClass, struct UClass* TaleRankDescClass); // Function Tutorial.CompanyTutorialVoyageProgress.AssignVoyage // Final|Native|Public|BlueprintCallable // @ game+0x4153030
};

// Class Tutorial.ContextualTutorialComponent
// Size: 0x140 (Inherited: 0xc8)
struct UContextualTutorialComponent : UActorComponent {
	struct TArray<struct FContextualTutorialPromptDesc> ContextualTutorialClasses; // 0xc8(0x10)
	struct TArray<struct AActor*> SpawnedPromptActors; // 0xd8(0x10)
	char UnknownData_E8[0x58]; // 0xe8(0x58)
};

// Class Tutorial.HasTutorialStarterBegunNPCDialogConditional
// Size: 0x38 (Inherited: 0x30)
struct UHasTutorialStarterBegunNPCDialogConditional : UNPCDialogConditional {
	char TutorialStarterType; // 0x30(0x01)
	char UnknownData_31[0x7]; // 0x31(0x07)
};

// Class Tutorial.OnboardingStatusInterface
// Size: 0x28 (Inherited: 0x28)
struct UOnboardingStatusInterface : UInterface {
};

// Class Tutorial.Tutorial2019Component
// Size: 0xd0 (Inherited: 0xc8)
struct UTutorial2019Component : UActorComponent {
	bool IsEnabledByServer; // 0xc8(0x01)
	bool IsInTutorialTale; // 0xc9(0x01)
	char UnknownData_CA[0x6]; // 0xca(0x06)

	void ReceiveTutorial2019BeginPlayOnServer(); // Function Tutorial.Tutorial2019Component.ReceiveTutorial2019BeginPlayOnServer // Event|Public|BlueprintEvent // @ game+0x1848130
	void ReceiveTutorial2019BeginPlayOnClient(); // Function Tutorial.Tutorial2019Component.ReceiveTutorial2019BeginPlayOnClient // Event|Public|BlueprintEvent // @ game+0x1848130
	void OnRep_IsEnabledByServer(bool OldIsEnabled); // Function Tutorial.Tutorial2019Component.OnRep_IsEnabledByServer // Final|Native|Private // @ game+0x4153350
	void ForceDisableComponent_Blueprint(); // Function Tutorial.Tutorial2019Component.ForceDisableComponent_Blueprint // Event|Public|BlueprintEvent // @ game+0x1848130
	void BeginOnServer(); // Function Tutorial.Tutorial2019Component.BeginOnServer // Final|Native|Public|BlueprintCallable // @ game+0x41530f0
};

// Class Tutorial.Tutorial2019ContextualDelegatingComponent
// Size: 0xd8 (Inherited: 0xd0)
struct UTutorial2019ContextualDelegatingComponent : UTutorial2019Component {
	struct UContextualTutorialComponent* ContextualTutorialComponent; // 0xd0(0x08)
};

// Class Tutorial.Tutorial2019FunctionLibrary
// Size: 0x28 (Inherited: 0x28)
struct UTutorial2019FunctionLibrary : UBlueprintFunctionLibrary {

	struct FTeleportLocation GetNearestOnboardingSpawnPoint(struct AActor* CharacterToTeleport); // Function Tutorial.Tutorial2019FunctionLibrary.GetNearestOnboardingSpawnPoint // Final|BlueprintAuthorityOnly|Native|Static|Public|BlueprintCallable // @ game+0x41531c0
};

// Class Tutorial.TutorialHelpersBlueprintLibrary
// Size: 0x28 (Inherited: 0x28)
struct UTutorialHelpersBlueprintLibrary : UBlueprintFunctionLibrary {

	void FirePromptCompleted(struct UClass* AccessKey, struct UObject* WorldContextObject); // Function Tutorial.TutorialHelpersBlueprintLibrary.FirePromptCompleted // Final|Native|Static|Public|BlueprintCallable // @ game+0x4153110
};

// Class Tutorial.TutorialManagerInterface
// Size: 0x28 (Inherited: 0x28)
struct UTutorialManagerInterface : UInterface {
};

// Class Tutorial.TutorialManager
// Size: 0x138 (Inherited: 0xc8)
struct UTutorialManager : UActorComponent {
	char UnknownData_C8[0x8]; // 0xc8(0x08)
	struct UClass* CompanyOnboardingStarterClass; // 0xd0(0x08)
	struct UClass* MaidenVoyageStarterClass; // 0xd8(0x08)
	struct UClass* BeachNPCSpawnFlowStarterClass; // 0xe0(0x08)
	struct UClass* CaptaincyStarterClass; // 0xe8(0x08)
	struct UClass* CaptaincyNewShipStarterClass; // 0xf0(0x08)
	struct UClass* CaptaincyWithBeachNPCSpawnStarterClass; // 0xf8(0x08)
	struct UClass* SelectedTutorialClass; // 0x100(0x08)
	struct UTutorialStarter* SelectedTutorial; // 0x108(0x08)
	char TutorialType; // 0x110(0x01)
	bool HasEverPlayedFirstPersonAnimation; // 0x111(0x01)
	bool HasStartedTutorial; // 0x112(0x01)
	bool HasReceivedEntitlements; // 0x113(0x01)
	bool HasPosessedPawn; // 0x114(0x01)
	bool HasPlayerFinshedSpawning; // 0x115(0x01)
	bool IsPlayerWaitingForCaptaincySessionResponse; // 0x116(0x01)
	bool HasPlayerPromptsServiceSetup; // 0x117(0x01)
	char UnknownData_118[0x20]; // 0x118(0x20)

	void OnRep_TutorialType(); // Function Tutorial.TutorialManager.OnRep_TutorialType // Final|Native|Private // @ game+0x4153400
	void OnRep_SelectedTutorialClass(); // Function Tutorial.TutorialManager.OnRep_SelectedTutorialClass // Final|Native|Private // @ game+0x41533e0
};

// Class Tutorial.TutorialStarter
// Size: 0x60 (Inherited: 0x28)
struct UTutorialStarter : UObject {
	struct AAthenaPlayerController* AthenaPlayerController; // 0x28(0x08)
	bool ShouldPlayIntroAnimatic; // 0x30(0x01)
	bool ShouldDisableAllIntroBehaviour; // 0x31(0x01)
	char UnknownData_32[0x2]; // 0x32(0x02)
	struct FFirstPersonAnimaticSettings IntroAnimationSettings; // 0x34(0x2c)
};

// Class Tutorial.BeachNPCSpawnFlowStarter
// Size: 0x60 (Inherited: 0x60)
struct UBeachNPCSpawnFlowStarter : UTutorialStarter {
};

// Class Tutorial.CaptaincyStarter
// Size: 0xf8 (Inherited: 0x60)
struct UCaptaincyStarter : UTutorialStarter {
	struct UVoyageDescDataAsset* TutorialTale; // 0x60(0x08)
	bool CheckIfShipNeverSetSail; // 0x68(0x01)
	bool CheckIfPlayerInOutpost; // 0x69(0x01)
	bool CheckIfPlayerIsInCaptain; // 0x6a(0x01)
	char UnknownData_6B[0x5]; // 0x6b(0x05)
	struct UClass* CheckIfEntitlementIsOwned; // 0x70(0x08)
	bool CheckIfCaptainingANewShip; // 0x78(0x01)
	char UnknownData_79[0x3]; // 0x79(0x03)
	struct FName FeatureToggle; // 0x7c(0x08)
	bool CheckIfPlayerHasMadeAttempts; // 0x84(0x01)
	char UnknownData_85[0x3]; // 0x85(0x03)
	struct UClass* PromptCounterKey; // 0x88(0x08)
	int32_t MaxAttemptCount; // 0x90(0x04)
	char UnknownData_94[0x64]; // 0x94(0x64)
};

// Class Tutorial.CompanyOnboardingStarter
// Size: 0x60 (Inherited: 0x60)
struct UCompanyOnboardingStarter : UTutorialStarter {

	bool HasPrerequisites(); // Function Tutorial.CompanyOnboardingStarter.HasPrerequisites // Native|Event|Protected|BlueprintEvent // @ game+0x4153260
};

// Class Tutorial.MaidenVoyageStarter
// Size: 0x60 (Inherited: 0x60)
struct UMaidenVoyageStarter : UTutorialStarter {
};

