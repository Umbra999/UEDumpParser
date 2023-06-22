// BlueprintGeneratedClass BP_CT_VoyageProgress.BP_CT_VoyageProgress_C
// Size: 0x101 (Inherited: 0xe0)
struct UBP_CT_VoyageProgress_C : UCompanyTutorialVoyageProgress {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xe0(0x08)
	struct AAthenaPlayerController* AthenaPlayerController; // 0xe8(0x08)
	char VoyageState; // 0xf0(0x01)
	char UnknownData_F1[0x7]; // 0xf1(0x07)
	struct UClass* MaximumRank; // 0xf8(0x08)
	bool NoLongerPurchaseable; // 0x100(0x01)

	void IsPurchaseable(bool Result); // Function BP_CT_VoyageProgress.BP_CT_VoyageProgress_C.IsPurchaseable // Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure // @ game+0x1848130
	void SetProgress(char NewProgress); // Function BP_CT_VoyageProgress.BP_CT_VoyageProgress_C.SetProgress // Public|BlueprintCallable|BlueprintEvent // @ game+0x1848130
	void IsCurrently(char ProgressState, bool Result); // Function BP_CT_VoyageProgress.BP_CT_VoyageProgress_C.IsCurrently // Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const // @ game+0x1848130
	void IsPast(char ProgressState, bool Result); // Function BP_CT_VoyageProgress.BP_CT_VoyageProgress_C.IsPast // Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const // @ game+0x1848130
	void PopulateExistingState(); // Function BP_CT_VoyageProgress.BP_CT_VoyageProgress_C.PopulateExistingState // Public|BlueprintCallable|BlueprintEvent // @ game+0x1848130
	void Initialise(bool Disabled); // Function BP_CT_VoyageProgress.BP_CT_VoyageProgress_C.Initialise // BlueprintCallable|BlueprintEvent // @ game+0x1848130
	void ExecuteUbergraph_BP_CT_VoyageProgress(int32_t EntryPoint); // Function BP_CT_VoyageProgress.BP_CT_VoyageProgress_C.ExecuteUbergraph_BP_CT_VoyageProgress //  // @ game+0x1848130
};

