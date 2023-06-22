// BlueprintGeneratedClass BP_Base_Capstan.BP_Base_Capstan_C
// Size: 0x8c8 (Inherited: 0x8b0)
struct ABP_Base_Capstan_C : ACapstan {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x8b0(0x08)
	struct USphereComponent* ProjectileCollision; // 0x8b8(0x08)
	struct UWwiseEmitterComponent* NewVar_1; // 0x8c0(0x08)

	void UserConstructionScript(); // Function BP_Base_Capstan.BP_Base_Capstan_C.UserConstructionScript // Event|Public|BlueprintCallable|BlueprintEvent // @ game+0x1848130
	void Update Athena Character(struct AAthenaCharacter* AthenaCharacter); // Function BP_Base_Capstan.BP_Base_Capstan_C.Update Athena Character // Public|BlueprintCallable|BlueprintEvent // @ game+0x1848130
	void CapstanRotationSpeed(float RotationSpeed); // Function BP_Base_Capstan.BP_Base_Capstan_C.CapstanRotationSpeed // Public|BlueprintCallable|BlueprintEvent // @ game+0x1848130
	void DockingInterface(struct FBP_Docking Docking); // Function BP_Base_Capstan.BP_Base_Capstan_C.DockingInterface // Public|BlueprintCallable|BlueprintEvent // @ game+0x1848130
	void CapstanForce(float IndividualForce, struct FTransform LH_IK, struct FTransform RH_IK, struct AActor* Actor); // Function BP_Base_Capstan.BP_Base_Capstan_C.CapstanForce // Public|BlueprintCallable|BlueprintEvent // @ game+0x1848130
	void IK Limb Update Transform(char LimbId, struct FTransform TransformUpdate); // Function BP_Base_Capstan.BP_Base_Capstan_C.IK Limb Update Transform // Public|BlueprintCallable|BlueprintEvent // @ game+0x1848130
	void IK Limb Blend Timing(char LimbId, float BlendIn, float BlendOut); // Function BP_Base_Capstan.BP_Base_Capstan_C.IK Limb Blend Timing // Public|BlueprintCallable|BlueprintEvent // @ game+0x1848130
	void IK Limb Update Strength(char LimbId, float LocationStrength, float RotationStrength); // Function BP_Base_Capstan.BP_Base_Capstan_C.IK Limb Update Strength // Public|BlueprintCallable|BlueprintEvent // @ game+0x1848130
	void IK Limb Active(char LimbId, bool Active, char CoordinateSpace); // Function BP_Base_Capstan.BP_Base_Capstan_C.IK Limb Active // Public|BlueprintCallable|BlueprintEvent // @ game+0x1848130
	void IK Limb Stretch(float ArmStretch, float SpineStretch, float LegStretch); // Function BP_Base_Capstan.BP_Base_Capstan_C.IK Limb Stretch // Public|BlueprintCallable|BlueprintEvent // @ game+0x1848130
	void ExecuteUbergraph_BP_Base_Capstan(int32_t EntryPoint); // Function BP_Base_Capstan.BP_Base_Capstan_C.ExecuteUbergraph_BP_Base_Capstan // HasDefaults // @ game+0x1848130
};

