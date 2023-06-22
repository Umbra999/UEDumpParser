// BlueprintGeneratedClass BP_Placement_Garden.BP_Placement_Garden_C
// Size: 0x46d (Inherited: 0x3c8)
struct ABP_Placement_Garden_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3c8(0x08)
	struct UBillboardComponent* Billboard; // 0x3d0(0x08)
	struct USphereComponent* Spherical Volume; // 0x3d8(0x08)
	struct USceneComponent* Scene; // 0x3e0(0x08)
	struct TArray<struct FPlacementGardenSeed> Meshes; // 0x3e8(0x10)
	float Radius; // 0x3f8(0x04)
	bool Radius Visible; // 0x3fc(0x01)
	char UnknownData_3FD[0x3]; // 0x3fd(0x03)
	float Spawn Density; // 0x400(0x04)
	float Spawn Clustering; // 0x404(0x04)
	int32_t Seed; // 0x408(0x04)
	char UnknownData_40C[0x4]; // 0x40c(0x04)
	struct TArray<struct UObject*> Physical Materials; // 0x410(0x10)
	bool Update On Drag; // 0x420(0x01)
	char UnknownData_421[0x7]; // 0x421(0x07)
	struct TArray<float> Mesh Probabilities; // 0x428(0x10)
	struct TArray<struct UInstancedStaticMeshComponent*> Instanced Meshes; // 0x438(0x10)
	struct FRandomStream Random; // 0x448(0x08)
	int32_t Instance Count; // 0x450(0x04)
	char UnknownData_454[0x4]; // 0x454(0x04)
	struct TArray<struct FLinearColor> Mesh Radii; // 0x458(0x10)
	float Max Draw Distance; // 0x468(0x04)
	bool Cast Shadows; // 0x46c(0x01)

	void Set Garden Parameters(float Radius, int32_t Int, bool Instances Created); // Function BP_Placement_Garden.BP_Placement_Garden_C.Set Garden Parameters // Public|HasOutParms|BlueprintCallable|BlueprintEvent // @ game+0x1848130
	void Create Garden(); // Function BP_Placement_Garden.BP_Placement_Garden_C.Create Garden // Public|HasDefaults|BlueprintCallable|BlueprintEvent // @ game+0x1848130
	void Initialise Instances(); // Function BP_Placement_Garden.BP_Placement_Garden_C.Initialise Instances // Public|HasDefaults|BlueprintCallable|BlueprintEvent // @ game+0x1848130
	void UserConstructionScript(); // Function BP_Placement_Garden.BP_Placement_Garden_C.UserConstructionScript // Event|Public|BlueprintCallable|BlueprintEvent // @ game+0x1848130
	void Force Create Garden(); // Function BP_Placement_Garden.BP_Placement_Garden_C.Force Create Garden // BlueprintCallable|BlueprintEvent // @ game+0x1848130
	void ExecuteUbergraph_BP_Placement_Garden(int32_t EntryPoint); // Function BP_Placement_Garden.BP_Placement_Garden_C.ExecuteUbergraph_BP_Placement_Garden //  // @ game+0x1848130
};

