// Enum ShantyPuzzle.EShantyPuzzleCompletionReactionState
enum class EShantyPuzzleCompletionReactionState : uint8_t {
	None,
	CompletionStarted,
	CompletionAborted,
	UnlockComplete,
	EShantyPuzzleCompletionReactionState_MAX,
};

// Enum ShantyPuzzle.EGlitterBeardPlayerPuzzleOutcome
enum class EGlitterBeardPlayerPuzzleOutcome : uint8_t {
	WrongTime,
	WrongInstrument,
	WrongShanty,
	ConditionsMetForThisPosition,
	EGlitterBeardPlayerPuzzleOutcome_MAX,
};

// ScriptStruct ShantyPuzzle.ShantyPuzzleUnlockCanceledEvent
// Size: 0x01 (Inherited: 0x00)
struct FShantyPuzzleUnlockCanceledEvent {
	char UnknownData_0[0x1]; // 0x00(0x01)
};

// ScriptStruct ShantyPuzzle.ShantyPuzzleSingleInteractionZoneStopInteractingEvent
// Size: 0x10 (Inherited: 0x00)
struct FShantyPuzzleSingleInteractionZoneStopInteractingEvent {
	struct AActor* Player; // 0x00(0x08)
	int32_t InteractionZoneIdx; // 0x08(0x04)
	char UnknownData_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct ShantyPuzzle.ShantyPuzzleSingleInteractionZoneUnlockEvent
// Size: 0x10 (Inherited: 0x00)
struct FShantyPuzzleSingleInteractionZoneUnlockEvent {
	struct AActor* Player; // 0x00(0x08)
	int32_t InteractionZoneIdx; // 0x08(0x04)
	char UnknownData_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct ShantyPuzzle.ShantyPuzzlePlayerExitInteractionZoneEvent
// Size: 0x08 (Inherited: 0x00)
struct FShantyPuzzlePlayerExitInteractionZoneEvent {
	struct AActor* Player; // 0x00(0x08)
};

// ScriptStruct ShantyPuzzle.ShantyPuzzlePlayerEnterInteractionZoneEvent
// Size: 0x08 (Inherited: 0x00)
struct FShantyPuzzlePlayerEnterInteractionZoneEvent {
	struct AActor* Player; // 0x00(0x08)
};

// ScriptStruct ShantyPuzzle.ShantyPuzzleUnlockedCompleteEvent
// Size: 0x01 (Inherited: 0x00)
struct FShantyPuzzleUnlockedCompleteEvent {
	char UnknownData_0[0x1]; // 0x00(0x01)
};

// ScriptStruct ShantyPuzzle.ShantyPuzzleInteractionZoneDefinition
// Size: 0x18 (Inherited: 0x00)
struct FShantyPuzzleInteractionZoneDefinition {
	struct FVector Location; // 0x00(0x0c)
	float Radius; // 0x0c(0x04)
	char RequiredMusicalInstrumentType; // 0x10(0x01)
	char UnknownData_11[0x3]; // 0x11(0x03)
	int32_t RequiredNumInteractors; // 0x14(0x04)
};

// ScriptStruct ShantyPuzzle.ShantyPuzzleCompleteEvent
// Size: 0x10 (Inherited: 0x00)
struct FShantyPuzzleCompleteEvent {
	struct TArray<struct FGuid> ParticipatingCrews; // 0x00(0x10)
};

