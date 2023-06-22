// Enum AthenaRigging.EInstancedRopeParameterType
enum class EInstancedRopeParameterType : uint8_t {
	RPT_Start,
	RPT_End,
	RPT_Roughness,
	RPT_Thickness,
	RPT_UVScale,
	RPT_UVOffset,
	RPT_Length,
	RPT_SwingTime,
	RPT_WindAmount,
	RPT_CatenaryScale,
	RPT_CatenaryX0,
	RPT_CatenaryY0,
	RPT_CatenaryXYDistance,
	RPT_IsCatenary,
	RPT_MAX,
};

// ScriptStruct AthenaRigging.RopeCatenaryShapeParams
// Size: 0x18 (Inherited: 0x00)
struct FRopeCatenaryShapeParams {
	struct FRopeCatenaryLengthParams Length; // 0x00(0x10)
	struct FRopeCatenarySlopeBlendParams Slope; // 0x10(0x08)
};

// ScriptStruct AthenaRigging.RopeCatenarySlopeBlendParams
// Size: 0x08 (Inherited: 0x00)
struct FRopeCatenarySlopeBlendParams {
	float MinSlopeForTautBlend; // 0x00(0x04)
	float MaxSlopeForTautBlend; // 0x04(0x04)
};

// ScriptStruct AthenaRigging.RopeCatenaryLengthParams
// Size: 0x10 (Inherited: 0x00)
struct FRopeCatenaryLengthParams {
	float MinTautLength; // 0x00(0x04)
	float MaxTautLength; // 0x04(0x04)
	float CatenaryScaleAtMinLength; // 0x08(0x04)
	float CatenaryScaleAtMaxLength; // 0x0c(0x04)
};

// ScriptStruct AthenaRigging.RopeCatenarySwingParams
// Size: 0x08 (Inherited: 0x00)
struct FRopeCatenarySwingParams {
	float LengthForNeutralSwing; // 0x00(0x04)
	float LengthBias; // 0x04(0x04)
};

// ScriptStruct AthenaRigging.RopeCatenaryDynamicsParams
// Size: 0x08 (Inherited: 0x00)
struct FRopeCatenaryDynamicsParams {
	float CatenaryToTautLengthRatioToConsiderCatenary; // 0x00(0x04)
	bool ReactsToWind; // 0x04(0x01)
	char UnknownData_5[0x3]; // 0x05(0x03)
};

// ScriptStruct AthenaRigging.InstancedRopeParams
// Size: 0x54 (Inherited: 0x00)
struct FInstancedRopeParams {
	struct FVector Start; // 0x00(0x0c)
	struct FVector End; // 0x0c(0x0c)
	float Thickness; // 0x18(0x04)
	float UVScale; // 0x1c(0x04)
	float UVBase; // 0x20(0x04)
	float UVOffset; // 0x24(0x04)
	float Roughness; // 0x28(0x04)
	struct FRopeCatenaryShapeParams Shape; // 0x2c(0x18)
	struct FRopeCatenarySwingParams Swing; // 0x44(0x08)
	struct FRopeCatenaryDynamicsParams Dynamics; // 0x4c(0x08)
};

// ScriptStruct AthenaRigging.RiggingSystemLine
// Size: 0x10 (Inherited: 0x00)
struct FRiggingSystemLine {
	uint32_t RopeStart; // 0x00(0x04)
	uint32_t SocketStart; // 0x04(0x04)
	uint32_t PulleyStart; // 0x08(0x04)
	uint32_t NumRopes; // 0x0c(0x04)
};

// ScriptStruct AthenaRigging.RiggingSystemPulleyData
// Size: 0x60 (Inherited: 0x00)
struct FRiggingSystemPulleyData {
	struct TArray<float> AttachmentSag; // 0x00(0x10)
	struct TArray<float> AttachmentLength; // 0x10(0x10)
	struct TArray<float> Scale; // 0x20(0x10)
	struct TArray<float> ScaledOffset; // 0x30(0x10)
	struct TArray<float> ScaledRadius; // 0x40(0x10)
	struct TArray<int32_t> MeshIDs; // 0x50(0x10)
};

// ScriptStruct AthenaRigging.RopeVisualParams
// Size: 0x0c (Inherited: 0x00)
struct FRopeVisualParams {
	float Thickness; // 0x00(0x04)
	float UVScale; // 0x04(0x04)
	float Roughness; // 0x08(0x04)
};

// ScriptStruct AthenaRigging.RopeStyleParams
// Size: 0x20 (Inherited: 0x00)
struct FRopeStyleParams {
	struct UStaticMesh* Mesh; // 0x00(0x08)
	struct UTexture2D* DiffuseTexture; // 0x08(0x08)
	struct UTexture2D* NormalTexture; // 0x10(0x08)
	int32_t ShadowLOD; // 0x18(0x04)
	char UnknownData_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct AthenaRigging.PulleyVisualParams
// Size: 0x10 (Inherited: 0x00)
struct FPulleyVisualParams {
	struct UStaticMesh* Mesh; // 0x00(0x08)
	float Scale; // 0x08(0x04)
	float Radius; // 0x0c(0x04)
};

// ScriptStruct AthenaRigging.RiggingSystemPulleyParams
// Size: 0x50 (Inherited: 0x00)
struct FRiggingSystemPulleyParams {
	struct FSocketId Anchor; // 0x00(0x20)
	float OffsetFromAnchor; // 0x20(0x04)
	char UnknownData_24[0x4]; // 0x24(0x04)
	struct FPulleyVisualParams Visuals; // 0x28(0x10)
	struct FRiggingSystemPulleyAttachmentParams AttachmentRope; // 0x38(0x14)
	char UnknownData_4C[0x4]; // 0x4c(0x04)
};

// ScriptStruct AthenaRigging.RiggingSystemPulleyAttachmentParams
// Size: 0x14 (Inherited: 0x00)
struct FRiggingSystemPulleyAttachmentParams {
	struct FRopeVisualParams Visuals; // 0x00(0x0c)
	float Length; // 0x0c(0x04)
	float Sag; // 0x10(0x04)
};

// ScriptStruct AthenaRigging.RiggingSystemLineParams
// Size: 0x78 (Inherited: 0x00)
struct FRiggingSystemLineParams {
	struct FSocketId Start; // 0x00(0x20)
	struct TArray<struct FRiggingSystemPulleyParams> Pulleys; // 0x20(0x10)
	struct FSocketId End; // 0x30(0x20)
	struct FRopeVisualParams Visuals; // 0x50(0x0c)
	struct FRopeCatenaryShapeParams Shape; // 0x5c(0x18)
	char UnknownData_74[0x4]; // 0x74(0x04)
};

// ScriptStruct AthenaRigging.RiggingSystemLineGroup
// Size: 0x18 (Inherited: 0x00)
struct FRiggingSystemLineGroup {
	struct FName Name; // 0x00(0x08)
	struct TArray<struct FRiggingSystemLineParams> Lines; // 0x08(0x10)
};

// ScriptStruct AthenaRigging.RopeCatenaryLengthPair
// Size: 0x08 (Inherited: 0x00)
struct FRopeCatenaryLengthPair {
	float Taut; // 0x00(0x04)
	float Catenary; // 0x04(0x04)
};

