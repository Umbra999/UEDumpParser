// Class LostSands.LostSandsRowboatGunpowderBarrel
// Size: 0x608 (Inherited: 0x3c8)
struct ALostSandsRowboatGunpowderBarrel : AActor {
	char UnknownData_3C8[0xb8]; // 0x3c8(0xb8)
	struct UActionRulesComponent* ActionRulesComponent; // 0x480(0x08)
	struct UInteractableComponent* InteractableComponent; // 0x488(0x08)
	struct UStaticMeshMemoryConstraintComponent* StaticMeshComponent; // 0x490(0x08)
	struct UFlammableWieldableComponent* FlammableComponent; // 0x498(0x08)
	struct ULightWeightStatusEffectManagerComponent* StatusEffectComponent; // 0x4a0(0x08)
	struct UItemHealthComponent* ItemHealthComponent; // 0x4a8(0x08)
	struct UExplosionComponent* ExplosionComponent; // 0x4b0(0x08)
	struct URewindComponent* RewindComponent; // 0x4b8(0x08)
	struct UClass* ToggleFuseInputId; // 0x4c0(0x08)
	struct FText LightFuseDescription; // 0x4c8(0x38)
	struct FText ExtinguishFuseDescription; // 0x500(0x38)
	struct FName NamedPointsGroupName; // 0x538(0x08)
	struct AActor* RangeReferenceNamedPointActor; // 0x540(0x20)
	struct TArray<float> DistanceFromNamedPoints; // 0x560(0x10)
	struct FPlayerStat RowboatDestroyedAtGoldenSandsStat; // 0x570(0x04)
	struct FPlayerStat RowboatDestroyedAwayFromGoldenSandsStat; // 0x574(0x04)
	char UnknownData_578[0x90]; // 0x578(0x90)

	bool IsFuseEnabled(); // Function LostSands.LostSandsRowboatGunpowderBarrel.IsFuseEnabled // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x4799450
	bool IsExplosionAtGoldenSandsOutpost(struct FVector InLocation); // Function LostSands.LostSandsRowboatGunpowderBarrel.IsExplosionAtGoldenSandsOutpost // Final|RequiredAPI|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x47993b0
	void EnableFuse(); // Function LostSands.LostSandsRowboatGunpowderBarrel.EnableFuse // Final|RequiredAPI|Native|Public|BlueprintCallable // @ game+0x4799390
	void DisableFuse(); // Function LostSands.LostSandsRowboatGunpowderBarrel.DisableFuse // Final|RequiredAPI|Native|Public|BlueprintCallable // @ game+0x4799370
};

