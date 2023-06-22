// Class BreakableActorFramework.BreakableActorAudioComponent
// Size: 0x1c8 (Inherited: 0xc8)
struct UBreakableActorAudioComponent : UActorComponent {
	bool UseParentEmitter; // 0xc8(0x01)
	char UnknownData_C9[0x7]; // 0xc9(0x07)
	struct UWwiseObjectPoolWrapper* AudioPool; // 0xd0(0x08)
	struct UWwiseEvent* PlayMusicEvent; // 0xd8(0x08)
	struct UWwiseEvent* StopMusicEvent; // 0xe0(0x08)
	struct UWwiseEvent* PlayDamagedEvent; // 0xe8(0x08)
	struct UWwiseEvent* PlayDestroyedEvent; // 0xf0(0x08)
	char UnknownData_F8[0xd0]; // 0xf8(0xd0)
};

// Class BreakableActorFramework.BreakableActorBase
// Size: 0x558 (Inherited: 0x3c8)
struct ABreakableActorBase : AActor {
	char UnknownData_3C8[0x20]; // 0x3c8(0x20)
	float DespawnDelay; // 0x3e8(0x04)
	char UnknownData_3EC[0x4]; // 0x3ec(0x04)
	struct FMulticastDelegate OnBreakableActorDamaged; // 0x3f0(0x10)
	struct FMulticastDelegate OnBreakableActorDestroyed; // 0x400(0x10)
	struct UPrimitiveComponent* ThirdPersonMesh; // 0x410(0x08)
	struct UHealthComponent* HealthComponent; // 0x418(0x08)
	struct UBreakableActorAudioComponent* AudioComponent; // 0x420(0x08)
	struct UBreakableActorVfxComponent* VFXComponent; // 0x428(0x08)
	struct UBreakableActorDynamicMaterialComponent* DamageMaterialComponent; // 0x430(0x08)
	struct UActorDamageableComponent* DamageableComponent; // 0x438(0x08)
	char UnknownData_440[0x118]; // 0x440(0x118)

	void Multicast_WasDefeated(struct AActor* InInstigator, struct AActor* InDirectInstigator); // Function BreakableActorFramework.BreakableActorBase.Multicast_WasDefeated // Net|NetReliableNative|Event|NetMulticast|Protected // @ game+0x4643a60
};

// Class BreakableActorFramework.BreakableSarcophagus
// Size: 0x558 (Inherited: 0x558)
struct ABreakableSarcophagus : ABreakableActorBase {
};

// Class BreakableActorFramework.BreakableActorDynamicMaterialComponent
// Size: 0x220 (Inherited: 0xc8)
struct UBreakableActorDynamicMaterialComponent : UActorComponent {
	uint32_t MaterialElementIndex; // 0xc8(0x04)
	struct FName MagicColourPropertyName; // 0xcc(0x08)
	struct FName DamageLevelPropertyName; // 0xd4(0x08)
	struct FName TimeBasedPropertyName; // 0xdc(0x08)
	struct FName HitPositionPropertyName; // 0xe4(0x08)
	struct FName CollapseStartTimePropertyName; // 0xec(0x08)
	char UnknownData_F4[0x4]; // 0xf4(0x04)
	struct UPrimitiveComponent* TargetMesh; // 0xf8(0x08)
	struct TArray<struct UMaterialInstanceDynamic*> DynamicMaterials; // 0x100(0x10)
	struct ABreakableActorBase* BreakableActor; // 0x110(0x08)
	char UnknownData_118[0x108]; // 0x118(0x108)
};

// Class BreakableActorFramework.BreakableActorItemSpawnComponent
// Size: 0x4c0 (Inherited: 0x440)
struct UBreakableActorItemSpawnComponent : UItemSpawnComponent {
	char UnknownData_440[0x80]; // 0x440(0x80)
};

// Class BreakableActorFramework.BreakableActorVfxComponent
// Size: 0x1c0 (Inherited: 0xc8)
struct UBreakableActorVfxComponent : UActorComponent {
	struct FColor VFXTintColour; // 0xc8(0x04)
	char UnknownData_CC[0x4]; // 0xcc(0x04)
	struct UObject* DamagedParticleSystem; // 0xd0(0x08)
	struct UObject* DestroyedParticleSystem; // 0xd8(0x08)
	int32_t GlowMaterialIndex; // 0xe0(0x04)
	struct FName GlowMaterialPropertyName; // 0xe4(0x08)
	float GlowMaterialScale; // 0xec(0x04)
	float GlowMaterialBias; // 0xf0(0x04)
	float GlowUpdateSpeed; // 0xf4(0x04)
	struct ABreakableActorBase* BreakableActor; // 0xf8(0x08)
	struct UMaterialInstanceDynamic* GlowMaterial; // 0x100(0x08)
	char UnknownData_108[0xb8]; // 0x108(0xb8)
};

