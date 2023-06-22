// Class ExplosionFramework.CreateActorInstanceOnExplodeComponent
// Size: 0x138 (Inherited: 0xc8)
struct UCreateActorInstanceOnExplodeComponent : UActorComponent {
	struct UClass* ActorToInstance; // 0xc8(0x08)
	char UnknownData_D0[0x68]; // 0xd0(0x68)
};

// Class ExplosionFramework.ExplosionInterface
// Size: 0x28 (Inherited: 0x28)
struct UExplosionInterface : UInterface {
};

// Class ExplosionFramework.ExplosionReceiverInterface
// Size: 0x28 (Inherited: 0x28)
struct UExplosionReceiverInterface : UInterface {
};

// Class ExplosionFramework.ExplosiveComponentInterface
// Size: 0x28 (Inherited: 0x28)
struct UExplosiveComponentInterface : UInterface {
};

// Class ExplosionFramework.FuseInterface
// Size: 0x28 (Inherited: 0x28)
struct UFuseInterface : UInterface {

	bool GetIsActive(); // Function ExplosionFramework.FuseInterface.GetIsActive // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x3fce520
};

// Class ExplosionFramework.StatusResponseExplodeAfterTime
// Size: 0x48 (Inherited: 0x30)
struct UStatusResponseExplodeAfterTime : UStatusResponse {
	float MinTimeUntilExplosion; // 0x30(0x04)
	float MaxTimeUntilExplosion; // 0x34(0x04)
	char UnknownData_38[0x8]; // 0x38(0x08)
	struct UWorld* CachedWorld; // 0x40(0x08)
};

// Class ExplosionFramework.TaleQuestFuseFunctionLibrary
// Size: 0x180 (Inherited: 0x180)
struct UTaleQuestFuseFunctionLibrary : UTaleQuestFunctionStepLibrary {

	void TriggerFuse(struct AActor* InFuseActor); // Function ExplosionFramework.TaleQuestFuseFunctionLibrary.TriggerFuse // Final|Native|Static|Public // @ game+0x3fce550
};

