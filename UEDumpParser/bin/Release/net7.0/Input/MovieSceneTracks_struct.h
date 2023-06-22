// Enum MovieSceneTracks.MovieScene3DPathSection_Axis
enum class MovieScene3DPathSection_Axis : uint8_t {
	X,
	Y,
	Z,
	NEG_X,
	NEG_Y,
	NEG_Z,
	MovieScene3DPathSection_MAX,
};

// Enum MovieSceneTracks.EShow3DTrajectory
enum class EShow3DTrajectory : uint8_t {
	EST_OnlyWhenSelected,
	EST_Always,
	EST_Never,
	EST_MAX,
};

// Enum MovieSceneTracks.ELevelVisibility
enum class ELevelVisibility : uint8_t {
	Visible,
	Hidden,
	ELevelVisibility_MAX,
};

// Enum MovieSceneTracks.EParticleKey
enum class EParticleKey : uint8_t {
	Activate,
	Deactivate,
	Trigger,
	EParticleKey_MAX,
};

// Enum MovieSceneTracks.EAnimationTrackSubtype
enum class EAnimationTrackSubtype : uint8_t {
	None,
	CameraDockable_1stPerson,
	CameraDockable_3rdPerson,
	EAnimationTrackSubtype_MAX,
};

// ScriptStruct MovieSceneTracks.MovieScene3DTransformKeyStruct
// Size: 0x78 (Inherited: 0x08)
struct FMovieScene3DTransformKeyStruct : FMovieSceneKeyStruct {
	struct FVector Location; // 0x08(0x0c)
	struct FRotator Rotation; // 0x14(0x0c)
	struct FVector Scale; // 0x20(0x0c)
	char UnknownData_2C[0x4c]; // 0x2c(0x4c)
};

// ScriptStruct MovieSceneTracks.MovieScene3DScaleKeyStruct
// Size: 0x30 (Inherited: 0x08)
struct FMovieScene3DScaleKeyStruct : FMovieSceneKeyStruct {
	struct FVector Scale; // 0x08(0x0c)
	char UnknownData_14[0x1c]; // 0x14(0x1c)
};

// ScriptStruct MovieSceneTracks.MovieScene3DRotationKeyStruct
// Size: 0x30 (Inherited: 0x08)
struct FMovieScene3DRotationKeyStruct : FMovieSceneKeyStruct {
	struct FRotator Rotation; // 0x08(0x0c)
	char UnknownData_14[0x1c]; // 0x14(0x1c)
};

// ScriptStruct MovieSceneTracks.MovieScene3DLocationKeyStruct
// Size: 0x30 (Inherited: 0x08)
struct FMovieScene3DLocationKeyStruct : FMovieSceneKeyStruct {
	struct FVector Location; // 0x08(0x0c)
	char UnknownData_14[0x1c]; // 0x14(0x1c)
};

// ScriptStruct MovieSceneTracks.MovieSceneCameraAnimSectionData
// Size: 0x20 (Inherited: 0x00)
struct FMovieSceneCameraAnimSectionData {
	struct UCameraAnim* CameraAnim; // 0x00(0x08)
	float PlayRate; // 0x08(0x04)
	float PlayScale; // 0x0c(0x04)
	float BlendInTime; // 0x10(0x04)
	float BlendOutTime; // 0x14(0x04)
	bool bLooping; // 0x18(0x01)
	char UnknownData_19[0x7]; // 0x19(0x07)
};

// ScriptStruct MovieSceneTracks.MovieSceneCameraShakeSectionData
// Size: 0x20 (Inherited: 0x00)
struct FMovieSceneCameraShakeSectionData {
	struct UClass* ShakeClass; // 0x00(0x08)
	float PlayScale; // 0x08(0x04)
	char PlaySpace; // 0x0c(0x01)
	char UnknownData_D[0x3]; // 0x0d(0x03)
	struct FRotator UserDefinedPlaySpace; // 0x10(0x0c)
	char UnknownData_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct MovieSceneTracks.MovieSceneColorKeyStruct
// Size: 0x58 (Inherited: 0x08)
struct FMovieSceneColorKeyStruct : FMovieSceneKeyStruct {
	struct FLinearColor Color; // 0x08(0x10)
	char UnknownData_18[0x40]; // 0x18(0x40)
};

// ScriptStruct MovieSceneTracks.MovieSceneEventSectionData
// Size: 0x20 (Inherited: 0x00)
struct FMovieSceneEventSectionData {
	struct TArray<float> KeyTimes; // 0x00(0x10)
	struct TArray<struct FEventPayload> KeyValues; // 0x10(0x10)
};

// ScriptStruct MovieSceneTracks.EventPayload
// Size: 0x30 (Inherited: 0x00)
struct FEventPayload {
	struct FName EventName; // 0x00(0x08)
	bool IsSubtitleEvent; // 0x08(0x01)
	char UnknownData_9[0x3]; // 0x09(0x03)
	int32_t ActorNumber; // 0x0c(0x04)
	int32_t SubtitleIndex; // 0x10(0x04)
	char UnknownData_14[0x4]; // 0x14(0x04)
	struct FMovieSceneEventParameters Parameters; // 0x18(0x18)
};

// ScriptStruct MovieSceneTracks.MovieSceneEventParameters
// Size: 0x18 (Inherited: 0x00)
struct FMovieSceneEventParameters {
	char UnknownData_0[0x18]; // 0x00(0x18)
};

// ScriptStruct MovieSceneTracks.ColorParameterNameAndCurves
// Size: 0x1f0 (Inherited: 0x00)
struct FColorParameterNameAndCurves {
	struct FName ParameterName; // 0x00(0x08)
	int32_t Index; // 0x08(0x04)
	char UnknownData_C[0x4]; // 0x0c(0x04)
	struct FRichCurve RedCurve; // 0x10(0x78)
	struct FRichCurve GreenCurve; // 0x88(0x78)
	struct FRichCurve BlueCurve; // 0x100(0x78)
	struct FRichCurve AlphaCurve; // 0x178(0x78)
};

// ScriptStruct MovieSceneTracks.VectorParameterNameAndCurves
// Size: 0x178 (Inherited: 0x00)
struct FVectorParameterNameAndCurves {
	struct FName ParameterName; // 0x00(0x08)
	int32_t Index; // 0x08(0x04)
	char UnknownData_C[0x4]; // 0x0c(0x04)
	struct FRichCurve XCurve; // 0x10(0x78)
	struct FRichCurve YCurve; // 0x88(0x78)
	struct FRichCurve ZCurve; // 0x100(0x78)
};

// ScriptStruct MovieSceneTracks.ScalarParameterNameAndCurve
// Size: 0x88 (Inherited: 0x00)
struct FScalarParameterNameAndCurve {
	struct FName ParameterName; // 0x00(0x08)
	int32_t Index; // 0x08(0x04)
	char UnknownData_C[0x4]; // 0x0c(0x04)
	struct FRichCurve ParameterCurve; // 0x10(0x78)
};

// ScriptStruct MovieSceneTracks.MovieSceneSkeletalAnimationParams
// Size: 0x98 (Inherited: 0x00)
struct FMovieSceneSkeletalAnimationParams {
	struct UAnimSequenceBase* Animation; // 0x00(0x08)
	float StartOffset; // 0x08(0x04)
	float EndOffset; // 0x0c(0x04)
	float PlayRate; // 0x10(0x04)
	char bReverse : 1; // 0x14(0x01)
	char UnknownData_14_1 : 7; // 0x14(0x01)
	char UnknownData_15[0x3]; // 0x15(0x03)
	struct FName SlotName; // 0x18(0x08)
	struct FRichCurve Weight; // 0x20(0x78)
};

// ScriptStruct MovieSceneTracks.MovieSceneVector4KeyStruct
// Size: 0x60 (Inherited: 0x48)
struct FMovieSceneVector4KeyStruct : FMovieSceneVectorKeyStructBase {
	char UnknownData_48[0x8]; // 0x48(0x08)
	struct FVector4 Vector; // 0x50(0x10)
};

// ScriptStruct MovieSceneTracks.MovieSceneVectorKeyStructBase
// Size: 0x48 (Inherited: 0x08)
struct FMovieSceneVectorKeyStructBase : FMovieSceneKeyStruct {
	char UnknownData_8[0x40]; // 0x08(0x40)
};

// ScriptStruct MovieSceneTracks.MovieSceneVectorKeyStruct
// Size: 0x58 (Inherited: 0x48)
struct FMovieSceneVectorKeyStruct : FMovieSceneVectorKeyStructBase {
	struct FVector Vector; // 0x48(0x0c)
	char UnknownData_54[0x4]; // 0x54(0x04)
};

// ScriptStruct MovieSceneTracks.MovieSceneVector2DKeyStruct
// Size: 0x50 (Inherited: 0x48)
struct FMovieSceneVector2DKeyStruct : FMovieSceneVectorKeyStructBase {
	struct FVector2D Vector; // 0x48(0x08)
};

// ScriptStruct MovieSceneTracks.MovieSceneComponentMaterialSectionTemplate
// Size: 0x50 (Inherited: 0x48)
struct FMovieSceneComponentMaterialSectionTemplate : FMovieSceneParameterSectionTemplate {
	int32_t MaterialIndex; // 0x48(0x04)
	char UnknownData_4C[0x4]; // 0x4c(0x04)
};

// ScriptStruct MovieSceneTracks.MovieSceneParameterSectionTemplate
// Size: 0x48 (Inherited: 0x18)
struct FMovieSceneParameterSectionTemplate : FMovieSceneEvalTemplate {
	struct TArray<struct FScalarParameterNameAndCurve> Scalars; // 0x18(0x10)
	struct TArray<struct FVectorParameterNameAndCurves> Vectors; // 0x28(0x10)
	struct TArray<struct FColorParameterNameAndCurves> Colors; // 0x38(0x10)
};

// ScriptStruct MovieSceneTracks.MovieSceneSpawnSectionTemplate
// Size: 0x88 (Inherited: 0x18)
struct FMovieSceneSpawnSectionTemplate : FMovieSceneEvalTemplate {
	struct FIntegralCurve Curve; // 0x18(0x70)
};

// ScriptStruct MovieSceneTracks.MovieScene3DAttachSectionTemplate
// Size: 0x38 (Inherited: 0x18)
struct FMovieScene3DAttachSectionTemplate : FMovieSceneEvalTemplate {
	struct FGuid AttachGuid; // 0x18(0x10)
	struct FName AttachSocketName; // 0x28(0x08)
	struct FName AttachComponentName; // 0x30(0x08)
};

// ScriptStruct MovieSceneTracks.MovieScene3DPathSectionTemplate
// Size: 0xa8 (Inherited: 0x18)
struct FMovieScene3DPathSectionTemplate : FMovieSceneEvalTemplate {
	struct FGuid PathGuid; // 0x18(0x10)
	struct FRichCurve TimingCurve; // 0x28(0x78)
	char FrontAxisEnum; // 0xa0(0x01)
	char UpAxisEnum; // 0xa1(0x01)
	char UnknownData_A2[0x2]; // 0xa2(0x02)
	char bFollow : 1; // 0xa4(0x01)
	char bReverse : 1; // 0xa4(0x01)
	char bForceUpright : 1; // 0xa4(0x01)
	char UnknownData_A4_3 : 5; // 0xa4(0x01)
	char UnknownData_A5[0x3]; // 0xa5(0x03)
};

// ScriptStruct MovieSceneTracks.MovieScene3DTransformSectionTemplate
// Size: 0x450 (Inherited: 0x18)
struct FMovieScene3DTransformSectionTemplate : FMovieSceneEvalTemplate {
	struct FRichCurve TranslationCurve[0x03]; // 0x18(0x168)
	struct FRichCurve RotationCurve[0x03]; // 0x180(0x168)
	struct FRichCurve ScaleCurve[0x03]; // 0x2e8(0x168)
};

// ScriptStruct MovieSceneTracks.MovieSceneActorReferenceSectionTemplate
// Size: 0xb8 (Inherited: 0x18)
struct FMovieSceneActorReferenceSectionTemplate : FMovieSceneEvalTemplate {
	struct FMovieScenePropertySectionData PropertyData; // 0x18(0x20)
	struct FIntegralCurve ActorGuidIndexCurve; // 0x38(0x70)
	struct TArray<struct FGuid> ActorGuids; // 0xa8(0x10)
};

// ScriptStruct MovieSceneTracks.MovieSceneAudioSectionTemplate
// Size: 0x130 (Inherited: 0x18)
struct FMovieSceneAudioSectionTemplate : FMovieSceneEvalTemplate {
	struct FMovieSceneAudioSectionTemplateData AudioData; // 0x18(0x118)
};

// ScriptStruct MovieSceneTracks.MovieSceneAudioSectionTemplateData
// Size: 0x118 (Inherited: 0x00)
struct FMovieSceneAudioSectionTemplateData {
	struct USoundBase* Sound; // 0x00(0x08)
	float AudioStartOffset; // 0x08(0x04)
	struct FFloatRange AudioRange; // 0x0c(0x10)
	char UnknownData_1C[0x4]; // 0x1c(0x04)
	struct FRichCurve AudioPitchMultiplierCurve; // 0x20(0x78)
	struct FRichCurve AudioVolumeCurve; // 0x98(0x78)
	int32_t RowIndex; // 0x110(0x04)
	char UnknownData_114[0x4]; // 0x114(0x04)
};

// ScriptStruct MovieSceneTracks.MovieSceneAdditiveCameraAnimationTrackTemplate
// Size: 0x18 (Inherited: 0x18)
struct FMovieSceneAdditiveCameraAnimationTrackTemplate : FMovieSceneEvalTemplate {
};

// ScriptStruct MovieSceneTracks.MovieSceneCameraShakeSectionTemplate
// Size: 0x40 (Inherited: 0x18)
struct FMovieSceneCameraShakeSectionTemplate : FMovieSceneAdditiveCameraAnimationTemplate {
	struct FMovieSceneCameraShakeSectionData SourceData; // 0x18(0x20)
	float SectionStartTime; // 0x38(0x04)
	char UnknownData_3C[0x4]; // 0x3c(0x04)
};

// ScriptStruct MovieSceneTracks.MovieSceneAdditiveCameraAnimationTemplate
// Size: 0x18 (Inherited: 0x18)
struct FMovieSceneAdditiveCameraAnimationTemplate : FMovieSceneEvalTemplate {
};

// ScriptStruct MovieSceneTracks.MovieSceneCameraAnimSectionTemplate
// Size: 0x40 (Inherited: 0x18)
struct FMovieSceneCameraAnimSectionTemplate : FMovieSceneAdditiveCameraAnimationTemplate {
	struct FMovieSceneCameraAnimSectionData SourceData; // 0x18(0x20)
	float SectionStartTime; // 0x38(0x04)
	char UnknownData_3C[0x4]; // 0x3c(0x04)
};

// ScriptStruct MovieSceneTracks.MovieSceneCameraCutSectionTemplate
// Size: 0x28 (Inherited: 0x18)
struct FMovieSceneCameraCutSectionTemplate : FMovieSceneEvalTemplate {
	struct FGuid CameraGuid; // 0x18(0x10)
};

// ScriptStruct MovieSceneTracks.MovieSceneColorSectionTemplate
// Size: 0x210 (Inherited: 0x18)
struct FMovieSceneColorSectionTemplate : FMovieSceneEvalTemplate {
	struct FName PropertyName; // 0x18(0x08)
	struct FString PropertyPath; // 0x20(0x10)
	struct FRichCurve Curves[0x04]; // 0x30(0x1e0)
};

// ScriptStruct MovieSceneTracks.MovieSceneEventSectionTemplate
// Size: 0x40 (Inherited: 0x18)
struct FMovieSceneEventSectionTemplate : FMovieSceneEvalTemplate {
	struct FMovieSceneEventSectionData EventData; // 0x18(0x20)
	char bFireEventsWhenForwards : 1; // 0x38(0x01)
	char bFireEventsWhenBackwards : 1; // 0x38(0x01)
	char UnknownData_38_2 : 6; // 0x38(0x01)
	char UnknownData_39[0x7]; // 0x39(0x07)
};

// ScriptStruct MovieSceneTracks.MovieSceneFadeSectionTemplate
// Size: 0xa8 (Inherited: 0x18)
struct FMovieSceneFadeSectionTemplate : FMovieSceneEvalTemplate {
	struct FRichCurve FadeCurve; // 0x18(0x78)
	struct FLinearColor FadeColor; // 0x90(0x10)
	char bFadeAudio : 1; // 0xa0(0x01)
	char UnknownData_A0_1 : 7; // 0xa0(0x01)
	char UnknownData_A1[0x7]; // 0xa1(0x07)
};

// ScriptStruct MovieSceneTracks.MovieSceneLevelVisibilitySharedTrack
// Size: 0x18 (Inherited: 0x18)
struct FMovieSceneLevelVisibilitySharedTrack : FMovieSceneEvalTemplate {
};

// ScriptStruct MovieSceneTracks.MovieSceneLevelVisibilitySectionTemplate
// Size: 0x30 (Inherited: 0x18)
struct FMovieSceneLevelVisibilitySectionTemplate : FMovieSceneEvalTemplate {
	char Visibility; // 0x18(0x01)
	char UnknownData_19[0x7]; // 0x19(0x07)
	struct TArray<struct FName> LevelNames; // 0x20(0x10)
};

// ScriptStruct MovieSceneTracks.MovieSceneParticleParameterSectionTemplate
// Size: 0x48 (Inherited: 0x48)
struct FMovieSceneParticleParameterSectionTemplate : FMovieSceneParameterSectionTemplate {
};

// ScriptStruct MovieSceneTracks.MovieSceneParticleSectionTemplate
// Size: 0x88 (Inherited: 0x18)
struct FMovieSceneParticleSectionTemplate : FMovieSceneEvalTemplate {
	struct FIntegralCurve ParticleKeys; // 0x18(0x70)
};

// ScriptStruct MovieSceneTracks.MovieSceneVectorPropertySectionTemplate
// Size: 0x220 (Inherited: 0x18)
struct FMovieSceneVectorPropertySectionTemplate : FMovieSceneEvalTemplate {
	struct FMovieScenePropertySectionData PropertyData; // 0x18(0x20)
	struct FRichCurve ComponentCurves[0x04]; // 0x38(0x1e0)
	int32_t NumChannelsUsed; // 0x218(0x04)
	char UnknownData_21C[0x4]; // 0x21c(0x04)
};

// ScriptStruct MovieSceneTracks.MovieSceneStringPropertySectionTemplate
// Size: 0xb0 (Inherited: 0x18)
struct FMovieSceneStringPropertySectionTemplate : FMovieSceneEvalTemplate {
	struct FMovieScenePropertySectionData PropertyData; // 0x18(0x20)
	struct FStringCurve StringCurve; // 0x38(0x78)
};

// ScriptStruct MovieSceneTracks.MovieSceneIntegerPropertySectionTemplate
// Size: 0xa8 (Inherited: 0x18)
struct FMovieSceneIntegerPropertySectionTemplate : FMovieSceneEvalTemplate {
	struct FMovieScenePropertySectionData PropertyData; // 0x18(0x20)
	struct FIntegralCurve IntegerCurve; // 0x38(0x70)
};

// ScriptStruct MovieSceneTracks.MovieSceneEnumPropertySectionTemplate
// Size: 0xa8 (Inherited: 0x18)
struct FMovieSceneEnumPropertySectionTemplate : FMovieSceneEvalTemplate {
	struct FMovieScenePropertySectionData PropertyData; // 0x18(0x20)
	struct FIntegralCurve EnumCurve; // 0x38(0x70)
};

// ScriptStruct MovieSceneTracks.MovieSceneBytePropertySectionTemplate
// Size: 0xa8 (Inherited: 0x18)
struct FMovieSceneBytePropertySectionTemplate : FMovieSceneEvalTemplate {
	struct FMovieScenePropertySectionData PropertyData; // 0x18(0x20)
	struct FIntegralCurve ByteCurve; // 0x38(0x70)
};

// ScriptStruct MovieSceneTracks.MovieSceneFloatPropertySectionTemplate
// Size: 0xb0 (Inherited: 0x18)
struct FMovieSceneFloatPropertySectionTemplate : FMovieSceneEvalTemplate {
	struct FMovieScenePropertySectionData PropertyData; // 0x18(0x20)
	struct FRichCurve FloatCurve; // 0x38(0x78)
};

// ScriptStruct MovieSceneTracks.MovieSceneBoolPropertySectionTemplate
// Size: 0xa8 (Inherited: 0x18)
struct FMovieSceneBoolPropertySectionTemplate : FMovieSceneEvalTemplate {
	struct FMovieScenePropertySectionData PropertyData; // 0x18(0x20)
	struct FIntegralCurve BoolCurve; // 0x38(0x70)
};

// ScriptStruct MovieSceneTracks.MovieSceneSkeletalAnimationSharedTrack
// Size: 0x18 (Inherited: 0x18)
struct FMovieSceneSkeletalAnimationSharedTrack : FMovieSceneEvalTemplate {
};

// ScriptStruct MovieSceneTracks.MovieSceneSkeletalAnimationSectionTemplate
// Size: 0xc0 (Inherited: 0x18)
struct FMovieSceneSkeletalAnimationSectionTemplate : FMovieSceneEvalTemplate {
	struct FMovieSceneSkeletalAnimationSectionTemplateParameters Params; // 0x18(0xa0)
	char AnimationSubtype; // 0xb8(0x01)
	char UnknownData_B9[0x7]; // 0xb9(0x07)
};

// ScriptStruct MovieSceneTracks.MovieSceneSkeletalAnimationSectionTemplateParameters
// Size: 0xa0 (Inherited: 0x98)
struct FMovieSceneSkeletalAnimationSectionTemplateParameters : FMovieSceneSkeletalAnimationParams {
	float SectionStartTime; // 0x98(0x04)
	float SectionEndTime; // 0x9c(0x04)
};

// ScriptStruct MovieSceneTracks.MovieSceneSlomoSectionTemplate
// Size: 0x90 (Inherited: 0x18)
struct FMovieSceneSlomoSectionTemplate : FMovieSceneEvalTemplate {
	struct FRichCurve SlomoCurve; // 0x18(0x78)
};

// ScriptStruct MovieSceneTracks.MovieSceneVisibilitySectionTemplate
// Size: 0xb0 (Inherited: 0xa8)
struct FMovieSceneVisibilitySectionTemplate : FMovieSceneBoolPropertySectionTemplate {
	bool bTemporarilyHiddenInGame; // 0xa8(0x01)
	char UnknownData_A9[0x7]; // 0xa9(0x07)
};

