// BlueprintGeneratedClass BP_Castaway.BP_Castaway_C
// Size: 0x6f0 (Inherited: 0x6c8)
struct ABP_Castaway_C : ABP_Orderofsouls_TallTales_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x6c8(0x08)
	struct UActorPhasingComponent* ActorPhasing; // 0x6d0(0x08)
	struct UAnimNotifyWwiseEmitterComponent* AnimNotifyWwiseEmitter_1; // 0x6d8(0x08)
	struct TArray<struct UWwiseEvent*> AudioEvents; // 0x6e0(0x10)

	void UserConstructionScript(); // Function BP_Castaway.BP_Castaway_C.UserConstructionScript // Event|Public|BlueprintCallable|BlueprintEvent // @ game+0x1848130
	void TriggerAudioEvent(struct UWwiseEvent* AudioEvent); // Function BP_Castaway.BP_Castaway_C.TriggerAudioEvent // Event|Public|BlueprintEvent // @ game+0x1848130
	void StopCurrentAudioEvent(); // Function BP_Castaway.BP_Castaway_C.StopCurrentAudioEvent // Event|Public|BlueprintEvent // @ game+0x1848130
	void Multicast_TriggerAudioEvent(int32_t EventIdx); // Function BP_Castaway.BP_Castaway_C.Multicast_TriggerAudioEvent // Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent // @ game+0x1848130
	void ResetVisibility(); // Function BP_Castaway.BP_Castaway_C.ResetVisibility // Event|Public|BlueprintEvent // @ game+0x1848130
	void ExecuteUbergraph_BP_Castaway(int32_t EntryPoint); // Function BP_Castaway.BP_Castaway_C.ExecuteUbergraph_BP_Castaway //  // @ game+0x1848130
};

