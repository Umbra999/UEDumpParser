// ScriptStruct MaterialShaderQualitySettings.MaterialQualityOverrides
// Size: 0x04 (Inherited: 0x00)
struct FMaterialQualityOverrides {
	bool bEnableOverride; // 0x00(0x01)
	bool bForceFullyRough; // 0x01(0x01)
	bool bForceNonMetal; // 0x02(0x01)
	bool bForceDisableLMDirectionality; // 0x03(0x01)
};

// ScriptStruct MaterialShaderQualitySettings.ShaderQualityOverridesListItem
// Size: 0x20 (Inherited: 0x00)
struct FShaderQualityOverridesListItem {
	struct FString RangeName; // 0x00(0x10)
	struct UBoolProperty* QualityProperty; // 0x10(0x08)
	struct UShaderPlatformQualitySettings* SettingContainer; // 0x18(0x08)
};

