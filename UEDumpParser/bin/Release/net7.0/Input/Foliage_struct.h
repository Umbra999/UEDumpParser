// Enum Foliage.EFoliageScaling
enum class EFoliageScaling : uint8_t {
	Uniform,
	Free,
	LockXY,
	LockXZ,
	LockYZ,
	EFoliageScaling_MAX,
};

// Enum Foliage.FoliageVertexColorMask
enum class FoliageVertexColorMask : uint8_t {
	FOLIAGEVERTEXCOLORMASK_Disabled,
	FOLIAGEVERTEXCOLORMASK_Red,
	FOLIAGEVERTEXCOLORMASK_Green,
	FOLIAGEVERTEXCOLORMASK_Blue,
	FOLIAGEVERTEXCOLORMASK_Alpha,
	FOLIAGEVERTEXCOLORMASK_MAX,
};

// Enum Foliage.ESimulationQuery
enum class ESimulationQuery : uint8_t {
	CollisionOverlap,
	ShadeOverlap,
	AnyOverlap,
	ESimulationQuery_MAX,
};

// Enum Foliage.ESimulationOverlap
enum class ESimulationOverlap : uint8_t {
	CollisionOverlap,
	ShadeOverlap,
	None,
	ESimulationOverlap_MAX,
};

// ScriptStruct Foliage.FoliageTypeObject
// Size: 0x20 (Inherited: 0x00)
struct FFoliageTypeObject {
	struct UObject* FoliageTypeObject; // 0x00(0x08)
	struct UFoliageType_InstancedStaticMesh* TypeInstance; // 0x08(0x08)
	bool bIsAsset; // 0x10(0x01)
	char UnknownData_11[0x7]; // 0x11(0x07)
	struct UClass* Type; // 0x18(0x08)
};

// ScriptStruct Foliage.ProceduralFoliageInstance
// Size: 0x60 (Inherited: 0x00)
struct FProceduralFoliageInstance {
	struct FVector Location; // 0x00(0x0c)
	char UnknownData_C[0x4]; // 0x0c(0x04)
	struct FQuat Rotation; // 0x10(0x10)
	struct FVector Normal; // 0x20(0x0c)
	float Age; // 0x2c(0x04)
	float Scale; // 0x30(0x04)
	char UnknownData_34[0x4]; // 0x34(0x04)
	struct UFoliageType_InstancedStaticMesh* Type; // 0x38(0x08)
	char UnknownData_40[0x20]; // 0x40(0x20)
};

// ScriptStruct Foliage.ConsoleCommands
// Size: 0x01 (Inherited: 0x00)
struct FConsoleCommands {
	char UnknownData_0[0x1]; // 0x00(0x01)
};

