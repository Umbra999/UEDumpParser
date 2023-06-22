// Enum MediaUtils.EMediaPlayerOptionBooleanOverride
enum class EMediaPlayerOptionBooleanOverride : uint8_t {
	UseMediaPlayerSetting,
	Enabled,
	Disabled,
	EMediaPlayerOptionBooleanOverride_MAX,
};

// ScriptStruct MediaUtils.MediaPlayerOptions
// Size: 0x30 (Inherited: 0x00)
struct FMediaPlayerOptions {
	struct FMediaPlayerTrackOptions Tracks; // 0x00(0x1c)
	char UnknownData_1C[0x4]; // 0x1c(0x04)
	struct FTimespan SeekTime; // 0x20(0x08)
	char PlayOnOpen; // 0x28(0x01)
	char Loop; // 0x29(0x01)
	char UnknownData_2A[0x6]; // 0x2a(0x06)
};

// ScriptStruct MediaUtils.MediaPlayerTrackOptions
// Size: 0x1c (Inherited: 0x00)
struct FMediaPlayerTrackOptions {
	int32_t Audio; // 0x00(0x04)
	int32_t Caption; // 0x04(0x04)
	int32_t MetaData; // 0x08(0x04)
	int32_t Script; // 0x0c(0x04)
	int32_t Subtitle; // 0x10(0x04)
	int32_t Text; // 0x14(0x04)
	int32_t Video; // 0x18(0x04)
};

