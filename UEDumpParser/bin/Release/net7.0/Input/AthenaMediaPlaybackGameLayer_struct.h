// Enum AthenaMediaPlaybackGameLayer.EAthenaMediaState
enum class EAthenaMediaState : uint8_t {
	Closed,
	Opened,
	Error,
	Buffering,
	Playing,
	Paused,
	Ended,
	EAthenaMediaState_MAX,
};

// ScriptStruct AthenaMediaPlaybackGameLayer.VideoPlaybackStateEvent
// Size: 0x18 (Inherited: 0x00)
struct FVideoPlaybackStateEvent {
	struct FString MediaTextureName; // 0x00(0x10)
	char State; // 0x10(0x01)
	char UnknownData_11[0x7]; // 0x11(0x07)
};

// ScriptStruct AthenaMediaPlaybackGameLayer.VideoSubtitleEvent
// Size: 0x28 (Inherited: 0x00)
struct FVideoSubtitleEvent {
	struct FString MediaTextureName; // 0x00(0x10)
	struct FString SubtitleString; // 0x10(0x10)
	double SubtitleDuration; // 0x20(0x08)
};

// ScriptStruct AthenaMediaPlaybackGameLayer.VideoPlaybackStopEvent
// Size: 0x10 (Inherited: 0x00)
struct FVideoPlaybackStopEvent {
	struct FString MediaTextureName; // 0x00(0x10)
};

// ScriptStruct AthenaMediaPlaybackGameLayer.VideoPlaybackPauseEvent
// Size: 0x10 (Inherited: 0x00)
struct FVideoPlaybackPauseEvent {
	struct FString MediaTextureName; // 0x00(0x10)
};

// ScriptStruct AthenaMediaPlaybackGameLayer.VideoPlaybackStartEvent
// Size: 0x10 (Inherited: 0x00)
struct FVideoPlaybackStartEvent {
	struct FString MediaTextureName; // 0x00(0x10)
};

// ScriptStruct AthenaMediaPlaybackGameLayer.VideoPlaybackLoadEvent
// Size: 0x20 (Inherited: 0x00)
struct FVideoPlaybackLoadEvent {
	struct FString MediaTextureName; // 0x00(0x10)
	struct FString VideoUri; // 0x10(0x10)
};

// ScriptStruct AthenaMediaPlaybackGameLayer.MediaPlayedTelemetryEvent
// Size: 0x40 (Inherited: 0x00)
struct FMediaPlayedTelemetryEvent {
	struct FString MediaName; // 0x00(0x10)
	struct FIntPoint LowestResolution; // 0x10(0x08)
	struct FIntPoint MedianResolution; // 0x18(0x08)
	struct FIntPoint HighestResolution; // 0x20(0x08)
	uint32_t TimestampWhenEnded; // 0x28(0x04)
	uint32_t TotalMediaLength; // 0x2c(0x04)
	uint32_t LowestBitrate; // 0x30(0x04)
	uint32_t MedianBitrate; // 0x34(0x04)
	uint32_t HighestBitrate; // 0x38(0x04)
	char UnknownData_3C[0x4]; // 0x3c(0x04)
};

