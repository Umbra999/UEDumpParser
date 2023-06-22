// Class ActorOfInterestFramework.ActorOfInterestBlueprintFunctionLibrary
// Size: 0x28 (Inherited: 0x28)
struct UActorOfInterestBlueprintFunctionLibrary : UObject {

	void GetActorsOfInterestFromIds(struct UObject* WorldContextObject, struct TArray<struct UClass*> ActorOfInterestIds, struct TArray<struct AActor*> Actors); // Function ActorOfInterestFramework.ActorOfInterestBlueprintFunctionLibrary.GetActorsOfInterestFromIds // Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x3ce0770
	struct AActor* GetActorOfInterestFromId(struct UObject* WorldContextObject, struct UClass* ActorOfInterestId); // Function ActorOfInterestFramework.ActorOfInterestBlueprintFunctionLibrary.GetActorOfInterestFromId // Final|RequiredAPI|Native|Static|Public|BlueprintCallable // @ game+0x3ce06b0
};

// Class ActorOfInterestFramework.ActorOfInterestComponent
// Size: 0xe8 (Inherited: 0xc8)
struct UActorOfInterestComponent : UActorComponent {
	struct UClass* ActorOfInterestId; // 0xc8(0x08)
	char UnknownData_D0[0x18]; // 0xd0(0x18)
};

// Class ActorOfInterestFramework.ActorOfInterestId
// Size: 0x28 (Inherited: 0x28)
struct UActorOfInterestId : UObject {
};

// Class ActorOfInterestFramework.ActorOfInterestServiceInterface
// Size: 0x28 (Inherited: 0x28)
struct UActorOfInterestServiceInterface : UInterface {
};

// Class ActorOfInterestFramework.ActorOfInterestService
// Size: 0x4c8 (Inherited: 0x3c8)
struct AActorOfInterestService : AActor {
	char UnknownData_3C8[0x10]; // 0x3c8(0x10)
	struct TMap<struct UClass*, struct FActorsOfInterestList> ActorsOfInterest; // 0x3d8(0x50)
	struct FObjectMessagingDispatcher EventDispatcher; // 0x428(0xa0)
};

