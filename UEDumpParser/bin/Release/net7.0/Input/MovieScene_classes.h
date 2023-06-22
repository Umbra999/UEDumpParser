// Class MovieScene.MovieSceneSignedObject
// Size: 0x80 (Inherited: 0x28)
struct UMovieSceneSignedObject : UObject {
	struct FGuid Signature; // 0x28(0x10)
	char UnknownData_38[0x48]; // 0x38(0x48)
};

// Class MovieScene.MovieScene
// Size: 0x100 (Inherited: 0x80)
struct UMovieScene : UMovieSceneSignedObject {
	struct TArray<struct FMovieSceneSpawnable> Spawnables; // 0x80(0x10)
	struct TArray<struct FMovieScenePossessable> Possessables; // 0x90(0x10)
	struct TArray<struct FMovieSceneBinding> ObjectBindings; // 0xa0(0x10)
	struct TArray<struct UMovieSceneTrack*> MasterTracks; // 0xb0(0x10)
	struct UMovieSceneTrack* CameraCutTrack; // 0xc0(0x08)
	struct FFloatRange SelectionRange; // 0xc8(0x10)
	struct FFloatRange PlaybackRange; // 0xd8(0x10)
	bool bForceFixedFrameIntervalPlayback; // 0xe8(0x01)
	char UnknownData_E9[0x3]; // 0xe9(0x03)
	float FixedFrameInterval; // 0xec(0x04)
	float InTime; // 0xf0(0x04)
	float OutTime; // 0xf4(0x04)
	float StartTime; // 0xf8(0x04)
	float EndTime; // 0xfc(0x04)
};

// Class MovieScene.MovieSceneBindingOverridesInterface
// Size: 0x28 (Inherited: 0x28)
struct UMovieSceneBindingOverridesInterface : UInterface {
};

// Class MovieScene.MovieSceneBindingOverrides
// Size: 0x98 (Inherited: 0x28)
struct UMovieSceneBindingOverrides : UObject {
	char UnknownData_28[0x8]; // 0x28(0x08)
	struct TArray<struct FMovieSceneBindingOverrideData> BindingData; // 0x30(0x10)
	char UnknownData_40[0x58]; // 0x40(0x58)
};

// Class MovieScene.MovieSceneBindingOwnerInterface
// Size: 0x28 (Inherited: 0x28)
struct UMovieSceneBindingOwnerInterface : UInterface {
};

// Class MovieScene.MovieSceneCameraDockingInterface
// Size: 0x28 (Inherited: 0x28)
struct UMovieSceneCameraDockingInterface : UInterface {
};

// Class MovieScene.MovieSceneFolder
// Size: 0x70 (Inherited: 0x28)
struct UMovieSceneFolder : UObject {
	struct FName FolderName; // 0x28(0x08)
	struct TArray<struct UMovieSceneFolder*> ChildFolders; // 0x30(0x10)
	struct TArray<struct UMovieSceneTrack*> ChildMasterTracks; // 0x40(0x10)
	struct TArray<struct FString> ChildObjectBindingStrings; // 0x50(0x10)
	char UnknownData_60[0x10]; // 0x60(0x10)
};

// Class MovieScene.MovieSceneSequencePlayer
// Size: 0x608 (Inherited: 0x28)
struct UMovieSceneSequencePlayer : UObject {
	char UnknownData_28[0x368]; // 0x28(0x368)
	struct FMulticastDelegate OnPlay; // 0x390(0x10)
	struct FMulticastDelegate OnStop; // 0x3a0(0x10)
	struct FMulticastDelegate OnPause; // 0x3b0(0x10)
	char bIsPlaying : 1; // 0x3c0(0x01)
	char bReversePlayback : 1; // 0x3c0(0x01)
	char bPendingFirstUpdate : 1; // 0x3c0(0x01)
	char UnknownData_3C0_3 : 5; // 0x3c0(0x01)
	char UnknownData_3C1[0x7]; // 0x3c1(0x07)
	struct UMovieSceneSequence* Sequence; // 0x3c8(0x08)
	float TimeCursorPosition; // 0x3d0(0x04)
	float StartTime; // 0x3d4(0x04)
	float EndTime; // 0x3d8(0x04)
	int32_t CurrentNumLoops; // 0x3dc(0x04)
	char UnknownData_3E0[0x10]; // 0x3e0(0x10)
	struct FMovieSceneSequencePlaybackSettings PlaybackSettings; // 0x3f0(0x28)
	char UnknownData_418[0x1d0]; // 0x418(0x1d0)
	struct ACharacter* InteractingCharacter; // 0x5e8(0x08)
	char UnknownData_5F0[0x18]; // 0x5f0(0x18)

	void Stop(); // Function MovieScene.MovieSceneSequencePlayer.Stop // Final|Native|Public|BlueprintCallable // @ game+0x20cd4b0
	void StartPlayingNextTick(); // Function MovieScene.MovieSceneSequencePlayer.StartPlayingNextTick // Final|Native|Public|BlueprintCallable // @ game+0x20cd490
	void SetPlayRate(float PlayRate); // Function MovieScene.MovieSceneSequencePlayer.SetPlayRate // Final|Native|Public|BlueprintCallable // @ game+0x20cd2d0
	void SetPlaybackRange(float NewStartTime, float NewEndTime); // Function MovieScene.MovieSceneSequencePlayer.SetPlaybackRange // Final|Native|Public|BlueprintCallable // @ game+0x20cd3d0
	void SetPlaybackPosition(float NewPlaybackPosition); // Function MovieScene.MovieSceneSequencePlayer.SetPlaybackPosition // Final|Native|Public|BlueprintCallable // @ game+0x20cd350
	void SetOverridePlaybackSettings(struct FMovieSceneSequencePlaybackSettings InSettings); // Function MovieScene.MovieSceneSequencePlayer.SetOverridePlaybackSettings // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x20cd210
	void PlayReverse(); // Function MovieScene.MovieSceneSequencePlayer.PlayReverse // Final|Native|Public|BlueprintCallable // @ game+0x20cd1f0
	void PlayLooping(int32_t NumLoops); // Function MovieScene.MovieSceneSequencePlayer.PlayLooping // Final|Native|Public|BlueprintCallable // @ game+0x20cd170
	void Play(struct ACharacter* OptionalInteractingCharacter); // Function MovieScene.MovieSceneSequencePlayer.Play // Final|Native|Public|BlueprintCallable // @ game+0x20cd0f0
	void Pause(); // Function MovieScene.MovieSceneSequencePlayer.Pause // Final|Native|Public|BlueprintCallable // @ game+0x20cd0d0
	bool IsPlaying(); // Function MovieScene.MovieSceneSequencePlayer.IsPlaying // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x20cd0a0
	float GetPlayRate(); // Function MovieScene.MovieSceneSequencePlayer.GetPlayRate // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x20cd000
	float GetPlaybackStart(); // Function MovieScene.MovieSceneSequencePlayer.GetPlaybackStart // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x20cd080
	float GetPlaybackPosition(); // Function MovieScene.MovieSceneSequencePlayer.GetPlaybackPosition // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x20cd050
	float GetPlaybackEnd(); // Function MovieScene.MovieSceneSequencePlayer.GetPlaybackEnd // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x20cd030
	float GetLength(); // Function MovieScene.MovieSceneSequencePlayer.GetLength // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x20ccfd0
	void ChangePlaybackDirection(); // Function MovieScene.MovieSceneSequencePlayer.ChangePlaybackDirection // Final|Native|Public|BlueprintCallable // @ game+0x20ccfb0
};

// Class MovieScene.MovieSceneSection
// Size: 0x98 (Inherited: 0x80)
struct UMovieSceneSection : UMovieSceneSignedObject {
	struct FMovieSceneSectionEvalOptions EvalOptions; // 0x80(0x02)
	char UnknownData_82[0x2]; // 0x82(0x02)
	float StartTime; // 0x84(0x04)
	float EndTime; // 0x88(0x04)
	int32_t RowIndex; // 0x8c(0x04)
	int32_t OverlapPriority; // 0x90(0x04)
	char bIsActive : 1; // 0x94(0x01)
	char bIsLocked : 1; // 0x94(0x01)
	char bIsInfinite : 1; // 0x94(0x01)
	char UnknownData_94_3 : 5; // 0x94(0x01)
	char UnknownData_95[0x3]; // 0x95(0x03)
};

// Class MovieScene.MovieSceneTrack
// Size: 0x88 (Inherited: 0x80)
struct UMovieSceneTrack : UMovieSceneSignedObject {
	struct FMovieSceneTrackEvalOptions EvalOptions; // 0x80(0x04)
	char UnknownData_84[0x4]; // 0x84(0x04)
};

// Class MovieScene.MovieSceneSequence
// Size: 0x2a8 (Inherited: 0x80)
struct UMovieSceneSequence : UMovieSceneSignedObject {
	struct FCachedMovieSceneEvaluationTemplate EvaluationTemplate; // 0x80(0x220)
	struct FMovieSceneTrackCompilationParams TemplateParameters; // 0x2a0(0x01)
	bool bParentContextsAreSignificant; // 0x2a1(0x01)
	char UnknownData_2A2[0x6]; // 0x2a2(0x06)
};

// Class MovieScene.MovieSceneNameableTrack
// Size: 0x88 (Inherited: 0x88)
struct UMovieSceneNameableTrack : UMovieSceneTrack {
};

