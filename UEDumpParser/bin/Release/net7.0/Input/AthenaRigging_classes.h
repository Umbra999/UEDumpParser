// Class AthenaRigging.InstancedRopeComponent
// Size: 0x680 (Inherited: 0x5c0)
struct UInstancedRopeComponent : UPrimitiveComponent {
	struct UStaticMesh* StaticMesh; // 0x5b8(0x08)
	struct TArray<struct FInstancedRopeParams> Ropes; // 0x5c0(0x10)
	int32_t ShadowLOD; // 0x5d0(0x04)
	char UnknownData_5DC[0xa4]; // 0x5dc(0xa4)

	void SetUnderwater(bool Underwater); // Function AthenaRigging.InstancedRopeComponent.SetUnderwater // Final|Native|Public|BlueprintCallable // @ game+0x421c710
	void SetRopes(struct TArray<struct FInstancedRopeParams> InRopes); // Function AthenaRigging.InstancedRopeComponent.SetRopes // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x421c5e0
};

// Class AthenaRigging.MaterialExpressionRopeParameter
// Size: 0x78 (Inherited: 0x70)
struct UMaterialExpressionRopeParameter : UMaterialExpression {
	char RopeParameterType; // 0x70(0x01)
	char UnknownData_71[0x7]; // 0x71(0x07)
};

// Class AthenaRigging.RiggingSystem
// Size: 0x518 (Inherited: 0x3c8)
struct ARiggingSystem : AActor {
	char UnknownData_3C8[0x8]; // 0x3c8(0x08)
	struct USceneComponent* Root; // 0x3d0(0x08)
	struct UInstancedRopeComponent* InstancedRopes; // 0x3d8(0x08)
	struct TArray<struct FRiggingSystemLine> Lines; // 0x3e0(0x10)
	struct TArray<struct FInstancedRopeParams> Ropes; // 0x3f0(0x10)
	struct TArray<struct UMobileInstancedStaticMeshComponent*> PulleyInstances; // 0x400(0x10)
	struct FRiggingSystemPulleyData Pulleys; // 0x410(0x60)
	struct TArray<struct FSocketId> Sockets; // 0x470(0x10)
	struct TArray<float> InitialMainRopeLengths; // 0x480(0x10)
	char UnknownData_490[0x88]; // 0x490(0x88)
};

// Class AthenaRigging.RiggingSystemComponent
// Size: 0x320 (Inherited: 0x2e0)
struct URiggingSystemComponent : USceneComponent {
	struct FRopeStyleParams RopeStyle; // 0x2e0(0x20)
	struct TArray<struct FRiggingSystemLineGroup> LineGroups; // 0x300(0x10)
	struct ARiggingSystem* Impl; // 0x310(0x08)
	char UnknownData_318[0x8]; // 0x318(0x08)

	void SetSocketLookupSource(struct AActor* InSocketSource); // Function AthenaRigging.RiggingSystemComponent.SetSocketLookupSource // Final|Native|Public|BlueprintCallable // @ game+0x421c690
	int32_t ConvertLineToRopeIndex(struct FName InLineGroupName, int32_t InLineOffset); // Function AthenaRigging.RiggingSystemComponent.ConvertLineToRopeIndex // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x421c3c0
};

// Class AthenaRigging.RopeCatenaryRenderComponent
// Size: 0x660 (Inherited: 0x660)
struct URopeCatenaryRenderComponent : UCordRenderComponent {
};

// Class AthenaRigging.RopeInterface
// Size: 0x28 (Inherited: 0x28)
struct URopeInterface : UInterface {

	void SetRopeUVOffset(float InUVOffset); // Function AthenaRigging.RopeInterface.SetRopeUVOffset // Native|Event|Public|BlueprintCallable|BlueprintEvent // @ game+0x421c560
	void SetRopeEndpoints(struct FVector InWorldSpaceStart, struct FVector InWorldSpaceEnd); // Function AthenaRigging.RopeInterface.SetRopeEndpoints // Native|Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent // @ game+0x421c480
};

