// Class MaterialShaderQualitySettings.MaterialShaderQualitySettings
// Size: 0x80 (Inherited: 0x28)
struct UMaterialShaderQualitySettings : UObject {
	struct TMap<struct FName, struct UShaderPlatformQualitySettings*> ForwardSettingMap; // 0x28(0x50)
	char UnknownData_78[0x8]; // 0x78(0x08)
};

// Class MaterialShaderQualitySettings.ShaderPlatformQualitySettings
// Size: 0x38 (Inherited: 0x28)
struct UShaderPlatformQualitySettings : UObject {
	struct FMaterialQualityOverrides QualityOverrides[0x03]; // 0x28(0x0c)
	char UnknownData_34[0x4]; // 0x34(0x04)
};

