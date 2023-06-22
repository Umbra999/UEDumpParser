// Class PirateLegendQuest.VeilOfTheAncients
// Size: 0x418 (Inherited: 0x400)
struct AVeilOfTheAncients : AInteractableBase {
	float NumberOfGems; // 0x400(0x04)
	char UnknownData_404[0x4]; // 0x404(0x04)
	struct ULockComponent* LockComponent; // 0x408(0x08)
	struct UStaticMeshComponent* StaticMeshComponent; // 0x410(0x08)
};

// Class PirateLegendQuest.VeilService
// Size: 0x180 (Inherited: 0x60)
struct UVeilService : UTaleQuestService {
	char UnknownData_60[0x20]; // 0x60(0x20)
	struct UWorld* World; // 0x80(0x08)
	struct AGameState* GameState; // 0x88(0x08)
	char UnknownData_90[0x8]; // 0x90(0x08)
	struct AVeilOfTheAncients* TrackedVeil; // 0x98(0x08)
	struct AShip* Ship; // 0xa0(0x08)
	char UnknownData_A8[0xd8]; // 0xa8(0xd8)
};

// Class PirateLegendQuest.GetVeilOfTheAncientsStep
// Size: 0x98 (Inherited: 0x98)
struct UGetVeilOfTheAncientsStep : UTaleQuestStep {
};

// Class PirateLegendQuest.VeilOfTheAncientsServiceDesc
// Size: 0x28 (Inherited: 0x28)
struct UVeilOfTheAncientsServiceDesc : UTaleQuestServiceDesc {
};

// Class PirateLegendQuest.GetVeilOfTheAncientsStepDesc
// Size: 0xb0 (Inherited: 0x80)
struct UGetVeilOfTheAncientsStepDesc : UTaleQuestStepDesc {
	struct FQuestVariableActor QuestVeil; // 0x80(0x30)
};

