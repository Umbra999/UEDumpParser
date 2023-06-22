// Enum GlitterBeard.EFinaleState
enum class EFinaleState : uint8_t {
	Inactive,
	Active,
	ServerComplete,
	EFinaleState_MAX,
};

// Enum GlitterBeard.EGlitterbeardVFXState
enum class EGlitterbeardVFXState : uint8_t {
	Active,
	Inactive,
	EGlitterbeardVFXState_MAX,
};

// ScriptStruct GlitterBeard.FinaleReplicationState
// Size: 0x10 (Inherited: 0x00)
struct FFinaleReplicationState {
	char State; // 0x00(0x01)
	char UnknownData_1[0x7]; // 0x01(0x07)
	struct UObject* TargetEnsemble; // 0x08(0x08)
};

// ScriptStruct GlitterBeard.UnlockEventData
// Size: 0x04 (Inherited: 0x00)
struct FUnlockEventData {
	int32_t Idx; // 0x00(0x04)
};

// ScriptStruct GlitterBeard.GlitterBeardVFXTransitionCompletedEvent
// Size: 0x04 (Inherited: 0x00)
struct FGlitterBeardVFXTransitionCompletedEvent {
	int32_t Index; // 0x00(0x04)
};

// ScriptStruct GlitterBeard.ChangeGlitterBeardVFXStateEvent
// Size: 0x08 (Inherited: 0x00)
struct FChangeGlitterBeardVFXStateEvent {
	int32_t Index; // 0x00(0x04)
	char Target; // 0x04(0x01)
	char UnknownData_5[0x3]; // 0x05(0x03)
};

// ScriptStruct GlitterBeard.GlitterbeardPuzzleCancelTelemetryEvent
// Size: 0x10 (Inherited: 0x00)
struct FGlitterbeardPuzzleCancelTelemetryEvent {
	char UnknownData_0[0x10]; // 0x00(0x10)
};

// ScriptStruct GlitterBeard.GlitterbeardPuzzleUnlockTelemetryEvent
// Size: 0x10 (Inherited: 0x00)
struct FGlitterbeardPuzzleUnlockTelemetryEvent {
	char UnknownData_0[0x10]; // 0x00(0x10)
};

// ScriptStruct GlitterBeard.GlitterbeardPlayerPuzzleUnlockSuccessTelemetryEvent
// Size: 0x10 (Inherited: 0x00)
struct FGlitterbeardPlayerPuzzleUnlockSuccessTelemetryEvent {
	char UnknownData_0[0x10]; // 0x00(0x10)
};

// ScriptStruct GlitterBeard.GlitterbeardPlayerPuzzleUnlockFailureTelemetryEvent
// Size: 0x20 (Inherited: 0x00)
struct FGlitterbeardPlayerPuzzleUnlockFailureTelemetryEvent {
	char UnknownData_0[0x20]; // 0x00(0x20)
};

// ScriptStruct GlitterBeard.GlitterbeardSessionEndTelemetryEvent
// Size: 0x10 (Inherited: 0x00)
struct FGlitterbeardSessionEndTelemetryEvent {
	char UnknownData_0[0x10]; // 0x00(0x10)
};

// ScriptStruct GlitterBeard.GlitterbeardSessionBeginTelemetryEvent
// Size: 0x10 (Inherited: 0x00)
struct FGlitterbeardSessionBeginTelemetryEvent {
	char UnknownData_0[0x10]; // 0x00(0x10)
};

