// BlueprintGeneratedClass BP_PlayerBuriedItemsMapBundleInteractionPoint.BP_PlayerBuriedItemsMapBundleInteractionPoint_C
// Size: 0x3f8 (Inherited: 0x3c8)
struct ABP_PlayerBuriedItemsMapBundleInteractionPoint_C : AActor {
	struct UPlayerBuriedItemsMapBundleInteractionComponent* PlayerBuriedItemsMapBundleInteraction; // 0x3c8(0x08)
	struct UActionRulesComponent* ActionRules; // 0x3d0(0x08)
	struct UStaticMeshComponent* Mesh; // 0x3d8(0x08)
	struct UStaticMesh* Token Asset; // 0x3e0(0x08)
	float Show Token Animation Time; // 0x3e8(0x04)
	char UnknownData_3EC[0x4]; // 0x3ec(0x04)
	struct UMaterialInterface* Token Material; // 0x3f0(0x08)

	void GetObjectDisplayName(); // Function BP_PlayerBuriedItemsMapBundleInteractionPoint.BP_PlayerBuriedItemsMapBundleInteractionPoint_C.GetObjectDisplayName // BlueprintCallable|BlueprintEvent // @ game+0x1848130
	void UserConstructionScript(); // Function BP_PlayerBuriedItemsMapBundleInteractionPoint.BP_PlayerBuriedItemsMapBundleInteractionPoint_C.UserConstructionScript // Event|Public|BlueprintCallable|BlueprintEvent // @ game+0x1848130
};

