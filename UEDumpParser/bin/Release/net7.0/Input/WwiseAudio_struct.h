// Enum WwiseAudio.EAnimNotify_WwiseSound_PerspectiveRestriction
enum class EAnimNotify_WwiseSound_PerspectiveRestriction : uint8_t {
	NoRestriction,
	FirstPersonOnly,
	ThirdPersonOnly,
	EAnimNotify_WwiseSound_MAX,
};

// ScriptStruct WwiseAudio.WwiseAudioAcousticSurfaceParams
// Size: 0x08 (Inherited: 0x00)
struct FWwiseAudioAcousticSurfaceParams {
	float Thickness; // 0x00(0x04)
	float Reflectivity; // 0x04(0x04)
};

// ScriptStruct WwiseAudio.MultiEmitterData
// Size: 0x28 (Inherited: 0x00)
struct FMultiEmitterData {
	struct UWwiseObjectPoolWrapper* PoolWrapper; // 0x00(0x08)
	struct UWwiseEvent* PlayEvent; // 0x08(0x08)
	struct FName Name; // 0x10(0x08)
	struct FVector Offset; // 0x18(0x0c)
	char UnknownData_24[0x4]; // 0x24(0x04)
};

// ScriptStruct WwiseAudio.WwiseEmitterParams
// Size: 0x02 (Inherited: 0x00)
struct FWwiseEmitterParams {
	bool bEnableObstructionAndOcclusion; // 0x00(0x01)
	bool bEnableAccoustics; // 0x01(0x01)
};

// ScriptStruct WwiseAudio.WwiseListenerInfo
// Size: 0x3c (Inherited: 0x00)
struct FWwiseListenerInfo {
	struct FVector Position; // 0x00(0x0c)
	struct FVector Up; // 0x0c(0x0c)
	struct FVector Right; // 0x18(0x0c)
	struct FVector Front; // 0x24(0x0c)
	struct FVector Velocity; // 0x30(0x0c)
};

// ScriptStruct WwiseAudio.WwiseNativeEmitterPoolDensityParams
// Size: 0x28 (Inherited: 0x00)
struct FWwiseNativeEmitterPoolDensityParams {
	bool PlayPoolDensityAudio; // 0x00(0x01)
	char UnknownData_1[0x7]; // 0x01(0x07)
	struct UWwiseEvent* PoolDensityAudioPlayEvent; // 0x08(0x08)
	struct UWwiseEvent* PoolDensityAudioStopEvent; // 0x10(0x08)
	struct FName DensityRtpcName; // 0x18(0x08)
	int32_t FullDensityAmount; // 0x20(0x04)
	float DensityDistance; // 0x24(0x04)
};

// ScriptStruct WwiseAudio.WwiseExternalSource
// Size: 0x10 (Inherited: 0x00)
struct FWwiseExternalSource {
	struct FString path; // 0x00(0x10)
};

// ScriptStruct WwiseAudio.WwiseSubtitle
// Size: 0x10 (Inherited: 0x00)
struct FWwiseSubtitle {
	struct FString Subtitle; // 0x00(0x10)
};

// ScriptStruct WwiseAudio.MovieSceneAkAudioEventTemplate
// Size: 0x20 (Inherited: 0x18)
struct FMovieSceneAkAudioEventTemplate : FMovieSceneEvalTemplate {
	struct UMovieSceneAkAudioEventSection* Section; // 0x18(0x08)
};

// ScriptStruct WwiseAudio.MovieSceneAkAudioRTPCTemplate
// Size: 0x20 (Inherited: 0x18)
struct FMovieSceneAkAudioRTPCTemplate : FMovieSceneEvalTemplate {
	struct UMovieSceneAkAudioRTPCSection* Section; // 0x18(0x08)
};

// ScriptStruct WwiseAudio.MovieSceneAkAudioRTPCSectionData
// Size: 0x88 (Inherited: 0x00)
struct FMovieSceneAkAudioRTPCSectionData {
	struct FString RTPCName; // 0x00(0x10)
	struct FRichCurve RTPCCurve; // 0x10(0x78)
};

