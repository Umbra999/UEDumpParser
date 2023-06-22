// BlueprintGeneratedClass BP_Blunderbuss.BP_Blunderbuss_C
// Size: 0xb50 (Inherited: 0xb20)
struct ABP_Blunderbuss_C : AProjectileWeapon {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xb20(0x08)
	struct UPostProcessComponent* PostProcess; // 0xb28(0x08)
	char sfx relationship; // 0xb30(0x01)
	char UnknownData_B31[0x7]; // 0xb31(0x07)
	struct UMaterialInstanceDynamic* DynamicMaterial; // 0xb38(0x08)
	struct UObject* FiringVFX3rdPerson; // 0xb40(0x08)
	struct UWwiseEvent* Blunderbuss Firing sfx 3rd person; // 0xb48(0x08)

	void SetScopeEffectOn(bool IsOn); // Function BP_Blunderbuss.BP_Blunderbuss_C.SetScopeEffectOn // Public|BlueprintCallable|BlueprintEvent // @ game+0x1848130
	void determine sfx relationship(char Relationship); // Function BP_Blunderbuss.BP_Blunderbuss_C.determine sfx relationship // Public|HasOutParms|BlueprintCallable|BlueprintEvent // @ game+0x1848130
	void DoFireEffect(); // Function BP_Blunderbuss.BP_Blunderbuss_C.DoFireEffect // Public|HasDefaults|BlueprintCallable|BlueprintEvent // @ game+0x1848130
	void UserConstructionScript(); // Function BP_Blunderbuss.BP_Blunderbuss_C.UserConstructionScript // Event|Public|BlueprintCallable|BlueprintEvent // @ game+0x1848130
	void OnWeaponFired(); // Function BP_Blunderbuss.BP_Blunderbuss_C.OnWeaponFired // Event|Protected|BlueprintEvent // @ game+0x1848130
	void RadialBlurOn(); // Function BP_Blunderbuss.BP_Blunderbuss_C.RadialBlurOn // Event|Protected|BlueprintEvent // @ game+0x1848130
	void RadialBlurOff(); // Function BP_Blunderbuss.BP_Blunderbuss_C.RadialBlurOff // Event|Protected|BlueprintEvent // @ game+0x1848130
	void ExecuteUbergraph_BP_Blunderbuss(int32_t EntryPoint); // Function BP_Blunderbuss.BP_Blunderbuss_C.ExecuteUbergraph_BP_Blunderbuss //  // @ game+0x1848130
};

