// BlueprintGeneratedClass BP_Storm.BP_Storm_C
// Size: 0x650 (Inherited: 0x628)
struct ABP_Storm_C : AStorm {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x628(0x08)
	struct UStaticMeshComponent* Lightning4; // 0x630(0x08)
	struct UStaticMeshComponent* Lightning3; // 0x638(0x08)
	struct UStaticMeshComponent* Lightning2; // 0x640(0x08)
	struct UStaticMeshComponent* Lightning1; // 0x648(0x08)

	void UserConstructionScript(); // Function BP_Storm.BP_Storm_C.UserConstructionScript // Event|Public|BlueprintCallable|BlueprintEvent // @ game+0x1848130
	void ReceiveBeginPlay(); // Function BP_Storm.BP_Storm_C.ReceiveBeginPlay // Event|Public|BlueprintEvent // @ game+0x1848130
	void ReceiveTick(float DeltaSeconds); // Function BP_Storm.BP_Storm_C.ReceiveTick // Event|Public|BlueprintEvent // @ game+0x1848130
	void ExecuteUbergraph_BP_Storm(int32_t EntryPoint); // Function BP_Storm.BP_Storm_C.ExecuteUbergraph_BP_Storm //  // @ game+0x1848130
};

