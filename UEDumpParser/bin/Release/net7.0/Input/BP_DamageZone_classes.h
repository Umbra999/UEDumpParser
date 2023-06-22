// BlueprintGeneratedClass BP_DamageZone.BP_DamageZone_C
// Size: 0x861 (Inherited: 0x820)
struct ABP_DamageZone_C : ADamageZone {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x820(0x08)
	struct FName Repair Tag; // 0x828(0x08)
	struct FBP_InternalDamageGroup RepairGroup; // 0x830(0x10)
	int32_t ExternalHitBufferIndex; // 0x840(0x04)
	int32_t MaxStoredHits; // 0x844(0x04)
	struct TArray<struct UDecalComponent*> Deferred Decals; // 0x848(0x10)
	int32_t ClientUpdateEventCount; // 0x858(0x04)
	int32_t ExternalDecalBufferIndex; // 0x85c(0x04)
	bool HasBeenInitialized; // 0x860(0x01)

	void GetNumExternalHits(int32_t NumExternalHits); // Function BP_DamageZone.BP_DamageZone_C.GetNumExternalHits // Public|HasOutParms|BlueprintCallable|BlueprintEvent // @ game+0x1848130
	void GetOrCreateDecalMID(struct UMaterialInstanceDynamic* DecalMID); // Function BP_DamageZone.BP_DamageZone_C.GetOrCreateDecalMID // Public|HasOutParms|BlueprintCallable|BlueprintEvent // @ game+0x1848130
	void Initialise(); // Function BP_DamageZone.BP_DamageZone_C.Initialise // Public|BlueprintCallable|BlueprintEvent // @ game+0x1848130
	void Update External Hits(); // Function BP_DamageZone.BP_DamageZone_C.Update External Hits // Public|HasDefaults|BlueprintCallable|BlueprintEvent // @ game+0x1848130
	void Clear Decal Flags(); // Function BP_DamageZone.BP_DamageZone_C.Clear Decal Flags // Public|HasDefaults|BlueprintCallable|BlueprintEvent // @ game+0x1848130
	void Add Deferred Decal(struct UDecalComponent* Decal); // Function BP_DamageZone.BP_DamageZone_C.Add Deferred Decal // Public|BlueprintCallable|BlueprintEvent // @ game+0x1848130
	void KillDeferredDecal(struct UDecalComponent* Decal); // Function BP_DamageZone.BP_DamageZone_C.KillDeferredDecal // Public|HasOutParms|BlueprintCallable|BlueprintEvent // @ game+0x1848130
	void RemoveDeferredDecals(); // Function BP_DamageZone.BP_DamageZone_C.RemoveDeferredDecals // Public|BlueprintCallable|BlueprintEvent // @ game+0x1848130
	void Set Repair Visibility(bool Visible); // Function BP_DamageZone.BP_DamageZone_C.Set Repair Visibility // Public|BlueprintCallable|BlueprintEvent // @ game+0x1848130
	void Add External Hit(struct FHullDamageHit HitData); // Function BP_DamageZone.BP_DamageZone_C.Add External Hit // Public|HasDefaults|BlueprintCallable|BlueprintEvent // @ game+0x1848130
	void CollectTaggedComponents(); // Function BP_DamageZone.BP_DamageZone_C.CollectTaggedComponents // Public|HasDefaults|BlueprintCallable|BlueprintEvent // @ game+0x1848130
	void UserConstructionScript(); // Function BP_DamageZone.BP_DamageZone_C.UserConstructionScript // Event|Public|BlueprintCallable|BlueprintEvent // @ game+0x1848130
	void AddExternalHit(struct FHullDamageHit Hit Data); // Function BP_DamageZone.BP_DamageZone_C.AddExternalHit // Public|BlueprintCallable|BlueprintEvent // @ game+0x1848130
	void ClearDecalFlags(); // Function BP_DamageZone.BP_DamageZone_C.ClearDecalFlags // Public|BlueprintCallable|BlueprintEvent // @ game+0x1848130
	void OnRepairableStateUpdate(char InRepairableState); // Function BP_DamageZone.BP_DamageZone_C.OnRepairableStateUpdate // Event|Protected|BlueprintEvent // @ game+0x1848130
	void OnInitialise(); // Function BP_DamageZone.BP_DamageZone_C.OnInitialise // Event|Public|BlueprintEvent // @ game+0x1848130
	void OnDecalMaterialUpdatedToRepaired(); // Function BP_DamageZone.BP_DamageZone_C.OnDecalMaterialUpdatedToRepaired // BlueprintCosmetic|Event|Protected|BlueprintEvent // @ game+0x1848130
	void OnReppedExternalHitList(); // Function BP_DamageZone.BP_DamageZone_C.OnReppedExternalHitList // Event|Protected|BlueprintCallable|BlueprintEvent // @ game+0x1848130
	void LoadExternalHit(struct FHullDamageHit InExternalHit); // Function BP_DamageZone.BP_DamageZone_C.LoadExternalHit // Event|Public|HasOutParms|BlueprintEvent // @ game+0x1848130
	void ExecuteUbergraph_BP_DamageZone(int32_t EntryPoint); // Function BP_DamageZone.BP_DamageZone_C.ExecuteUbergraph_BP_DamageZone // HasDefaults // @ game+0x1848130
};

