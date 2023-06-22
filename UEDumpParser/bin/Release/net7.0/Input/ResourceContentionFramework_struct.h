// ScriptStruct ResourceContentionFramework.PoolableCollectionMapConfiguration
// Size: 0x18 (Inherited: 0x00)
struct FPoolableCollectionMapConfiguration {
	struct TArray<struct FPoolableCollectionMapConfigurationEntry> Pools; // 0x00(0x10)
	bool PopulateJustInTime; // 0x10(0x01)
	char UnknownData_11[0x7]; // 0x11(0x07)
};

// ScriptStruct ResourceContentionFramework.PoolableCollectionMapConfigurationEntry
// Size: 0x28 (Inherited: 0x00)
struct FPoolableCollectionMapConfigurationEntry {
	struct UClass* Type; // 0x00(0x20)
	int32_t Size; // 0x20(0x04)
	char UnknownData_24[0x4]; // 0x24(0x04)
};

