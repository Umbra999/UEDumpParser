// BlueprintGeneratedClass BP_VotableCancelVoyage.BP_VotableCancelVoyage_C
// Size: 0x530 (Inherited: 0x4f0)
struct ABP_VotableCancelVoyage_C : AVotableObjectView {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4f0(0x08)
	struct TArray<struct UStaticMeshComponent*> Tokens; // 0x4f8(0x10)
	struct UStaticMesh* Token Asset; // 0x508(0x08)
	float Show Token Animation Time; // 0x510(0x04)
	char UnknownData_514[0x4]; // 0x514(0x04)
	struct UMaterialInterface* Token Material; // 0x518(0x08)
	struct TArray<struct FTransform> DaggerPositions; // 0x520(0x10)

	void GetVoteCount(int32_t Count); // Function BP_VotableCancelVoyage.BP_VotableCancelVoyage_C.GetVoteCount // Public|HasOutParms|BlueprintCallable|BlueprintEvent // @ game+0x1848130
	void PlayShowTokenAnimation(struct UPrimitiveComponent* Token); // Function BP_VotableCancelVoyage.BP_VotableCancelVoyage_C.PlayShowTokenAnimation // Public|BlueprintCallable|BlueprintEvent // @ game+0x1848130
	void Is Session Locked(bool IsLocked); // Function BP_VotableCancelVoyage.BP_VotableCancelVoyage_C.Is Session Locked // Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure // @ game+0x1848130
	struct FText GetObjectDisplayName(); // Function BP_VotableCancelVoyage.BP_VotableCancelVoyage_C.GetObjectDisplayName // HasOutParms|BlueprintCallable|BlueprintEvent // @ game+0x1848130
	void UserConstructionScript(); // Function BP_VotableCancelVoyage.BP_VotableCancelVoyage_C.UserConstructionScript // Event|Public|BlueprintCallable|BlueprintEvent // @ game+0x1848130
	void ReceiveBeginPlay(); // Function BP_VotableCancelVoyage.BP_VotableCancelVoyage_C.ReceiveBeginPlay // Event|Public|BlueprintEvent // @ game+0x1848130
	void OnVoteAdded(TScriptInterface<struct UVoterInterface> Voter); // Function BP_VotableCancelVoyage.BP_VotableCancelVoyage_C.OnVoteAdded // Event|Public|HasOutParms|BlueprintEvent // @ game+0x1848130
	void OnVoteRemoved(TScriptInterface<struct UVoterInterface> Voter); // Function BP_VotableCancelVoyage.BP_VotableCancelVoyage_C.OnVoteRemoved // Event|Public|HasOutParms|BlueprintEvent // @ game+0x1848130
	void ExecuteUbergraph_BP_VotableCancelVoyage(int32_t EntryPoint); // Function BP_VotableCancelVoyage.BP_VotableCancelVoyage_C.ExecuteUbergraph_BP_VotableCancelVoyage // HasDefaults // @ game+0x1848130
};

