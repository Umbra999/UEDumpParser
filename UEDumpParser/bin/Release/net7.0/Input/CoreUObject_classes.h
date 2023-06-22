// Class CoreUObject.Object
// Size: 0x28 (Inherited: 0x00)
struct UObject {
	char UnknownData_0[0x28]; // 0x00(0x28)

	void ExecuteUbergraph(int32_t EntryPoint); // Function CoreUObject.Object.ExecuteUbergraph // Event|Public|BlueprintEvent // @ game+0x1848130
};

// Class CoreUObject.Interface
// Size: 0x28 (Inherited: 0x28)
struct UInterface : UObject {
};

// Class CoreUObject.GCObjectReferencer
// Size: 0x60 (Inherited: 0x28)
struct UGCObjectReferencer : UObject {
	char UnknownData_28[0x38]; // 0x28(0x38)
};

// Class CoreUObject.TextBuffer
// Size: 0x50 (Inherited: 0x28)
struct UTextBuffer : UObject {
	char UnknownData_28[0x28]; // 0x28(0x28)
};

// Class CoreUObject.Field
// Size: 0x30 (Inherited: 0x28)
struct UField : UObject {
	char UnknownData_28[0x8]; // 0x28(0x08)
};

// Class CoreUObject.Struct
// Size: 0x88 (Inherited: 0x30)
struct UStruct : UField {
	char UnknownData_30[0x58]; // 0x30(0x58)
};

// Class CoreUObject.ScriptStruct
// Size: 0x98 (Inherited: 0x88)
struct UScriptStruct : UStruct {
	char UnknownData_88[0x10]; // 0x88(0x10)
};

// Class CoreUObject.Package
// Size: 0x80 (Inherited: 0x28)
struct UPackage : UObject {
	char UnknownData_28[0x58]; // 0x28(0x58)
};

// Class CoreUObject.Class
// Size: 0x1c0 (Inherited: 0x88)
struct UClass : UStruct {
	char UnknownData_88[0x138]; // 0x88(0x138)
};

// Class CoreUObject.Function
// Size: 0xb8 (Inherited: 0x88)
struct UFunction : UStruct {
	char UnknownData_88[0x30]; // 0x88(0x30)
};

// Class CoreUObject.DelegateFunction
// Size: 0xb8 (Inherited: 0xb8)
struct UDelegateFunction : UFunction {
};

// Class CoreUObject.SparseDelegateFunction
// Size: 0xc8 (Inherited: 0xb8)
struct USparseDelegateFunction : UDelegateFunction {
	char UnknownData_B8[0x10]; // 0xb8(0x10)
};

// Class CoreUObject.PackageMap
// Size: 0x50 (Inherited: 0x28)
struct UPackageMap : UObject {
	char UnknownData_28[0x28]; // 0x28(0x28)
};

// Class CoreUObject.Enum
// Size: 0x58 (Inherited: 0x30)
struct UEnum : UField {
	char UnknownData_30[0x28]; // 0x30(0x28)
};

// Class CoreUObject.LinkerPlaceholderClass
// Size: 0x310 (Inherited: 0x1c0)
struct ULinkerPlaceholderClass : UClass {
	char UnknownData_1C0[0x150]; // 0x1c0(0x150)
};

// Class CoreUObject.LinkerPlaceholderExportObject
// Size: 0x88 (Inherited: 0x28)
struct ULinkerPlaceholderExportObject : UObject {
	char UnknownData_28[0x60]; // 0x28(0x60)
};

// Class CoreUObject.LinkerPlaceholderFunction
// Size: 0x208 (Inherited: 0xb8)
struct ULinkerPlaceholderFunction : UFunction {
	char UnknownData_B8[0x150]; // 0xb8(0x150)
};

// Class CoreUObject.MetaData
// Size: 0x78 (Inherited: 0x28)
struct UMetaData : UObject {
	char UnknownData_28[0x50]; // 0x28(0x50)
};

// Class CoreUObject.ObjectRedirector
// Size: 0x30 (Inherited: 0x28)
struct UObjectRedirector : UObject {
	char UnknownData_28[0x8]; // 0x28(0x08)
};

// Class CoreUObject.Property
// Size: 0x70 (Inherited: 0x30)
struct UProperty : UField {
	char UnknownData_30[0x40]; // 0x30(0x40)
};

// Class CoreUObject.NumericProperty
// Size: 0x70 (Inherited: 0x70)
struct UNumericProperty : UProperty {
};

// Class CoreUObject.ArrayProperty
// Size: 0x78 (Inherited: 0x70)
struct UArrayProperty : UProperty {
	char UnknownData_70[0x8]; // 0x70(0x08)
};

// Class CoreUObject.ObjectPropertyBase
// Size: 0x78 (Inherited: 0x70)
struct UObjectPropertyBase : UProperty {
	char UnknownData_70[0x8]; // 0x70(0x08)
};

// Class CoreUObject.AssetObjectProperty
// Size: 0x78 (Inherited: 0x78)
struct UAssetObjectProperty : UObjectPropertyBase {
};

// Class CoreUObject.AssetClassProperty
// Size: 0x80 (Inherited: 0x78)
struct UAssetClassProperty : UAssetObjectProperty {
	char UnknownData_78[0x8]; // 0x78(0x08)
};

// Class CoreUObject.BoolProperty
// Size: 0x78 (Inherited: 0x70)
struct UBoolProperty : UProperty {
	char UnknownData_70[0x8]; // 0x70(0x08)
};

// Class CoreUObject.ByteProperty
// Size: 0x78 (Inherited: 0x70)
struct UByteProperty : UNumericProperty {
	char UnknownData_70[0x8]; // 0x70(0x08)
};

// Class CoreUObject.ObjectProperty
// Size: 0x78 (Inherited: 0x78)
struct UObjectProperty : UObjectPropertyBase {
};

// Class CoreUObject.ClassProperty
// Size: 0x80 (Inherited: 0x78)
struct UClassProperty : UObjectProperty {
	char UnknownData_78[0x8]; // 0x78(0x08)
};

// Class CoreUObject.DelegateProperty
// Size: 0x78 (Inherited: 0x70)
struct UDelegateProperty : UProperty {
	char UnknownData_70[0x8]; // 0x70(0x08)
};

// Class CoreUObject.DoubleProperty
// Size: 0x70 (Inherited: 0x70)
struct UDoubleProperty : UNumericProperty {
};

// Class CoreUObject.FloatProperty
// Size: 0x70 (Inherited: 0x70)
struct UFloatProperty : UNumericProperty {
};

// Class CoreUObject.IntProperty
// Size: 0x70 (Inherited: 0x70)
struct UIntProperty : UNumericProperty {
};

// Class CoreUObject.Int16Property
// Size: 0x70 (Inherited: 0x70)
struct UInt16Property : UNumericProperty {
};

// Class CoreUObject.Int64Property
// Size: 0x70 (Inherited: 0x70)
struct UInt64Property : UNumericProperty {
};

// Class CoreUObject.Int8Property
// Size: 0x70 (Inherited: 0x70)
struct UInt8Property : UNumericProperty {
};

// Class CoreUObject.InterfaceProperty
// Size: 0x78 (Inherited: 0x70)
struct UInterfaceProperty : UProperty {
	char UnknownData_70[0x8]; // 0x70(0x08)
};

// Class CoreUObject.LazyObjectProperty
// Size: 0x78 (Inherited: 0x78)
struct ULazyObjectProperty : UObjectPropertyBase {
};

// Class CoreUObject.MapProperty
// Size: 0xa8 (Inherited: 0x70)
struct UMapProperty : UProperty {
	char UnknownData_70[0x38]; // 0x70(0x38)
};

// Class CoreUObject.MulticastDelegateProperty
// Size: 0x78 (Inherited: 0x70)
struct UMulticastDelegateProperty : UProperty {
	char UnknownData_70[0x8]; // 0x70(0x08)
};

// Class CoreUObject.MulticastInlineDelegateProperty
// Size: 0x78 (Inherited: 0x78)
struct UMulticastInlineDelegateProperty : UMulticastDelegateProperty {
};

// Class CoreUObject.NameProperty
// Size: 0x70 (Inherited: 0x70)
struct UNameProperty : UProperty {
};

// Class CoreUObject.StrProperty
// Size: 0x70 (Inherited: 0x70)
struct UStrProperty : UProperty {
};

// Class CoreUObject.StructProperty
// Size: 0x78 (Inherited: 0x70)
struct UStructProperty : UProperty {
	char UnknownData_70[0x8]; // 0x70(0x08)
};

// Class CoreUObject.UInt16Property
// Size: 0x70 (Inherited: 0x70)
struct UUInt16Property : UNumericProperty {
};

// Class CoreUObject.UInt32Property
// Size: 0x70 (Inherited: 0x70)
struct UUInt32Property : UNumericProperty {
};

// Class CoreUObject.UInt64Property
// Size: 0x70 (Inherited: 0x70)
struct UUInt64Property : UNumericProperty {
};

// Class CoreUObject.WeakObjectProperty
// Size: 0x78 (Inherited: 0x78)
struct UWeakObjectProperty : UObjectPropertyBase {
};

// Class CoreUObject.TextProperty
// Size: 0x70 (Inherited: 0x70)
struct UTextProperty : UProperty {
};

