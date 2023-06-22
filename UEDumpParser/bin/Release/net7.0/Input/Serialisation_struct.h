// ScriptStruct Serialisation.SerialisedTestStruct
// Size: 0x60 (Inherited: 0x00)
struct FSerialisedTestStruct {
	int32_t Int; // 0x00(0x04)
	float Float; // 0x04(0x04)
	struct FString String; // 0x08(0x10)
	struct TArray<int32_t> IntArray; // 0x18(0x10)
	struct TArray<struct FSerialisedNestedStruct> StructArray; // 0x28(0x10)
	struct FSerialisedNestedStruct NestedStruct; // 0x38(0x28)
};

// ScriptStruct Serialisation.SerialisedNestedStruct
// Size: 0x28 (Inherited: 0x00)
struct FSerialisedNestedStruct {
	struct FString String; // 0x00(0x10)
	struct TArray<int32_t> IntArray; // 0x10(0x10)
	int32_t Int; // 0x20(0x04)
	float Float; // 0x24(0x04)
};

