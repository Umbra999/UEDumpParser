// BlueprintGeneratedClass BP_Shroudbreaker_OnShip.BP_Shroudbreaker_OnShip_C
// Size: 0x790 (Inherited: 0x458)
struct ABP_Shroudbreaker_OnShip_C : AShroudBreakerOnShip {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x458(0x08)
	struct UParticleSystemComponent* vfx_ShroudBreaker_OnShip_stage4; // 0x460(0x08)
	struct UStaticMeshComponent* ShieldPulseMesh; // 0x468(0x08)
	struct UParticleSystemComponent* vfx_ShroudBreaker_OnShip_stage3; // 0x470(0x08)
	struct UParticleSystemComponent* vfx_shroudbreaker_ember; // 0x478(0x08)
	struct UParticleSystemComponent* vfx_shroudbreaker_shipTip; // 0x480(0x08)
	struct UStaticMeshComponent* ShieldMesh; // 0x488(0x08)
	struct UWwiseEmitterComponent* WwiseEmitter; // 0x490(0x08)
	struct UParticleSystemComponent* vfx_ShroudBreaker_disappear_smoke_cloud; // 0x498(0x08)
	struct UParticleSystemComponent* vfx_ShroudBreaker_OnShip_stage1; // 0x4a0(0x08)
	struct UMusicZoneComponent* MusicZone; // 0x4a8(0x08)
	struct UStaticMeshComponent* StaticMesh; // 0x4b0(0x08)
	struct FObjectMessagingHandle ActivateShroudbreakerHandle; // 0x4b8(0x58)
	struct FObjectMessagingHandle DeactivateShroudbreakerHandle; // 0x510(0x58)
	struct FObjectMessagingHandle ActivateEffectsHandle; // 0x568(0x58)
	struct FObjectMessagingHandle DeactivateEffectsHandle; // 0x5c0(0x58)
	struct FObjectMessagingHandle ShipDestroyedHandle; // 0x618(0x58)
	struct AActor* ParentShipActor; // 0x670(0x08)
	bool MusicZoneActive; // 0x678(0x01)
	char UnknownData_679[0x3]; // 0x679(0x03)
	float GemEmissiveOn; // 0x67c(0x04)
	struct UMaterialInstanceDynamic* Shroudbreaker Material; // 0x680(0x08)
	float GemEmissiveOff; // 0x688(0x04)
	bool ShroudBreakerEffectsActive; // 0x68c(0x01)
	bool ShroudBreakerDeactivate; // 0x68d(0x01)
	char UnknownData_68E[0x2]; // 0x68e(0x02)
	struct FObjectMessagingHandle PlayerEnteredIslandVincityEventHandle; // 0x690(0x58)
	struct FObjectMessagingHandle PlayerLeftIslandVincityEventHandle; // 0x6e8(0x58)
	struct TArray<struct AProgressShipSpawnLocation*> ShipProgressSpawnLoactionsAssetID; // 0x740(0x10)
	struct TArray<struct AProgressShipSpawnLocation*> ShipProgressSpawnLocationsReference; // 0x750(0x10)
	struct UMaterialInstanceDynamic* ShieldMaterial; // 0x760(0x08)
	struct UMaterialInstanceDynamic* ShieldPulseMaterial; // 0x768(0x08)
	int32_t DEBUG_Stage; // 0x770(0x04)
	float FinalStageActivationDelay; // 0x774(0x04)
	struct USoundBase* NewVar_1; // 0x778(0x08)
	struct AShipHullAudio* ShipHullAudio; // 0x780(0x08)
	struct UWwiseEvent* ShroudBreakerAmbientLoopingWwiseEvent; // 0x788(0x08)

	struct UWwiseEmitterComponent* GetShroudBreakerObjectEmitterComponent(); // Function BP_Shroudbreaker_OnShip.BP_Shroudbreaker_OnShip_C.GetShroudBreakerObjectEmitterComponent // Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent // @ game+0x1848130
	void GetShipHullAudio(struct AShipHullAudio* ShipHullAudioRef); // Function BP_Shroudbreaker_OnShip.BP_Shroudbreaker_OnShip_C.GetShipHullAudio // Public|HasOutParms|BlueprintCallable|BlueprintEvent // @ game+0x1848130
	void OnRep_ShroudBreakerDeactivate(); // Function BP_Shroudbreaker_OnShip.BP_Shroudbreaker_OnShip_C.OnRep_ShroudBreakerDeactivate // BlueprintCallable|BlueprintEvent // @ game+0x1848130
	void OnRep_ShroudBreakerEffectsActive(); // Function BP_Shroudbreaker_OnShip.BP_Shroudbreaker_OnShip_C.OnRep_ShroudBreakerEffectsActive // BlueprintCallable|BlueprintEvent // @ game+0x1848130
	void OnRep_MusicZoneActive(); // Function BP_Shroudbreaker_OnShip.BP_Shroudbreaker_OnShip_C.OnRep_MusicZoneActive // BlueprintCallable|BlueprintEvent // @ game+0x1848130
	void UnregisterShipEvent(struct FObjectMessagingDispatcherHandle Dispatcher, struct FObjectMessagingHandle Handle); // Function BP_Shroudbreaker_OnShip.BP_Shroudbreaker_OnShip_C.UnregisterShipEvent // Public|HasOutParms|BlueprintCallable|BlueprintEvent // @ game+0x1848130
	void GetObjMsgDispatcher(struct FObjectMessagingDispatcherHandle Dispatcher, bool Success); // Function BP_Shroudbreaker_OnShip.BP_Shroudbreaker_OnShip_C.GetObjMsgDispatcher // Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent // @ game+0x1848130
	void UserConstructionScript(); // Function BP_Shroudbreaker_OnShip.BP_Shroudbreaker_OnShip_C.UserConstructionScript // Event|Public|BlueprintCallable|BlueprintEvent // @ game+0x1848130
	void ReceiveBeginPlay(); // Function BP_Shroudbreaker_OnShip.BP_Shroudbreaker_OnShip_C.ReceiveBeginPlay // Event|Public|BlueprintEvent // @ game+0x1848130
	void ReceiveEndPlay(char EndPlayReason); // Function BP_Shroudbreaker_OnShip.BP_Shroudbreaker_OnShip_C.ReceiveEndPlay // Event|Public|BlueprintEvent // @ game+0x1848130
	void OnShroudbreakerActivated(struct FShroudBreakerActivatedEvent Ev); // Function BP_Shroudbreaker_OnShip.BP_Shroudbreaker_OnShip_C.OnShroudbreakerActivated // BlueprintCallable|BlueprintEvent // @ game+0x1848130
	void OnShroudbreakerDeactivated(struct FShroudBreakerDeactivatedEvent Ev); // Function BP_Shroudbreaker_OnShip.BP_Shroudbreaker_OnShip_C.OnShroudbreakerDeactivated // BlueprintCallable|BlueprintEvent // @ game+0x1848130
	void OnShipDestroyed(struct FEventShipDestroyed Ev); // Function BP_Shroudbreaker_OnShip.BP_Shroudbreaker_OnShip_C.OnShipDestroyed // BlueprintCallable|BlueprintEvent // @ game+0x1848130
	void OnActivateEffects(struct FShroudBreakerActivateEffectsEvent Ev); // Function BP_Shroudbreaker_OnShip.BP_Shroudbreaker_OnShip_C.OnActivateEffects // BlueprintCallable|BlueprintEvent // @ game+0x1848130
	void OnDeactivateEffects(struct FShroudBreakerDeactivateEffectsEvent Ev); // Function BP_Shroudbreaker_OnShip.BP_Shroudbreaker_OnShip_C.OnDeactivateEffects // BlueprintCallable|BlueprintEvent // @ game+0x1848130
	void PlayerEnteredTP(struct FEventPlayerEnteredIslandVicinity Ev); // Function BP_Shroudbreaker_OnShip.BP_Shroudbreaker_OnShip_C.PlayerEnteredTP // BlueprintCallable|BlueprintEvent // @ game+0x1848130
	void PlayerLeftTP(struct FEventPlayerLeftIslandVicinity Ev); // Function BP_Shroudbreaker_OnShip.BP_Shroudbreaker_OnShip_C.PlayerLeftTP // BlueprintCallable|BlueprintEvent // @ game+0x1848130
	void OnRepFunctionDeactivateShroudBreaker(); // Function BP_Shroudbreaker_OnShip.BP_Shroudbreaker_OnShip_C.OnRepFunctionDeactivateShroudBreaker // BlueprintCallable|BlueprintEvent // @ game+0x1848130
	void OnShroudBreakerActivationStateChange(); // Function BP_Shroudbreaker_OnShip.BP_Shroudbreaker_OnShip_C.OnShroudBreakerActivationStateChange // Event|Protected|BlueprintEvent // @ game+0x1848130
	void Stage 4 Activation(); // Function BP_Shroudbreaker_OnShip.BP_Shroudbreaker_OnShip_C.Stage 4 Activation // BlueprintCallable|BlueprintEvent // @ game+0x1848130
	void Stage 3 Activation(); // Function BP_Shroudbreaker_OnShip.BP_Shroudbreaker_OnShip_C.Stage 3 Activation // BlueprintCallable|BlueprintEvent // @ game+0x1848130
	void Stage 2 Activation(); // Function BP_Shroudbreaker_OnShip.BP_Shroudbreaker_OnShip_C.Stage 2 Activation // BlueprintCallable|BlueprintEvent // @ game+0x1848130
	void Stage1Activation(); // Function BP_Shroudbreaker_OnShip.BP_Shroudbreaker_OnShip_C.Stage1Activation // BlueprintCallable|BlueprintEvent // @ game+0x1848130
	void Deactivate All VFX and SFX(); // Function BP_Shroudbreaker_OnShip.BP_Shroudbreaker_OnShip_C.Deactivate All VFX and SFX // BlueprintCallable|BlueprintEvent // @ game+0x1848130
	void Deactivation Stage 4(); // Function BP_Shroudbreaker_OnShip.BP_Shroudbreaker_OnShip_C.Deactivation Stage 4 // BlueprintCallable|BlueprintEvent // @ game+0x1848130
	void Deactivation Stage 3(); // Function BP_Shroudbreaker_OnShip.BP_Shroudbreaker_OnShip_C.Deactivation Stage 3 // BlueprintCallable|BlueprintEvent // @ game+0x1848130
	void Deactivation Stage 2(); // Function BP_Shroudbreaker_OnShip.BP_Shroudbreaker_OnShip_C.Deactivation Stage 2 // BlueprintCallable|BlueprintEvent // @ game+0x1848130
	void Deactivation Stage 1(); // Function BP_Shroudbreaker_OnShip.BP_Shroudbreaker_OnShip_C.Deactivation Stage 1 // BlueprintCallable|BlueprintEvent // @ game+0x1848130
	void ExecuteUbergraph_BP_Shroudbreaker_OnShip(int32_t EntryPoint); // Function BP_Shroudbreaker_OnShip.BP_Shroudbreaker_OnShip_C.ExecuteUbergraph_BP_Shroudbreaker_OnShip // HasDefaults // @ game+0x1848130
};

