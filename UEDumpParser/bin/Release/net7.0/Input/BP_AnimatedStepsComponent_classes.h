// BlueprintGeneratedClass BP_AnimatedStepsComponent.BP_AnimatedStepsComponent_C
// Size: 0x12c (Inherited: 0xf0)
struct UBP_AnimatedStepsComponent_C : UAnimatedStepsComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xf0(0x08)
	struct TArray<float> BoxDelays; // 0xf8(0x10)
	struct TArray<float> BoxTargetZs; // 0x108(0x10)
	struct UCurveFloat* AnimCurve; // 0x118(0x08)
	float MovementTimer; // 0x120(0x04)
	float AnimationDuration; // 0x124(0x04)
	float AnimationStartDelay; // 0x128(0x04)

	void StartOpeningSteps(); // Function BP_AnimatedStepsComponent.BP_AnimatedStepsComponent_C.StartOpeningSteps // Public|BlueprintCallable|BlueprintEvent // @ game+0x1848130
	void SetAllStepsZs(struct TArray<float> TargetZOffsets, bool OpeningOrClosing); // Function BP_AnimatedStepsComponent.BP_AnimatedStepsComponent_C.SetAllStepsZs // Public|HasOutParms|BlueprintCallable|BlueprintEvent // @ game+0x1848130
	void UpdateStep(int32_t BoneIndex, float TargetZ, float MovementDelay, struct UBoxComponent* AttachedBox, struct FVector BoxOrigin); // Function BP_AnimatedStepsComponent.BP_AnimatedStepsComponent_C.UpdateStep // Public|HasDefaults|BlueprintCallable|BlueprintEvent // @ game+0x1848130
	void ReceiveTick(float DeltaSeconds); // Function BP_AnimatedStepsComponent.BP_AnimatedStepsComponent_C.ReceiveTick // Event|Public|BlueprintEvent // @ game+0x1848130
	void StartOpening(); // Function BP_AnimatedStepsComponent.BP_AnimatedStepsComponent_C.StartOpening // Event|Public|BlueprintEvent // @ game+0x1848130
	void OpenImmediate(); // Function BP_AnimatedStepsComponent.BP_AnimatedStepsComponent_C.OpenImmediate // Event|Public|BlueprintCallable|BlueprintEvent // @ game+0x1848130
	void Close(); // Function BP_AnimatedStepsComponent.BP_AnimatedStepsComponent_C.Close // Event|Public|BlueprintCallable|BlueprintEvent // @ game+0x1848130
	void ExecuteUbergraph_BP_AnimatedStepsComponent(int32_t EntryPoint); // Function BP_AnimatedStepsComponent.BP_AnimatedStepsComponent_C.ExecuteUbergraph_BP_AnimatedStepsComponent //  // @ game+0x1848130
};

