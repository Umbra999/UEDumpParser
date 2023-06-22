// Class CustomServerLocalisation.CustomServerLocalisationInterface
// Size: 0x28 (Inherited: 0x28)
struct UCustomServerLocalisationInterface : UInterface {
};

// Class CustomServerLocalisation.CustomServerLocalisationService
// Size: 0x460 (Inherited: 0x3c8)
struct ACustomServerLocalisationService : AActor {
	char UnknownData_3C8[0x8]; // 0x3c8(0x08)
	struct TArray<struct FCustomServerLocalisationData> LocalisationData; // 0x3d0(0x10)
	char UnknownData_3E0[0x80]; // 0x3e0(0x80)

	void OnRep_GenerateLocalisationData(); // Function CustomServerLocalisation.CustomServerLocalisationService.OnRep_GenerateLocalisationData // Final|Native|Private // @ game+0x41fa4a0
	void BeginPlay(); // Function CustomServerLocalisation.CustomServerLocalisationService.BeginPlay // Final|Native|Private // @ game+0x41fa480
};

