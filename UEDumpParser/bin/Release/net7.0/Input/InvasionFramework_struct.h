// Enum InvasionFramework.EInvasionStatus
enum class EInvasionStatus : uint8_t {
	None,
	Aggressive,
	Passive,
	EInvasionStatus_MAX,
};

// Enum InvasionFramework.EInvasionMusicState
enum class EInvasionMusicState : uint8_t {
	None,
	EnteringDive,
	Emerging,
	ForceStop,
	EInvasionMusicState_MAX,
};

// Enum InvasionFramework.EInvasionEndedReason
enum class EInvasionEndedReason : uint8_t {
	ShipSunk,
	ParticipantLeftFaction,
	ParticipantLeftServer,
	InvasionTimeout,
	None,
	EInvasionEndedReason_MAX,
};

// ScriptStruct InvasionFramework.TimeStampedInvasionMusicState
// Size: 0x18 (Inherited: 0x00)
struct FTimeStampedInvasionMusicState {
	struct UCompany* Faction; // 0x00(0x08)
	char InvasionMusicState; // 0x08(0x01)
	char UnknownData_9[0x7]; // 0x09(0x07)
	double EnteredStateServerTimeStamp; // 0x10(0x08)
};

// ScriptStruct InvasionFramework.InvasionCrewData
// Size: 0x20 (Inherited: 0x00)
struct FInvasionCrewData {
	struct FGuid CrewId; // 0x00(0x10)
	char InvasionStatus; // 0x10(0x01)
	char UnknownData_11[0x3]; // 0x11(0x03)
	struct FName FactionIdentifier; // 0x14(0x08)
	bool ReadyForInvasion; // 0x1c(0x01)
	char UnknownData_1D[0x3]; // 0x1d(0x03)
};

// ScriptStruct InvasionFramework.ReplicatedInvasionCrewMusicState
// Size: 0x28 (Inherited: 0x00)
struct FReplicatedInvasionCrewMusicState {
	struct FGuid CrewId; // 0x00(0x10)
	struct FTimeStampedInvasionMusicState CurrentTimeStampedMusicState; // 0x10(0x18)
};

// ScriptStruct InvasionFramework.InvasionBannerNetworkEvent
// Size: 0x68 (Inherited: 0x10)
struct FInvasionBannerNetworkEvent : FNetworkEventStruct {
	struct FText Message; // 0x10(0x38)
	struct FGuid CrewId; // 0x48(0x10)
	char Faction; // 0x58(0x01)
	char UnknownData_59[0x3]; // 0x59(0x03)
	struct FName Tag; // 0x5c(0x08)
	bool DisableMusic; // 0x64(0x01)
	char UnknownData_65[0x3]; // 0x65(0x03)
};

// ScriptStruct InvasionFramework.TaleDisplayedInvasionBanner
// Size: 0x08 (Inherited: 0x00)
struct FTaleDisplayedInvasionBanner {
	struct AActor* Player; // 0x00(0x08)
};

// ScriptStruct InvasionFramework.CrewMatchmakingCancelledDueToInvasion
// Size: 0x10 (Inherited: 0x00)
struct FCrewMatchmakingCancelledDueToInvasion {
	struct FGuid CrewId; // 0x00(0x10)
};

// ScriptStruct InvasionFramework.CrewStoppedInvasion
// Size: 0x10 (Inherited: 0x00)
struct FCrewStoppedInvasion {
	struct FGuid CrewId; // 0x00(0x10)
};

// ScriptStruct InvasionFramework.CrewStartedInvasion
// Size: 0x10 (Inherited: 0x00)
struct FCrewStartedInvasion {
	struct FGuid CrewId; // 0x00(0x10)
};

// ScriptStruct InvasionFramework.InvasionCrewMusicStateChangedClientEvent
// Size: 0x18 (Inherited: 0x00)
struct FInvasionCrewMusicStateChangedClientEvent {
	struct FTimeStampedInvasionMusicState InvasionCrewMusicState; // 0x00(0x18)
};

// ScriptStruct InvasionFramework.InvasionParticipatingCrewData
// Size: 0x78 (Inherited: 0x00)
struct FInvasionParticipatingCrewData {
	struct TArray<struct FInvasionCrewData> CrewIds; // 0x00(0x10)
	struct TArray<struct UCrewVoyageParticipant*> Participants; // 0x10(0x10)
	char UnknownData_20[0x58]; // 0x20(0x58)
};

// ScriptStruct InvasionFramework.InvasionEndedTelemetryEvent
// Size: 0x50 (Inherited: 0x00)
struct FInvasionEndedTelemetryEvent {
	struct TArray<struct FInvasionCrewData> Participants; // 0x00(0x10)
	struct FInvasionCrewData Winner; // 0x10(0x20)
	float InvasionDurationInSeconds; // 0x30(0x04)
	char UnknownData_34[0x4]; // 0x34(0x04)
	struct TArray<struct FCrewFactionTelemetryData> ParticipantFactionData; // 0x38(0x10)
	char InvasionEndedReason; // 0x48(0x01)
	char UnknownData_49[0x7]; // 0x49(0x07)
};

// ScriptStruct InvasionFramework.CrewJoinedInvasionBattleTelemetryEvent
// Size: 0x10 (Inherited: 0x00)
struct FCrewJoinedInvasionBattleTelemetryEvent {
	struct TArray<struct FString> ItemsBroughtToBattle; // 0x00(0x10)
};

// ScriptStruct InvasionFramework.InvasionServiceMatchmakingCrewInfo
// Size: 0x14 (Inherited: 0x00)
struct FInvasionServiceMatchmakingCrewInfo {
	struct FGuid CrewId; // 0x00(0x10)
	char CrewSessionType; // 0x10(0x01)
	char UnknownData_11[0x3]; // 0x11(0x03)
};

