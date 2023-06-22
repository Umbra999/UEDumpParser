// BlueprintGeneratedClass BP_FlyingCreature.BP_FlyingCreature_C
// Size: 0x53d (Inherited: 0x420)
struct ABP_FlyingCreature_C : AFlyingCreature {
	struct USceneComponent* DefaultSceneRoot; // 0x420(0x08)
	char CreatureType; // 0x428(0x01)
	char NumOfCreatures; // 0x429(0x01)
	char UnknownData_42A[0x2]; // 0x42a(0x02)
	float BoundsBias; // 0x42c(0x04)
	struct UStaticMeshComponent* StaticMeshComponent; // 0x430(0x08)
	struct UMaterialInstanceDynamic* currMaterial; // 0x438(0x08)
	struct TArray<struct UMaterialInstanceDynamic*> MaterialInstance; // 0x440(0x10)
	float Seed; // 0x450(0x04)
	float FlapSpeed; // 0x454(0x04)
	float circlingSpeed; // 0x458(0x04)
	char CirclingDirection; // 0x45c(0x01)
	char UnknownData_45D[0x3]; // 0x45d(0x03)
	float CirclingRadius; // 0x460(0x04)
	float FlapDeformation; // 0x464(0x04)
	float mud; // 0x468(0x04)
	float flockSpeed; // 0x46c(0x04)
	struct FVector2D FlockingSpread; // 0x470(0x08)
	float FlockingHeight; // 0x478(0x04)
	float birdSpeed; // 0x47c(0x04)
	struct FVector2D BirdSpread; // 0x480(0x08)
	float BirdHeight; // 0x488(0x04)
	float RandomHorizontalSpread; // 0x48c(0x04)
	float HueVariance; // 0x490(0x04)
	float RandomVerticalSpread; // 0x494(0x04)
	float smoothness; // 0x498(0x04)
	char UnknownData_49C[0x4]; // 0x49c(0x04)
	struct TArray<struct UStaticMesh*> SelectedCreatureType; // 0x4a0(0x10)
	struct TArray<struct UStaticMesh*> Seagull; // 0x4b0(0x10)
	float Size; // 0x4c0(0x04)
	float SizeVariance; // 0x4c4(0x04)
	float SimSpeed; // 0x4c8(0x04)
	struct FVector BBox; // 0x4cc(0x0c)
	struct TArray<struct UStaticMesh*> Skellygull_01; // 0x4d8(0x10)
	struct TArray<struct UStaticMesh*> Bats_01; // 0x4e8(0x10)
	struct TArray<struct UStaticMesh*> Parrot_01; // 0x4f8(0x10)
	bool ScaleInDistance; // 0x508(0x01)
	char UnknownData_509[0x3]; // 0x509(0x03)
	float DistanceScale; // 0x50c(0x04)
	float DrawDistanceWithoutScale; // 0x510(0x04)
	float DrawDistanceWithScale; // 0x514(0x04)
	float ForceHibernation; // 0x518(0x04)
	bool HibernateAtNight; // 0x51c(0x01)
	char UnknownData_51D[0x3]; // 0x51d(0x03)
	struct FVector HibernateBoundsExtension; // 0x520(0x0c)
	float hibernationStartTime; // 0x52c(0x04)
	float hibernationEndTime; // 0x530(0x04)
	float HibernationTransitionTime; // 0x534(0x04)
	float HibernationIndependance; // 0x538(0x04)
	bool Glide; // 0x53c(0x01)

	void CreateCreature(); // Function BP_FlyingCreature.BP_FlyingCreature_C.CreateCreature // Public|HasDefaults|BlueprintCallable|BlueprintEvent // @ game+0x1848130
	void UserConstructionScript(); // Function BP_FlyingCreature.BP_FlyingCreature_C.UserConstructionScript // Event|Public|BlueprintCallable|BlueprintEvent // @ game+0x1848130
};

