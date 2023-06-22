// Class ShantyPuzzle.ShantyPuzzleCompletionComponent
// Size: 0x108 (Inherited: 0xc8)
struct UShantyPuzzleCompletionComponent : UActorComponent {
	float CompletionTime; // 0xc8(0x04)
	char UnknownData_CC[0x4]; // 0xcc(0x04)
	struct TArray<struct FLandmarkReactionKeyFrame> StartCompletionReaction; // 0xd0(0x10)
	struct TArray<struct FLandmarkReactionKeyFrame> AbortCompletionReaction; // 0xe0(0x10)
	struct TArray<struct FLandmarkReactionKeyFrame> PuzzleCompletedReaction; // 0xf0(0x10)
	struct ALandmarkReactionPlayer* ReactionPlayer; // 0x100(0x08)

	void PlayReactions_Net(char State); // Function ShantyPuzzle.ShantyPuzzleCompletionComponent.PlayReactions_Net // Final|Net|NetReliableNative|Event|NetMulticast|Private // @ game+0x431d850
};

// Class ShantyPuzzle.ShantyPuzzleInterface
// Size: 0x28 (Inherited: 0x28)
struct UShantyPuzzleInterface : UInterface {
};

// Class ShantyPuzzle.ShantyPuzzleComponent
// Size: 0x3f0 (Inherited: 0x2e0)
struct UShantyPuzzleComponent : USceneComponent {
	char UnknownData_2E0[0x8]; // 0x2e0(0x08)
	struct UClass* RequiredShantyItemDesc; // 0x2e8(0x08)
	struct TArray<struct FShantyPuzzleInteractionZoneDefinition> ShantyPuzzleInteractionZoneDefinitions; // 0x2f0(0x10)
	bool TimeLimited; // 0x300(0x01)
	bool ShouldMoveEnsembleToActorPosition; // 0x301(0x01)
	char UnknownData_302[0x6]; // 0x302(0x06)
	struct FGameTimeRange ActiveTimeRange; // 0x308(0x10)
	struct TArray<struct UShantyPuzzleInteractionZoneComponent*> ShantyPuzzleInteractionZones; // 0x318(0x10)
	struct AEnsemble* CurrentlyPlayingShantyPuzzleEnsemble; // 0x328(0x08)
	char UnknownData_330[0xc0]; // 0x330(0xc0)

	void OnEndOverlap(struct AActor* InActor, struct UPrimitiveComponent* InComponent, int32_t InOtherBodyIndex); // Function ShantyPuzzle.ShantyPuzzleComponent.OnEndOverlap // Final|Native|Public // @ game+0x431d750
	void OnBeginOverlap(struct AActor* InActor, struct UPrimitiveComponent* InComponent, int32_t InOtherBodyIndex, bool bFromSweep, struct FHitResult SweepResult); // Function ShantyPuzzle.ShantyPuzzleComponent.OnBeginOverlap // Final|Native|Public|HasOutParms // @ game+0x431d580
};

// Class ShantyPuzzle.ShantyPuzzleInteractionZoneComponent
// Size: 0x600 (Inherited: 0x5e0)
struct UShantyPuzzleInteractionZoneComponent : USphereComponent {
	char UnknownData_5E0[0x20]; // 0x5e0(0x20)
};

