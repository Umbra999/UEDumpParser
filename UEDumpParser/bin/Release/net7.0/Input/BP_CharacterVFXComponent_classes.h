// BlueprintGeneratedClass BP_CharacterVFXComponent.BP_CharacterVFXComponent_C
// Size: 0x3ac (Inherited: 0xe0)
struct UBP_CharacterVFXComponent_C : UCharacterVfxComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xe0(0x08)
	struct FObjectMessagingHandle EnterWaterEvent; // 0xe8(0x58)
	struct FObjectMessagingHandle UnderwaterStateChanged; // 0x140(0x58)
	struct UParticleSystemComponent* Splash Emitter; // 0x198(0x08)
	struct UParticleSystem* Large Foot Splash; // 0x1a0(0x08)
	struct UParticleSystem* Small Foot Splash; // 0x1a8(0x08)
	float Threshold for run; // 0x1b0(0x04)
	float Threshold for large foot impact; // 0x1b4(0x04)
	struct FObjectMessagingHandle FallingIntoWaterHandle; // 0x1b8(0x58)
	struct UParticleSystem* Large Falling Splash; // 0x210(0x08)
	struct FObjectMessagingHandle PlayerViewUnderWaterHandle; // 0x218(0x58)
	struct FObjectMessagingHandle EnterShipEventHandle; // 0x270(0x58)
	struct FObjectMessagingHandle ExitShipEventHandle; // 0x2c8(0x58)
	struct FVector WindOffsetFromShip; // 0x320(0x0c)
	bool DEBUG_WindActive; // 0x32c(0x01)
	char UnknownData_32D[0x3]; // 0x32d(0x03)
	float DEBUG_WindToggleTimer; // 0x330(0x04)
	char UnknownData_334[0x4]; // 0x334(0x04)
	struct FObjectMessagingHandle WindDirectionChangedHandle; // 0x338(0x58)
	struct UParticleSystemComponent* vfx_particle_underwater_ambient; // 0x390(0x08)
	struct UParticleSystemComponent* vfx_player_underwater_ambient; // 0x398(0x08)
	struct FFeatureFlag FeatureName; // 0x3a0(0x0c)

	void GetWindService(struct UObject* WindInterface); // Function BP_CharacterVFXComponent.BP_CharacterVFXComponent_C.GetWindService // Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure // @ game+0x1848130
	void WindVFX_DebugTick(); // Function BP_CharacterVFXComponent.BP_CharacterVFXComponent_C.WindVFX_DebugTick // Public|BlueprintCallable|BlueprintEvent // @ game+0x1848130
	void WindVFX_Destroy(); // Function BP_CharacterVFXComponent.BP_CharacterVFXComponent_C.WindVFX_Destroy // Public|BlueprintCallable|BlueprintEvent // @ game+0x1848130
	void WindVFX_Create(); // Function BP_CharacterVFXComponent.BP_CharacterVFXComponent_C.WindVFX_Create // Public|BlueprintCallable|BlueprintEvent // @ game+0x1848130
	void WindVFX_Deactivate(); // Function BP_CharacterVFXComponent.BP_CharacterVFXComponent_C.WindVFX_Deactivate // Public|BlueprintCallable|BlueprintEvent // @ game+0x1848130
	void Play View Under Water FX(struct FEventPlayerViewUnderWaterStateChanged Event); // Function BP_CharacterVFXComponent.BP_CharacterVFXComponent_C.Play View Under Water FX // Public|BlueprintCallable|BlueprintEvent // @ game+0x1848130
	void Play Falling Splash(float FallingSpeed); // Function BP_CharacterVFXComponent.BP_CharacterVFXComponent_C.Play Falling Splash // Public|BlueprintCallable|BlueprintEvent // @ game+0x1848130
	void Play Foot Splash(struct FVector Location); // Function BP_CharacterVFXComponent.BP_CharacterVFXComponent_C.Play Foot Splash // Public|BlueprintCallable|BlueprintEvent // @ game+0x1848130
	void ReceiveEndPlay(char EndPlayReason); // Function BP_CharacterVFXComponent.BP_CharacterVFXComponent_C.ReceiveEndPlay // Event|Public|BlueprintEvent // @ game+0x1848130
	void ReceiveBeginPlay(); // Function BP_CharacterVFXComponent.BP_CharacterVFXComponent_C.ReceiveBeginPlay // Event|Public|BlueprintEvent // @ game+0x1848130
	void PlayerViewUnderWaterEvent(struct FEventPlayerViewUnderWaterStateChanged Event); // Function BP_CharacterVFXComponent.BP_CharacterVFXComponent_C.PlayerViewUnderWaterEvent // BlueprintCallable|BlueprintEvent // @ game+0x1848130
	void FallingIntoWaterEvent(struct FFallingIntoWaterEvent Event); // Function BP_CharacterVFXComponent.BP_CharacterVFXComponent_C.FallingIntoWaterEvent // BlueprintCallable|BlueprintEvent // @ game+0x1848130
	void WaterStateChanged(struct FEventPlayerViewUnderWaterStateChanged Under water state changed); // Function BP_CharacterVFXComponent.BP_CharacterVFXComponent_C.WaterStateChanged // BlueprintCallable|BlueprintEvent // @ game+0x1848130
	void On Foot Enter Water(struct FEventCharacterFootEnterWater Enter Water); // Function BP_CharacterVFXComponent.BP_CharacterVFXComponent_C.On Foot Enter Water // BlueprintCallable|BlueprintEvent // @ game+0x1848130
	void ExecuteUbergraph_BP_CharacterVFXComponent(int32_t EntryPoint); // Function BP_CharacterVFXComponent.BP_CharacterVFXComponent_C.ExecuteUbergraph_BP_CharacterVFXComponent // HasDefaults // @ game+0x1848130
};

