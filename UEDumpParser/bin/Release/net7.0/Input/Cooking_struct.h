// Enum Cooking.ECookingState
enum class ECookingState : uint8_t {
	Raw,
	Undercooked,
	Cooked,
	Burned,
	Fresh,
	ECookingState_MAX,
};

// Enum Cooking.ECookingSmokeFeedbackLevel
enum class ECookingSmokeFeedbackLevel : uint8_t {
	NotCooking,
	Raw,
	CookedWarning,
	Cooked,
	BurnedWarning,
	Burned,
	ECookingSmokeFeedbackLevel_MAX,
};

// ScriptStruct Cooking.CookingInfo
// Size: 0x0c (Inherited: 0x00)
struct FCookingInfo {
	char UnknownData_0[0xc]; // 0x00(0x0c)
};

// ScriptStruct Cooking.CookableComponentSmokeFeedbackTimingEntry
// Size: 0x08 (Inherited: 0x00)
struct FCookableComponentSmokeFeedbackTimingEntry {
	float StateDuration; // 0x00(0x04)
	char StateFeedbackLevel; // 0x04(0x01)
	char UnknownData_5[0x3]; // 0x05(0x03)
};

// ScriptStruct Cooking.CookingClientRepresentation
// Size: 0x68 (Inherited: 0x00)
struct FCookingClientRepresentation {
	bool Cooking; // 0x00(0x01)
	bool HasItem; // 0x01(0x01)
	char UnknownData_2[0x6]; // 0x02(0x06)
	struct AItemInfo* CurrentlyCookingItem; // 0x08(0x08)
	struct FText CurrentCookingItemDisplayName; // 0x10(0x38)
	struct UClass* CurrentCookingItemCategory; // 0x48(0x08)
	char SmokeFeedbackLevel; // 0x50(0x01)
	char UnknownData_51[0x3]; // 0x51(0x03)
	float VisibleCookedExtent; // 0x54(0x04)
	float CurrentItemPlacementAngle; // 0x58(0x04)
	struct FName CurrentCookableTypeName; // 0x5c(0x08)
	char UnknownData_64[0x4]; // 0x64(0x04)
};

// ScriptStruct Cooking.CookerSmokeFeedbackEntry
// Size: 0x10 (Inherited: 0x00)
struct FCookerSmokeFeedbackEntry {
	char FeedbackLevel; // 0x00(0x01)
	char UnknownData_1[0x7]; // 0x01(0x07)
	struct UParticleSystem* SmokeVFX; // 0x08(0x08)
};

// ScriptStruct Cooking.OnRemovedItemFromCookingPot
// Size: 0x08 (Inherited: 0x00)
struct FOnRemovedItemFromCookingPot {
	struct AActor* Interactor; // 0x00(0x08)
};

// ScriptStruct Cooking.OnPlacedItemInCookingPot
// Size: 0x10 (Inherited: 0x00)
struct FOnPlacedItemInCookingPot {
	struct AActor* Interactor; // 0x00(0x08)
	struct AItemInfo* ItemToCook; // 0x08(0x08)
};

// ScriptStruct Cooking.OnItemStartedCooking
// Size: 0x10 (Inherited: 0x00)
struct FOnItemStartedCooking {
	char UnknownData_0[0x10]; // 0x00(0x10)
};

// ScriptStruct Cooking.OnItemStoppedCooking
// Size: 0x01 (Inherited: 0x00)
struct FOnItemStoppedCooking {
	char UnknownData_0[0x1]; // 0x00(0x01)
};

// ScriptStruct Cooking.CookEndTelemetryEvent
// Size: 0x30 (Inherited: 0x00)
struct FCookEndTelemetryEvent {
	struct FString ItemName; // 0x00(0x10)
	char CookState; // 0x10(0x01)
	char UnknownData_11[0x3]; // 0x11(0x03)
	struct FVector Location; // 0x14(0x0c)
	struct FGuid CookId; // 0x20(0x10)
};

// ScriptStruct Cooking.CookStartTelemetryEvent
// Size: 0x30 (Inherited: 0x00)
struct FCookStartTelemetryEvent {
	struct FString ItemName; // 0x00(0x10)
	char CookState; // 0x10(0x01)
	char UnknownData_11[0x3]; // 0x11(0x03)
	struct FVector Location; // 0x14(0x0c)
	struct FGuid CookId; // 0x20(0x10)
};

