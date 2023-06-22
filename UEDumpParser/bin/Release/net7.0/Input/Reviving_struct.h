// Enum Reviving.EReviveState
enum class EReviveState : uint8_t {
	Revivable,
	NotRevivable,
	BeingRevived,
	Revived,
	EReviveState_MAX,
};

// ScriptStruct Reviving.ModeSpecificReviveSettings
// Size: 0x38 (Inherited: 0x00)
struct FModeSpecificReviveSettings {
	char AssociatedPlaymode; // 0x00(0x01)
	char UnknownData_1[0x3]; // 0x01(0x03)
	float DeathCameraBlackFadeDelay; // 0x04(0x04)
	float DeathCameraBlackFadeDuration; // 0x08(0x04)
	float DeathCameraBlackFadeEventClientTimeout; // 0x0c(0x04)
	float DeathCameraBlackFadeEventServerTimeout; // 0x10(0x04)
	float DelayBeforeEvaporate; // 0x14(0x04)
	float EvaporateDuration; // 0x18(0x04)
	float DeathCameraStartDelay; // 0x1c(0x04)
	float ReviveWindowDuration; // 0x20(0x04)
	float GhostFadeDuration; // 0x24(0x04)
	float AutoGiveUpDuration; // 0x28(0x04)
	char UnknownData_2C[0x4]; // 0x2c(0x04)
	struct UReviveSettings* CachedReviveSettings; // 0x30(0x08)
};

// ScriptStruct Reviving.ReviveEffectsValues
// Size: 0x20 (Inherited: 0x00)
struct FReviveEffectsValues {
	struct UMaterialInstanceDynamic* AstralCordPostProcessMID; // 0x00(0x08)
	char UnknownData_8[0x18]; // 0x08(0x18)
};

// ScriptStruct Reviving.PlayerInReviveableStateTelemetryEvent
// Size: 0x01 (Inherited: 0x00)
struct FPlayerInReviveableStateTelemetryEvent {
	char UnknownData_0[0x1]; // 0x00(0x01)
};

// ScriptStruct Reviving.PlayerRevivalTelemetryEvent
// Size: 0x01 (Inherited: 0x00)
struct FPlayerRevivalTelemetryEvent {
	bool Success; // 0x00(0x01)
};

// ScriptStruct Reviving.PostReviveLocomotionActionStateConstructionInfo
// Size: 0x30 (Inherited: 0x30)
struct FPostReviveLocomotionActionStateConstructionInfo : FActorActionStateConstructionInfo {
};

// ScriptStruct Reviving.EventRevivableRepresentationSpawnCompleted
// Size: 0x01 (Inherited: 0x00)
struct FEventRevivableRepresentationSpawnCompleted {
	bool FromSwimming; // 0x00(0x01)
};

// ScriptStruct Reviving.EventRevivableRepresentationSpawnStarted
// Size: 0x01 (Inherited: 0x00)
struct FEventRevivableRepresentationSpawnStarted {
	char UnknownData_0[0x1]; // 0x00(0x01)
};

// ScriptStruct Reviving.ReviveableActionStateConstructionInfo
// Size: 0x70 (Inherited: 0x30)
struct FReviveableActionStateConstructionInfo : FActorActionStateConstructionInfo {
	struct UClass* ActionStateId; // 0x30(0x08)
	struct FDamageInstance DamageInstance; // 0x38(0x30)
	char CharacterDeathType; // 0x68(0x01)
	char CharacterType; // 0x69(0x01)
	char UnknownData_6A[0x6]; // 0x6a(0x06)
};

// ScriptStruct Reviving.RevivedActionStateConstructionInfo
// Size: 0x30 (Inherited: 0x30)
struct FRevivedActionStateConstructionInfo : FActorActionStateConstructionInfo {
};

// ScriptStruct Reviving.RevivedActionStateParams
// Size: 0x10 (Inherited: 0x00)
struct FRevivedActionStateParams {
	float HealthRegained; // 0x00(0x04)
	float ReviveDuration; // 0x04(0x04)
	struct UWwiseEvent* ReviveGaspAudio; // 0x08(0x08)
};

// ScriptStruct Reviving.ReviveableActionStateStarted
// Size: 0x01 (Inherited: 0x00)
struct FReviveableActionStateStarted {
	char UnknownData_0[0x1]; // 0x00(0x01)
};

// ScriptStruct Reviving.EventCharacterDiedDuringReviving
// Size: 0x08 (Inherited: 0x00)
struct FEventCharacterDiedDuringReviving {
	struct ACharacter* OwningCharacter; // 0x00(0x08)
};

// ScriptStruct Reviving.EventRevivePlayerActionStateLeft
// Size: 0x01 (Inherited: 0x00)
struct FEventRevivePlayerActionStateLeft {
	char UnknownData_0[0x1]; // 0x00(0x01)
};

// ScriptStruct Reviving.EventRevivePlayerActionStateEntered
// Size: 0x01 (Inherited: 0x00)
struct FEventRevivePlayerActionStateEntered {
	char UnknownData_0[0x1]; // 0x00(0x01)
};

// ScriptStruct Reviving.EventCharacterFullyRevived
// Size: 0x01 (Inherited: 0x00)
struct FEventCharacterFullyRevived {
	char UnknownData_0[0x1]; // 0x00(0x01)
};

// ScriptStruct Reviving.ReviveEndedEarlyEvent
// Size: 0x01 (Inherited: 0x00)
struct FReviveEndedEarlyEvent {
	char UnknownData_0[0x1]; // 0x00(0x01)
};

// ScriptStruct Reviving.EventRevivableRepresentationReturnedToBody
// Size: 0x01 (Inherited: 0x00)
struct FEventRevivableRepresentationReturnedToBody {
	char UnknownData_0[0x1]; // 0x00(0x01)
};

// ScriptStruct Reviving.SuccessfulReviveEvent
// Size: 0x01 (Inherited: 0x00)
struct FSuccessfulReviveEvent {
	char UnknownData_0[0x1]; // 0x00(0x01)
};

// ScriptStruct Reviving.BeingRevivedStoppedEvent
// Size: 0x01 (Inherited: 0x00)
struct FBeingRevivedStoppedEvent {
	char UnknownData_0[0x1]; // 0x00(0x01)
};

// ScriptStruct Reviving.BeingRevivedStartedEvent
// Size: 0x01 (Inherited: 0x00)
struct FBeingRevivedStartedEvent {
	char UnknownData_0[0x1]; // 0x00(0x01)
};

// ScriptStruct Reviving.RevivableCharacterGhostlyBodyEvaporateStarted
// Size: 0x01 (Inherited: 0x00)
struct FRevivableCharacterGhostlyBodyEvaporateStarted {
	char UnknownData_0[0x1]; // 0x00(0x01)
};

// ScriptStruct Reviving.RevivingWindowEnd
// Size: 0x01 (Inherited: 0x00)
struct FRevivingWindowEnd {
	char UnknownData_0[0x1]; // 0x00(0x01)
};

// ScriptStruct Reviving.RevivingWindowStart
// Size: 0x40 (Inherited: 0x00)
struct FRevivingWindowStart {
	struct FDamageInstance DamageInstance; // 0x00(0x30)
	char CharacterDeathType; // 0x30(0x01)
	char UnknownData_31[0x7]; // 0x31(0x07)
	struct ACharacter* RevivableCharacter; // 0x38(0x08)
};

// ScriptStruct Reviving.RevivePlayerActionStateConstructionInfo
// Size: 0x60 (Inherited: 0x30)
struct FRevivePlayerActionStateConstructionInfo : FActorActionStateConstructionInfo {
	struct FNetActorPtr CharacterReviving; // 0x30(0x14)
	struct FNetSubObjectPtr CharacterBeingRevived; // 0x44(0x14)
	struct UClass* InputID; // 0x58(0x08)
};

