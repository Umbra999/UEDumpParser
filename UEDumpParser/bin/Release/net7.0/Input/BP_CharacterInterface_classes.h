// BlueprintGeneratedClass BP_CharacterInterface.BP_CharacterInterface_C
// Size: 0x28 (Inherited: 0x28)
struct UBP_CharacterInterface_C : UInterface {

	void IK Limb Stretch(float ArmStretch, float SpineStretch, float LegStretch); // Function BP_CharacterInterface.BP_CharacterInterface_C.IK Limb Stretch // Public|BlueprintCallable|BlueprintEvent // @ game+0x1848130
	void IK Limb Active(char LimbId, bool Active, char CoordinateSpace); // Function BP_CharacterInterface.BP_CharacterInterface_C.IK Limb Active // Public|BlueprintCallable|BlueprintEvent // @ game+0x1848130
	void IK Limb Update Strength(char LimbId, float LocationStrength, float RotationStrength); // Function BP_CharacterInterface.BP_CharacterInterface_C.IK Limb Update Strength // Public|BlueprintCallable|BlueprintEvent // @ game+0x1848130
	void IK Limb Blend Timing(char LimbId, float BlendIn, float BlendOut); // Function BP_CharacterInterface.BP_CharacterInterface_C.IK Limb Blend Timing // Public|BlueprintCallable|BlueprintEvent // @ game+0x1848130
	void IK Limb Update Transform(char LimbId, struct FTransform TransformUpdate); // Function BP_CharacterInterface.BP_CharacterInterface_C.IK Limb Update Transform // Public|BlueprintCallable|BlueprintEvent // @ game+0x1848130
	void CapstanForce(float IndividualForce, struct FTransform LH_IK, struct FTransform RH_IK, struct AActor* Actor); // Function BP_CharacterInterface.BP_CharacterInterface_C.CapstanForce // Public|BlueprintCallable|BlueprintEvent // @ game+0x1848130
	void DockingInterface(struct FBP_Docking Docking); // Function BP_CharacterInterface.BP_CharacterInterface_C.DockingInterface // Public|BlueprintCallable|BlueprintEvent // @ game+0x1848130
	void CapstanRotationSpeed(float RotationSpeed); // Function BP_CharacterInterface.BP_CharacterInterface_C.CapstanRotationSpeed // Public|BlueprintCallable|BlueprintEvent // @ game+0x1848130
	void Update Athena Character(struct AAthenaCharacter* AthenaCharacter); // Function BP_CharacterInterface.BP_CharacterInterface_C.Update Athena Character // Public|BlueprintCallable|BlueprintEvent // @ game+0x1848130
};

