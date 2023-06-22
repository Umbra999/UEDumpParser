// BlueprintGeneratedClass BP_CT_TutorialProgress.BP_CT_TutorialProgress_C
// Size: 0x70 (Inherited: 0x28)
struct UBP_CT_TutorialProgress_C : UObject {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x28(0x08)
	struct AAthenaPlayerController* AthenaPlayerController; // 0x30(0x08)
	struct TArray<struct UBP_CT_VoyageProgress_C*> TutorialVoyageProgressTrackers; // 0x38(0x10)
	struct UBP_CT_VoyageProgress_C* XMarksTutorialProgress; // 0x48(0x08)
	struct UBP_CT_VoyageProgress_C* RiddleTutorialProgress; // 0x50(0x08)
	struct UBP_CT_VoyageProgress_C* FaunaTutorialProgress; // 0x58(0x08)
	struct UBP_CT_VoyageProgress_C* CargoTutorialProgress; // 0x60(0x08)
	struct UBP_CT_VoyageProgress_C* BootyTutorialProgress; // 0x68(0x08)

	void GetCompanyTutorials(struct FName CompanyName, struct TArray<struct UBP_CT_VoyageProgress_C*> CompanyTutorials); // Function BP_CT_TutorialProgress.BP_CT_TutorialProgress_C.GetCompanyTutorials // Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure // @ game+0x1848130
	void GetOrderOfSoulsTutorials(struct TArray<struct UBP_CT_VoyageProgress_C*> Result); // Function BP_CT_TutorialProgress.BP_CT_TutorialProgress_C.GetOrderOfSoulsTutorials // Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure // @ game+0x1848130
	void GetMerchantAllianceTutorials(struct TArray<struct UBP_CT_VoyageProgress_C*> Result); // Function BP_CT_TutorialProgress.BP_CT_TutorialProgress_C.GetMerchantAllianceTutorials // Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure // @ game+0x1848130
	void GetGoldhoarderTutorials(struct TArray<struct UBP_CT_VoyageProgress_C*> Result); // Function BP_CT_TutorialProgress.BP_CT_TutorialProgress_C.GetGoldhoarderTutorials // Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure // @ game+0x1848130
	void AreAllTutorialsOnState(char QueryVoyageState, bool Result); // Function BP_CT_TutorialProgress.BP_CT_TutorialProgress_C.AreAllTutorialsOnState // Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure // @ game+0x1848130
	void IsAnyTutorialOnState(char QueryVoyageState, bool Result); // Function BP_CT_TutorialProgress.BP_CT_TutorialProgress_C.IsAnyTutorialOnState // Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure // @ game+0x1848130
	void FindTutorialProgressObject(struct FText VoyageName, struct UBP_CT_VoyageProgress_C* Voyage); // Function BP_CT_TutorialProgress.BP_CT_TutorialProgress_C.FindTutorialProgressObject // Private|HasOutParms|BlueprintCallable|BlueprintEvent|Const // @ game+0x1848130
	void CreateTutorialProgressTracker(struct UClass* VoyageProposalDesc, struct UClass* TaleRankDesc, struct UClass* ExclusionRank, bool Disable, struct UBP_CT_VoyageProgress_C* Result); // Function BP_CT_TutorialProgress.BP_CT_TutorialProgress_C.CreateTutorialProgressTracker // Private|HasOutParms|BlueprintCallable|BlueprintEvent // @ game+0x1848130
	void Start(); // Function BP_CT_TutorialProgress.BP_CT_TutorialProgress_C.Start // BlueprintCallable|BlueprintEvent // @ game+0x1848130
	void Change Voyage Progress(struct FText VoyageName, char New Progress State); // Function BP_CT_TutorialProgress.BP_CT_TutorialProgress_C.Change Voyage Progress // BlueprintCallable|BlueprintEvent // @ game+0x1848130
	void ExecuteUbergraph_BP_CT_TutorialProgress(int32_t EntryPoint); // Function BP_CT_TutorialProgress.BP_CT_TutorialProgress_C.ExecuteUbergraph_BP_CT_TutorialProgress // HasDefaults // @ game+0x1848130
};

