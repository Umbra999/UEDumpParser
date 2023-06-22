// Class NudgeFramework.NudgeInterpolationParamsDataAsset
// Size: 0x50 (Inherited: 0x28)
struct UNudgeInterpolationParamsDataAsset : UDataAsset {
	struct FNudgeInterpolationParams NudgeInterpParams; // 0x28(0x20)
	struct UForceFeedbackEffect* ControllerForceFeedbackEffect; // 0x48(0x08)
};

// Class NudgeFramework.NudgeableInterface
// Size: 0x28 (Inherited: 0x28)
struct UNudgeableInterface : UInterface {
};

// Class NudgeFramework.NudgePolicyInterface
// Size: 0x28 (Inherited: 0x28)
struct UNudgePolicyInterface : UInterface {
};

// Class NudgeFramework.NudgePolicy
// Size: 0xc8 (Inherited: 0x28)
struct UNudgePolicy : UObject {
	char UnknownData_28[0x90]; // 0x28(0x90)
	struct AActor* OwningActor; // 0xb8(0x08)
	struct USceneComponent* OwnerComponent; // 0xc0(0x08)
};

