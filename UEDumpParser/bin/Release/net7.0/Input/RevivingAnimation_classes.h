// Class RevivingAnimation.ReviveGhostAnimationData
// Size: 0x30 (Inherited: 0x28)
struct UReviveGhostAnimationData : UAnimationData {
	struct UReviveGhostAnimationDataAsset* ReviveAnimationsDataAsset; // 0x28(0x08)
};

// Class RevivingAnimation.ReviveGhostAnimationDataAsset
// Size: 0x50 (Inherited: 0x28)
struct UReviveGhostAnimationDataAsset : UDataAsset {
	struct FReviveGhostAnimations Animations; // 0x28(0x28)
};

// Class RevivingAnimation.ReviveGhostAnimationInstance
// Size: 0x490 (Inherited: 0x440)
struct UReviveGhostAnimationInstance : UAnimInstance {
	char UnknownData_440[0x8]; // 0x440(0x08)
	struct FReviveGhostAnimations ReviveAnimations; // 0x448(0x28)
	bool FullyInitialised; // 0x470(0x01)
	bool FullyRevived; // 0x471(0x01)
	bool FromSwimming; // 0x472(0x01)
	char UnknownData_473[0x1d]; // 0x473(0x1d)
};

