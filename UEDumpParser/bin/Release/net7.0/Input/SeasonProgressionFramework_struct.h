// Enum SeasonProgressionFramework.ETrackedObjectiveType
enum class ETrackedObjectiveType : uint8_t {
	ProgressUpdate,
	Completion,
	ETrackedObjectiveType_MAX,
};

// Enum SeasonProgressionFramework.ESeasonGoalType
enum class ESeasonGoalType : uint8_t {
	Goal,
	Challenge,
	Individual,
	ESeasonGoalType_MAX,
};

// ScriptStruct SeasonProgressionFramework.PlayerTrackedObjective
// Size: 0x10 (Inherited: 0x00)
struct FPlayerTrackedObjective {
	struct FGuid ObjectiveId; // 0x00(0x10)
};

// ScriptStruct SeasonProgressionFramework.SeasonReward
// Size: 0x20 (Inherited: 0x00)
struct FSeasonReward {
	struct FGuid Id; // 0x00(0x10)
	int64_t Tier; // 0x10(0x08)
	int64_t Level; // 0x18(0x08)
};

// ScriptStruct SeasonProgressionFramework.SeasonServiceDataUpdatedEvent
// Size: 0x01 (Inherited: 0x00)
struct FSeasonServiceDataUpdatedEvent {
	char UnknownData_0[0x1]; // 0x00(0x01)
};

// ScriptStruct SeasonProgressionFramework.SeasonRewardEarnedEvent
// Size: 0x28 (Inherited: 0x00)
struct FSeasonRewardEarnedEvent {
	struct FGuid SeasonId; // 0x00(0x10)
	bool MultipleRewards; // 0x10(0x01)
	char UnknownData_11[0x7]; // 0x11(0x07)
	struct TArray<struct FSeasonReward> Rewards; // 0x18(0x10)
};

// ScriptStruct SeasonProgressionFramework.LevelCompletionEvent
// Size: 0x24 (Inherited: 0x00)
struct FLevelCompletionEvent {
	struct FGuid SeasonId; // 0x00(0x10)
	int32_t Level; // 0x10(0x04)
	int32_t TimeSpentInLevel; // 0x14(0x04)
	int32_t Tier; // 0x18(0x04)
	int32_t TimeSpentInTier; // 0x1c(0x04)
	bool TierCompleted; // 0x20(0x01)
	bool SeasonCompleted; // 0x21(0x01)
	char UnknownData_22[0x2]; // 0x22(0x02)
};

// ScriptStruct SeasonProgressionFramework.LevelProgressionEvent
// Size: 0x30 (Inherited: 0x00)
struct FLevelProgressionEvent {
	struct FGuid SeasonId; // 0x00(0x10)
	struct FGuid SourceGoalId; // 0x10(0x10)
	int32_t XpChange; // 0x20(0x04)
	int32_t CurrentXP; // 0x24(0x04)
	int32_t CurrentTier; // 0x28(0x04)
	int32_t CurrentLevel; // 0x2c(0x04)
};

// ScriptStruct SeasonProgressionFramework.SeasonGoalCompletionEvent
// Size: 0x34 (Inherited: 0x00)
struct FSeasonGoalCompletionEvent {
	struct FGuid SeasonId; // 0x00(0x10)
	struct FGuid GoalId; // 0x10(0x10)
	char GoalType; // 0x20(0x01)
	char UnknownData_21[0x3]; // 0x21(0x03)
	struct FGuid GoalGroupId; // 0x24(0x10)
};

// ScriptStruct SeasonProgressionFramework.SeasonGoalProgressionEvent
// Size: 0x40 (Inherited: 0x00)
struct FSeasonGoalProgressionEvent {
	int32_t PreviousProgress; // 0x00(0x04)
	int32_t CurrentProgress; // 0x04(0x04)
	int32_t CompletionThreshold; // 0x08(0x04)
	struct FGuid SeasonId; // 0x0c(0x10)
	struct FGuid GoalId; // 0x1c(0x10)
	char GoalType; // 0x2c(0x01)
	char UnknownData_2D[0x3]; // 0x2d(0x03)
	struct FGuid GoalGroupId; // 0x30(0x10)
};

// ScriptStruct SeasonProgressionFramework.TrackedObjectiveCompletionMessage
// Size: 0xe0 (Inherited: 0x00)
struct FTrackedObjectiveCompletionMessage {
	struct FGuid ObjectiveId; // 0x00(0x10)
	struct FPirateIdentity PirateIdentity; // 0x10(0x78)
	struct FPlayerBaseTelemetryFragment PlayerInfo; // 0x88(0x48)
	char PlayMode; // 0xd0(0x01)
	char PlayModeVariant; // 0xd1(0x01)
	char UnknownData_D2[0x6]; // 0xd2(0x06)
	double CreatedAt; // 0xd8(0x08)
};

// ScriptStruct SeasonProgressionFramework.TrackedObjectiveProgressUpdateMessage
// Size: 0xe8 (Inherited: 0x00)
struct FTrackedObjectiveProgressUpdateMessage {
	struct FGuid ObjectiveId; // 0x00(0x10)
	struct FPirateIdentity PirateIdentity; // 0x10(0x78)
	struct FPlayerBaseTelemetryFragment PlayerInfo; // 0x88(0x48)
	char PlayMode; // 0xd0(0x01)
	char PlayModeVariant; // 0xd1(0x01)
	char UnknownData_D2[0x2]; // 0xd2(0x02)
	int32_t Value; // 0xd4(0x04)
	double CreatedAt; // 0xd8(0x08)
	bool ShouldNotifyPlayer; // 0xe0(0x01)
	char UnknownData_E1[0x7]; // 0xe1(0x07)
};

// ScriptStruct SeasonProgressionFramework.TrackedObjectiveEvent
// Size: 0x18 (Inherited: 0x00)
struct FTrackedObjectiveEvent {
	char UnknownData_0[0x18]; // 0x00(0x18)
};

