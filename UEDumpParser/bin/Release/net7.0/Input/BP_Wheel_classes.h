// BlueprintGeneratedClass BP_Wheel.BP_Wheel_C
// Size: 0xbe1 (Inherited: 0xaa0)
struct ABP_Wheel_C : AWheel {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xaa0(0x08)
	struct USphereComponent* ProjectileCollision; // 0xaa8(0x08)
	struct UInteractableComponent* Interactable; // 0xab0(0x08)
	struct FObjectMessagingHandle Wheel Centered; // 0xab8(0x58)
	struct FObjectMessagingHandle Wheel Movement Started; // 0xb10(0x58)
	struct FObjectMessagingHandle Wheel Movement Stopped; // 0xb68(0x58)
	struct FWwiseEmitter AudioEmitter; // 0xbc0(0x20)
	bool ShipWheelTurning; // 0xbe0(0x01)

	struct FDockableInfo GetDockableInfo(); // Function BP_Wheel.BP_Wheel_C.GetDockableInfo // Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent // @ game+0x1848130
	struct FVector GetClosestInteractionPoint(struct FVector ReferencePosition, float OutInteractionPointRadius); // Function BP_Wheel.BP_Wheel_C.GetClosestInteractionPoint // Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent // @ game+0x1848130
	void UserConstructionScript(); // Function BP_Wheel.BP_Wheel_C.UserConstructionScript // Event|Public|BlueprintCallable|BlueprintEvent // @ game+0x1848130
	void Receive Animation State(struct FRotator WheelRotation, float WheelAnimationTime, char EWheel, float Direction, float WheelRate); // Function BP_Wheel.BP_Wheel_C.Receive Animation State // Public|BlueprintCallable|BlueprintEvent // @ game+0x1848130
	void StickInput(float StickInputX); // Function BP_Wheel.BP_Wheel_C.StickInput // Public|BlueprintCallable|BlueprintEvent // @ game+0x1848130
	void Update Athena Character(struct AAthenaCharacter* AthenaCharacter); // Function BP_Wheel.BP_Wheel_C.Update Athena Character // Public|BlueprintCallable|BlueprintEvent // @ game+0x1848130
	void CapstanRotationSpeed(float RotationSpeed); // Function BP_Wheel.BP_Wheel_C.CapstanRotationSpeed // Public|BlueprintCallable|BlueprintEvent // @ game+0x1848130
	void DockingInterface(struct FBP_Docking Docking); // Function BP_Wheel.BP_Wheel_C.DockingInterface // Public|BlueprintCallable|BlueprintEvent // @ game+0x1848130
	void CapstanForce(float IndividualForce, struct FTransform LH_IK, struct FTransform RH_IK, struct AActor* Actor); // Function BP_Wheel.BP_Wheel_C.CapstanForce // Public|BlueprintCallable|BlueprintEvent // @ game+0x1848130
	void IK Limb Update Transform(char LimbId, struct FTransform TransformUpdate); // Function BP_Wheel.BP_Wheel_C.IK Limb Update Transform // Public|BlueprintCallable|BlueprintEvent // @ game+0x1848130
	void IK Limb Blend Timing(char LimbId, float BlendIn, float BlendOut); // Function BP_Wheel.BP_Wheel_C.IK Limb Blend Timing // Public|BlueprintCallable|BlueprintEvent // @ game+0x1848130
	void IK Limb Update Strength(char LimbId, float LocationStrength, float RotationStrength); // Function BP_Wheel.BP_Wheel_C.IK Limb Update Strength // Public|BlueprintCallable|BlueprintEvent // @ game+0x1848130
	void IK Limb Active(char LimbId, bool Active, char CoordinateSpace); // Function BP_Wheel.BP_Wheel_C.IK Limb Active // Public|BlueprintCallable|BlueprintEvent // @ game+0x1848130
	void IK Limb Stretch(float ArmStretch, float SpineStretch, float LegStretch); // Function BP_Wheel.BP_Wheel_C.IK Limb Stretch // Public|BlueprintCallable|BlueprintEvent // @ game+0x1848130
	void RequestStateChange(struct AActor* Controller); // Function BP_Wheel.BP_Wheel_C.RequestStateChange // Event|Public|BlueprintEvent // @ game+0x1848130
	void ExecuteUbergraph_BP_Wheel(int32_t EntryPoint); // Function BP_Wheel.BP_Wheel_C.ExecuteUbergraph_BP_Wheel // HasDefaults // @ game+0x1848130
};

