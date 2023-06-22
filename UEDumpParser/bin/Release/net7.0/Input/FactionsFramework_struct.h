// Enum FactionsFramework.EEnemyFactionShipRangeState
enum class EEnemyFactionShipRangeState : uint8_t {
	OutOfRange,
	InRangeForEmergent,
	InRangeForInvasion,
	EEnemyFactionShipRangeState_MAX,
};

// Enum FactionsFramework.EFactionLeftReason
enum class EFactionLeftReason : uint8_t {
	Defeated,
	Voted,
	CrewDestroyed,
	EnteredCrossLevelTunnelOfTheDamned,
	Migrated,
	EFactionLeftReason_MAX,
};

// Enum FactionsFramework.EFactionType
enum class EFactionType : uint8_t {
	FactionG,
	FactionB,
	EFactionType_MAX,
};

// ScriptStruct FactionsFramework.CompanyFactionAlignment
// Size: 0x10 (Inherited: 0x00)
struct FCompanyFactionAlignment {
	struct UClass* Company; // 0x00(0x08)
	struct UClass* Faction; // 0x08(0x08)
};

// ScriptStruct FactionsFramework.FactionServicePopUpData
// Size: 0x10 (Inherited: 0x00)
struct FFactionServicePopUpData {
	struct UClass* Faction; // 0x00(0x08)
	struct UDataAsset* PopUpMessageDesc; // 0x08(0x08)
};

// ScriptStruct FactionsFramework.FactionStreakLevelData
// Size: 0x08 (Inherited: 0x00)
struct FFactionStreakLevelData {
	int32_t StreakLevel; // 0x00(0x04)
	int32_t StreakCountThreshold; // 0x04(0x04)
};

// ScriptStruct FactionsFramework.SandsOfFateData
// Size: 0x0c (Inherited: 0x00)
struct FSandsOfFateData {
	int32_t SinkingCrewStreakLevel; // 0x00(0x04)
	int32_t SunkCrewStreakLevel; // 0x04(0x04)
	int32_t SandsOfFateReward; // 0x08(0x04)
};

// ScriptStruct FactionsFramework.CrewFactionEntry
// Size: 0x30 (Inherited: 0x00)
struct FCrewFactionEntry {
	struct FGuid CrewId; // 0x00(0x10)
	struct UClass* Faction; // 0x10(0x08)
	char EnemyFactionShipRangeState; // 0x18(0x01)
	char UnknownData_19[0x3]; // 0x19(0x03)
	int32_t CurrentLootValue; // 0x1c(0x04)
	int32_t SandsOfFate; // 0x20(0x04)
	int32_t Streak; // 0x24(0x04)
	double LeaveFactionCooldownTimeStamp; // 0x28(0x08)
};

// ScriptStruct FactionsFramework.CrewFactionEntryData
// Size: 0x78 (Inherited: 0x00)
struct FCrewFactionEntryData {
	struct FGuid CrewId; // 0x00(0x10)
	struct FGuid SessionId; // 0x10(0x10)
	struct UClass* Faction; // 0x20(0x08)
	int32_t Streak; // 0x28(0x04)
	char UnknownData_2C[0x4]; // 0x2c(0x04)
	double CooldownTimeStamp; // 0x30(0x08)
	bool IsInInvasion; // 0x38(0x01)
	char UnknownData_39[0x7]; // 0x39(0x07)
	struct TArray<struct FGuid> EligibleLootBootyIds; // 0x40(0x10)
	int32_t CurrentLootValue; // 0x50(0x04)
	char UnknownData_54[0x4]; // 0x54(0x04)
	struct TArray<bool> HasDisplayedPromptForLootLevel; // 0x58(0x10)
	char UnknownData_68[0x10]; // 0x68(0x10)
};

// ScriptStruct FactionsFramework.CrewFactionTelemetryData
// Size: 0x30 (Inherited: 0x00)
struct FCrewFactionTelemetryData {
	struct FGuid CrewId; // 0x00(0x10)
	struct FGuid SessionId; // 0x10(0x10)
	struct FName Faction; // 0x20(0x08)
	int32_t Streak; // 0x28(0x04)
	int32_t SandsOfFate; // 0x2c(0x04)
};

// ScriptStruct FactionsFramework.FactionServicePostMigrationEvent
// Size: 0x18 (Inherited: 0x00)
struct FFactionServicePostMigrationEvent {
	struct FGuid CrewId; // 0x00(0x10)
	struct UClass* Faction; // 0x10(0x08)
};

// ScriptStruct FactionsFramework.FactionShipDefeatedEvent
// Size: 0x20 (Inherited: 0x00)
struct FFactionShipDefeatedEvent {
	struct TArray<struct FGuid> VictoriousCrewIds; // 0x00(0x10)
	struct FGuid DefeatedCrewId; // 0x10(0x10)
};

// ScriptStruct FactionsFramework.CrewStreakLevelIncreased
// Size: 0x14 (Inherited: 0x00)
struct FCrewStreakLevelIncreased {
	struct FGuid CrewId; // 0x00(0x10)
	int32_t StreakLevel; // 0x10(0x04)
};

// ScriptStruct FactionsFramework.ShipDestroyedByBattleBoundsEvent
// Size: 0x10 (Inherited: 0x00)
struct FShipDestroyedByBattleBoundsEvent {
	struct FGuid SunkShipCrewId; // 0x00(0x10)
};

// ScriptStruct FactionsFramework.CrewsSunkShipEvent
// Size: 0x20 (Inherited: 0x00)
struct FCrewsSunkShipEvent {
	struct TArray<struct FGuid> AttackingCrewIds; // 0x00(0x10)
	struct FGuid SunkShipCrewId; // 0x10(0x10)
};

// ScriptStruct FactionsFramework.CrewLeftFaction
// Size: 0x20 (Inherited: 0x00)
struct FCrewLeftFaction {
	struct FGuid LeavingCrewId; // 0x00(0x10)
	struct UClass* FactionLeft; // 0x10(0x08)
	char FactionLeftReason; // 0x18(0x01)
	char UnknownData_19[0x7]; // 0x19(0x07)
};

// ScriptStruct FactionsFramework.CrewLeavingFaction
// Size: 0x20 (Inherited: 0x00)
struct FCrewLeavingFaction {
	struct FGuid LeavingCrewId; // 0x00(0x10)
	struct UClass* FactionToLeave; // 0x10(0x08)
	char FactionLeftReason; // 0x18(0x01)
	char UnknownData_19[0x7]; // 0x19(0x07)
};

// ScriptStruct FactionsFramework.CrewJoinedFactionSuccess
// Size: 0x18 (Inherited: 0x00)
struct FCrewJoinedFactionSuccess {
	struct FGuid JoiningCrewId; // 0x00(0x10)
	struct UClass* FactionJoined; // 0x10(0x08)
};

// ScriptStruct FactionsFramework.CrewJoinedFaction
// Size: 0x18 (Inherited: 0x00)
struct FCrewJoinedFaction {
	struct FGuid JoiningCrewId; // 0x00(0x10)
	struct UClass* FactionJoined; // 0x10(0x08)
};

// ScriptStruct FactionsFramework.FactionCrewAttackedPreviouslySunkCrewTelemetryEvent
// Size: 0x38 (Inherited: 0x00)
struct FFactionCrewAttackedPreviouslySunkCrewTelemetryEvent {
	struct FGuid FactionSessionId; // 0x00(0x10)
	struct FName AlignedFactionName; // 0x10(0x08)
	struct FGuid AttackingCrewId; // 0x18(0x10)
	struct FGuid SunkCrewId; // 0x28(0x10)
};

// ScriptStruct FactionsFramework.FactionStreakIncreasedTelemetryEvent
// Size: 0x30 (Inherited: 0x00)
struct FFactionStreakIncreasedTelemetryEvent {
	struct FCrewFactionTelemetryData CrewFactionData; // 0x00(0x30)
};

// ScriptStruct FactionsFramework.FactionLeftTelemetryEvent
// Size: 0x1c (Inherited: 0x00)
struct FFactionLeftTelemetryEvent {
	struct FGuid FactionSessionId; // 0x00(0x10)
	struct FName AlignedFactionName; // 0x10(0x08)
	char LeftReason; // 0x18(0x01)
	char UnknownData_19[0x3]; // 0x19(0x03)
};

// ScriptStruct FactionsFramework.FactionJoinedTelemetryEvent
// Size: 0x18 (Inherited: 0x00)
struct FFactionJoinedTelemetryEvent {
	struct FGuid FactionSessionId; // 0x00(0x10)
	struct FName AlignedFactionName; // 0x10(0x08)
};

// ScriptStruct FactionsFramework.FactionWaitTimesData
// Size: 0x10 (Inherited: 0x00)
struct FFactionWaitTimesData {
	char Faction; // 0x00(0x01)
	char SessionType; // 0x01(0x01)
	char UnknownData_2[0x6]; // 0x02(0x06)
	int64_t WaitTimeTicks; // 0x08(0x08)
};

