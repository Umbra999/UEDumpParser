// BlueprintGeneratedClass BP_Shipwright.BP_Shipwright_C
// Size: 0x708 (Inherited: 0x6a8)
struct ABP_Shipwright_C : ANPC {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x6a8(0x08)
	struct UNamedNPCComponent* NamedNPC; // 0x6b0(0x08)
	struct UCargoRunParticipantComponent* CargoRunParticipant; // 0x6b8(0x08)
	struct UNPCDialogComponent* NPCDialogComponent; // 0x6c0(0x08)
	struct UAnimNotifyWwiseEmitterComponent* AnimNotifyWwiseEmitter; // 0x6c8(0x08)
	struct UCapsuleComponent* SolidHits; // 0x6d0(0x08)
	struct FWwiseEmitter WwiseEmitter; // 0x6d8(0x20)
	struct UWwiseEvent* WwiseShipwrightHummingPlay; // 0x6f8(0x08)
	struct UWwiseEvent* WwiseShipwrightHummingStop; // 0x700(0x08)

	void UserConstructionScript(); // Function BP_Shipwright.BP_Shipwright_C.UserConstructionScript // Event|Public|BlueprintCallable|BlueprintEvent // @ game+0x1848130
	void ReceiveBeginPlay(); // Function BP_Shipwright.BP_Shipwright_C.ReceiveBeginPlay // Event|Public|BlueprintEvent // @ game+0x1848130
	void ReceiveEndPlay(char EndPlayReason); // Function BP_Shipwright.BP_Shipwright_C.ReceiveEndPlay // Event|Public|BlueprintEvent // @ game+0x1848130
	void ExecuteUbergraph_BP_Shipwright(int32_t EntryPoint); // Function BP_Shipwright.BP_Shipwright_C.ExecuteUbergraph_BP_Shipwright // HasDefaults // @ game+0x1848130
};

