// Class KnockbackFramework.KnockbackInterface
// Size: 0x28 (Inherited: 0x28)
struct UKnockbackInterface : UInterface {
};

// Class KnockbackFramework.KnockbackColliderComponent
// Size: 0x670 (Inherited: 0x5f0)
struct UKnockbackColliderComponent : UBoxComponent {
	struct FCollisionProfileName SolidCollisionProfile; // 0x5e8(0x08)
	struct FCollisionProfileName KnockbackTraceProfile; // 0x5f0(0x08)
	char KnockbackType; // 0x5f8(0x01)
	struct FKnockBackInfo KnockbackParams; // 0x5fc(0x50)
	struct AActor* ActorToTarget; // 0x64c(0x08)
	struct UClass* KnockbackDamageType; // 0x658(0x08)
	float KnockbackInterval; // 0x660(0x04)
	char UnknownData_665[0x3]; // 0x665(0x03)
	char SolidState; // 0x668(0x01)
	char UnknownData_669[0x7]; // 0x669(0x07)

	void OnRep_SolidState(); // Function KnockbackFramework.KnockbackColliderComponent.OnRep_SolidState // Final|Native|Private // @ game+0x3f5dc40
};

