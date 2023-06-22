// Enum ContestMatchmaking.EGameEventShipSizeLimit
enum class EGameEventShipSizeLimit : uint8_t {
	NoLimit,
	SmallShips,
	MediumShips,
	LargeShips,
	EGameEventShipSizeLimit_MAX,
};

// Enum ContestMatchmaking.EGameEventAvailabilityStatus
enum class EGameEventAvailabilityStatus : uint8_t {
	Active,
	ActiveEngaged,
	AvailableToSpawn,
	EGameEventAvailabilityStatus_MAX,
};

// Enum ContestMatchmaking.EServerCrewMatchmakingResultCode
enum class EServerCrewMatchmakingResultCode : uint8_t {
	NoAvailableCrews,
	MinCrewsNotSatisfied,
	Success,
	StampExpired,
	EServerCrewMatchmakingResultCode_MAX,
};

// Enum ContestMatchmaking.EPvPFaction
enum class EPvPFaction : uint8_t {
	NotApplicable,
	Flameheart,
	PirateLord,
	EPvPFaction_MAX,
};

// Enum ContestMatchmaking.EClientMatchmakingRequestReason
enum class EClientMatchmakingRequestReason : uint8_t {
	NewCrews,
	LoadBalancingMigration,
	PvPMigration,
	StarlightMigration,
	GameEventOnDemandMigration,
	EClientMatchmakingRequestReason_MAX,
};

// ScriptStruct ContestMatchmaking.ServerQueueWaitTimesResponseModel
// Size: 0x10 (Inherited: 0x00)
struct FServerQueueWaitTimesResponseModel {
	struct TArray<struct FServerQueueWaitTimeModel> QueueWaitTimes; // 0x00(0x10)
};

// ScriptStruct ContestMatchmaking.ServerQueueWaitTimeModel
// Size: 0x20 (Inherited: 0x00)
struct FServerQueueWaitTimeModel {
	struct FString QueueScopeId; // 0x00(0x10)
	struct FTimespan AvgWaitTime; // 0x10(0x08)
	struct FTimespan MaxWaitTime; // 0x18(0x08)
};

// ScriptStruct ContestMatchmaking.ServerQueueWaitTimesRequestModel
// Size: 0x58 (Inherited: 0x00)
struct FServerQueueWaitTimesRequestModel {
	struct FGuid ServerId; // 0x00(0x10)
	struct FString ServerLocation; // 0x10(0x10)
	uint32_t FeatureHash; // 0x20(0x04)
	char UnknownData_24[0x4]; // 0x24(0x04)
	struct FString PrivateServerId; // 0x28(0x10)
	struct TArray<struct FString> PlayModeTags; // 0x38(0x10)
	struct FString PlayModeState; // 0x48(0x10)
};

// ScriptStruct ContestMatchmaking.ClientMatchmakingResponseModel
// Size: 0x10 (Inherited: 0x00)
struct FClientMatchmakingResponseModel {
	struct FTimespan EstimatedWaitTime; // 0x00(0x08)
	struct FTimespan RetryAfter; // 0x08(0x08)
};

// ScriptStruct ContestMatchmaking.ContestMatchmakingServerRequestModel
// Size: 0xa0 (Inherited: 0x00)
struct FContestMatchmakingServerRequestModel {
	struct FGuid ServerId; // 0x00(0x10)
	struct FString ServerAddress; // 0x10(0x10)
	struct FString VmId; // 0x20(0x10)
	struct FString PrivateServerId; // 0x30(0x10)
	struct FString ServerLocation; // 0x40(0x10)
	uint32_t FeatureHash; // 0x50(0x04)
	char UnknownData_54[0x4]; // 0x54(0x04)
	struct TArray<struct FString> PlayModeTags; // 0x58(0x10)
	struct TArray<struct FString> PlayModeStates; // 0x68(0x10)
	struct TArray<struct FServerCrewModel> Crews; // 0x78(0x10)
	char MatchmakingRequestReason; // 0x88(0x01)
	char UnknownData_89[0x3]; // 0x89(0x03)
	struct FGuid RequestCorrelationId; // 0x8c(0x10)
	char UnknownData_9C[0x4]; // 0x9c(0x04)
};

// ScriptStruct ContestMatchmaking.ServerCrewModel
// Size: 0xb8 (Inherited: 0x00)
struct FServerCrewModel {
	struct FGuid CrewId; // 0x00(0x10)
	struct FUniqueNetIdRepl UserId; // 0x10(0x18)
	struct FGuid ServerId; // 0x28(0x10)
	struct FString ServerAddress; // 0x38(0x10)
	int32_t SessionType; // 0x48(0x04)
	char UnknownData_4C[0x4]; // 0x4c(0x04)
	struct TArray<struct FVector2D> Positions; // 0x50(0x10)
	struct TArray<uint32_t> Resources; // 0x60(0x10)
	char PvPFaction; // 0x70(0x01)
	char UnknownData_71[0x3]; // 0x71(0x03)
	int32_t PvPSkillLevel; // 0x74(0x04)
	int32_t PvPRivalSessionType; // 0x78(0x04)
	struct FGuid RivalCrewId; // 0x7c(0x10)
	char MatchmakingRequestReason; // 0x8c(0x01)
	char UnknownData_8D[0x3]; // 0x8d(0x03)
	struct FString RequestedGameEvent; // 0x90(0x10)
	struct FTimespan TimeWaitingForMatch; // 0xa0(0x08)
	struct FString ForcedStamp; // 0xa8(0x10)
};

// ScriptStruct ContestMatchmaking.ServerCrewResponseModel
// Size: 0x80 (Inherited: 0x00)
struct FServerCrewResponseModel {
	char ResultCode; // 0x00(0x01)
	char UnknownData_1[0x7]; // 0x01(0x07)
	struct TArray<struct FServerCrewModel> Crews; // 0x08(0x10)
	struct TMap<struct FString, struct FString> OptionalPlayModeInfo; // 0x18(0x50)
	struct FTimespan RetryAfter; // 0x68(0x08)
	struct FTimespan MigrationThreshold; // 0x70(0x08)
	struct FTimespan ExpireAfter; // 0x78(0x08)
};

// ScriptStruct ContestMatchmaking.OptionalPlayModeModel
// Size: 0x50 (Inherited: 0x00)
struct FOptionalPlayModeModel {
	struct TMap<struct FString, struct FString> OptionalPlayModeMap; // 0x00(0x50)
};

// ScriptStruct ContestMatchmaking.ServerCrewRequestModel
// Size: 0x100 (Inherited: 0x00)
struct FServerCrewRequestModel {
	struct FGuid ServerId; // 0x00(0x10)
	struct FString VmId; // 0x10(0x10)
	struct FString PrivateServerId; // 0x20(0x10)
	struct FString ServerLocation; // 0x30(0x10)
	struct FString StampId; // 0x40(0x10)
	uint32_t FeatureHash; // 0x50(0x04)
	char UnknownData_54[0x4]; // 0x54(0x04)
	struct TArray<struct FString> PlayModeTags; // 0x58(0x10)
	struct FString PlayModeState; // 0x68(0x10)
	int32_t CrewCount; // 0x78(0x04)
	int32_t CrewCountBucket; // 0x7c(0x04)
	int32_t CrewMin; // 0x80(0x04)
	int32_t CrewMax; // 0x84(0x04)
	struct TArray<int32_t> CrewSessionTypes; // 0x88(0x10)
	struct TArray<struct FExistingServerCrewModel> Crews; // 0x98(0x10)
	struct FTimespan Uptime; // 0xa8(0x08)
	struct FServerContendedModel Contended; // 0xb0(0x30)
	struct FGameEventAvailabilityModel GameEvents; // 0xe0(0x20)
};

// ScriptStruct ContestMatchmaking.GameEventAvailabilityModel
// Size: 0x20 (Inherited: 0x00)
struct FGameEventAvailabilityModel {
	struct TArray<struct FGameMainEventTypeModel> MainEvents; // 0x00(0x10)
	struct TArray<struct FGameSubEventTypeModel> SubEvents; // 0x10(0x10)
};

// ScriptStruct ContestMatchmaking.GameSubEventTypeModel
// Size: 0x18 (Inherited: 0x00)
struct FGameSubEventTypeModel {
	struct FString EventName; // 0x00(0x10)
	int32_t MaxCount; // 0x10(0x04)
	char UnknownData_14[0x4]; // 0x14(0x04)
};

// ScriptStruct ContestMatchmaking.GameMainEventTypeModel
// Size: 0x28 (Inherited: 0x00)
struct FGameMainEventTypeModel {
	struct FString EventName; // 0x00(0x10)
	struct TArray<struct FString> ExcludedEvents; // 0x10(0x10)
	char Status; // 0x20(0x01)
	char ShipSizeLimit; // 0x21(0x01)
	char UnknownData_22[0x6]; // 0x22(0x06)
};

// ScriptStruct ContestMatchmaking.ServerContendedModel
// Size: 0x30 (Inherited: 0x00)
struct FServerContendedModel {
	struct TArray<struct FVector2D> Positions; // 0x00(0x10)
	struct TArray<struct FServerRegionModel> Regions; // 0x10(0x10)
	struct TArray<uint32_t> Resources; // 0x20(0x10)
};

// ScriptStruct ContestMatchmaking.ServerRegionModel
// Size: 0x0c (Inherited: 0x00)
struct FServerRegionModel {
	struct FVector2D Position; // 0x00(0x08)
	float Radius; // 0x08(0x04)
};

// ScriptStruct ContestMatchmaking.ExistingServerCrewModel
// Size: 0x38 (Inherited: 0x00)
struct FExistingServerCrewModel {
	struct FGuid CrewId; // 0x00(0x10)
	int32_t SessionType; // 0x10(0x04)
	char AlignedFaction; // 0x14(0x01)
	char UnknownData_15[0x3]; // 0x15(0x03)
	int32_t PvPSkillLevel; // 0x18(0x04)
	char UnknownData_1C[0x4]; // 0x1c(0x04)
	struct FTimespan TimeInMatchmaking; // 0x20(0x08)
	struct FString ForcedStamp; // 0x28(0x10)
};

// ScriptStruct ContestMatchmaking.ContestMatchmakingFactionMapEntry
// Size: 0x10 (Inherited: 0x00)
struct FContestMatchmakingFactionMapEntry {
	struct UClass* GameFaction; // 0x00(0x08)
	char MatchmakingFaction; // 0x08(0x01)
	char UnknownData_9[0x7]; // 0x09(0x07)
};

