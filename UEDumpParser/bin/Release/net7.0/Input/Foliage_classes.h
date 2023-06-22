// Class Foliage.FoliageInstancedStaticMeshComponent
// Size: 0x7c0 (Inherited: 0x7a0)
struct UFoliageInstancedStaticMeshComponent : UHierarchicalInstancedStaticMeshComponent {
	struct FMulticastDelegate OnInstanceTakePointDamage; // 0x798(0x10)
	struct FMulticastDelegate OnInstanceTakeRadialDamage; // 0x7a8(0x10)
};

// Class Foliage.FoliageStatistics
// Size: 0x28 (Inherited: 0x28)
struct UFoliageStatistics : UBlueprintFunctionLibrary {

	int32_t FoliageOverlappingSphereCount(struct UObject* WorldContextObject, struct UStaticMesh* StaticMesh, struct FVector CenterPosition, float Radius); // Function Foliage.FoliageStatistics.FoliageOverlappingSphereCount // Final|Native|Static|Public|HasDefaults|BlueprintCallable // @ game+0x2039bc0
	int32_t FoliageOverlappingBoxCount(struct UObject* WorldContextObject, struct UStaticMesh* StaticMesh, struct FBox Box); // Function Foliage.FoliageStatistics.FoliageOverlappingBoxCount // Final|Native|Static|Public|HasDefaults|BlueprintCallable // @ game+0x2039aa0
};

// Class Foliage.FoliageType
// Size: 0x360 (Inherited: 0x28)
struct UFoliageType : UObject {
	struct FGuid UpdateGuid; // 0x28(0x10)
	float Density; // 0x38(0x04)
	float DensityAdjustmentFactor; // 0x3c(0x04)
	float Radius; // 0x40(0x04)
	char Scaling; // 0x44(0x01)
	char UnknownData_45[0x3]; // 0x45(0x03)
	struct FFloatInterval ScaleX; // 0x48(0x08)
	struct FFloatInterval ScaleY; // 0x50(0x08)
	struct FFloatInterval ScaleZ; // 0x58(0x08)
	char VertexColorMask; // 0x60(0x01)
	char UnknownData_61[0x3]; // 0x61(0x03)
	float VertexColorMaskThreshold; // 0x64(0x04)
	char VertexColorMaskInvert : 1; // 0x68(0x01)
	char UnknownData_68_1 : 7; // 0x68(0x01)
	char UnknownData_69[0x3]; // 0x69(0x03)
	struct FFloatInterval ZOffset; // 0x6c(0x08)
	char AlignToNormal : 1; // 0x74(0x01)
	char UnknownData_74_1 : 7; // 0x74(0x01)
	char UnknownData_75[0x3]; // 0x75(0x03)
	float AlignMaxAngle; // 0x78(0x04)
	char RandomYaw : 1; // 0x7c(0x01)
	char UnknownData_7C_1 : 7; // 0x7c(0x01)
	char UnknownData_7D[0x3]; // 0x7d(0x03)
	float RandomPitchAngle; // 0x80(0x04)
	struct FFloatInterval GroundSlopeAngle; // 0x84(0x08)
	struct FFloatInterval Height; // 0x8c(0x08)
	char UnknownData_94[0x4]; // 0x94(0x04)
	struct TArray<struct FName> LandscapeLayers; // 0x98(0x10)
	struct FName LandscapeLayer; // 0xa8(0x08)
	char CollisionWithWorld : 1; // 0xb0(0x01)
	char UnknownData_B0_1 : 7; // 0xb0(0x01)
	char UnknownData_B1[0x3]; // 0xb1(0x03)
	struct FVector CollisionScale; // 0xb4(0x0c)
	float MinimumLayerWeight; // 0xc0(0x04)
	struct FBoxSphereBounds MeshBounds; // 0xc4(0x1c)
	struct FVector LowBoundOriginRadius; // 0xe0(0x0c)
	char Mobility; // 0xec(0x01)
	char UnknownData_ED[0x3]; // 0xed(0x03)
	struct FInt32Interval CullDistance; // 0xf0(0x08)
	char bEnableStaticLighting : 1; // 0xf8(0x01)
	char CastShadow : 1; // 0xf8(0x01)
	char bAffectDynamicIndirectLighting : 1; // 0xf8(0x01)
	char bAffectDistanceFieldLighting : 1; // 0xf8(0x01)
	char bCastDynamicShadow : 1; // 0xf8(0x01)
	char bCastStaticShadow : 1; // 0xf8(0x01)
	char bCastShadowAsTwoSided : 1; // 0xf8(0x01)
	char bReceivesDecals : 1; // 0xf8(0x01)
	char bOverrideLightMapRes : 1; // 0xf9(0x01)
	char UnknownData_F9_1 : 7; // 0xf9(0x01)
	char UnknownData_FA[0x2]; // 0xfa(0x02)
	int32_t OverriddenLightMapRes; // 0xfc(0x04)
	char bUseAsOccluder : 1; // 0x100(0x01)
	char UnknownData_100_1 : 7; // 0x100(0x01)
	char UnknownData_101[0x7]; // 0x101(0x07)
	struct FBodyInstance BodyInstance; // 0x108(0x180)
	char CustomNavigableGeometry; // 0x288(0x01)
	char UnknownData_289[0x7]; // 0x289(0x07)
	uint64_t HiddenEditorViews; // 0x290(0x08)
	char IsSelected : 1; // 0x298(0x01)
	char UnknownData_298_1 : 7; // 0x298(0x01)
	char UnknownData_299[0x3]; // 0x299(0x03)
	float CollisionRadius; // 0x29c(0x04)
	float ShadeRadius; // 0x2a0(0x04)
	int32_t NumSteps; // 0x2a4(0x04)
	float InitialSeedDensity; // 0x2a8(0x04)
	float AverageSpreadDistance; // 0x2ac(0x04)
	float SpreadVariance; // 0x2b0(0x04)
	int32_t SeedsPerStep; // 0x2b4(0x04)
	int32_t DistributionSeed; // 0x2b8(0x04)
	float MaxInitialSeedOffset; // 0x2bc(0x04)
	bool bCanGrowInShade; // 0x2c0(0x01)
	bool bSpawnsInShade; // 0x2c1(0x01)
	char UnknownData_2C2[0x2]; // 0x2c2(0x02)
	float MaxInitialAge; // 0x2c4(0x04)
	float MaxAge; // 0x2c8(0x04)
	float OverlapPriority; // 0x2cc(0x04)
	struct FFloatInterval ProceduralScale; // 0x2d0(0x08)
	struct FRuntimeFloatCurve ScaleCurve; // 0x2d8(0x80)
	int32_t ChangeCount; // 0x358(0x04)
	char ReapplyDensity : 1; // 0x35c(0x01)
	char ReapplyRadius : 1; // 0x35c(0x01)
	char ReapplyAlignToNormal : 1; // 0x35c(0x01)
	char ReapplyRandomYaw : 1; // 0x35c(0x01)
	char ReapplyScaling : 1; // 0x35c(0x01)
	char ReapplyScaleX : 1; // 0x35c(0x01)
	char ReapplyScaleY : 1; // 0x35c(0x01)
	char ReapplyScaleZ : 1; // 0x35c(0x01)
	char ReapplyRandomPitchAngle : 1; // 0x35d(0x01)
	char ReapplyGroundSlope : 1; // 0x35d(0x01)
	char ReapplyHeight : 1; // 0x35d(0x01)
	char ReapplyLandscapeLayers : 1; // 0x35d(0x01)
	char ReapplyZOffset : 1; // 0x35d(0x01)
	char ReapplyCollisionWithWorld : 1; // 0x35d(0x01)
	char ReapplyVertexColorMask : 1; // 0x35d(0x01)
	char UnknownData_35E[0x2]; // 0x35e(0x02)
};

// Class Foliage.FoliageType_InstancedStaticMesh
// Size: 0x380 (Inherited: 0x360)
struct UFoliageType_InstancedStaticMesh : UFoliageType {
	struct UStaticMesh* Mesh; // 0x360(0x08)
	struct TArray<struct UMaterialInterface*> OverrideMaterials; // 0x368(0x10)
	struct UClass* ComponentClass; // 0x378(0x08)
};

// Class Foliage.InstancedFoliageActor
// Size: 0x418 (Inherited: 0x3c8)
struct AInstancedFoliageActor : AActor {
	char UnknownData_3C8[0x50]; // 0x3c8(0x50)
};

// Class Foliage.InteractiveFoliageActor
// Size: 0x438 (Inherited: 0x3d8)
struct AInteractiveFoliageActor : AStaticMeshActor {
	struct UCapsuleComponent* CapsuleComponent; // 0x3d8(0x08)
	struct FVector TouchingActorEntryPosition; // 0x3e0(0x0c)
	struct FVector FoliageVelocity; // 0x3ec(0x0c)
	struct FVector FoliageForce; // 0x3f8(0x0c)
	struct FVector FoliagePosition; // 0x404(0x0c)
	float FoliageDamageImpulseScale; // 0x410(0x04)
	float FoliageTouchImpulseScale; // 0x414(0x04)
	float FoliageStiffness; // 0x418(0x04)
	float FoliageStiffnessQuadratic; // 0x41c(0x04)
	float FoliageDamping; // 0x420(0x04)
	float MaxDamageImpulse; // 0x424(0x04)
	float MaxTouchImpulse; // 0x428(0x04)
	float MaxForce; // 0x42c(0x04)
	float Mass; // 0x430(0x04)
	char UnknownData_434[0x4]; // 0x434(0x04)

	void CapsuleTouched(struct AActor* Other, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult OverlapInfo); // Function Foliage.InteractiveFoliageActor.CapsuleTouched // Final|Native|Protected|HasOutParms // @ game+0x20398d0
};

// Class Foliage.InteractiveFoliageComponent
// Size: 0x630 (Inherited: 0x620)
struct UInteractiveFoliageComponent : UStaticMeshComponent {
	char UnknownData_620[0x10]; // 0x620(0x10)
};

// Class Foliage.ProceduralFoliageBlockingVolume
// Size: 0x408 (Inherited: 0x400)
struct AProceduralFoliageBlockingVolume : AVolume {
	struct AProceduralFoliageVolume* ProceduralFoliageVolume; // 0x400(0x08)
};

// Class Foliage.ProceduralFoliageComponent
// Size: 0xf0 (Inherited: 0xc8)
struct UProceduralFoliageComponent : UActorComponent {
	struct UProceduralFoliageSpawner* FoliageSpawner; // 0xc8(0x08)
	float TileOverlap; // 0xd0(0x04)
	char UnknownData_D4[0x4]; // 0xd4(0x04)
	struct AVolume* SpawningVolume; // 0xd8(0x08)
	struct FGuid ProceduralGuid; // 0xe0(0x10)
};

// Class Foliage.ProceduralFoliageSpawner
// Size: 0x68 (Inherited: 0x28)
struct UProceduralFoliageSpawner : UObject {
	int32_t RandomSeed; // 0x28(0x04)
	float TileSize; // 0x2c(0x04)
	int32_t NumUniqueTiles; // 0x30(0x04)
	char UnknownData_34[0x4]; // 0x34(0x04)
	struct TArray<struct FFoliageTypeObject> FoliageTypes; // 0x38(0x10)
	bool bNeedsSimulation; // 0x48(0x01)
	char UnknownData_49[0x1f]; // 0x49(0x1f)

	void Simulate(int32_t NumSteps); // Function Foliage.ProceduralFoliageSpawner.Simulate // Final|Native|Public|BlueprintCallable // @ game+0x2039d10
};

// Class Foliage.ProceduralFoliageTile
// Size: 0x150 (Inherited: 0x28)
struct UProceduralFoliageTile : UObject {
	struct UProceduralFoliageSpawner* FoliageSpawner; // 0x28(0x08)
	char UnknownData_30[0xa0]; // 0x30(0xa0)
	struct TArray<struct FProceduralFoliageInstance> InstancesArray; // 0xd0(0x10)
	char UnknownData_E0[0x70]; // 0xe0(0x70)
};

// Class Foliage.ProceduralFoliageVolume
// Size: 0x408 (Inherited: 0x400)
struct AProceduralFoliageVolume : AVolume {
	struct UProceduralFoliageComponent* ProceduralComponent; // 0x400(0x08)
};

