// Class Landscape.ControlPointMeshComponent
// Size: 0x620 (Inherited: 0x620)
struct UControlPointMeshComponent : UStaticMeshComponent {
};

// Class Landscape.LandscapeInfo
// Size: 0x210 (Inherited: 0x28)
struct ULandscapeInfo : UObject {
	struct ALandscape* LandscapeActor; // 0x28(0x1c)
	struct FGuid LandscapeGuid; // 0x44(0x10)
	int32_t ComponentSizeQuads; // 0x54(0x04)
	int32_t SubsectionSizeQuads; // 0x58(0x04)
	int32_t ComponentNumSubsections; // 0x5c(0x04)
	struct FVector DrawScale; // 0x60(0x0c)
	char UnknownData_6C[0x1a4]; // 0x6c(0x1a4)
};

// Class Landscape.LandscapeComponent
// Size: 0x720 (Inherited: 0x5c0)
struct ULandscapeComponent : UPrimitiveComponent {
	int32_t SectionBaseX; // 0x5b8(0x04)
	int32_t SectionBaseY; // 0x5bc(0x04)
	int32_t ComponentSizeQuads; // 0x5c0(0x04)
	int32_t SubsectionSizeQuads; // 0x5c4(0x04)
	int32_t NumSubsections; // 0x5c8(0x04)
	struct UMaterialInterface* OverrideMaterial; // 0x5d0(0x08)
	struct UMaterialInterface* OverrideHoleMaterial; // 0x5d8(0x08)
	struct UMaterialInstanceConstant* MaterialInstance; // 0x5e0(0x08)
	struct TArray<struct FWeightmapLayerAllocationInfo> WeightmapLayerAllocations; // 0x5e8(0x10)
	struct TArray<struct UTexture2D*> WeightmapTextures; // 0x5f8(0x10)
	struct UTexture2D* XYOffsetmapTexture; // 0x608(0x08)
	struct FVector4 WeightmapScaleBias; // 0x610(0x10)
	float WeightmapSubsectionOffset; // 0x620(0x04)
	char UnknownData_628[0x8]; // 0x628(0x08)
	struct FVector4 HeightmapScaleBias; // 0x630(0x10)
	struct UTexture2D* HeightmapTexture; // 0x640(0x08)
	struct FBox CachedLocalBox; // 0x648(0x1c)
	struct ULandscapeHeightfieldCollisionComponent* CollisionComponent; // 0x664(0x1c)
	struct TArray<struct FGuid> IrrelevantLights; // 0x680(0x10)
	char UnknownData_690[0x10]; // 0x690(0x10)
	int32_t CollisionMipLevel; // 0x6a0(0x04)
	float StaticLightingResolution; // 0x6a4(0x04)
	int32_t ForcedLOD; // 0x6a8(0x04)
	int32_t LODBias; // 0x6ac(0x04)
	struct FGuid StateId; // 0x6b0(0x10)
	struct FGuid BakedTextureMaterialGuid; // 0x6c0(0x10)
	struct UTexture2D* GIBakedBaseColorTexture; // 0x6d0(0x08)
	char MobileBlendableLayerMask; // 0x6d8(0x01)
	char UnknownData_6D9[0x7]; // 0x6d9(0x07)
	struct UMaterialInterface* MobileMaterialInterface; // 0x6e0(0x08)
	struct UTexture2D* MobileWeightNormalmapTexture; // 0x6e8(0x08)
	char UnknownData_6F0[0x30]; // 0x6f0(0x30)
};

// Class Landscape.LandscapeGizmoActor
// Size: 0x3c8 (Inherited: 0x3c8)
struct ALandscapeGizmoActor : AActor {
};

// Class Landscape.LandscapeGizmoActiveActor
// Size: 0x418 (Inherited: 0x3c8)
struct ALandscapeGizmoActiveActor : ALandscapeGizmoActor {
	char UnknownData_3C8[0x50]; // 0x3c8(0x50)
};

// Class Landscape.LandscapeGizmoRenderComponent
// Size: 0x5c0 (Inherited: 0x5c0)
struct ULandscapeGizmoRenderComponent : UPrimitiveComponent {
};

// Class Landscape.LandscapeGrassType
// Size: 0x58 (Inherited: 0x28)
struct ULandscapeGrassType : UObject {
	struct TArray<struct FGrassVariety> GrassVarieties; // 0x28(0x10)
	struct UStaticMesh* GrassMesh; // 0x38(0x08)
	float GrassDensity; // 0x40(0x04)
	float PlacementJitter; // 0x44(0x04)
	int32_t StartCullDistance; // 0x48(0x04)
	int32_t EndCullDistance; // 0x4c(0x04)
	bool RandomRotation; // 0x50(0x01)
	bool AlignToSurface; // 0x51(0x01)
	char UnknownData_52[0x6]; // 0x52(0x06)
};

// Class Landscape.LandscapeHeightfieldCollisionComponent
// Size: 0x690 (Inherited: 0x5c0)
struct ULandscapeHeightfieldCollisionComponent : UPrimitiveComponent {
	struct TArray<struct ULandscapeLayerInfoObject*> ComponentLayerInfos; // 0x5b8(0x10)
	int32_t SectionBaseX; // 0x5c8(0x04)
	int32_t SectionBaseY; // 0x5cc(0x04)
	int32_t CollisionSizeQuads; // 0x5d0(0x04)
	float CollisionScale; // 0x5d4(0x04)
	struct TArray<char> CollisionQuadFlags; // 0x5d8(0x10)
	struct FGuid HeightfieldGuid; // 0x5e8(0x10)
	struct FBox CachedLocalBox; // 0x5f8(0x1c)
	struct ULandscapeComponent* RenderComponent; // 0x614(0x1c)
	char UnknownData_638[0x8]; // 0x638(0x08)
	struct TArray<struct UPhysicalMaterial*> CookedPhysicalMaterials; // 0x640(0x10)
	char UnknownData_650[0x40]; // 0x650(0x40)
};

// Class Landscape.LandscapeMeshCollisionComponent
// Size: 0x6b0 (Inherited: 0x690)
struct ULandscapeMeshCollisionComponent : ULandscapeHeightfieldCollisionComponent {
	struct FGuid MeshGuid; // 0x690(0x10)
	char UnknownData_6A0[0x10]; // 0x6a0(0x10)
};

// Class Landscape.LandscapeInfoMap
// Size: 0x78 (Inherited: 0x28)
struct ULandscapeInfoMap : UObject {
	char UnknownData_28[0x50]; // 0x28(0x50)
};

// Class Landscape.LandscapeLayerInfoObject
// Size: 0x40 (Inherited: 0x28)
struct ULandscapeLayerInfoObject : UObject {
	struct FName LayerName; // 0x28(0x08)
	struct UPhysicalMaterial* PhysMaterial; // 0x30(0x08)
	float Hardness; // 0x38(0x04)
	char UnknownData_3C[0x4]; // 0x3c(0x04)
};

// Class Landscape.LandscapeMaterialInstanceConstant
// Size: 0x1c8 (Inherited: 0x1b8)
struct ULandscapeMaterialInstanceConstant : UMaterialInstanceConstant {
	char bIsLayerThumbnail : 1; // 0x1b8(0x01)
	char UnknownData_1B8_1 : 7; // 0x1b8(0x01)
	char UnknownData_1B9[0x3]; // 0x1b9(0x03)
	int32_t DataWeightmapIndex; // 0x1bc(0x04)
	int32_t DataWeightmapSize; // 0x1c0(0x04)
	char UnknownData_1C4[0x4]; // 0x1c4(0x04)
};

// Class Landscape.LandscapeMeshProxyActor
// Size: 0x3d0 (Inherited: 0x3c8)
struct ALandscapeMeshProxyActor : AActor {
	struct ULandscapeMeshProxyComponent* LandscapeMeshProxyComponent; // 0x3c8(0x08)
};

// Class Landscape.LandscapeProxy
// Size: 0x750 (Inherited: 0x3c8)
struct ALandscapeProxy : AActor {
	char UnknownData_3C8[0x8]; // 0x3c8(0x08)
	struct ULandscapeSplinesComponent* SplineComponent; // 0x3d0(0x08)
	struct FGuid LandscapeGuid; // 0x3d8(0x10)
	struct FIntPoint LandscapeSectionOffset; // 0x3e8(0x08)
	int32_t MaxLODLevel; // 0x3f0(0x04)
	int32_t StaticLightingLOD; // 0x3f4(0x04)
	struct UPhysicalMaterial* DefaultPhysMaterial; // 0x3f8(0x08)
	float StreamingDistanceMultiplier; // 0x400(0x04)
	char UnknownData_404[0x4]; // 0x404(0x04)
	struct UMaterialInterface* LandscapeMaterial; // 0x408(0x08)
	struct UMaterialInterface* LandscapeHoleMaterial; // 0x410(0x08)
	float LODDistanceFactor; // 0x418(0x04)
	char UnknownData_41C[0x4]; // 0x41c(0x04)
	struct TArray<struct ULandscapeComponent*> LandscapeComponents; // 0x420(0x10)
	struct TArray<struct ULandscapeHeightfieldCollisionComponent*> CollisionComponents; // 0x430(0x10)
	struct TArray<struct UHierarchicalInstancedStaticMeshComponent*> FoliageComponents; // 0x440(0x10)
	char UnknownData_450[0x70]; // 0x450(0x70)
	float StaticLightingResolution; // 0x4c0(0x04)
	struct ALandscape* LandscapeActor; // 0x4c4(0x1c)
	char bCastStaticShadow : 1; // 0x4e0(0x01)
	char bCastShadowAsTwoSided : 1; // 0x4e0(0x01)
	char bAffectDynamicIndirectLighting : 1; // 0x4e0(0x01)
	char bCastFarShadow : 1; // 0x4e0(0x01)
	char bIsProxy : 1; // 0x4e0(0x01)
	char bUseFarCascadeLPVBiasMultiplier : 1; // 0x4e0(0x01)
	char UnknownData_4E0_6 : 2; // 0x4e0(0x01)
	char UnknownData_4E1[0x3]; // 0x4e1(0x03)
	float LpvIntensityMultiplier; // 0x4e4(0x04)
	float LpvBiasMultiplier; // 0x4e8(0x04)
	float FarCascadeLPVBiasMultiplier; // 0x4ec(0x04)
	struct FLightmassPrimitiveSettings LightmassSettings; // 0x4f0(0x18)
	int32_t CollisionMipLevel; // 0x508(0x04)
	float CollisionThickness; // 0x50c(0x04)
	struct FBodyInstance BodyInstance; // 0x510(0x180)
	int32_t ComponentSizeQuads; // 0x690(0x04)
	int32_t SubsectionSizeQuads; // 0x694(0x04)
	int32_t NumSubsections; // 0x698(0x04)
	char bUsedForNavigation : 1; // 0x69c(0x01)
	char bReflected : 1; // 0x69c(0x01)
	char UnknownData_69C_2 : 6; // 0x69c(0x01)
	char UnknownData_69D[0x3]; // 0x69d(0x03)
	char NavigationGeometryGatheringMode; // 0x6a0(0x01)
	char LODFalloff; // 0x6a1(0x01)
	char UnknownData_6A2[0xae]; // 0x6a2(0xae)

	void EditorApplySpline(struct USplineComponent* InSplineComponent, float StartWidth, float EndWidth, float StartSideFalloff, float EndSideFalloff, float StartRoll, float EndRoll, int32_t NumSubdivisions, bool bRaiseHeights, bool bLowerHeights, struct ULandscapeLayerInfoObject* PaintLayer); // Function Landscape.LandscapeProxy.EditorApplySpline // Final|Native|Public|BlueprintCallable // @ game+0x207c650
	void ChangeLODDistanceFactor(float InLODDistanceFactor); // Function Landscape.LandscapeProxy.ChangeLODDistanceFactor // Native|Public|BlueprintCallable // @ game+0x207c5d0
};

// Class Landscape.LandscapeMeshProxyComponent
// Size: 0x650 (Inherited: 0x620)
struct ULandscapeMeshProxyComponent : UStaticMeshComponent {
	struct FGuid LandscapeGuid; // 0x620(0x10)
	struct TArray<struct FIntPoint> ProxyComponentBases; // 0x630(0x10)
	int8_t ProxyLOD; // 0x640(0x01)
	char UnknownData_641[0xf]; // 0x641(0x0f)
};

// Class Landscape.Landscape
// Size: 0x750 (Inherited: 0x750)
struct ALandscape : ALandscapeProxy {
};

// Class Landscape.LandscapeSplinesComponent
// Size: 0x5f0 (Inherited: 0x5c0)
struct ULandscapeSplinesComponent : UPrimitiveComponent {
	struct TArray<struct ULandscapeSplineControlPoint*> ControlPoints; // 0x5b8(0x10)
	struct TArray<struct ULandscapeSplineSegment*> Segments; // 0x5c8(0x10)
	struct TArray<struct UMeshComponent*> CookedForeignMeshComponents; // 0x5d8(0x10)
};

// Class Landscape.LandscapeSplineSegment
// Size: 0xb0 (Inherited: 0x28)
struct ULandscapeSplineSegment : UObject {
	struct FLandscapeSplineSegmentConnection Connections[0x02]; // 0x28(0x30)
	struct FInterpCurveVector SplineInfo; // 0x58(0x18)
	struct TArray<struct FLandscapeSplineInterpPoint> Points; // 0x70(0x10)
	struct FBox Bounds; // 0x80(0x1c)
	char UnknownData_9C[0x4]; // 0x9c(0x04)
	struct TArray<struct USplineMeshComponent*> LocalMeshComponents; // 0xa0(0x10)
};

// Class Landscape.LandscapeSplineControlPoint
// Size: 0x98 (Inherited: 0x28)
struct ULandscapeSplineControlPoint : UObject {
	struct FVector Location; // 0x28(0x0c)
	struct FRotator Rotation; // 0x34(0x0c)
	float Width; // 0x40(0x04)
	float SideFalloff; // 0x44(0x04)
	float EndFalloff; // 0x48(0x04)
	char UnknownData_4C[0x4]; // 0x4c(0x04)
	struct TArray<struct FLandscapeSplineConnection> ConnectedSegments; // 0x50(0x10)
	struct TArray<struct FLandscapeSplineInterpPoint> Points; // 0x60(0x10)
	struct FBox Bounds; // 0x70(0x1c)
	char UnknownData_8C[0x4]; // 0x8c(0x04)
	struct UControlPointMeshComponent* LocalMeshComponent; // 0x90(0x08)
};

// Class Landscape.MaterialExpressionLandscapeGrassOutput
// Size: 0x80 (Inherited: 0x70)
struct UMaterialExpressionLandscapeGrassOutput : UMaterialExpressionCustomOutput {
	struct TArray<struct FGrassInput> GrassTypes; // 0x70(0x10)
};

// Class Landscape.MaterialExpressionLandscapeLayerBlend
// Size: 0x90 (Inherited: 0x70)
struct UMaterialExpressionLandscapeLayerBlend : UMaterialExpression {
	struct TArray<struct FLayerBlendInput> Layers; // 0x70(0x10)
	struct FGuid ExpressionGUID; // 0x80(0x10)
};

// Class Landscape.MaterialExpressionLandscapeLayerCoords
// Size: 0x88 (Inherited: 0x70)
struct UMaterialExpressionLandscapeLayerCoords : UMaterialExpression {
	char MappingType; // 0x70(0x01)
	char CustomUVType; // 0x71(0x01)
	char UnknownData_72[0x2]; // 0x72(0x02)
	float MappingScale; // 0x74(0x04)
	float MappingRotation; // 0x78(0x04)
	float MappingPanU; // 0x7c(0x04)
	float MappingPanV; // 0x80(0x04)
	char UnknownData_84[0x4]; // 0x84(0x04)
};

// Class Landscape.MaterialExpressionLandscapeLayerSample
// Size: 0x90 (Inherited: 0x70)
struct UMaterialExpressionLandscapeLayerSample : UMaterialExpression {
	struct FName ParameterName; // 0x70(0x08)
	float PreviewWeight; // 0x78(0x04)
	struct FGuid ExpressionGUID; // 0x7c(0x10)
	char UnknownData_8C[0x4]; // 0x8c(0x04)
};

// Class Landscape.MaterialExpressionLandscapeLayerSwitch
// Size: 0x100 (Inherited: 0x70)
struct UMaterialExpressionLandscapeLayerSwitch : UMaterialExpression {
	struct FExpressionInput LayerUsed; // 0x70(0x38)
	struct FExpressionInput LayerNotUsed; // 0xa8(0x38)
	struct FName ParameterName; // 0xe0(0x08)
	char PreviewUsed : 1; // 0xe8(0x01)
	char UnknownData_E8_1 : 7; // 0xe8(0x01)
	char UnknownData_E9[0x3]; // 0xe9(0x03)
	struct FGuid ExpressionGUID; // 0xec(0x10)
	char UnknownData_FC[0x4]; // 0xfc(0x04)
};

// Class Landscape.MaterialExpressionLandscapeLayerWeight
// Size: 0x108 (Inherited: 0x70)
struct UMaterialExpressionLandscapeLayerWeight : UMaterialExpression {
	struct FExpressionInput Base; // 0x70(0x38)
	struct FExpressionInput Layer; // 0xa8(0x38)
	struct FName ParameterName; // 0xe0(0x08)
	float PreviewWeight; // 0xe8(0x04)
	struct FVector ConstBase; // 0xec(0x0c)
	struct FGuid ExpressionGUID; // 0xf8(0x10)
};

// Class Landscape.MaterialExpressionLandscapeVisibilityMask
// Size: 0x80 (Inherited: 0x70)
struct UMaterialExpressionLandscapeVisibilityMask : UMaterialExpression {
	struct FGuid ExpressionGUID; // 0x70(0x10)
};

