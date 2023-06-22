// Enum GameEventsOnDemandFramework.EGameEventCategory
enum class EGameEventCategory : uint8_t {
	MainEvent,
	SubEvent,
	EGameEventCategory_MAX,
};

// Enum GameEventsOnDemandFramework.EAvailabilityState
enum class EAvailabilityState : uint8_t {
	Inactive,
	Available_Active,
	Available_ActiveEngaged,
	Unavailable_CrewLimitReached,
	Unavailable_Cooldown,
	Unavailable_ProgressedPastLimit,
	EAvailabilityState_MAX,
};

// ScriptStruct GameEventsOnDemandFramework.GameEventAvailabilityData
// Size: 0x20 (Inherited: 0x00)
struct FGameEventAvailabilityData {
	struct FString EventName; // 0x00(0x10)
	char EventCategory; // 0x10(0x01)
	char AvailabilityState; // 0x11(0x01)
	char UnknownData_12[0x6]; // 0x12(0x06)
	struct UClass* ShipSizeLimit; // 0x18(0x08)
};

