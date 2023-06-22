// Enum JsonUtilities.EJsonTestEnum
enum class EJsonTestEnum : uint8_t {
	Value0,
	Value1,
	EJsonTestEnum_MAX,
};

// ScriptStruct JsonUtilities.JsonObjectWrapper
// Size: 0x18 (Inherited: 0x00)
struct FJsonObjectWrapper {
	char UnknownData_0[0x18]; // 0x00(0x18)
};

// ScriptStruct JsonUtilities.TestTextObject
// Size: 0x70 (Inherited: 0x00)
struct FTestTextObject {
	struct FText TestText; // 0x00(0x38)
	struct FText TestTextExport; // 0x38(0x38)
};

// ScriptStruct JsonUtilities.TestFloatObject
// Size: 0x08 (Inherited: 0x00)
struct FTestFloatObject {
	float TestFloat1; // 0x00(0x04)
	float TestFloat2; // 0x04(0x04)
};

// ScriptStruct JsonUtilities.TestEnumObject
// Size: 0x01 (Inherited: 0x00)
struct FTestEnumObject {
	char TestEnum; // 0x00(0x01)
};

// ScriptStruct JsonUtilities.TestMessageTimespan
// Size: 0x08 (Inherited: 0x00)
struct FTestMessageTimespan {
	struct FTimespan Timespan; // 0x00(0x08)
};

// ScriptStruct JsonUtilities.TestMessageDateTime
// Size: 0x08 (Inherited: 0x00)
struct FTestMessageDateTime {
	struct FDateTime DateTime; // 0x00(0x08)
};

// ScriptStruct JsonUtilities.TestSerializationNestedObject
// Size: 0x28 (Inherited: 0x00)
struct FTestSerializationNestedObject {
	struct FTestSerializationObject NestedObject; // 0x00(0x28)
};

// ScriptStruct JsonUtilities.TestSerializationObject
// Size: 0x28 (Inherited: 0x00)
struct FTestSerializationObject {
	bool TestBool; // 0x00(0x01)
	char UnknownData_1[0x3]; // 0x01(0x03)
	int32_t TestInt; // 0x04(0x04)
	struct FString TestString; // 0x08(0x10)
	struct FGuid TestGuid; // 0x18(0x10)
};

// ScriptStruct JsonUtilities.TestMessageUInt64
// Size: 0x08 (Inherited: 0x00)
struct FTestMessageUInt64 {
	uint64_t TestInt; // 0x00(0x08)
};

// ScriptStruct JsonUtilities.TestMessageInt64
// Size: 0x08 (Inherited: 0x00)
struct FTestMessageInt64 {
	int64_t TestInt; // 0x00(0x08)
};

// ScriptStruct JsonUtilities.TestUStructMapSerializationObject
// Size: 0x50 (Inherited: 0x00)
struct FTestUStructMapSerializationObject {
	struct TMap<struct FString, struct FTestSerializationObject> StructMap; // 0x00(0x50)
};

// ScriptStruct JsonUtilities.TestInt32MapSerializationObject
// Size: 0x50 (Inherited: 0x00)
struct FTestInt32MapSerializationObject {
	struct TMap<struct FString, int32_t> Int32Map; // 0x00(0x50)
};

// ScriptStruct JsonUtilities.TestInvalidStringMapSerializationObject
// Size: 0x50 (Inherited: 0x00)
struct FTestInvalidStringMapSerializationObject {
	struct TMap<int32_t, struct FString> StringMap; // 0x00(0x50)
};

// ScriptStruct JsonUtilities.TestStringMapSerializationObject
// Size: 0x50 (Inherited: 0x00)
struct FTestStringMapSerializationObject {
	struct TMap<struct FString, struct FString> StringMap; // 0x00(0x50)
};

