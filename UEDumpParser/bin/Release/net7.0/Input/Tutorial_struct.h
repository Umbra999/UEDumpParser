// Enum Tutorial.ETutorialType
enum class ETutorialType : uint8_t {
	Undecided,
	NoTutorial,
	MaidenVoyage,
	BeachNPCSpawnFlow,
	CompanyOnBoarding,
	Captaincy,
	ETutorialType_MAX,
};

// ScriptStruct Tutorial.ContextualTutorialPromptDesc
// Size: 0x38 (Inherited: 0x00)
struct FContextualTutorialPromptDesc {
	struct UClass* PromptActorClass; // 0x00(0x20)
	struct UClass* AccessKey; // 0x20(0x08)
	struct FName FeatureName; // 0x28(0x08)
	int32_t MustBeUnderCount; // 0x30(0x04)
	char UnknownData_34[0x4]; // 0x34(0x04)
};

// ScriptStruct Tutorial.EventTutorialTypeDecided
// Size: 0x01 (Inherited: 0x00)
struct FEventTutorialTypeDecided {
	char TutorialType; // 0x00(0x01)
};

// ScriptStruct Tutorial.BeachNPCSpawnFlowNetworkEvent
// Size: 0x18 (Inherited: 0x10)
struct FBeachNPCSpawnFlowNetworkEvent : FNetworkEventStruct {
	bool HasTaleCheckpointVoyage; // 0x10(0x01)
	char UnknownData_11[0x7]; // 0x11(0x07)
};

// ScriptStruct Tutorial.HasTutorialStarterBegunCondition
// Size: 0x30 (Inherited: 0x28)
struct FHasTutorialStarterBegunCondition : FTargetedPayloadConditionBase {
	char TutorialStarterType; // 0x28(0x01)
	char UnknownData_29[0x7]; // 0x29(0x07)
};

// ScriptStruct Tutorial.TutorialStepEndedTelemetryEvent
// Size: 0x28 (Inherited: 0x00)
struct FTutorialStepEndedTelemetryEvent {
	struct FString SequenceName; // 0x00(0x10)
	struct FString StepName; // 0x10(0x10)
	bool StepCompleted; // 0x20(0x01)
	bool IsFinalStep; // 0x21(0x01)
	char UnknownData_22[0x6]; // 0x22(0x06)
};

// ScriptStruct Tutorial.TutorialShowTutorialLegendaryTavernStrangerEvent
// Size: 0x01 (Inherited: 0x00)
struct FTutorialShowTutorialLegendaryTavernStrangerEvent {
	char UnknownData_0[0x1]; // 0x00(0x01)
};

