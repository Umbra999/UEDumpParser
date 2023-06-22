// BlueprintGeneratedClass BP_GhostShip_TornadoCloud.BP_GhostShip_TornadoCloud_C
// Size: 0x650 (Inherited: 0x530)
struct ABP_GhostShip_TornadoCloud_C : ABP_NonRotatableSignalCloud_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x530(0x08)
	struct UStaticMeshComponent* TopSwirl; // 0x538(0x08)
	struct UStaticMeshComponent* Tendril08; // 0x540(0x08)
	struct UStaticMeshComponent* Tendril07; // 0x548(0x08)
	struct UStaticMeshComponent* Tendril06; // 0x550(0x08)
	struct UStaticMeshComponent* Tendril05; // 0x558(0x08)
	struct UStaticMeshComponent* Tendril04; // 0x560(0x08)
	struct UStaticMeshComponent* Tendril03; // 0x568(0x08)
	struct UStaticMeshComponent* Tendril02; // 0x570(0x08)
	struct UStaticMeshComponent* Tendril01; // 0x578(0x08)
	struct UStaticMeshComponent* OuterSwirls; // 0x580(0x08)
	struct UStaticMeshComponent* TornadoMain; // 0x588(0x08)
	struct UStaticMeshComponent* vfx_tornado_top_cloud; // 0x590(0x08)
	struct UStaticMeshComponent* Cloud; // 0x598(0x08)
	struct UStaticMeshComponent* lightning_bolt_03_a; // 0x5a0(0x08)
	struct UStaticMeshComponent* lightning_bolt_02_a; // 0x5a8(0x08)
	struct UStaticMeshComponent* lightning_bolt_01_a; // 0x5b0(0x08)
	struct TArray<struct UMaterialInstanceDynamic*> DynamicMaterials; // 0x5b8(0x10)
	struct UMaterialInstanceDynamic* MainTornadoMat; // 0x5c8(0x08)
	struct UMaterialInstanceDynamic* OuterSwirlsMat; // 0x5d0(0x08)
	struct UMaterialInstanceDynamic* TopSwirlMat; // 0x5d8(0x08)
	struct UMaterialInstanceDynamic* CloudMat; // 0x5e0(0x08)
	bool CachedShowLightning; // 0x5e8(0x01)
	char UnknownData_5E9[0x7]; // 0x5e9(0x07)
	struct UCurveFloat* CloudCurve; // 0x5f0(0x08)
	struct UMaterialInstanceDynamic* CloseGhostMat; // 0x5f8(0x08)
	struct UMaterialInstanceDynamic* GhostMat; // 0x600(0x08)
	struct UMaterialInstanceDynamic* Tendril_01; // 0x608(0x08)
	struct UMaterialInstanceDynamic* Tendril_02; // 0x610(0x08)
	struct UMaterialInstanceDynamic* Tendril_03; // 0x618(0x08)
	struct UMaterialInstanceDynamic* Tendril_04; // 0x620(0x08)
	struct UMaterialInstanceDynamic* Tendril_05; // 0x628(0x08)
	struct UMaterialInstanceDynamic* Tendril_06; // 0x630(0x08)
	struct UMaterialInstanceDynamic* Tendril_07; // 0x638(0x08)
	struct UMaterialInstanceDynamic* Tendril_08; // 0x640(0x08)
	struct UMaterialInstanceDynamic* CloudMat_Upper; // 0x648(0x08)

	void IntializeGhostMaterials(); // Function BP_GhostShip_TornadoCloud.BP_GhostShip_TornadoCloud_C.IntializeGhostMaterials // Public|BlueprintCallable|BlueprintEvent // @ game+0x1848130
	void CheckShowLightning(float Alpha); // Function BP_GhostShip_TornadoCloud.BP_GhostShip_TornadoCloud_C.CheckShowLightning // Public|BlueprintCallable|BlueprintEvent // @ game+0x1848130
	void UpdateTornadoMaterials(float CloudAlpha, float Alpha); // Function BP_GhostShip_TornadoCloud.BP_GhostShip_TornadoCloud_C.UpdateTornadoMaterials // Public|BlueprintCallable|BlueprintEvent // @ game+0x1848130
	void HideTornadoMeshParts(); // Function BP_GhostShip_TornadoCloud.BP_GhostShip_TornadoCloud_C.HideTornadoMeshParts // Public|BlueprintCallable|BlueprintEvent // @ game+0x1848130
	void IntializeTornadoMaterials(); // Function BP_GhostShip_TornadoCloud.BP_GhostShip_TornadoCloud_C.IntializeTornadoMaterials // Public|BlueprintCallable|BlueprintEvent // @ game+0x1848130
	void CollectMaterials(); // Function BP_GhostShip_TornadoCloud.BP_GhostShip_TornadoCloud_C.CollectMaterials // Public|BlueprintCallable|BlueprintEvent // @ game+0x1848130
	void UserConstructionScript(); // Function BP_GhostShip_TornadoCloud.BP_GhostShip_TornadoCloud_C.UserConstructionScript // Event|Public|BlueprintCallable|BlueprintEvent // @ game+0x1848130
	void ReceiveBeginPlay(); // Function BP_GhostShip_TornadoCloud.BP_GhostShip_TornadoCloud_C.ReceiveBeginPlay // Event|Public|BlueprintEvent // @ game+0x1848130
	void UpdateMaterialVisibility(struct FLinearColor SignalVisibilityLerpValue); // Function BP_GhostShip_TornadoCloud.BP_GhostShip_TornadoCloud_C.UpdateMaterialVisibility // Event|Public|BlueprintCallable|BlueprintEvent // @ game+0x1848130
	void ExecuteUbergraph_BP_GhostShip_TornadoCloud(int32_t EntryPoint); // Function BP_GhostShip_TornadoCloud.BP_GhostShip_TornadoCloud_C.ExecuteUbergraph_BP_GhostShip_TornadoCloud //  // @ game+0x1848130
};

