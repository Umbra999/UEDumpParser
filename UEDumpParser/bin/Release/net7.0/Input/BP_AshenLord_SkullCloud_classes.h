// BlueprintGeneratedClass BP_AshenLord_SkullCloud.BP_AshenLord_SkullCloud_C
// Size: 0x568 (Inherited: 0x530)
struct ABP_AshenLord_SkullCloud_C : ABP_NonRotatableSignalCloud_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x530(0x08)
	struct UStaticMeshComponent* lightning_bolt_03_a; // 0x538(0x08)
	struct UStaticMeshComponent* lightning_bolt_02_a; // 0x540(0x08)
	struct UStaticMeshComponent* lightning_bolt_01_a; // 0x548(0x08)
	struct UStaticMeshComponent* vfx_tornado_ribbons; // 0x550(0x08)
	struct TArray<struct UMaterialInstanceDynamic*> DynamicMaterials; // 0x558(0x10)

	void CollectMaterials(); // Function BP_AshenLord_SkullCloud.BP_AshenLord_SkullCloud_C.CollectMaterials // Public|BlueprintCallable|BlueprintEvent // @ game+0x1848130
	void UserConstructionScript(); // Function BP_AshenLord_SkullCloud.BP_AshenLord_SkullCloud_C.UserConstructionScript // Event|Public|BlueprintCallable|BlueprintEvent // @ game+0x1848130
	void ReceiveBeginPlay(); // Function BP_AshenLord_SkullCloud.BP_AshenLord_SkullCloud_C.ReceiveBeginPlay // Event|Public|BlueprintEvent // @ game+0x1848130
	void UpdateMaterialVisibility(struct FLinearColor SignalVisibilityLerpValue); // Function BP_AshenLord_SkullCloud.BP_AshenLord_SkullCloud_C.UpdateMaterialVisibility // Event|Public|BlueprintCallable|BlueprintEvent // @ game+0x1848130
	void ExecuteUbergraph_BP_AshenLord_SkullCloud(int32_t EntryPoint); // Function BP_AshenLord_SkullCloud.BP_AshenLord_SkullCloud_C.ExecuteUbergraph_BP_AshenLord_SkullCloud //  // @ game+0x1848130
};

