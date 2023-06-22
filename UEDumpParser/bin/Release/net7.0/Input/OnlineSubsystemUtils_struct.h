// Enum OnlineSubsystemUtils.EBeaconConnectionState
enum class EBeaconConnectionState : uint8_t {
	Invalid,
	Closed,
	Pending,
	Open,
	EBeaconConnectionState_MAX,
};

// Enum OnlineSubsystemUtils.EPartyReservationResult
enum class EPartyReservationResult : uint8_t {
	NoResult,
	RequestPending,
	GeneralError,
	PartyLimitReached,
	IncorrectPlayerCount,
	RequestTimedOut,
	ReservationDuplicate,
	ReservationNotFound,
	ReservationAccepted,
	ReservationDenied,
	ReservationDenied_Banned,
	ReservationRequestCanceled,
	ReservationInvalid,
	BadSessionId,
	EPartyReservationResult_MAX,
};

// Enum OnlineSubsystemUtils.EClientRequestType
enum class EClientRequestType : uint8_t {
	NonePending,
	ExistingSessionReservation,
	ReservationUpdate,
	EmptyServerReservation,
	ChangeWorldRequest,
	Reconnect,
	EClientRequestType_MAX,
};

// ScriptStruct OnlineSubsystemUtils.BlueprintSessionResult
// Size: 0xe0 (Inherited: 0x00)
struct FBlueprintSessionResult {
	char UnknownData_0[0xe0]; // 0x00(0xe0)
};

// ScriptStruct OnlineSubsystemUtils.PartyReservation
// Size: 0x30 (Inherited: 0x00)
struct FPartyReservation {
	int32_t TeamNum; // 0x00(0x04)
	char UnknownData_4[0x4]; // 0x04(0x04)
	struct FUniqueNetIdRepl PartyLeader; // 0x08(0x18)
	struct TArray<struct FPlayerReservation> PartyMembers; // 0x20(0x10)
};

// ScriptStruct OnlineSubsystemUtils.PlayerReservation
// Size: 0x30 (Inherited: 0x00)
struct FPlayerReservation {
	struct FUniqueNetIdRepl UniqueId; // 0x00(0x18)
	struct FString ValidationStr; // 0x18(0x10)
	float ElapsedTime; // 0x28(0x04)
	char UnknownData_2C[0x4]; // 0x2c(0x04)
};

