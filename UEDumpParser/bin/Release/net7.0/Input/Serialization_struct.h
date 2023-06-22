// ScriptStruct Serialization.StructSerializerTestStruct
// Size: 0xc8 (Inherited: 0x00)
struct FStructSerializerTestStruct {
	struct FStructSerializerNumericTestStruct Numerics; // 0x00(0x30)
	struct FStructSerializerBooleanTestStruct Booleans; // 0x30(0x08)
	struct FStructSerializerObjectTestStruct Objects; // 0x38(0x10)
	struct FStructSerializerBuiltinTestStruct Builtins; // 0x48(0x40)
	struct FStructSerializerArrayTestStruct Arrays; // 0x88(0x40)
};

// ScriptStruct Serialization.StructSerializerArrayTestStruct
// Size: 0x40 (Inherited: 0x00)
struct FStructSerializerArrayTestStruct {
	struct TArray<int32_t> Int32Array; // 0x00(0x10)
	int32_t StaticSingleElement; // 0x10(0x04)
	int32_t StaticInt32Array[0x03]; // 0x14(0x0c)
	float StaticFloatArray[0x03]; // 0x20(0x0c)
	char UnknownData_2C[0x4]; // 0x2c(0x04)
	struct TArray<struct FVector> VectorArray; // 0x30(0x10)
};

// ScriptStruct Serialization.StructSerializerBuiltinTestStruct
// Size: 0x40 (Inherited: 0x00)
struct FStructSerializerBuiltinTestStruct {
	struct FGuid Guid; // 0x00(0x10)
	struct FName Name; // 0x10(0x08)
	struct FString String; // 0x18(0x10)
	struct FRotator Rotator; // 0x28(0x0c)
	struct FVector Vector; // 0x34(0x0c)
};

// ScriptStruct Serialization.StructSerializerObjectTestStruct
// Size: 0x10 (Inherited: 0x00)
struct FStructSerializerObjectTestStruct {
	struct UClass* Class; // 0x00(0x08)
	struct UObject* ObjectPtr; // 0x08(0x08)
};

// ScriptStruct Serialization.StructSerializerBooleanTestStruct
// Size: 0x08 (Inherited: 0x00)
struct FStructSerializerBooleanTestStruct {
	bool BoolFalse; // 0x00(0x01)
	bool BoolTrue; // 0x01(0x01)
	char UnknownData_2[0x2]; // 0x02(0x02)
	uint32_t Bitfield; // 0x04(0x04)
};

// ScriptStruct Serialization.StructSerializerNumericTestStruct
// Size: 0x30 (Inherited: 0x00)
struct FStructSerializerNumericTestStruct {
	int8_t Int8; // 0x00(0x01)
	char UnknownData_1[0x1]; // 0x01(0x01)
	int16_t Int16; // 0x02(0x02)
	int32_t Int32; // 0x04(0x04)
	int64_t Int64; // 0x08(0x08)
	char UInt8; // 0x10(0x01)
	char UnknownData_11[0x1]; // 0x11(0x01)
	uint16_t UInt16; // 0x12(0x02)
	uint32_t UInt32; // 0x14(0x04)
	uint64_t UInt64; // 0x18(0x08)
	float Float; // 0x20(0x04)
	char UnknownData_24[0x4]; // 0x24(0x04)
	double Double; // 0x28(0x08)
};

