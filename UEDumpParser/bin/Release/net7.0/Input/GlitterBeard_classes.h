// Class GlitterBeard.GlitterBeardEntitlementDesc
// Size: 0xc8 (Inherited: 0xc8)
struct UGlitterBeardEntitlementDesc : UEntitlementDesc {
};

// Class GlitterBeard.GlitterBeardFinaleCoordinatorComponent
// Size: 0x170 (Inherited: 0xc8)
struct UGlitterBeardFinaleCoordinatorComponent : UActorComponent {
	struct UWwiseEvent* AudioEventToSynchronise; // 0xc8(0x08)
	struct FFinaleReplicationState ReplicationState; // 0xd0(0x10)
	char UnknownData_E0[0x90]; // 0xe0(0x90)

	void OnRep_ReplicationState(struct FFinaleReplicationState OldState); // Function GlitterBeard.GlitterBeardFinaleCoordinatorComponent.OnRep_ReplicationState // Final|RequiredAPI|Native|Private|HasOutParms // @ game+0x432e040
};

// Class GlitterBeard.GlitterBeardIsHideoutOpenConditional
// Size: 0x30 (Inherited: 0x30)
struct UGlitterBeardIsHideoutOpenConditional : UNPCDialogConditional {
};

// Class GlitterBeard.GlitterBeardLanternSoundEffect
// Size: 0x80 (Inherited: 0x38)
struct UGlitterBeardLanternSoundEffect : UEffectBlendObjectBase {
	float TriggerThreshold; // 0x38(0x04)
	char UnknownData_3C[0x4]; // 0x3c(0x04)
	struct UWwiseObjectPoolWrapper* WwisePool; // 0x40(0x08)
	struct UWwiseEvent* WwiseEvent; // 0x48(0x08)
	struct FWwiseEmitter Emitter; // 0x50(0x20)
	char UnknownData_70[0x10]; // 0x70(0x10)
};

// Class GlitterBeard.GlitterbeardSlidingDoor
// Size: 0x548 (Inherited: 0x540)
struct AGlitterbeardSlidingDoor : ASlidingDoor {
	struct UEffectBlendControllerComponent* DecalBlendComponent; // 0x540(0x08)
};

// Class GlitterBeard.GlitterBeardTelemetryComponent
// Size: 0x110 (Inherited: 0xc8)
struct UGlitterBeardTelemetryComponent : UActorComponent {
	char UnknownData_C8[0x48]; // 0xc8(0x48)
};

// Class GlitterBeard.GlitterBeardTrustedTreeInterface
// Size: 0x28 (Inherited: 0x28)
struct UGlitterBeardTrustedTreeInterface : UInterface {
};

// Class GlitterBeard.GlitterBeardTree
// Size: 0x6f0 (Inherited: 0x3c8)
struct AGlitterBeardTree : AActor {
	char UnknownData_3C8[0x28]; // 0x3c8(0x28)
	struct UActionRulesComponent* ActionRulesComponent; // 0x3f0(0x08)
	struct UActionRulesInteractableComponent* InteractableComponent; // 0x3f8(0x08)
	float LanternLightDelay; // 0x400(0x04)
	char UnknownData_404[0x4]; // 0x404(0x04)
	struct UGlitterBeardUnlockVFXCoordinatorComponent* UnlockVFXCoordinatorComponent; // 0x408(0x08)
	struct UGlitterBeardTelemetryComponent* TelemetryComponent; // 0x410(0x08)
	struct UClass* VocalShanty; // 0x418(0x08)
	struct UWwiseEvent* VocalsFadeEvent; // 0x420(0x08)
	float VocalsFadeDelay; // 0x428(0x04)
	float UnlockDelay; // 0x42c(0x04)
	struct UGlitterBeardFinaleCoordinatorComponent* FinaleCoordinator; // 0x430(0x08)
	struct ULandmarkReactionTriggerComponent* LandmarkReactionTrigger; // 0x438(0x08)
	float DistanceFromTreeToPauseAISpawn; // 0x440(0x04)
	char UnknownData_444[0x254]; // 0x444(0x254)
	struct ASlidingDoor* HideoutDoor; // 0x698(0x08)
	struct FWwiseEmitter SoundEmitter; // 0x6a0(0x20)
	char UnknownData_6C0[0x30]; // 0x6c0(0x30)

	void StopVocals(); // Function GlitterBeard.GlitterBeardTree.StopVocals // Final|Native|Public|BlueprintCallable // @ game+0x432e180
	bool StopReaction(); // Function GlitterBeard.GlitterBeardTree.StopReaction // Native|Event|Public|BlueprintCallable|BlueprintEvent // @ game+0x432e140
	void StartVocals(); // Function GlitterBeard.GlitterBeardTree.StartVocals // Final|Native|Public|BlueprintCallable // @ game+0x432e120
	bool StartReaction(); // Function GlitterBeard.GlitterBeardTree.StartReaction // Native|Event|Public|BlueprintCallable|BlueprintEvent // @ game+0x432e0e0
	void Reset_Impl(); // Function GlitterBeard.GlitterBeardTree.Reset_Impl // Event|Protected|BlueprintEvent // @ game+0x1848130
};

// Class GlitterBeard.GlitterBeardTreeVisualFeedbackComponent
// Size: 0x118 (Inherited: 0xc8)
struct UGlitterBeardTreeVisualFeedbackComponent : UActorComponent {
	struct TArray<struct FVisualFeedbackList> FeedbackActions; // 0xc8(0x10)
	char UnknownData_D8[0x10]; // 0xd8(0x10)
	struct TArray<char> CurrentStates; // 0xe8(0x10)
	char UnknownData_F8[0x20]; // 0xf8(0x20)

	void OnRep_NextStateEvent(struct TArray<char> OldStates); // Function GlitterBeard.GlitterBeardTreeVisualFeedbackComponent.OnRep_NextStateEvent // Final|RequiredAPI|Native|Private|HasOutParms // @ game+0x432df90
};

// Class GlitterBeard.GlitterBeardUnlockVFXCoordinatorComponent
// Size: 0xf0 (Inherited: 0xc8)
struct UGlitterBeardUnlockVFXCoordinatorComponent : UActorComponent {
	struct FActorComponentSelector TreeActor; // 0xc8(0x10)
	struct UMaterialInstanceDynamic* TreeMaterialInstanceDynamic; // 0xd8(0x08)
	float TreeBlendTime; // 0xe0(0x04)
	char UnknownData_E4[0xc]; // 0xe4(0x0c)
};

