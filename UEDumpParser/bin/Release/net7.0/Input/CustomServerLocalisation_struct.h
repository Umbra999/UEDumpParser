// ScriptStruct CustomServerLocalisation.CustomServerLocalisationModel
// Size: 0x50 (Inherited: 0x00)
struct FCustomServerLocalisationModel {
	struct TMap<struct FString, struct FCustomServerLocalisationData> LocalisationModelData; // 0x00(0x50)
};

// ScriptStruct CustomServerLocalisation.CustomServerLocalisationData
// Size: 0x20 (Inherited: 0x00)
struct FCustomServerLocalisationData {
	struct FString Key; // 0x00(0x10)
	struct TArray<struct FLocPairData> LocaleEntries; // 0x10(0x10)
};

// ScriptStruct CustomServerLocalisation.LocPairData
// Size: 0x20 (Inherited: 0x00)
struct FLocPairData {
	struct FString Locale; // 0x00(0x10)
	struct FString Value; // 0x10(0x10)
};

// ScriptStruct CustomServerLocalisation.CustomServerClientData
// Size: 0x20 (Inherited: 0x00)
struct FCustomServerClientData {
	struct FString Key; // 0x00(0x10)
	char UnknownData_10[0x10]; // 0x10(0x10)
};

