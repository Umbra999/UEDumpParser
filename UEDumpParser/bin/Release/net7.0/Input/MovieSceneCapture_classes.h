// Class MovieSceneCapture.MovieSceneCaptureInterface
// Size: 0x28 (Inherited: 0x28)
struct UMovieSceneCaptureInterface : UInterface {
};

// Class MovieSceneCapture.MovieSceneCaptureProtocolSettings
// Size: 0x28 (Inherited: 0x28)
struct UMovieSceneCaptureProtocolSettings : UObject {
};

// Class MovieSceneCapture.MovieSceneCapture
// Size: 0x1e0 (Inherited: 0x28)
struct UMovieSceneCapture : UObject {
	char UnknownData_28[0x10]; // 0x28(0x10)
	struct FCaptureProtocolID CaptureType; // 0x38(0x08)
	struct UMovieSceneCaptureProtocolSettings* ProtocolSettings; // 0x40(0x08)
	struct FMovieSceneCaptureSettings Settings; // 0x48(0x50)
	bool bUseSeparateProcess; // 0x98(0x01)
	bool bCloseEditorWhenCaptureStarts; // 0x99(0x01)
	char UnknownData_9A[0x6]; // 0x9a(0x06)
	struct FString AdditionalCommandLineArguments; // 0xa0(0x10)
	struct FString InheritedCommandLineArguments; // 0xb0(0x10)
	char UnknownData_C0[0x120]; // 0xc0(0x120)
};

// Class MovieSceneCapture.AutomatedLevelSequenceCapture
// Size: 0x1e0 (Inherited: 0x1e0)
struct UAutomatedLevelSequenceCapture : UMovieSceneCapture {
};

// Class MovieSceneCapture.LevelCapture
// Size: 0x200 (Inherited: 0x1e0)
struct ULevelCapture : UMovieSceneCapture {
	bool bAutoStartCapture; // 0x1e0(0x01)
	char UnknownData_1E1[0xb]; // 0x1e1(0x0b)
	struct FGuid PrerequisiteActorId; // 0x1ec(0x10)
	char UnknownData_1FC[0x4]; // 0x1fc(0x04)
};

// Class MovieSceneCapture.MovieSceneCaptureEnvironment
// Size: 0x28 (Inherited: 0x28)
struct UMovieSceneCaptureEnvironment : UObject {

	int32_t GetCaptureFrameNumber(); // Function MovieSceneCapture.MovieSceneCaptureEnvironment.GetCaptureFrameNumber // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x242cda0
	float GetCaptureElapsedTime(); // Function MovieSceneCapture.MovieSceneCaptureEnvironment.GetCaptureElapsedTime // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x242cd70
};

// Class MovieSceneCapture.FrameGrabberProtocolSettings
// Size: 0x30 (Inherited: 0x28)
struct UFrameGrabberProtocolSettings : UMovieSceneCaptureProtocolSettings {
	char UnknownData_28[0x8]; // 0x28(0x08)
};

// Class MovieSceneCapture.BmpImageCaptureSettings
// Size: 0x28 (Inherited: 0x28)
struct UBmpImageCaptureSettings : UMovieSceneCaptureProtocolSettings {
};

// Class MovieSceneCapture.ImageCaptureSettings
// Size: 0x38 (Inherited: 0x30)
struct UImageCaptureSettings : UFrameGrabberProtocolSettings {
	int32_t CompressionQuality; // 0x30(0x04)
	char UnknownData_34[0x4]; // 0x34(0x04)
};

// Class MovieSceneCapture.CompositionGraphCaptureSettings
// Size: 0x58 (Inherited: 0x28)
struct UCompositionGraphCaptureSettings : UMovieSceneCaptureProtocolSettings {
	struct FCompositionGraphCapturePasses IncludeRenderPasses; // 0x28(0x10)
	bool bCaptureFramesInHDR; // 0x38(0x01)
	char UnknownData_39[0x3]; // 0x39(0x03)
	int32_t HDRCompressionQuality; // 0x3c(0x04)
	char CaptureGamut; // 0x40(0x01)
	char UnknownData_41[0x7]; // 0x41(0x07)
	struct FStringAssetReference PostProcessingMaterial; // 0x48(0x10)
};

// Class MovieSceneCapture.VideoCaptureSettings
// Size: 0x48 (Inherited: 0x30)
struct UVideoCaptureSettings : UFrameGrabberProtocolSettings {
	bool bUseCompression; // 0x30(0x01)
	char UnknownData_31[0x3]; // 0x31(0x03)
	float CompressionQuality; // 0x34(0x04)
	struct FString VideoCodec; // 0x38(0x10)
};

