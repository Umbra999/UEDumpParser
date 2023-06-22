// Class AIGoalFramework.AIAreaOfOperationInterface
// Size: 0x28 (Inherited: 0x28)
struct UAIAreaOfOperationInterface : UInterface {
};

// Class AIGoalFramework.AIAreaOfOperationComponent
// Size: 0xd8 (Inherited: 0xc8)
struct UAIAreaOfOperationComponent : UActorComponent {
	char UnknownData_C8[0x8]; // 0xc8(0x08)
	bool UseAreaOfOperationOnSpawn; // 0xd0(0x01)
	char UnknownData_D1[0x3]; // 0xd1(0x03)
	float InitialRadius; // 0xd4(0x04)
};

// Class AIGoalFramework.AIGoal
// Size: 0x38 (Inherited: 0x28)
struct UAIGoal : UObject {
	struct UBehaviorTree* BehaviorTree; // 0x28(0x08)
	char UnknownData_30[0x8]; // 0x30(0x08)
};

// Class AIGoalFramework.AIGoalAssetList
// Size: 0x38 (Inherited: 0x28)
struct UAIGoalAssetList : UDataAsset {
	struct TArray<struct UAIGoal*> GoalTemplates; // 0x28(0x10)
};

// Class AIGoalFramework.AIGoalProcessorInterface
// Size: 0x28 (Inherited: 0x28)
struct UAIGoalProcessorInterface : UInterface {
};

// Class AIGoalFramework.AIGoalProcessorComponent
// Size: 0x128 (Inherited: 0xc8)
struct UAIGoalProcessorComponent : UActorComponent {
	char UnknownData_C8[0x8]; // 0xc8(0x08)
	struct TArray<struct UAIGoal*> Goals; // 0xd0(0x10)
	struct UAIGoalAssetList* AIGoalAssetList; // 0xe0(0x08)
	struct UAIGoal* ActiveGoal; // 0xe8(0x08)
	struct TArray<struct UAIGoalAssetList*> AdditionalGoalLists; // 0xf0(0x10)
	char UnknownData_100[0x28]; // 0x100(0x28)
};

// Class AIGoalFramework.FirstActionableAIGoalProcessorComponent
// Size: 0x128 (Inherited: 0x128)
struct UFirstActionableAIGoalProcessorComponent : UAIGoalProcessorComponent {
};

