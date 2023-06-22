// ScriptStruct ActorOfInterestFramework.ActorsOfInterestList
// Size: 0x10 (Inherited: 0x00)
struct FActorsOfInterestList {
	struct TArray<struct AActor*> Actors; // 0x00(0x10)
};

// ScriptStruct ActorOfInterestFramework.ActorOfInterestUnregisteredEvent
// Size: 0x10 (Inherited: 0x00)
struct FActorOfInterestUnregisteredEvent {
	struct AActor* ActorOfInterest; // 0x00(0x08)
	struct UClass* ActorOfInterestId; // 0x08(0x08)
};

// ScriptStruct ActorOfInterestFramework.ActorOfInterestRegisteredEvent
// Size: 0x10 (Inherited: 0x00)
struct FActorOfInterestRegisteredEvent {
	struct AActor* ActorOfInterest; // 0x00(0x08)
	struct UClass* ActorOfInterestId; // 0x08(0x08)
};

