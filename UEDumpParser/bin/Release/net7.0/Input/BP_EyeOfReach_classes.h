// BlueprintGeneratedClass BP_EyeOfReach.BP_EyeOfReach_C
// Size: 0xb80 (Inherited: 0xb20)
struct ABP_EyeOfReach_C : AProjectileWeapon {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xb20(0x08)
	struct UStaticMeshComponent* Glint; // 0xb28(0x08)
	struct UPostProcessComponent* PostProcess; // 0xb30(0x08)
	char sfx relationship; // 0xb38(0x01)
	char UnknownData_B39[0x7]; // 0xb39(0x07)
	struct UMaterialInstanceDynamic* DynamicMaterial; // 0xb40(0x08)
	bool TurningOn; // 0xb48(0x01)
	char UnknownData_B49[0x3]; // 0xb49(0x03)
	float BlurTime; // 0xb4c(0x04)
	float BlurInDuration; // 0xb50(0x04)
	float BlurOutDuration; // 0xb54(0x04)
	struct UCurveFloat* BlurCurve; // 0xb58(0x08)
	struct UTexture2D* LensNormal; // 0xb60(0x08)
	struct UTexture2D* LensMask; // 0xb68(0x08)
	struct FLinearColor LensTint; // 0xb70(0x10)

	void determine sfx relationship(char Relationship); // Function BP_EyeOfReach.BP_EyeOfReach_C.determine sfx relationship // Public|HasOutParms|BlueprintCallable|BlueprintEvent // @ game+0x1848130
	void DoFireEffect(); // Function BP_EyeOfReach.BP_EyeOfReach_C.DoFireEffect // Public|HasDefaults|BlueprintCallable|BlueprintEvent // @ game+0x1848130
	void UserConstructionScript(); // Function BP_EyeOfReach.BP_EyeOfReach_C.UserConstructionScript // Event|Public|BlueprintCallable|BlueprintEvent // @ game+0x1848130
	void OnWeaponFired(); // Function BP_EyeOfReach.BP_EyeOfReach_C.OnWeaponFired // Event|Protected|BlueprintEvent // @ game+0x1848130
	void ScopeOn(); // Function BP_EyeOfReach.BP_EyeOfReach_C.ScopeOn // Event|Protected|BlueprintEvent // @ game+0x1848130
	void ScopeOff(); // Function BP_EyeOfReach.BP_EyeOfReach_C.ScopeOff // Event|Protected|BlueprintEvent // @ game+0x1848130
	void ScopeTick(float DeltaSeconds); // Function BP_EyeOfReach.BP_EyeOfReach_C.ScopeTick // Event|Protected|BlueprintEvent // @ game+0x1848130
	void ScopeOffImmediate(); // Function BP_EyeOfReach.BP_EyeOfReach_C.ScopeOffImmediate // Event|Protected|BlueprintEvent // @ game+0x1848130
	void GlintOn(); // Function BP_EyeOfReach.BP_EyeOfReach_C.GlintOn // Event|Protected|BlueprintEvent // @ game+0x1848130
	void GlintOff(); // Function BP_EyeOfReach.BP_EyeOfReach_C.GlintOff // Event|Protected|BlueprintEvent // @ game+0x1848130
	void ExecuteUbergraph_BP_EyeOfReach(int32_t EntryPoint); // Function BP_EyeOfReach.BP_EyeOfReach_C.ExecuteUbergraph_BP_EyeOfReach // HasDefaults // @ game+0x1848130
};

