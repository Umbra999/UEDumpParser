// Enum Sessions.ESessionStyle
enum class ESessionStyle : uint8_t {
	Invalid,
	Standard,
	BeachNPCSpawn,
	Max,
	ESessionStyle_MAX,
};

// Enum Sessions.ESessionGrouping
enum class ESessionGrouping : uint8_t {
	Invalid,
	Default,
	MediumLargeShip,
	Max,
	ESessionGrouping_MAX,
};

// Enum Sessions.ECrewSessionType
enum class ECrewSessionType : uint8_t {
	Invalid,
	SmallShip,
	MediumShip,
	LargeShip,
	ServerLarge,
	SloopSolo,
	Lobby,
	ECrewSessionType_MAX,
};

// Enum Sessions.ESessionVisibility
enum class ESessionVisibility : uint8_t {
	Invalid,
	Open,
	Closed,
	ESessionVisibility_MAX,
};

// Enum Sessions.ECrewSessionQoSServerResolveResult
enum class ECrewSessionQoSServerResolveResult : uint8_t {
	Success,
	InvalidLocation,
	TimedOut,
	Failed,
	ECrewSessionQoSServerResolveResult_MAX,
};

// ScriptStruct Sessions.SessionTemplate
// Size: 0x18 (Inherited: 0x00)
struct FSessionTemplate {
	struct FString TemplateName; // 0x00(0x10)
	char SessionType; // 0x10(0x01)
	char UnknownData_11[0x3]; // 0x11(0x03)
	int32_t MaxPlayers; // 0x14(0x04)
};

// ScriptStruct Sessions.CrewSessionTemplate
// Size: 0x38 (Inherited: 0x18)
struct FCrewSessionTemplate : FSessionTemplate {
	struct FString MatchmakingHopper; // 0x18(0x10)
	struct UClass* ShipSize; // 0x28(0x08)
	int32_t MaxMatchmakingPlayers; // 0x30(0x04)
	char UnknownData_34[0x4]; // 0x34(0x04)
};

// ScriptStruct Sessions.OnlineSessionMemberLostEvent
// Size: 0x28 (Inherited: 0x00)
struct FOnlineSessionMemberLostEvent {
	char UnknownData_0[0x28]; // 0x00(0x28)
};

// ScriptStruct Sessions.SessionLostEvent
// Size: 0x01 (Inherited: 0x00)
struct FSessionLostEvent {
	char UnknownData_0[0x1]; // 0x00(0x01)
};

// ScriptStruct Sessions.SessionDetailsChangedEvent
// Size: 0x20 (Inherited: 0x00)
struct FSessionDetailsChangedEvent {
	char UnknownData_0[0x20]; // 0x00(0x20)
};

// ScriptStruct Sessions.SessionInfoUpdateAvailableEvent
// Size: 0x10 (Inherited: 0x00)
struct FSessionInfoUpdateAvailableEvent {
	struct FGuid CrewId; // 0x00(0x10)
};

// ScriptStruct Sessions.CrewSessionKeepAliveFailedTelemetryEvent
// Size: 0x28 (Inherited: 0x00)
struct FCrewSessionKeepAliveFailedTelemetryEvent {
	struct FGuid CrewId; // 0x00(0x10)
	struct FString UserStatus; // 0x10(0x10)
	int32_t ErrorCode; // 0x20(0x04)
	int32_t KeepAliveCounter; // 0x24(0x04)
};

// ScriptStruct Sessions.CrewSessionOperationFailedTelemetryEvent
// Size: 0x18 (Inherited: 0x00)
struct FCrewSessionOperationFailedTelemetryEvent {
	struct FString ErrorMessage; // 0x00(0x10)
	int32_t OperationTypeCode; // 0x10(0x04)
	bool WasCancelled; // 0x14(0x01)
	char UnknownData_15[0x3]; // 0x15(0x03)
};

// ScriptStruct Sessions.CrewSessionMatchmakingFollowedTelemetryEvent
// Size: 0x78 (Inherited: 0x50)
struct FCrewSessionMatchmakingFollowedTelemetryEvent : FCrewSessionBaseSessionTelemetryEvent {
	struct FGuid NewCrewId; // 0x50(0x10)
	int32_t ResultCode; // 0x60(0x04)
	char UnknownData_64[0x4]; // 0x64(0x04)
	struct FString Message; // 0x68(0x10)
};

// ScriptStruct Sessions.CrewSessionBaseSessionTelemetryEvent
// Size: 0x50 (Inherited: 0x10)
struct FCrewSessionBaseSessionTelemetryEvent : FCrewSessionBaseTelemetryEvent {
	struct FCrewSessionTelemetry Session; // 0x10(0x40)
};

// ScriptStruct Sessions.CrewSessionBaseTelemetryEvent
// Size: 0x10 (Inherited: 0x00)
struct FCrewSessionBaseTelemetryEvent {
	struct FGuid CrewId; // 0x00(0x10)
};

// ScriptStruct Sessions.CrewSessionTelemetry
// Size: 0x40 (Inherited: 0x00)
struct FCrewSessionTelemetry {
	struct TArray<struct FCrewSessionMemberTelemetry> SessionMembers; // 0x00(0x10)
	struct FString SessionTemplate; // 0x10(0x10)
	struct FString SessionVisibility; // 0x20(0x10)
	struct FString PlayMode; // 0x30(0x10)
};

// ScriptStruct Sessions.CrewSessionMemberTelemetry
// Size: 0x28 (Inherited: 0x00)
struct FCrewSessionMemberTelemetry {
	struct FString UserId; // 0x00(0x10)
	struct FString StatusString; // 0x10(0x10)
	bool IsSessionHost; // 0x20(0x01)
	char UnknownData_21[0x7]; // 0x21(0x07)
};

// ScriptStruct Sessions.CrewSessionMatchmakingEndedTelemetryEvent
// Size: 0x98 (Inherited: 0x10)
struct FCrewSessionMatchmakingEndedTelemetryEvent : FCrewSessionBaseTelemetryEvent {
	struct FGuid NewCrewId; // 0x10(0x10)
	struct FGuid CrewMatchmakingAttemptId; // 0x20(0x10)
	struct FString SessionType; // 0x30(0x10)
	struct FString MatchmakingHopper; // 0x40(0x10)
	struct FString MatchmakingType; // 0x50(0x10)
	struct FString MatchmakingResult; // 0x60(0x10)
	struct FString ErrorMessage; // 0x70(0x10)
	struct TArray<int32_t> CrewSegmentValues; // 0x80(0x10)
	int32_t CurrentCrewCount; // 0x90(0x04)
	int32_t TotalWaitTime; // 0x94(0x04)
};

// ScriptStruct Sessions.CrewSessionMatchmakingStartedTelemetryEvent
// Size: 0x70 (Inherited: 0x10)
struct FCrewSessionMatchmakingStartedTelemetryEvent : FCrewSessionBaseTelemetryEvent {
	struct FGuid CrewMatchmakingAttemptId; // 0x10(0x10)
	struct FString SessionType; // 0x20(0x10)
	struct FString MatchmakingHopper; // 0x30(0x10)
	struct FString MatchmakingType; // 0x40(0x10)
	struct TArray<int32_t> CrewSegmentValues; // 0x50(0x10)
	int32_t CurrentCrewCount; // 0x60(0x04)
	int32_t EstimatedWaitTime; // 0x64(0x04)
	int32_t MaxWaitTime; // 0x68(0x04)
	char UnknownData_6C[0x4]; // 0x6c(0x04)
};

// ScriptStruct Sessions.CrewSessionLeaveTelemetryEvent
// Size: 0x10 (Inherited: 0x10)
struct FCrewSessionLeaveTelemetryEvent : FCrewSessionBaseTelemetryEvent {
};

// ScriptStruct Sessions.CrewSessionJoinedTelemetryEvent
// Size: 0x70 (Inherited: 0x50)
struct FCrewSessionJoinedTelemetryEvent : FCrewSessionBaseSessionTelemetryEvent {
	struct FString JoinMethod; // 0x50(0x10)
	struct TArray<struct FCrewSessionQoSMeasurementTelemetry> QoSTelemetry; // 0x60(0x10)
};

// ScriptStruct Sessions.CrewSessionQoSMeasurementTelemetry
// Size: 0x20 (Inherited: 0x00)
struct FCrewSessionQoSMeasurementTelemetry {
	struct FString Location; // 0x00(0x10)
	uint32_t AvgLatency; // 0x10(0x04)
	int32_t NumReceivedPings; // 0x14(0x04)
	int32_t NumFailedPings; // 0x18(0x04)
	char ResolveResult; // 0x1c(0x01)
	bool LocationWasConsidered; // 0x1d(0x01)
	char UnknownData_1E[0x2]; // 0x1e(0x02)
};

// ScriptStruct Sessions.CrewSessionCreatedTelemetryEvent
// Size: 0x60 (Inherited: 0x50)
struct FCrewSessionCreatedTelemetryEvent : FCrewSessionBaseSessionTelemetryEvent {
	struct TArray<struct FCrewSessionQoSMeasurementTelemetry> QoSTelemetry; // 0x50(0x10)
};

