// Class MovieSceneTracks.MovieScene3DConstraintSection
// Size: 0xa8 (Inherited: 0x98)
struct UMovieScene3DConstraintSection : UMovieSceneSection {
	struct FGuid ConstraintId; // 0x98(0x10)
};

// Class MovieSceneTracks.MovieScene3DAttachSection
// Size: 0xc0 (Inherited: 0xa8)
struct UMovieScene3DAttachSection : UMovieScene3DConstraintSection {
	struct FName AttachSocketName; // 0xa8(0x08)
	struct FName AttachComponentName; // 0xb0(0x08)
	char bConstrainTx : 1; // 0xb8(0x01)
	char bConstrainTy : 1; // 0xb8(0x01)
	char bConstrainTz : 1; // 0xb8(0x01)
	char bConstrainRx : 1; // 0xb8(0x01)
	char bConstrainRy : 1; // 0xb8(0x01)
	char bConstrainRz : 1; // 0xb8(0x01)
	char UnknownData_B8_6 : 2; // 0xb8(0x01)
	char UnknownData_B9[0x7]; // 0xb9(0x07)
};

// Class MovieSceneTracks.MovieScene3DPathSection
// Size: 0x128 (Inherited: 0xa8)
struct UMovieScene3DPathSection : UMovieScene3DConstraintSection {
	struct FRichCurve TimingCurve; // 0xa8(0x78)
	char FrontAxisEnum; // 0x120(0x01)
	char UpAxisEnum; // 0x121(0x01)
	char UnknownData_122[0x2]; // 0x122(0x02)
	char bFollow : 1; // 0x124(0x01)
	char bReverse : 1; // 0x124(0x01)
	char bForceUpright : 1; // 0x124(0x01)
	char UnknownData_124_3 : 5; // 0x124(0x01)
	char UnknownData_125[0x3]; // 0x125(0x03)
};

// Class MovieSceneTracks.MovieScene3DConstraintTrack
// Size: 0x98 (Inherited: 0x88)
struct UMovieScene3DConstraintTrack : UMovieSceneTrack {
	struct TArray<struct UMovieSceneSection*> ConstraintSections; // 0x88(0x10)
};

// Class MovieSceneTracks.MovieScene3DAttachTrack
// Size: 0x98 (Inherited: 0x98)
struct UMovieScene3DAttachTrack : UMovieScene3DConstraintTrack {
};

// Class MovieSceneTracks.MovieScene3DPathTrack
// Size: 0x98 (Inherited: 0x98)
struct UMovieScene3DPathTrack : UMovieScene3DConstraintTrack {
};

// Class MovieSceneTracks.MovieScene3DTransformSection
// Size: 0x4d8 (Inherited: 0x98)
struct UMovieScene3DTransformSection : UMovieSceneSection {
	char UnknownData_98[0x8]; // 0x98(0x08)
	struct FRichCurve Translation[0x03]; // 0xa0(0x168)
	struct FRichCurve Rotation[0x03]; // 0x208(0x168)
	struct FRichCurve Scale[0x03]; // 0x370(0x168)
};

// Class MovieSceneTracks.MovieSceneActorReferenceSection
// Size: 0x130 (Inherited: 0x98)
struct UMovieSceneActorReferenceSection : UMovieSceneSection {
	char UnknownData_98[0x8]; // 0x98(0x08)
	struct FIntegralCurve ActorGuidIndexCurve; // 0xa0(0x70)
	char UnknownData_110[0x10]; // 0x110(0x10)
	struct TArray<struct FString> ActorGuidStrings; // 0x120(0x10)
};

// Class MovieSceneTracks.MovieSceneAudioSection
// Size: 0x1a8 (Inherited: 0x98)
struct UMovieSceneAudioSection : UMovieSceneSection {
	struct USoundBase* Sound; // 0x98(0x08)
	float StartOffset; // 0xa0(0x04)
	float AudioStartTime; // 0xa4(0x04)
	float AudioDilationFactor; // 0xa8(0x04)
	float AudioVolume; // 0xac(0x04)
	struct FRichCurve SoundVolume; // 0xb0(0x78)
	struct FRichCurve PitchMultiplier; // 0x128(0x78)
	bool bSuppressSubtitles; // 0x1a0(0x01)
	char UnknownData_1A1[0x7]; // 0x1a1(0x07)
};

// Class MovieSceneTracks.MovieSceneAudioTrack
// Size: 0x98 (Inherited: 0x88)
struct UMovieSceneAudioTrack : UMovieSceneNameableTrack {
	struct TArray<struct UMovieSceneSection*> AudioSections; // 0x88(0x10)
};

// Class MovieSceneTracks.MovieSceneBoolSection
// Size: 0x118 (Inherited: 0x98)
struct UMovieSceneBoolSection : UMovieSceneSection {
	char UnknownData_98[0x8]; // 0x98(0x08)
	bool DefaultValue; // 0xa0(0x01)
	char UnknownData_A1[0x7]; // 0xa1(0x07)
	struct FIntegralCurve BoolCurve; // 0xa8(0x70)
};

// Class MovieSceneTracks.MovieSceneSpawnSection
// Size: 0x118 (Inherited: 0x118)
struct UMovieSceneSpawnSection : UMovieSceneBoolSection {
};

// Class MovieSceneTracks.MovieSceneByteSection
// Size: 0x110 (Inherited: 0x98)
struct UMovieSceneByteSection : UMovieSceneSection {
	char UnknownData_98[0x8]; // 0x98(0x08)
	struct FIntegralCurve ByteCurve; // 0xa0(0x70)
};

// Class MovieSceneTracks.MovieSceneCameraAnimSection
// Size: 0xd8 (Inherited: 0x98)
struct UMovieSceneCameraAnimSection : UMovieSceneSection {
	struct FMovieSceneCameraAnimSectionData AnimData; // 0x98(0x20)
	struct UCameraAnim* CameraAnim; // 0xb8(0x08)
	float PlayRate; // 0xc0(0x04)
	float PlayScale; // 0xc4(0x04)
	float BlendInTime; // 0xc8(0x04)
	float BlendOutTime; // 0xcc(0x04)
	bool bLooping; // 0xd0(0x01)
	char UnknownData_D1[0x7]; // 0xd1(0x07)
};

// Class MovieSceneTracks.MovieSceneCameraAnimTrack
// Size: 0x98 (Inherited: 0x88)
struct UMovieSceneCameraAnimTrack : UMovieSceneNameableTrack {
	struct TArray<struct UMovieSceneSection*> CameraAnimSections; // 0x88(0x10)
};

// Class MovieSceneTracks.MovieSceneCameraCutSection
// Size: 0xa8 (Inherited: 0x98)
struct UMovieSceneCameraCutSection : UMovieSceneSection {
	struct FGuid CameraGuid; // 0x98(0x10)
};

// Class MovieSceneTracks.MovieSceneCameraCutTrack
// Size: 0x98 (Inherited: 0x88)
struct UMovieSceneCameraCutTrack : UMovieSceneNameableTrack {
	struct TArray<struct UMovieSceneSection*> Sections; // 0x88(0x10)
};

// Class MovieSceneTracks.MovieSceneCameraShakeSection
// Size: 0xd8 (Inherited: 0x98)
struct UMovieSceneCameraShakeSection : UMovieSceneSection {
	struct FMovieSceneCameraShakeSectionData ShakeData; // 0x98(0x20)
	struct UClass* ShakeClass; // 0xb8(0x08)
	float PlayScale; // 0xc0(0x04)
	char PlaySpace; // 0xc4(0x01)
	char UnknownData_C5[0x3]; // 0xc5(0x03)
	struct FRotator UserDefinedPlaySpace; // 0xc8(0x0c)
	char UnknownData_D4[0x4]; // 0xd4(0x04)
};

// Class MovieSceneTracks.MovieSceneCameraShakeTrack
// Size: 0x98 (Inherited: 0x88)
struct UMovieSceneCameraShakeTrack : UMovieSceneNameableTrack {
	struct TArray<struct UMovieSceneSection*> CameraShakeSections; // 0x88(0x10)
};

// Class MovieSceneTracks.MovieSceneColorSection
// Size: 0x280 (Inherited: 0x98)
struct UMovieSceneColorSection : UMovieSceneSection {
	char UnknownData_98[0x8]; // 0x98(0x08)
	struct FRichCurve RedCurve; // 0xa0(0x78)
	struct FRichCurve GreenCurve; // 0x118(0x78)
	struct FRichCurve BlueCurve; // 0x190(0x78)
	struct FRichCurve AlphaCurve; // 0x208(0x78)
};

// Class MovieSceneTracks.MovieSceneEnumSection
// Size: 0x110 (Inherited: 0x98)
struct UMovieSceneEnumSection : UMovieSceneSection {
	char UnknownData_98[0x8]; // 0x98(0x08)
	struct FIntegralCurve EnumCurve; // 0xa0(0x70)
};

// Class MovieSceneTracks.MovieSceneEventSection
// Size: 0x1a8 (Inherited: 0x98)
struct UMovieSceneEventSection : UMovieSceneSection {
	struct FNameCurve Events; // 0x98(0x68)
	struct FMovieSceneEventSectionData EventData; // 0x100(0x20)
	char UnknownData_120[0x88]; // 0x120(0x88)
};

// Class MovieSceneTracks.MovieSceneSpawnTrack
// Size: 0xa8 (Inherited: 0x88)
struct UMovieSceneSpawnTrack : UMovieSceneTrack {
	struct TArray<struct UMovieSceneSection*> Sections; // 0x88(0x10)
	struct FGuid ObjectGuid; // 0x98(0x10)
};

// Class MovieSceneTracks.MovieSceneEventTrack
// Size: 0xa0 (Inherited: 0x88)
struct UMovieSceneEventTrack : UMovieSceneNameableTrack {
	char bFireEventsWhenForwards : 1; // 0x88(0x01)
	char bFireEventsWhenBackwards : 1; // 0x88(0x01)
	char UnknownData_88_2 : 6; // 0x88(0x01)
	char UnknownData_89[0x7]; // 0x89(0x07)
	struct TArray<struct UMovieSceneSection*> Sections; // 0x90(0x10)
};

// Class MovieSceneTracks.MovieSceneFloatSection
// Size: 0x118 (Inherited: 0x98)
struct UMovieSceneFloatSection : UMovieSceneSection {
	char UnknownData_98[0x8]; // 0x98(0x08)
	struct FRichCurve FloatCurve; // 0xa0(0x78)
};

// Class MovieSceneTracks.MovieSceneFadeSection
// Size: 0x130 (Inherited: 0x118)
struct UMovieSceneFadeSection : UMovieSceneFloatSection {
	struct FLinearColor FadeColor; // 0x118(0x10)
	char bFadeAudio : 1; // 0x128(0x01)
	char UnknownData_128_1 : 7; // 0x128(0x01)
	char UnknownData_129[0x7]; // 0x129(0x07)
};

// Class MovieSceneTracks.MovieSceneSlomoSection
// Size: 0x118 (Inherited: 0x118)
struct UMovieSceneSlomoSection : UMovieSceneFloatSection {
};

// Class MovieSceneTracks.MovieSceneIntegerSection
// Size: 0x110 (Inherited: 0x98)
struct UMovieSceneIntegerSection : UMovieSceneSection {
	char UnknownData_98[0x8]; // 0x98(0x08)
	struct FIntegralCurve IntegerCurve; // 0xa0(0x70)
};

// Class MovieSceneTracks.MovieSceneLevelVisibilitySection
// Size: 0xb0 (Inherited: 0x98)
struct UMovieSceneLevelVisibilitySection : UMovieSceneSection {
	char Visibility; // 0x98(0x01)
	char UnknownData_99[0x7]; // 0x99(0x07)
	struct TArray<struct FName> LevelNames; // 0xa0(0x10)
};

// Class MovieSceneTracks.MovieScenePropertyTrack
// Size: 0xb0 (Inherited: 0x88)
struct UMovieScenePropertyTrack : UMovieSceneNameableTrack {
	struct FName PropertyName; // 0x88(0x08)
	struct FString PropertyPath; // 0x90(0x10)
	struct TArray<struct UMovieSceneSection*> Sections; // 0xa0(0x10)
};

// Class MovieSceneTracks.MovieSceneLevelVisibilityTrack
// Size: 0x98 (Inherited: 0x88)
struct UMovieSceneLevelVisibilityTrack : UMovieSceneNameableTrack {
	struct TArray<struct UMovieSceneSection*> Sections; // 0x88(0x10)
};

// Class MovieSceneTracks.MovieSceneParameterSection
// Size: 0xc8 (Inherited: 0x98)
struct UMovieSceneParameterSection : UMovieSceneSection {
	struct TArray<struct FScalarParameterNameAndCurve> ScalarParameterNamesAndCurves; // 0x98(0x10)
	struct TArray<struct FVectorParameterNameAndCurves> VectorParameterNamesAndCurves; // 0xa8(0x10)
	struct TArray<struct FColorParameterNameAndCurves> ColorParameterNamesAndCurves; // 0xb8(0x10)
};

// Class MovieSceneTracks.MovieSceneMaterialTrack
// Size: 0x98 (Inherited: 0x88)
struct UMovieSceneMaterialTrack : UMovieSceneNameableTrack {
	struct TArray<struct UMovieSceneSection*> Sections; // 0x88(0x10)
};

// Class MovieSceneTracks.MovieSceneComponentMaterialTrack
// Size: 0xa0 (Inherited: 0x98)
struct UMovieSceneComponentMaterialTrack : UMovieSceneMaterialTrack {
	int32_t MaterialIndex; // 0x98(0x04)
	char UnknownData_9C[0x4]; // 0x9c(0x04)
};

// Class MovieSceneTracks.MovieSceneParticleParameterTrack
// Size: 0x98 (Inherited: 0x88)
struct UMovieSceneParticleParameterTrack : UMovieSceneNameableTrack {
	struct TArray<struct UMovieSceneSection*> Sections; // 0x88(0x10)
};

// Class MovieSceneTracks.MovieSceneParticleSection
// Size: 0x108 (Inherited: 0x98)
struct UMovieSceneParticleSection : UMovieSceneSection {
	struct FIntegralCurve ParticleKeys; // 0x98(0x70)
};

// Class MovieSceneTracks.MovieSceneParticleTrack
// Size: 0x98 (Inherited: 0x88)
struct UMovieSceneParticleTrack : UMovieSceneNameableTrack {
	struct TArray<struct UMovieSceneSection*> ParticleSections; // 0x88(0x10)
};

// Class MovieSceneTracks.MovieScene3DTransformTrack
// Size: 0xb0 (Inherited: 0xb0)
struct UMovieScene3DTransformTrack : UMovieScenePropertyTrack {
};

// Class MovieSceneTracks.MovieSceneActorReferenceTrack
// Size: 0xb0 (Inherited: 0xb0)
struct UMovieSceneActorReferenceTrack : UMovieScenePropertyTrack {
};

// Class MovieSceneTracks.MovieSceneBoolTrack
// Size: 0xb0 (Inherited: 0xb0)
struct UMovieSceneBoolTrack : UMovieScenePropertyTrack {
};

// Class MovieSceneTracks.MovieSceneVisibilityTrack
// Size: 0xb0 (Inherited: 0xb0)
struct UMovieSceneVisibilityTrack : UMovieSceneBoolTrack {
};

// Class MovieSceneTracks.MovieSceneByteTrack
// Size: 0xb8 (Inherited: 0xb0)
struct UMovieSceneByteTrack : UMovieScenePropertyTrack {
	struct UEnum* Enum; // 0xb0(0x08)
};

// Class MovieSceneTracks.MovieSceneColorTrack
// Size: 0xb8 (Inherited: 0xb0)
struct UMovieSceneColorTrack : UMovieScenePropertyTrack {
	bool bIsSlateColor; // 0xb0(0x01)
	char UnknownData_B1[0x7]; // 0xb1(0x07)
};

// Class MovieSceneTracks.MovieSceneEnumTrack
// Size: 0xb8 (Inherited: 0xb0)
struct UMovieSceneEnumTrack : UMovieScenePropertyTrack {
	struct UEnum* Enum; // 0xb0(0x08)
};

// Class MovieSceneTracks.MovieSceneFloatTrack
// Size: 0xb0 (Inherited: 0xb0)
struct UMovieSceneFloatTrack : UMovieScenePropertyTrack {
};

// Class MovieSceneTracks.MovieSceneFadeTrack
// Size: 0xb0 (Inherited: 0xb0)
struct UMovieSceneFadeTrack : UMovieSceneFloatTrack {
};

// Class MovieSceneTracks.MovieSceneSlomoTrack
// Size: 0xb0 (Inherited: 0xb0)
struct UMovieSceneSlomoTrack : UMovieSceneFloatTrack {
};

// Class MovieSceneTracks.MovieSceneIntegerTrack
// Size: 0xb0 (Inherited: 0xb0)
struct UMovieSceneIntegerTrack : UMovieScenePropertyTrack {
};

// Class MovieSceneTracks.MovieSceneStringTrack
// Size: 0xb0 (Inherited: 0xb0)
struct UMovieSceneStringTrack : UMovieScenePropertyTrack {
};

// Class MovieSceneTracks.MovieSceneVectorTrack
// Size: 0xb8 (Inherited: 0xb0)
struct UMovieSceneVectorTrack : UMovieScenePropertyTrack {
	int32_t NumChannelsUsed; // 0xb0(0x04)
	char UnknownData_B4[0x4]; // 0xb4(0x04)
};

// Class MovieSceneTracks.MovieSceneSkeletalAnimationSection
// Size: 0x158 (Inherited: 0x98)
struct UMovieSceneSkeletalAnimationSection : UMovieSceneSection {
	struct FMovieSceneSkeletalAnimationParams Params; // 0x98(0x98)
	struct UAnimSequence* AnimSequence; // 0x130(0x08)
	struct UAnimSequenceBase* Animation; // 0x138(0x08)
	float StartOffset; // 0x140(0x04)
	float EndOffset; // 0x144(0x04)
	float PlayRate; // 0x148(0x04)
	char bReverse : 1; // 0x14c(0x01)
	char UnknownData_14C_1 : 7; // 0x14c(0x01)
	char UnknownData_14D[0x3]; // 0x14d(0x03)
	struct FName SlotName; // 0x150(0x08)
};

// Class MovieSceneTracks.MovieSceneSkeletalAnimationTrack
// Size: 0xa0 (Inherited: 0x88)
struct UMovieSceneSkeletalAnimationTrack : UMovieSceneNameableTrack {
	char TrackSubtype; // 0x88(0x01)
	char UnknownData_89[0x7]; // 0x89(0x07)
	struct TArray<struct UMovieSceneSection*> AnimationSections; // 0x90(0x10)
};

// Class MovieSceneTracks.MovieSceneStringSection
// Size: 0x118 (Inherited: 0x98)
struct UMovieSceneStringSection : UMovieSceneSection {
	char UnknownData_98[0x8]; // 0x98(0x08)
	struct FStringCurve StringCurve; // 0xa0(0x78)
};

// Class MovieSceneTracks.MovieSceneSubSection
// Size: 0x100 (Inherited: 0x98)
struct UMovieSceneSubSection : UMovieSceneSection {
	struct FMovieSceneSectionParameters Parameters; // 0x98(0x10)
	float StartOffset; // 0xa8(0x04)
	float TimeScale; // 0xac(0x04)
	float PrerollTime; // 0xb0(0x04)
	char UnknownData_B4[0x4]; // 0xb4(0x04)
	struct UMovieSceneSequence* SubSequence; // 0xb8(0x08)
	struct AActor* ActorToRecord; // 0xc0(0x1c)
	char UnknownData_DC[0x4]; // 0xdc(0x04)
	struct FString TargetSequenceName; // 0xe0(0x10)
	struct FDirectoryPath TargetPathToRecordTo; // 0xf0(0x10)
};

// Class MovieSceneTracks.MovieSceneCinematicShotSection
// Size: 0x138 (Inherited: 0x100)
struct UMovieSceneCinematicShotSection : UMovieSceneSubSection {
	struct FText DisplayName; // 0x100(0x38)
};

// Class MovieSceneTracks.MovieSceneSubTrack
// Size: 0x98 (Inherited: 0x88)
struct UMovieSceneSubTrack : UMovieSceneNameableTrack {
	struct TArray<struct UMovieSceneSection*> Sections; // 0x88(0x10)
};

// Class MovieSceneTracks.MovieSceneCinematicShotTrack
// Size: 0x98 (Inherited: 0x98)
struct UMovieSceneCinematicShotTrack : UMovieSceneSubTrack {
};

// Class MovieSceneTracks.MovieSceneVectorSection
// Size: 0x288 (Inherited: 0x98)
struct UMovieSceneVectorSection : UMovieSceneSection {
	char UnknownData_98[0x8]; // 0x98(0x08)
	struct FRichCurve Curves[0x04]; // 0xa0(0x1e0)
	int32_t ChannelsUsed; // 0x280(0x04)
	char UnknownData_284[0x4]; // 0x284(0x04)
};

