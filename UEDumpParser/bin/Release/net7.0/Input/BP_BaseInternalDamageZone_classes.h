// BlueprintGeneratedClass BP_BaseInternalDamageZone.BP_BaseInternalDamageZone_C
// Size: 0x8a0 (Inherited: 0x861)
struct ABP_BaseInternalDamageZone_C : ABP_DamageZone_C {
	char UnknownData_861[0x7]; // 0x861(0x07)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x868(0x08)
	struct UStaticMeshComponent* RepairWood; // 0x870(0x08)
	struct UWwiseEvent* Start Repair Cue; // 0x878(0x08)
	struct FWwiseEmitter RepairEmitter; // 0x880(0x20)

	void OnRepairMounted(); // Function BP_BaseInternalDamageZone.BP_BaseInternalDamageZone_C.OnRepairMounted // Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent // @ game+0x1848130
	bool GetRepairMountLocation(struct USceneComponent* MountLocation, struct FName MountSocket); // Function BP_BaseInternalDamageZone.BP_BaseInternalDamageZone_C.GetRepairMountLocation // Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const // @ game+0x1848130
	bool ShouldDrawTooltipInWorldSpace(struct AActor* InInteractor, struct FVector DesiredTooltipWorldPosition); // Function BP_BaseInternalDamageZone.BP_BaseInternalDamageZone_C.ShouldDrawTooltipInWorldSpace // Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent // @ game+0x1848130
	void UserConstructionScript(); // Function BP_BaseInternalDamageZone.BP_BaseInternalDamageZone_C.UserConstructionScript // Event|Public|BlueprintCallable|BlueprintEvent // @ game+0x1848130
	void ReceiveEndPlay(char EndPlayReason); // Function BP_BaseInternalDamageZone.BP_BaseInternalDamageZone_C.ReceiveEndPlay // Event|Public|BlueprintEvent // @ game+0x1848130
	void ExecuteUbergraph_BP_BaseInternalDamageZone(int32_t EntryPoint); // Function BP_BaseInternalDamageZone.BP_BaseInternalDamageZone_C.ExecuteUbergraph_BP_BaseInternalDamageZone //  // @ game+0x1848130
};

