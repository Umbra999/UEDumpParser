// Class ShipDamage.DamageablePartsInterface
// Size: 0x28 (Inherited: 0x28)
struct UDamageablePartsInterface : UInterface {

	void UnregisterDamageablePart(struct AActor* DamageableActor); // Function ShipDamage.DamageablePartsInterface.UnregisterDamageablePart // Native|Event|Public|BlueprintCallable|BlueprintEvent // @ game+0x4a50640
	void RegisterDamageablePart(struct AActor* DamageableActor); // Function ShipDamage.DamageablePartsInterface.RegisterDamageablePart // Native|Event|Public|BlueprintCallable|BlueprintEvent // @ game+0x4a50530
	struct TArray<struct AActor*> GetDamageableParts(); // Function ShipDamage.DamageablePartsInterface.GetDamageableParts // Native|Event|Public|BlueprintCallable|BlueprintEvent // @ game+0x4a50300
};

// Class ShipDamage.HullDamageInterface
// Size: 0x28 (Inherited: 0x28)
struct UHullDamageInterface : UInterface {
};

// Class ShipDamage.HullDamageProviderInterface
// Size: 0x28 (Inherited: 0x28)
struct UHullDamageProviderInterface : UInterface {
};

// Class ShipDamage.LandscapeDamagerType
// Size: 0x28 (Inherited: 0x28)
struct ULandscapeDamagerType : UDamagerType {
};

// Class ShipDamage.ShipDamagerType
// Size: 0x28 (Inherited: 0x28)
struct UShipDamagerType : UDamagerType {
};

// Class ShipDamage.ShipPartsDamageTrackerComponent
// Size: 0xd0 (Inherited: 0xc8)
struct UShipPartsDamageTrackerComponent : UActorComponent {
	int32_t IsAnyShipPartDamaged; // 0xc8(0x04)
	char UnknownData_CC[0x4]; // 0xcc(0x04)
};

// Class ShipDamage.ShipRestorationSettings
// Size: 0x48 (Inherited: 0x38)
struct UShipRestorationSettings : UDeveloperSettings {
	float MaxDistanceSquared; // 0x38(0x04)
	char UnknownData_3C[0x4]; // 0x3c(0x04)
	uint64_t RestorationCooldown; // 0x40(0x08)
};

// Class ShipDamage.StrainDamagerType
// Size: 0x28 (Inherited: 0x28)
struct UStrainDamagerType : UDamagerType {
};

