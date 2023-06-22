// ScriptStruct AthenaDebug.DrawDebugItemString
// Size: 0x30 (Inherited: 0x00)
struct FDrawDebugItemString {
	struct FName GroupName; // 0x00(0x08)
	bool ReplaceInGroup; // 0x08(0x01)
	char UnknownData_9[0x7]; // 0x09(0x07)
	struct FString String; // 0x10(0x10)
	struct FColor Colour; // 0x20(0x04)
	struct FVector StringPos; // 0x24(0x0c)
};

// ScriptStruct AthenaDebug.DrawDebugItemMessage
// Size: 0x28 (Inherited: 0x00)
struct FDrawDebugItemMessage {
	struct FName GroupName; // 0x00(0x08)
	bool ReplaceInGroup; // 0x08(0x01)
	char UnknownData_9[0x7]; // 0x09(0x07)
	struct FString Message; // 0x10(0x10)
	struct FColor Colour; // 0x20(0x04)
	char UnknownData_24[0x4]; // 0x24(0x04)
};

// ScriptStruct AthenaDebug.DrawDebugItemSector
// Size: 0x48 (Inherited: 0x00)
struct FDrawDebugItemSector {
	struct FName GroupName; // 0x00(0x08)
	bool ReplaceInGroup; // 0x08(0x01)
	char UnknownData_9[0x3]; // 0x09(0x03)
	float RotationAngle; // 0x0c(0x04)
	struct FVector Centre; // 0x10(0x0c)
	float SectorAngle; // 0x1c(0x04)
	float Radius; // 0x20(0x04)
	struct FColor Colour; // 0x24(0x04)
	struct FVector ZeroAngleVector; // 0x28(0x0c)
	struct FVector RotationAxis; // 0x34(0x0c)
	float SubAngles; // 0x40(0x04)
	float Thickness; // 0x44(0x04)
};

// ScriptStruct AthenaDebug.DrawDebugItemLine
// Size: 0x2c (Inherited: 0x00)
struct FDrawDebugItemLine {
	struct FName GroupName; // 0x00(0x08)
	bool ReplaceInGroup; // 0x08(0x01)
	char UnknownData_9[0x3]; // 0x09(0x03)
	struct FVector LineStart; // 0x0c(0x0c)
	struct FVector LineEnd; // 0x18(0x0c)
	struct FColor Colour; // 0x24(0x04)
	float Thickness; // 0x28(0x04)
};

// ScriptStruct AthenaDebug.DrawDebugItemCapsule
// Size: 0x40 (Inherited: 0x00)
struct FDrawDebugItemCapsule {
	struct FName GroupName; // 0x00(0x08)
	bool ReplaceInGroup; // 0x08(0x01)
	char UnknownData_9[0x3]; // 0x09(0x03)
	struct FVector CentrePos; // 0x0c(0x0c)
	float HalfHeight; // 0x18(0x04)
	float Radius; // 0x1c(0x04)
	struct FQuat Rotation; // 0x20(0x10)
	struct FColor Colour; // 0x30(0x04)
	char UnknownData_34[0xc]; // 0x34(0x0c)
};

// ScriptStruct AthenaDebug.DrawDebugItemBox
// Size: 0x50 (Inherited: 0x00)
struct FDrawDebugItemBox {
	struct FName GroupName; // 0x00(0x08)
	bool ReplaceInGroup; // 0x08(0x01)
	char UnknownData_9[0x3]; // 0x09(0x03)
	struct FVector CentrePos; // 0x0c(0x0c)
	struct FVector Box; // 0x18(0x0c)
	char UnknownData_24[0xc]; // 0x24(0x0c)
	struct FQuat Rotation; // 0x30(0x10)
	struct FColor Colour; // 0x40(0x04)
	char UnknownData_44[0xc]; // 0x44(0x0c)
};

// ScriptStruct AthenaDebug.DrawDebugItemSphere
// Size: 0x20 (Inherited: 0x00)
struct FDrawDebugItemSphere {
	struct FName GroupName; // 0x00(0x08)
	bool ReplaceInGroup; // 0x08(0x01)
	char UnknownData_9[0x3]; // 0x09(0x03)
	struct FVector CentrePos; // 0x0c(0x0c)
	float Radius; // 0x18(0x04)
	struct FColor Colour; // 0x1c(0x04)
};

// ScriptStruct AthenaDebug.SphereData
// Size: 0x18 (Inherited: 0x00)
struct FSphereData {
	struct FVector Location; // 0x00(0x0c)
	float Radius; // 0x0c(0x04)
	int32_t Segments; // 0x10(0x04)
	struct FColor Colour; // 0x14(0x04)
};

