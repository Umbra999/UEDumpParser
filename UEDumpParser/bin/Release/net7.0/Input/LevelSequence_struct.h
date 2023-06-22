// ScriptStruct LevelSequence.LevelSequenceObject
// Size: 0x38 (Inherited: 0x00)
struct FLevelSequenceObject {
	struct UObject* ObjectOrOwner; // 0x00(0x1c)
	char UnknownData_1C[0x4]; // 0x1c(0x04)
	struct FString ComponentName; // 0x20(0x10)
	struct UObject* CachedComponent; // 0x30(0x08)
};

// ScriptStruct LevelSequence.LevelSequenceObjectReferenceMap
// Size: 0xa0 (Inherited: 0x00)
struct FLevelSequenceObjectReferenceMap {
	char UnknownData_0[0xa0]; // 0x00(0xa0)
};

// ScriptStruct LevelSequence.LevelSequenceObjectReference
// Size: 0x20 (Inherited: 0x00)
struct FLevelSequenceObjectReference {
	char UnknownData_0[0x20]; // 0x00(0x20)
};

// ScriptStruct LevelSequence.LevelSequencePlayerSnapshot
// Size: 0x90 (Inherited: 0x00)
struct FLevelSequencePlayerSnapshot {
	struct FText MasterName; // 0x00(0x38)
	float MasterTime; // 0x38(0x04)
	char UnknownData_3C[0x4]; // 0x3c(0x04)
	struct FText CurrentShotName; // 0x40(0x38)
	float CurrentShotLocalTime; // 0x78(0x04)
	char UnknownData_7C[0x4]; // 0x7c(0x04)
	struct UCameraComponent* CameraComponent; // 0x80(0x08)
	struct FLevelSequenceSnapshotSettings Settings; // 0x88(0x08)
};

// ScriptStruct LevelSequence.LevelSequenceSnapshotSettings
// Size: 0x08 (Inherited: 0x00)
struct FLevelSequenceSnapshotSettings {
	char ZeroPadAmount; // 0x00(0x01)
	char UnknownData_1[0x3]; // 0x01(0x03)
	float FrameRate; // 0x04(0x04)
};

// ScriptStruct LevelSequence.LevelSequencePlaybackSettings
// Size: 0x28 (Inherited: 0x28)
struct FLevelSequencePlaybackSettings : FMovieSceneSequencePlaybackSettings {
};

// ScriptStruct LevelSequence.BoundActorProxy
// Size: 0x01 (Inherited: 0x00)
struct FBoundActorProxy {
	char UnknownData_0[0x1]; // 0x00(0x01)
};

