// Enum MediaAssets.EMediaWebcamCaptureDeviceFilter
enum class EMediaWebcamCaptureDeviceFilter : uint8_t {
	None,
	DepthSensor,
	Front,
	Rear,
	Unknown,
	EMediaWebcamCaptureDeviceFilter_MAX,
};

// Enum MediaAssets.EMediaVideoCaptureDeviceFilter
enum class EMediaVideoCaptureDeviceFilter : uint8_t {
	None,
	Card,
	Software,
	Unknown,
	Webcam,
	EMediaVideoCaptureDeviceFilter_MAX,
};

// Enum MediaAssets.EMediaAudioCaptureDeviceFilter
enum class EMediaAudioCaptureDeviceFilter : uint8_t {
	None,
	Card,
	Microphone,
	Software,
	Unknown,
	EMediaAudioCaptureDeviceFilter_MAX,
};

// Enum MediaAssets.EMediaPlayerTrack
enum class EMediaPlayerTrack : uint8_t {
	Audio,
	Caption,
	Metadata,
	Script,
	Subtitle,
	Text,
	Video,
	EMediaPlayerTrack_MAX,
};

// Enum MediaAssets.MediaTextureOrientation
enum class MediaTextureOrientation : uint8_t {
	MTORI_Original,
	MTORI_CW90,
	MTORI_CW180,
	MTORI_CW270,
	MTORI_MAX,
};

// Enum MediaAssets.MediaTextureOutputFormat
enum class MediaTextureOutputFormat : uint8_t {
	MTOF_Default,
	MTOF_SRGB_LINOUT,
	MTOF_MAX,
};

// ScriptStruct MediaAssets.MediaCaptureDevice
// Size: 0x48 (Inherited: 0x00)
struct FMediaCaptureDevice {
	struct FText DisplayName; // 0x00(0x38)
	struct FString URL; // 0x38(0x10)
};

// ScriptStruct MediaAssets.PlatformPlayerEntry
// Size: 0x18 (Inherited: 0x00)
struct FPlatformPlayerEntry {
	struct FString Key; // 0x00(0x10)
	struct FName Value; // 0x10(0x08)
};

