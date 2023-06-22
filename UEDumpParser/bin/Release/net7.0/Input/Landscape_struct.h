// Enum Landscape.ELandscapeGizmoType
enum class ELandscapeGizmoType : uint8_t {
	LGT_None,
	LGT_Height,
	LGT_Weight,
	LGT_MAX,
};

// Enum Landscape.ELandscapeLODFalloff
enum class ELandscapeLODFalloff : uint8_t {
	Linear,
	SquareRoot,
	ELandscapeLODFalloff_MAX,
};

// Enum Landscape.ELandscapeLayerPaintingRestriction
enum class ELandscapeLayerPaintingRestriction : uint8_t {
	None,
	UseMaxLayers,
	ExistingOnly,
	ELandscapeLayerPaintingRestriction_MAX,
};

// Enum Landscape.ELandscapeSetupErrors
enum class ELandscapeSetupErrors : uint8_t {
	LSE_None,
	LSE_NoLandscapeInfo,
	LSE_CollsionXY,
	LSE_NoLayerInfo,
	LSE_MAX,
};

// Enum Landscape.LandscapeSplineMeshOrientation
enum class LandscapeSplineMeshOrientation : uint8_t {
	LSMO_XUp,
	LSMO_YUp,
	LSMO_MAX,
};

// Enum Landscape.ELandscapeLayerBlendType
enum class ELandscapeLayerBlendType : uint8_t {
	LB_WeightBlend,
	LB_AlphaBlend,
	LB_HeightBlend,
	LB_MAX,
};

// Enum Landscape.ELandscapeCustomizedCoordType
enum class ELandscapeCustomizedCoordType : uint8_t {
	LCCT_None,
	LCCT_CustomUV0,
	LCCT_CustomUV1,
	LCCT_CustomUV2,
	LCCT_WeightMapUV,
	LCCT_MAX,
};

// Enum Landscape.ETerrainCoordMappingType
enum class ETerrainCoordMappingType : uint8_t {
	TCMT_Auto,
	TCMT_XY,
	TCMT_XZ,
	TCMT_YZ,
	TCMT_MAX,
};

// ScriptStruct Landscape.LandscapeInfoLayerSettings
// Size: 0x10 (Inherited: 0x00)
struct FLandscapeInfoLayerSettings {
	struct ULandscapeLayerInfoObject* LayerInfoObj; // 0x00(0x08)
	struct FName LayerName; // 0x08(0x08)
};

// ScriptStruct Landscape.WeightmapLayerAllocationInfo
// Size: 0x10 (Inherited: 0x00)
struct FWeightmapLayerAllocationInfo {
	struct ULandscapeLayerInfoObject* LayerInfo; // 0x00(0x08)
	char WeightmapTextureIndex; // 0x08(0x01)
	char WeightmapTextureChannel; // 0x09(0x01)
	char GrassMapChannelIndex; // 0x0a(0x01)
	char UnknownData_B[0x5]; // 0x0b(0x05)
};

// ScriptStruct Landscape.GizmoSelectData
// Size: 0x50 (Inherited: 0x00)
struct FGizmoSelectData {
	char UnknownData_0[0x50]; // 0x00(0x50)
};

// ScriptStruct Landscape.GrassVariety
// Size: 0x30 (Inherited: 0x00)
struct FGrassVariety {
	struct UStaticMesh* GrassMesh; // 0x00(0x08)
	float GrassDensity; // 0x08(0x04)
	bool bUseGrid; // 0x0c(0x01)
	char UnknownData_D[0x3]; // 0x0d(0x03)
	float PlacementJitter; // 0x10(0x04)
	int32_t StartCullDistance; // 0x14(0x04)
	int32_t EndCullDistance; // 0x18(0x04)
	int32_t MinLOD; // 0x1c(0x04)
	bool RandomRotation; // 0x20(0x01)
	char UnknownData_21[0x3]; // 0x21(0x03)
	float AlignToSurface; // 0x24(0x04)
	float ScaleVariationMin; // 0x28(0x04)
	float ScaleVariationMax; // 0x2c(0x04)
};

// ScriptStruct Landscape.LandscapeImportLayerInfo
// Size: 0x01 (Inherited: 0x00)
struct FLandscapeImportLayerInfo {
	char UnknownData_0[0x1]; // 0x00(0x01)
};

// ScriptStruct Landscape.LandscapeLayerStruct
// Size: 0x08 (Inherited: 0x00)
struct FLandscapeLayerStruct {
	struct ULandscapeLayerInfoObject* LayerInfoObj; // 0x00(0x08)
};

// ScriptStruct Landscape.LandscapeEditorLayerSettings
// Size: 0x01 (Inherited: 0x00)
struct FLandscapeEditorLayerSettings {
	char UnknownData_0[0x1]; // 0x00(0x01)
};

// ScriptStruct Landscape.LandscapeWeightmapUsage
// Size: 0x20 (Inherited: 0x00)
struct FLandscapeWeightmapUsage {
	struct ULandscapeComponent* ChannelUsage[0x04]; // 0x00(0x20)
};

// ScriptStruct Landscape.LandscapeSplineMeshEntry
// Size: 0x38 (Inherited: 0x00)
struct FLandscapeSplineMeshEntry {
	struct UStaticMesh* Mesh; // 0x00(0x08)
	struct TArray<struct UMaterialInterface*> MaterialOverrides; // 0x08(0x10)
	char bCenterH : 1; // 0x18(0x01)
	char UnknownData_18_1 : 7; // 0x18(0x01)
	char UnknownData_19[0x3]; // 0x19(0x03)
	struct FVector2D CenterAdjust; // 0x1c(0x08)
	char bScaleToWidth : 1; // 0x24(0x01)
	char UnknownData_24_1 : 7; // 0x24(0x01)
	char UnknownData_25[0x3]; // 0x25(0x03)
	struct FVector Scale; // 0x28(0x0c)
	char Orientation; // 0x34(0x01)
	char ForwardAxis; // 0x35(0x01)
	char UpAxis; // 0x36(0x01)
	char UnknownData_37[0x1]; // 0x37(0x01)
};

// ScriptStruct Landscape.LandscapeSplineSegmentConnection
// Size: 0x18 (Inherited: 0x00)
struct FLandscapeSplineSegmentConnection {
	struct ULandscapeSplineControlPoint* ControlPoint; // 0x00(0x08)
	float TangentLen; // 0x08(0x04)
	struct FName SocketName; // 0x0c(0x08)
	char UnknownData_14[0x4]; // 0x14(0x04)
};

// ScriptStruct Landscape.LandscapeSplineInterpPoint
// Size: 0x40 (Inherited: 0x00)
struct FLandscapeSplineInterpPoint {
	struct FVector Center; // 0x00(0x0c)
	struct FVector Left; // 0x0c(0x0c)
	struct FVector Right; // 0x18(0x0c)
	struct FVector FalloffLeft; // 0x24(0x0c)
	struct FVector FalloffRight; // 0x30(0x0c)
	float StartEndFalloff; // 0x3c(0x04)
};

// ScriptStruct Landscape.LandscapeSplineConnection
// Size: 0x10 (Inherited: 0x00)
struct FLandscapeSplineConnection {
	struct ULandscapeSplineSegment* Segment; // 0x00(0x08)
	char End : 1; // 0x08(0x01)
	char UnknownData_8_1 : 7; // 0x08(0x01)
	char UnknownData_9[0x7]; // 0x09(0x07)
};

// ScriptStruct Landscape.ForeignWorldSplineData
// Size: 0x01 (Inherited: 0x00)
struct FForeignWorldSplineData {
	char UnknownData_0[0x1]; // 0x00(0x01)
};

// ScriptStruct Landscape.ForeignSplineSegmentData
// Size: 0x01 (Inherited: 0x00)
struct FForeignSplineSegmentData {
	char UnknownData_0[0x1]; // 0x00(0x01)
};

// ScriptStruct Landscape.ForeignControlPointData
// Size: 0x01 (Inherited: 0x00)
struct FForeignControlPointData {
	char UnknownData_0[0x1]; // 0x00(0x01)
};

// ScriptStruct Landscape.GrassInput
// Size: 0x48 (Inherited: 0x00)
struct FGrassInput {
	struct FName Name; // 0x00(0x08)
	struct ULandscapeGrassType* GrassType; // 0x08(0x08)
	struct FExpressionInput Input; // 0x10(0x38)
};

// ScriptStruct Landscape.LayerBlendInput
// Size: 0x98 (Inherited: 0x00)
struct FLayerBlendInput {
	struct FName LayerName; // 0x00(0x08)
	char BlendType; // 0x08(0x01)
	char UnknownData_9[0x7]; // 0x09(0x07)
	struct FExpressionInput LayerInput; // 0x10(0x38)
	struct FExpressionInput HeightInput; // 0x48(0x38)
	float PreviewWeight; // 0x80(0x04)
	struct FVector ConstLayerInput; // 0x84(0x0c)
	float ConstHeightInput; // 0x90(0x04)
	char UnknownData_94[0x4]; // 0x94(0x04)
};

