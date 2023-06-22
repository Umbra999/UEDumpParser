// ScriptStruct RemoteActorDestruction.DestroyActorGameServerRequestModel
// Size: 0x04 (Inherited: 0x00)
struct FDestroyActorGameServerRequestModel {
	int32_t ActorNetID; // 0x00(0x04)
};

// ScriptStruct RemoteActorDestruction.DestroyAllExistingActorsByClassGameServerRequestModel
// Size: 0x10 (Inherited: 0x00)
struct FDestroyAllExistingActorsByClassGameServerRequestModel {
	struct TArray<struct FString> ActorClassNames; // 0x00(0x10)
};

