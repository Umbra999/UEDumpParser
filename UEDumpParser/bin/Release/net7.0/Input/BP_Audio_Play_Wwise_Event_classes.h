// BlueprintGeneratedClass BP_Audio_Play_Wwise_Event.BP_Audio_Play_Wwise_Event_C
// Size: 0x400 (Inherited: 0x3c8)
struct ABP_Audio_Play_Wwise_Event_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3c8(0x08)
	struct UWwiseEmitterComponent* BPAudioEvent; // 0x3d0(0x08)
	struct TArray<struct UWwiseEvent*> WwiseEvent; // 0x3d8(0x10)
	struct FName Wwise Game Parameter; // 0x3e8(0x08)
	float Wwise Game Parameter Value; // 0x3f0(0x04)
	char UnknownData_3F4[0x4]; // 0x3f4(0x04)
	struct UWwiseObjectPoolWrapper* Wwise Object Pool Wrapper; // 0x3f8(0x08)

	void UserConstructionScript(); // Function BP_Audio_Play_Wwise_Event.BP_Audio_Play_Wwise_Event_C.UserConstructionScript // Event|Public|BlueprintCallable|BlueprintEvent // @ game+0x1848130
	void ReceiveBeginPlay(); // Function BP_Audio_Play_Wwise_Event.BP_Audio_Play_Wwise_Event_C.ReceiveBeginPlay // Event|Public|BlueprintEvent // @ game+0x1848130
	void ExecuteUbergraph_BP_Audio_Play_Wwise_Event(int32_t EntryPoint); // Function BP_Audio_Play_Wwise_Event.BP_Audio_Play_Wwise_Event_C.ExecuteUbergraph_BP_Audio_Play_Wwise_Event //  // @ game+0x1848130
};

