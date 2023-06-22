// Class PuzzleManagerFramework.PuzzleManager
// Size: 0x3d8 (Inherited: 0x3c8)
struct APuzzleManager : AActor {
	struct TArray<struct UPuzzleManagerPolicy*> PuzzleManagerPolicies; // 0x3c8(0x10)

	void ResetAllPuzzles(); // Function PuzzleManagerFramework.PuzzleManager.ResetAllPuzzles // Final|Native|Public|BlueprintCallable // @ game+0x4204e80
};

// Class PuzzleManagerFramework.PuzzleManagerPolicyInterface
// Size: 0x28 (Inherited: 0x28)
struct UPuzzleManagerPolicyInterface : UInterface {
};

// Class PuzzleManagerFramework.PuzzleManagerPolicy
// Size: 0xe0 (Inherited: 0x28)
struct UPuzzleManagerPolicy : UObject {
	char UnknownData_28[0x10]; // 0x28(0x10)
	struct AActor* PuzzleManager; // 0x38(0x08)
	char UnknownData_40[0xa0]; // 0x40(0xa0)
};

// Class PuzzleManagerFramework.PuzzleManagerPolicyTriggerInterface
// Size: 0x28 (Inherited: 0x28)
struct UPuzzleManagerPolicyTriggerInterface : UInterface {
};

