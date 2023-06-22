// Class Damagers.RadialDamagerComponent
// Size: 0x120 (Inherited: 0xc8)
struct URadialDamagerComponent : UActorComponent {
	float DamageIntervalSeconds; // 0xc8(0x04)
	float DamagePerSecondAtCentre; // 0xcc(0x04)
	float DamagePerSecondAtMaxRadius; // 0xd0(0x04)
	float DamageRadius; // 0xd4(0x04)
	char UnknownData_D8[0x8]; // 0xd8(0x08)
	struct UClass* DamagerType; // 0xe0(0x08)
	char HealthChangedReason; // 0xe8(0x01)
	char UnknownData_E9[0x3]; // 0xe9(0x03)
	struct FVector LocalOffset; // 0xec(0x0c)
	char UnknownData_F8[0x28]; // 0xf8(0x28)

	void SetDamageRadius(float Radius); // Function Damagers.RadialDamagerComponent.SetDamageRadius // Final|Native|Public|BlueprintCallable // @ game+0x4852d20
	void EndDamage(); // Function Damagers.RadialDamagerComponent.EndDamage // Final|Native|Public|BlueprintCallable // @ game+0x4852b90
	void BeginDamage(); // Function Damagers.RadialDamagerComponent.BeginDamage // Final|Native|Public|BlueprintCallable // @ game+0x4852b70
};

// Class Damagers.ShockwaveDamagerInterface
// Size: 0x28 (Inherited: 0x28)
struct UShockwaveDamagerInterface : UInterface {

	void StartShockwaveAtLocation(struct FVector StartLocation); // Function Damagers.ShockwaveDamagerInterface.StartShockwaveAtLocation // Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x4852dc0
	void StartShockwave(); // Function Damagers.ShockwaveDamagerInterface.StartShockwave // Native|Public|BlueprintCallable // @ game+0x4852da0
	void IgnoreGhostShip(struct AAggressiveGhostShip* Ship); // Function Damagers.ShockwaveDamagerInterface.IgnoreGhostShip // Native|Public|BlueprintCallable // @ game+0x4852c10
	float GetShockwaveRadius(); // Function Damagers.ShockwaveDamagerInterface.GetShockwaveRadius // Native|Public|BlueprintCallable // @ game+0x4852be0
	float GetShockwaveDuration(); // Function Damagers.ShockwaveDamagerInterface.GetShockwaveDuration // Native|Public|BlueprintCallable // @ game+0x4852bb0
};

// Class Damagers.ShockwaveDamagerComponent
// Size: 0x1d0 (Inherited: 0xc8)
struct UShockwaveDamagerComponent : UActorComponent {
	char UnknownData_C8[0x8]; // 0xc8(0x08)
	float ExpansionDuration; // 0xd0(0x04)
	float EndRadiusInMetres; // 0xd4(0x04)
	bool ApplyImpulseToShips; // 0xd8(0x01)
	char UnknownData_D9[0x7]; // 0xd9(0x07)
	struct FWeightedProbabilityRangeOfRanges ForceToApplyToShip; // 0xe0(0x30)
	bool ApplyDamageToShips; // 0x110(0x01)
	char UnknownData_111[0x7]; // 0x111(0x07)
	struct TArray<struct FShockwaveDamagerShipDamage> ShipDamageLevels; // 0x118(0x10)
	struct UClass* DamagerType; // 0x128(0x08)
	bool ApplyImpulseToGhostShips; // 0x130(0x01)
	char UnknownData_131[0x3]; // 0x131(0x03)
	float GhostShipImpulseDuration; // 0x134(0x04)
	float GhostShipImpulseMaxDeflectionAngle; // 0x138(0x04)
	bool DestroyHostileGhostShips; // 0x13c(0x01)
	char UnknownData_13D[0x3]; // 0x13d(0x03)
	float NearbyEncounterDistanceInMetres; // 0x140(0x04)
	char UnknownData_144[0x4]; // 0x144(0x04)
	struct FMulticastDelegate OnShockwaveStarted; // 0x148(0x10)
	struct FMulticastDelegate OnShockwaveEnded; // 0x158(0x10)
	struct TArray<struct AShip*> ProcessedShips; // 0x168(0x10)
	struct TArray<struct AAggressiveGhostShip*> ProcessedGhostShips; // 0x178(0x10)
	char UnknownData_188[0x48]; // 0x188(0x48)

	void Multi_StartShockwave(struct FVector InStartLocation); // Function Damagers.ShockwaveDamagerComponent.Multi_StartShockwave // Final|Net|NetReliableNative|Event|NetMulticast|Private|HasDefaults // @ game+0x4852ca0
};

// Class Damagers.ShipDamagerComponent
// Size: 0x220 (Inherited: 0xc8)
struct UShipDamagerComponent : UActorComponent {
	char UnknownData_C8[0x8]; // 0xc8(0x08)
	struct UPrimitiveComponent* Shape; // 0xd0(0x08)
	struct TArray<TScriptInterface<struct UHullDamageInterface>> ShipHulls; // 0xd8(0x10)
	struct TArray<TScriptInterface<struct UHealthInterface>> WatercraftHealthInterfaces; // 0xe8(0x10)
	struct FStrainDamage ShipStrainDamage; // 0xf8(0x28)
	struct FWeightedProbabilityRangeOfRanges TimeBetweenWatercraftDamage; // 0x120(0x30)
	float WatercraftDamage; // 0x150(0x04)
	bool StartDamagingOnBeginPlay; // 0x154(0x01)
	char UnknownData_155[0xcb]; // 0x155(0xcb)

	void SetShape(struct UPrimitiveComponent* InShape); // Function Damagers.ShipDamagerComponent.SetShape // Final|Native|Public|BlueprintCallable // @ game+0x4a505c0
	void EndDamage(); // Function Damagers.ShipDamagerComponent.EndDamage // Final|Native|Public|BlueprintCallable // @ game+0x4a502e0
	void BeginDamage(); // Function Damagers.ShipDamagerComponent.BeginDamage // Final|Native|Public|BlueprintCallable // @ game+0x4a502c0
};

