// Class Music.MusicZoneInterface
// Size: 0x28 (Inherited: 0x28)
struct UMusicZoneInterface : UInterface {

	bool CanPlayForPlayer(struct AActor* Player); // Function Music.MusicZoneInterface.CanPlayForPlayer // RequiredAPI|Native|Event|Public|BlueprintEvent|Const // @ game+0x3da1e30
};

// Class Music.MusicZoneComponent
// Size: 0x3a0 (Inherited: 0x2e0)
struct UMusicZoneComponent : USceneComponent {
	char UnknownData_2E0[0x8]; // 0x2e0(0x08)
	float InnerRadius; // 0x2e8(0x04)
	float OuterRadius; // 0x2ec(0x04)
	struct FName LocationRTPC; // 0x2f0(0x08)
	bool LocalRTPC; // 0x2f8(0x01)
	char UnknownData_2F9[0x7]; // 0x2f9(0x07)
	struct UWwiseEvent* PlayEvent; // 0x300(0x08)
	struct UWwiseEvent* StopEvent; // 0x308(0x08)
	struct TArray<struct UWwiseEvent*> OneShotEvents; // 0x310(0x10)
	struct UWwiseObjectPoolWrapper* EmitterPool; // 0x320(0x08)
	bool DisableAfterPlayThrough; // 0x328(0x01)
	bool ActivateOnBeginPlay; // 0x329(0x01)
	char UnknownData_32A[0x6]; // 0x32a(0x06)
	struct FMulticastDelegate OnMusicZoneStarted; // 0x330(0x10)
	char UnknownData_340[0x60]; // 0x340(0x60)

	struct FWwiseEmitter GetEmitter(); // Function Music.MusicZoneComponent.GetEmitter // Native|Public|BlueprintCallable // @ game+0x3da1f90
	void DisableZone(); // Function Music.MusicZoneComponent.DisableZone // Final|Native|Public|BlueprintCallable // @ game+0x3da1f70
	void Client_StopMusicAndDisableZone(); // Function Music.MusicZoneComponent.Client_StopMusicAndDisableZone // Net|NetReliableNative|Event|NetMulticast|Public // @ game+0x3da1f50
	void Client_PlayOneShot(int32_t Index); // Function Music.MusicZoneComponent.Client_PlayOneShot // Net|NetReliableNative|Event|NetMulticast|Public|BlueprintCallable // @ game+0x3da1ed0
	void ActivateZone(); // Function Music.MusicZoneComponent.ActivateZone // Final|Native|Public|BlueprintCallable // @ game+0x3da1e10
};

// Class Music.AISpawnerMusicZoneComponent
// Size: 0x3d0 (Inherited: 0x3a0)
struct UAISpawnerMusicZoneComponent : UMusicZoneComponent {
	struct UWwiseEvent* BattleWonEvent; // 0x3a0(0x08)
	struct UAISpawner* AISpawner; // 0x3a8(0x08)
	struct TArray<struct APawn*> SpawnerPawns; // 0x3b0(0x10)
	char SpawnerState; // 0x3c0(0x01)
	char UnknownData_3C1[0xf]; // 0x3c1(0x0f)

	void OnRep_SpawnerState(); // Function Music.AISpawnerMusicZoneComponent.OnRep_SpawnerState // Final|Native|Private // @ game+0x3da2010
};

// Class Music.SynchedMusicZoneComponent
// Size: 0x3d0 (Inherited: 0x3a0)
struct USynchedMusicZoneComponent : UMusicZoneComponent {
	float StartDelayTime; // 0x3a0(0x04)
	int32_t PlayFromStartTimeMS; // 0x3a4(0x04)
	char UnknownData_3A8[0x28]; // 0x3a8(0x28)
};

// Class Music.MusicZoneServiceInterface
// Size: 0x28 (Inherited: 0x28)
struct UMusicZoneServiceInterface : UInterface {
};

// Class Music.MusicZoneService
// Size: 0x490 (Inherited: 0x3c8)
struct AMusicZoneService : AActor {
	char UnknownData_3C8[0xc8]; // 0x3c8(0xc8)
};

