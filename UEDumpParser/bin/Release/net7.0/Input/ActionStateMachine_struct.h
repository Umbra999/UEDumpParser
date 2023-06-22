// Enum ActionStateMachine.EActionStateMachineTrackId
enum class EActionStateMachineTrackId : uint8_t {
	Locomotion,
	Overlay,
	ItemUse,
	ForcedMovement,
	Migration,
	Count,
	Invalid,
	EActionStateMachineTrackId_MAX,
};

// Enum ActionStateMachine.EActionPredictionType
enum class EActionPredictionType : uint8_t {
	Predicted,
	NotPredicted,
	EActionPredictionType_MAX,
};

// Enum ActionStateMachine.EActionStatePriority
enum class EActionStatePriority : uint8_t {
	Overrides,
	Overriden,
	EActionStatePriority_MAX,
};

// ScriptStruct ActionStateMachine.ActorActionStateConstructionInfo
// Size: 0x30 (Inherited: 0x28)
struct FActorActionStateConstructionInfo : FActionStateConstructionInfo {
	struct AActor* ActorOwner; // 0x28(0x08)
};

// ScriptStruct ActionStateMachine.ActionStateConstructionInfo
// Size: 0x28 (Inherited: 0x00)
struct FActionStateConstructionInfo {
	struct UClass* Id; // 0x00(0x08)
	struct UScriptStruct* Type; // 0x08(0x08)
	char UnknownData_10[0x18]; // 0x10(0x18)
};

// ScriptStruct ActionStateMachine.ActionStateSerialisableData
// Size: 0x30 (Inherited: 0x00)
struct FActionStateSerialisableData {
	char UnknownData_0[0x8]; // 0x00(0x08)
	struct UClass* Id; // 0x08(0x08)
	struct UScriptStruct* Type; // 0x10(0x08)
	char UnknownData_18[0x18]; // 0x18(0x18)
};

// ScriptStruct ActionStateMachine.ActionStateMessage
// Size: 0x10 (Inherited: 0x00)
struct FActionStateMessage {
	char UnknownData_0[0x8]; // 0x00(0x08)
	struct UScriptStruct* Type; // 0x08(0x08)
};

// ScriptStruct ActionStateMachine.ActionStateChangeRequestId
// Size: 0x01 (Inherited: 0x00)
struct FActionStateChangeRequestId {
	char Raw; // 0x00(0x01)
};

// ScriptStruct ActionStateMachine.SerialisedActionStateInfo
// Size: 0x40 (Inherited: 0x00)
struct FSerialisedActionStateInfo {
	char UnknownData_0[0x40]; // 0x00(0x40)
};

// ScriptStruct ActionStateMachine.SerialisedActionStateMessage
// Size: 0x18 (Inherited: 0x00)
struct FSerialisedActionStateMessage {
	char UnknownData_0[0x18]; // 0x00(0x18)
};

// ScriptStruct ActionStateMachine.SerialisedConstructionInfoStore
// Size: 0x140 (Inherited: 0x00)
struct FSerialisedConstructionInfoStore {
	struct FSerialisedActionStateInfo SerialisedConstructionInfo[0x05]; // 0x00(0x140)
};

// ScriptStruct ActionStateMachine.ResetStateMachineRpc
// Size: 0x150 (Inherited: 0x00)
struct FResetStateMachineRpc {
	struct FActionStateChangeRequestId LatestEpochIds[0x05]; // 0x00(0x05)
	struct FActionStateChangeRequestId LatestRequestIds[0x05]; // 0x05(0x05)
	char UnknownData_A[0x6]; // 0x0a(0x06)
	struct FSerialisedConstructionInfoStore PerTrackConstructionInfoStore; // 0x10(0x140)
};

// ScriptStruct ActionStateMachine.TestActionStateSerialisableData
// Size: 0x38 (Inherited: 0x30)
struct FTestActionStateSerialisableData : FActionStateSerialisableData {
	int32_t IntProp; // 0x30(0x04)
	char UnknownData_34[0x4]; // 0x34(0x04)
};

// ScriptStruct ActionStateMachine.ActionStatePriorityList
// Size: 0x18 (Inherited: 0x00)
struct FActionStatePriorityList {
	struct UClass* State; // 0x00(0x08)
	struct TArray<struct FActionStatePriorityRelationship> Entries; // 0x08(0x10)
};

// ScriptStruct ActionStateMachine.ActionStatePriorityRelationship
// Size: 0x10 (Inherited: 0x00)
struct FActionStatePriorityRelationship {
	struct UClass* State; // 0x00(0x08)
	char Priority; // 0x08(0x01)
	char UnknownData_9[0x7]; // 0x09(0x07)
};

// ScriptStruct ActionStateMachine.ActionStatePriorityTable
// Size: 0xa0 (Inherited: 0x00)
struct FActionStatePriorityTable {
	char UnknownData_0[0xa0]; // 0x00(0xa0)
};

// ScriptStruct ActionStateMachine.TestActionStateConstructionInfoWithObjPointers
// Size: 0x48 (Inherited: 0x28)
struct FTestActionStateConstructionInfoWithObjPointers : FActionStateConstructionInfo {
	struct UObject* ObjPointer; // 0x28(0x08)
	struct FInnerWithObjTestStruct Inner; // 0x30(0x08)
	struct TArray<struct UObject*> Array; // 0x38(0x10)
};

// ScriptStruct ActionStateMachine.InnerWithObjTestStruct
// Size: 0x08 (Inherited: 0x00)
struct FInnerWithObjTestStruct {
	struct UObject* ObjPointer; // 0x00(0x08)
};

// ScriptStruct ActionStateMachine.TestActionStateConstructionInfoWithInner
// Size: 0x48 (Inherited: 0x28)
struct FTestActionStateConstructionInfoWithInner : FActionStateConstructionInfo {
	float FloatProp; // 0x28(0x04)
	char UnknownData_2C[0x4]; // 0x2c(0x04)
	struct FInnerTestStruct InnerStruct; // 0x30(0x18)
};

// ScriptStruct ActionStateMachine.InnerTestStruct
// Size: 0x18 (Inherited: 0x00)
struct FInnerTestStruct {
	bool BoolProp; // 0x00(0x01)
	char UnknownData_1[0x7]; // 0x01(0x07)
	struct FString StringProp; // 0x08(0x10)
};

// ScriptStruct ActionStateMachine.TestActionStateConstructionInfo
// Size: 0x30 (Inherited: 0x28)
struct FTestActionStateConstructionInfo : FActionStateConstructionInfo {
	int32_t IntProp; // 0x28(0x04)
	char UnknownData_2C[0x4]; // 0x2c(0x04)
};

// ScriptStruct ActionStateMachine.EventWaitingToSpawnActionStateEndedClient
// Size: 0x01 (Inherited: 0x00)
struct FEventWaitingToSpawnActionStateEndedClient {
	char UnknownData_0[0x1]; // 0x00(0x01)
};

// ScriptStruct ActionStateMachine.EventWaitingToSpawnActionStateStartedClient
// Size: 0x01 (Inherited: 0x00)
struct FEventWaitingToSpawnActionStateStartedClient {
	char UnknownData_0[0x1]; // 0x00(0x01)
};

// ScriptStruct ActionStateMachine.EventFirstPersonAnimaticActionStateEndedClient
// Size: 0x01 (Inherited: 0x00)
struct FEventFirstPersonAnimaticActionStateEndedClient {
	char UnknownData_0[0x1]; // 0x00(0x01)
};

// ScriptStruct ActionStateMachine.NullActionStateConstructionInfo
// Size: 0x30 (Inherited: 0x30)
struct FNullActionStateConstructionInfo : FActorActionStateConstructionInfo {
};

// ScriptStruct ActionStateMachine.TestActionStateMessage2
// Size: 0x10 (Inherited: 0x10)
struct FTestActionStateMessage2 : FActionStateMessage {
};

// ScriptStruct ActionStateMachine.TestActionStateMessage
// Size: 0x18 (Inherited: 0x10)
struct FTestActionStateMessage : FActionStateMessage {
	int32_t TestProperty; // 0x10(0x04)
	char UnknownData_14[0x4]; // 0x14(0x04)
};

// ScriptStruct ActionStateMachine.TestActorActionStateConstructionInfo
// Size: 0x38 (Inherited: 0x30)
struct FTestActorActionStateConstructionInfo : FActorActionStateConstructionInfo {
	int32_t IntProp; // 0x30(0x04)
	char UnknownData_34[0x4]; // 0x34(0x04)
};

