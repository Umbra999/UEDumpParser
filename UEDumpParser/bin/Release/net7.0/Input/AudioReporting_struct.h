// Enum AudioReporting.EAudioReactionState
enum class EAudioReactionState : uint8_t {
	Normal,
	MaxDurationExceeded,
	MinDurationNotMet,
	EAudioReactionState_MAX,
};

// ScriptStruct AudioReporting.EventReactionDesc
// Size: 0x28 (Inherited: 0x00)
struct FEventReactionDesc {
	struct UClass* ReactionType; // 0x00(0x08)
	int32_t Priority; // 0x08(0x04)
	float MinDuration; // 0x0c(0x04)
	float MaxDuration; // 0x10(0x04)
	char UnknownData_14[0x4]; // 0x14(0x04)
	struct TArray<struct UWwiseEvent*> TriggerEvents; // 0x18(0x10)
};

// ScriptStruct AudioReporting.ActiveAudioReaction
// Size: 0x10 (Inherited: 0x00)
struct FActiveAudioReaction {
	struct UAudioReportReaction* Reaction; // 0x00(0x08)
	char UnknownData_8[0x8]; // 0x08(0x08)
};

