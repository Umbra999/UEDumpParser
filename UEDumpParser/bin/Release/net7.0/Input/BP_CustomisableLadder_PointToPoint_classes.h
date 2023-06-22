// BlueprintGeneratedClass BP_CustomisableLadder_PointToPoint.BP_CustomisableLadder_PointToPoint_C
// Size: 0x68c (Inherited: 0x668)
struct ABP_CustomisableLadder_PointToPoint_C : ABP_CustomisableLadder_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x668(0x08)
	float Ladder Roll; // 0x670(0x04)
	struct FVector Ladder Top Target; // 0x674(0x0c)
	struct FVector Ladder Bottom Target; // 0x680(0x0c)

	void Orientate Ladder(struct FVector Point A, struct FVector Point B); // Function BP_CustomisableLadder_PointToPoint.BP_CustomisableLadder_PointToPoint_C.Orientate Ladder // Public|BlueprintCallable|BlueprintEvent // @ game+0x1848130
	void UserConstructionScript(); // Function BP_CustomisableLadder_PointToPoint.BP_CustomisableLadder_PointToPoint_C.UserConstructionScript // Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent // @ game+0x1848130
	void ReceiveBeginPlay(); // Function BP_CustomisableLadder_PointToPoint.BP_CustomisableLadder_PointToPoint_C.ReceiveBeginPlay // Event|Public|BlueprintEvent // @ game+0x1848130
	void ExecuteUbergraph_BP_CustomisableLadder_PointToPoint(int32_t EntryPoint); // Function BP_CustomisableLadder_PointToPoint.BP_CustomisableLadder_PointToPoint_C.ExecuteUbergraph_BP_CustomisableLadder_PointToPoint //  // @ game+0x1848130
};

