// BlueprintGeneratedClass BP_HullDamage.BP_HullDamage_C
// Size: 0x658 (Inherited: 0x5d0)
struct ABP_HullDamage_C : AHullDamage {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x5d0(0x08)
	struct UHitReactionComponent* HitReaction; // 0x5d8(0x08)
	struct UBakedDecalComponent* ImpactDecalComponent; // 0x5e0(0x08)
	struct TArray<struct UTexture2D*> Persistent Damage Decals; // 0x5e8(0x10)
	struct UParticleSystem* Damage VFX; // 0x5f8(0x08)
	struct TArray<struct UMaterialInstance*> Deferred Damage Decals; // 0x600(0x10)
	float Deferred Min Size; // 0x610(0x04)
	float Deferred Max Size; // 0x614(0x04)
	float Persistent Min Size; // 0x618(0x04)
	float Persistent Max Size; // 0x61c(0x04)
	struct FRandomStream RandomDecalStream; // 0x620(0x08)
	float TEST_HitStrength; // 0x628(0x04)
	float TEST_PenetrationThreshold; // 0x62c(0x04)
	struct AShip* ParentShip; // 0x630(0x08)
	struct FWwiseEmitter CannonballHitEmitter; // 0x638(0x20)

	void Apply Hit(struct FVector HitPosition, struct FVector HitNormal, bool Has Decal, struct UDecalComponent* Decal); // Function BP_HullDamage.BP_HullDamage_C.Apply Hit // Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent // @ game+0x1848130
	void AddBakedDecal(struct FVector Position, struct FVector Normal); // Function BP_HullDamage.BP_HullDamage_C.AddBakedDecal // Public|BlueprintCallable|BlueprintEvent // @ game+0x1848130
	void PlayHitSFX(struct FVector HitLocation, float HitStrenght); // Function BP_HullDamage.BP_HullDamage_C.PlayHitSFX // Public|HasDefaults|BlueprintCallable|BlueprintEvent // @ game+0x1848130
	void Apply Visual Hit(struct FVector HitPosition, struct FVector HitNormal, bool HasDecal, struct UDecalComponent* Decal); // Function BP_HullDamage.BP_HullDamage_C.Apply Visual Hit // Public|HasOutParms|BlueprintCallable|BlueprintEvent // @ game+0x1848130
	void Process Hit(struct FImpactDamageEvent ImpactDamageEvent); // Function BP_HullDamage.BP_HullDamage_C.Process Hit // Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent // @ game+0x1848130
	void Scale Hit Strength and Get Decal Flag(struct FVector Hit Normal, struct FVector Hit Velocity, float Hit Strength, float Strength, bool HasDecal); // Function BP_HullDamage.BP_HullDamage_C.Scale Hit Strength and Get Decal Flag // Public|HasOutParms|BlueprintCallable|BlueprintEvent // @ game+0x1848130
	void Get Random Deferred Decal(struct UMaterialInterface* Decal Material); // Function BP_HullDamage.BP_HullDamage_C.Get Random Deferred Decal // Public|HasOutParms|BlueprintCallable|BlueprintEvent // @ game+0x1848130
	void Get Random Persistent Decal(struct UTexture2D* Decal Texture); // Function BP_HullDamage.BP_HullDamage_C.Get Random Persistent Decal // Public|HasOutParms|BlueprintCallable|BlueprintEvent // @ game+0x1848130
	void Initialize Damage Materials(struct TArray<struct UStaticMeshComponent*> StaticMeshes); // Function BP_HullDamage.BP_HullDamage_C.Initialize Damage Materials // Public|HasOutParms|BlueprintCallable|BlueprintEvent // @ game+0x1848130
	void UserConstructionScript(); // Function BP_HullDamage.BP_HullDamage_C.UserConstructionScript // Event|Public|BlueprintCallable|BlueprintEvent // @ game+0x1848130
	void ReceiveBeginPlay(); // Function BP_HullDamage.BP_HullDamage_C.ReceiveBeginPlay // Event|Public|BlueprintEvent // @ game+0x1848130
	void BndEvt__ShipDamageComponent_K2Node_ComponentBoundEvent_6_ImpactDamageEventDelegate__DelegateSignature(struct FImpactDamageEvent ImpactDamageEvent); // Function BP_HullDamage.BP_HullDamage_C.BndEvt__ShipDamageComponent_K2Node_ComponentBoundEvent_6_ImpactDamageEventDelegate__DelegateSignature // HasOutParms|BlueprintEvent // @ game+0x1848130
	void ResetDecals(struct TArray<char> DamageZoneDecalsToBeReapplied); // Function BP_HullDamage.BP_HullDamage_C.ResetDecals // Event|Protected|HasOutParms|BlueprintEvent // @ game+0x1848130
	void ExecuteUbergraph_BP_HullDamage(int32_t EntryPoint); // Function BP_HullDamage.BP_HullDamage_C.ExecuteUbergraph_BP_HullDamage // HasDefaults // @ game+0x1848130
};

