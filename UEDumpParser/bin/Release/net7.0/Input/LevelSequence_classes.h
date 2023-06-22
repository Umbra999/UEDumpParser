// Class LevelSequence.LevelSequence
// Size: 0x3a0 (Inherited: 0x2a8)
struct ULevelSequence : UMovieSceneSequence {
	struct UMovieScene* MovieScene; // 0x2a8(0x08)
	struct FLevelSequenceObjectReferenceMap ObjectReferences; // 0x2b0(0xa0)
	struct TMap<struct FString, struct FLevelSequenceObject> PossessedObjects; // 0x350(0x50)
};

// Class LevelSequence.LevelSequenceSubtitlesInterface
// Size: 0x28 (Inherited: 0x28)
struct ULevelSequenceSubtitlesInterface : UInterface {
};

// Class LevelSequence.LevelSequencePlayer
// Size: 0x648 (Inherited: 0x608)
struct ULevelSequencePlayer : UMovieSceneSequencePlayer {
	struct AActor* SpawnablesParent; // 0x608(0x08)
	char UnknownData_610[0x38]; // 0x610(0x38)

	struct ULevelSequencePlayer* CreateLevelSequencePlayer(struct UObject* WorldContextObject, struct ULevelSequence* LevelSequence, struct FMovieSceneSequencePlaybackSettings Settings); // Function LevelSequence.LevelSequencePlayer.CreateLevelSequencePlayer // Final|Native|Static|Public|BlueprintCallable // @ game+0x241daa0
};

// Class LevelSequence.LevelSequenceBurnInInitSettings
// Size: 0x28 (Inherited: 0x28)
struct ULevelSequenceBurnInInitSettings : UObject {
};

// Class LevelSequence.LevelSequenceBurnInOptions
// Size: 0x48 (Inherited: 0x28)
struct ULevelSequenceBurnInOptions : UObject {
	bool bUseBurnIn; // 0x28(0x01)
	char UnknownData_29[0x7]; // 0x29(0x07)
	struct FStringClassReference BurnInClass; // 0x30(0x10)
	struct ULevelSequenceBurnInInitSettings* Settings; // 0x40(0x08)
};

// Class LevelSequence.LevelSequenceActor
// Size: 0x438 (Inherited: 0x3c8)
struct ALevelSequenceActor : AActor {
	char UnknownData_3C8[0x8]; // 0x3c8(0x08)
	bool bAutoPlay; // 0x3d0(0x01)
	char UnknownData_3D1[0x7]; // 0x3d1(0x07)
	struct FMovieSceneSequencePlaybackSettings PlaybackSettings; // 0x3d8(0x28)
	struct ULevelSequencePlayer* SequencePlayer; // 0x400(0x08)
	struct FStringAssetReference LevelSequence; // 0x408(0x10)
	struct ULevelSequenceBurnInOptions* BurnInOptions; // 0x418(0x08)
	struct UMovieSceneBindingOverrides* BindingOverrides; // 0x420(0x08)
	struct AActor* SpawnablesParent; // 0x428(0x08)
	struct ULevelSequenceBurnIn* BurnInInstance; // 0x430(0x08)

	void SetSequence(struct ULevelSequence* InSequence, bool LoadSequence); // Function LevelSequence.LevelSequenceActor.SetSequence // Final|Native|Public|BlueprintCallable // @ game+0x241e0c0
	void SetBinding(struct FMovieSceneObjectBindingPtr Binding, struct TArray<struct AActor*> Actors, bool bAllowBindingsFromAsset); // Function LevelSequence.LevelSequenceActor.SetBinding // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x241ded0
	void ResetBindings(); // Function LevelSequence.LevelSequenceActor.ResetBindings // Final|Native|Public|BlueprintCallable // @ game+0x241de80
	void ResetBinding(struct FMovieSceneObjectBindingPtr Binding); // Function LevelSequence.LevelSequenceActor.ResetBinding // Final|Native|Public|BlueprintCallable // @ game+0x241ddc0
	void RemoveBinding(struct FMovieSceneObjectBindingPtr Binding, struct AActor* Actor); // Function LevelSequence.LevelSequenceActor.RemoveBinding // Final|Native|Public|BlueprintCallable // @ game+0x241dcc0
	struct ULevelSequence* GetSequence(bool Load); // Function LevelSequence.LevelSequenceActor.GetSequence // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x241dc00
	void AddBinding(struct FMovieSceneObjectBindingPtr Binding, struct AActor* Actor, bool bAllowBindingsFromAsset); // Function LevelSequence.LevelSequenceActor.AddBinding // Final|Native|Public|BlueprintCallable // @ game+0x241d960
};

// Class LevelSequence.LevelSequenceBurnIn
// Size: 0x2c8 (Inherited: 0x230)
struct ULevelSequenceBurnIn : UUserWidget {
	struct FLevelSequencePlayerSnapshot FrameInformation; // 0x230(0x90)
	struct ALevelSequenceActor* LevelSequenceActor; // 0x2c0(0x08)

	void SetSettings(struct UObject* InSettings); // Function LevelSequence.LevelSequenceBurnIn.SetSettings // Event|Public|BlueprintEvent // @ game+0x1848130
	struct UClass* GetSettingsClass(); // Function LevelSequence.LevelSequenceBurnIn.GetSettingsClass // Native|Event|Public|BlueprintEvent|Const // @ game+0x241dca0
};

