// BlueprintGeneratedClass BP_CoralFortress_WeatherZone.BP_CoralFortress_WeatherZone_C
// Size: 0x4b8 (Inherited: 0x3c8)
struct ABP_CoralFortress_WeatherZone_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3c8(0x08)
	struct UExplosionComponent* Explosion; // 0x3d0(0x08)
	struct ULightningManagerComponent* LightningManager; // 0x3d8(0x08)
	struct ULightningComponent* Lightning; // 0x3e0(0x08)
	struct UCapsuleComponent* ExclusionTriggerVolume; // 0x3e8(0x08)
	struct UAtmosphericPressureZoneComponent* AtmosphericPressureZone; // 0x3f0(0x08)
	struct UBlendedPostProcessingRainZoneComponent* BlendedPostProcessingRainZone; // 0x3f8(0x08)
	struct UStaticMeshComponent* TopCloudMeshComponent; // 0x400(0x08)
	struct UStaticMeshComponent* RingCloudMeshComponent; // 0x408(0x08)
	struct UStaticMeshComponent* Lightning4; // 0x410(0x08)
	struct UStaticMeshComponent* Lightning3; // 0x418(0x08)
	struct UStaticMeshComponent* Lightning2; // 0x420(0x08)
	struct UStaticMeshComponent* Lightning1; // 0x428(0x08)
	struct UStaticMeshComponent* OuterRainSheet; // 0x430(0x08)
	struct USceneComponent* RainRoot; // 0x438(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x440(0x08)
	float RainBlend_Blend_1B3587E7420F9A76FB06A6A63DE0B159; // 0x448(0x04)
	char RainBlend__Direction_1B3587E7420F9A76FB06A6A63DE0B159; // 0x44c(0x01)
	char UnknownData_44D[0x3]; // 0x44d(0x03)
	struct UTimelineComponent* RainBlend; // 0x450(0x08)
	struct TArray<struct UMaterialInstanceDynamic*> RainDynMaterials; // 0x458(0x10)
	float Opacity; // 0x468(0x04)
	char UnknownData_46C[0x4]; // 0x46c(0x04)
	struct FWwiseEmitterCreationParams CreationParams; // 0x470(0x28)
	struct FWwiseEmitter WwiseEmitter; // 0x498(0x20)

	void IsLocalPlayer(struct AActor* Actor, bool Result); // Function BP_CoralFortress_WeatherZone.BP_CoralFortress_WeatherZone_C.IsLocalPlayer // Public|HasOutParms|BlueprintCallable|BlueprintEvent // @ game+0x1848130
	void OnRep_Opacity(); // Function BP_CoralFortress_WeatherZone.BP_CoralFortress_WeatherZone_C.OnRep_Opacity // BlueprintCallable|BlueprintEvent // @ game+0x1848130
	void CreateDynamicMaterialAtSlot0(struct UPrimitiveComponent* Primitive, struct UMaterialInstanceDynamic* Material); // Function BP_CoralFortress_WeatherZone.BP_CoralFortress_WeatherZone_C.CreateDynamicMaterialAtSlot0 // Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure // @ game+0x1848130
	void UserConstructionScript(); // Function BP_CoralFortress_WeatherZone.BP_CoralFortress_WeatherZone_C.UserConstructionScript // Event|Public|BlueprintCallable|BlueprintEvent // @ game+0x1848130
	void RainBlend__FinishedFunc(); // Function BP_CoralFortress_WeatherZone.BP_CoralFortress_WeatherZone_C.RainBlend__FinishedFunc // BlueprintEvent // @ game+0x1848130
	void RainBlend__UpdateFunc(); // Function BP_CoralFortress_WeatherZone.BP_CoralFortress_WeatherZone_C.RainBlend__UpdateFunc // BlueprintEvent // @ game+0x1848130
	void ReceiveBeginPlay(); // Function BP_CoralFortress_WeatherZone.BP_CoralFortress_WeatherZone_C.ReceiveBeginPlay // Event|Public|BlueprintEvent // @ game+0x1848130
	void StartRainBlend(); // Function BP_CoralFortress_WeatherZone.BP_CoralFortress_WeatherZone_C.StartRainBlend // BlueprintCallable|BlueprintEvent // @ game+0x1848130
	void ReceiveEndPlay(char EndPlayReason); // Function BP_CoralFortress_WeatherZone.BP_CoralFortress_WeatherZone_C.ReceiveEndPlay // Event|Public|BlueprintEvent // @ game+0x1848130
	void StopRainBlend(); // Function BP_CoralFortress_WeatherZone.BP_CoralFortress_WeatherZone_C.StopRainBlend // BlueprintCallable|BlueprintEvent // @ game+0x1848130
	void BndEvt__Capsule_K2Node_ComponentBoundEvent_438_ComponentBeginOverlapSignature__DelegateSignature(struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult SweepResult); // Function BP_CoralFortress_WeatherZone.BP_CoralFortress_WeatherZone_C.BndEvt__Capsule_K2Node_ComponentBoundEvent_438_ComponentBeginOverlapSignature__DelegateSignature // HasOutParms|BlueprintEvent // @ game+0x1848130
	void BndEvt__Capsule_K2Node_ComponentBoundEvent_441_ComponentEndOverlapSignature__DelegateSignature(struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // Function BP_CoralFortress_WeatherZone.BP_CoralFortress_WeatherZone_C.BndEvt__Capsule_K2Node_ComponentBoundEvent_441_ComponentEndOverlapSignature__DelegateSignature // BlueprintEvent // @ game+0x1848130
	void ExecuteUbergraph_BP_CoralFortress_WeatherZone(int32_t EntryPoint); // Function BP_CoralFortress_WeatherZone.BP_CoralFortress_WeatherZone_C.ExecuteUbergraph_BP_CoralFortress_WeatherZone // HasDefaults // @ game+0x1848130
};

