// Class SirensAnimation.SirenAnimationData
// Size: 0x88 (Inherited: 0x28)
struct USirenAnimationData : UAnimationData {
	struct FSirenAnimationDataStructure SirenAnimationData; // 0x28(0x60)
};

// Class SirensAnimation.SirenAnimationInstance
// Size: 0x710 (Inherited: 0x440)
struct USirenAnimationInstance : UAnimInstance {
	char UnknownData_440[0x10]; // 0x440(0x10)
	struct APawn* PawnOwner; // 0x450(0x08)
	struct FName PropAttachmentSocket; // 0x458(0x08)
	struct FSirenAnimationDataStructure SirenAnimationData; // 0x460(0x60)
	struct FAthenaAnimationWeapon AttackAnimations; // 0x4c0(0xb8)
	float ForwardSpeed; // 0x578(0x04)
	char UnknownData_57C[0xc]; // 0x57c(0x0c)
	float TiltDirectionAngleDegrees; // 0x588(0x04)
	float TiltAngleAlpha; // 0x58c(0x04)
	float SpinAngleDegrees; // 0x590(0x04)
	float MaxTiltAngleRepresentedByAdditiveBendAnimations; // 0x594(0x04)
	bool UpperBodyOverlayActive; // 0x598(0x01)
	bool SwimmingLongways; // 0x599(0x01)
	bool UseAggressiveAnimations; // 0x59a(0x01)
	bool UseAlternativeAggressiveAnimation; // 0x59b(0x01)
	char UnknownData_59C[0x4]; // 0x59c(0x04)
	struct TArray<struct UClass*> StrategiesForAggressiveAnimations; // 0x5a0(0x10)
	struct FFloatRange TimeBeforeAlternativeAggressiveAnimationToggleFlips; // 0x5b0(0x10)
	char UnknownData_5C0[0x8]; // 0x5c0(0x08)
	bool AnimationsLoaded; // 0x5c8(0x01)
	char UnknownData_5C9[0x3]; // 0x5c9(0x03)
	float AimUpAlpha; // 0x5cc(0x04)
	float AimDownAlpha; // 0x5d0(0x04)
	char UnknownData_5D4[0x4]; // 0x5d4(0x04)
	struct FCustomAnimationMontageStateMachine FullBodyStateMachine; // 0x5d8(0xd8)
	struct FHitReactionAnimationState HitReacts; // 0x6b0(0x28)
	char UnknownData_6D8[0x38]; // 0x6d8(0x38)

	void ClearActiveAttack(); // Function SirensAnimation.SirenAnimationInstance.ClearActiveAttack // Final|Native|Public|BlueprintCallable // @ game+0x165e670
	void BeginNewAttack(); // Function SirensAnimation.SirenAnimationInstance.BeginNewAttack // Final|Native|Public|BlueprintCallable // @ game+0x165e650
};

