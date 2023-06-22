// Enum FireworkFramework.EFireworkAmbientLightFadeState
enum class EFireworkAmbientLightFadeState : uint8_t {
	None,
	FadeIn,
	Lifetime,
	FadeOut,
	EFireworkAmbientLightFadeState_MAX,
};

// ScriptStruct FireworkFramework.WeightedFireworkVFXData
// Size: 0x30 (Inherited: 0x00)
struct FWeightedFireworkVFXData {
	struct UObject* VFX; // 0x00(0x08)
	struct UWwiseEvent* Sfx; // 0x08(0x08)
	struct UWwiseEvent* SecondarySFX; // 0x10(0x08)
	float Weight; // 0x18(0x04)
	struct FLinearColor AmbientLightColour; // 0x1c(0x10)
	char UnknownData_2C[0x4]; // 0x2c(0x04)
};

// ScriptStruct FireworkFramework.GeneratedFireworkData
// Size: 0x58 (Inherited: 0x00)
struct FGeneratedFireworkData {
	char UnknownData_0[0xc]; // 0x00(0x0c)
	struct FFireworkAmbientLightData FireworkAmbientLightData; // 0x0c(0x14)
	char UnknownData_20[0x8]; // 0x20(0x08)
	struct TArray<struct FFireworkExplosionData> ExplosionData; // 0x28(0x10)
	struct UWwiseObjectPoolWrapper* SfxPool; // 0x38(0x08)
	struct UWwiseEvent* LaunchSfx; // 0x40(0x08)
	char UnknownData_48[0x8]; // 0x48(0x08)
	struct UFireworkFeedbackDataAsset* FireworkFeedbackData; // 0x50(0x08)
};

// ScriptStruct FireworkFramework.FireworkExplosionData
// Size: 0x40 (Inherited: 0x00)
struct FFireworkExplosionData {
	char UnknownData_0[0x8]; // 0x00(0x08)
	struct UObject* VFX; // 0x08(0x08)
	struct UWwiseEvent* Sfx; // 0x10(0x08)
	struct UWwiseEvent* SecondarySFX; // 0x18(0x08)
	char UnknownData_20[0x20]; // 0x20(0x20)
};

// ScriptStruct FireworkFramework.FireworkAmbientLightData
// Size: 0x14 (Inherited: 0x00)
struct FFireworkAmbientLightData {
	float FadeInTimer; // 0x00(0x04)
	float FadeOutTimer; // 0x04(0x04)
	float LifetimeTimer; // 0x08(0x04)
	float Radius; // 0x0c(0x04)
	float AmbientIntensity; // 0x10(0x04)
};

// ScriptStruct FireworkFramework.WeightedProjectileMeshAnimationData
// Size: 0x178 (Inherited: 0x00)
struct FWeightedProjectileMeshAnimationData {
	struct FRuntimeVectorCurve AnimationCurve; // 0x00(0x170)
	float Weight; // 0x170(0x04)
	char UnknownData_174[0x4]; // 0x174(0x04)
};

