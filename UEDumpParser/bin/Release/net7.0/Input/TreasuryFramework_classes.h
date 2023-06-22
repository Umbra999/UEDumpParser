// Class TreasuryFramework.ShimmerActor
// Size: 0x470 (Inherited: 0x3c8)
struct AShimmerActor : AActor {
	char UnknownData_3C8[0xa8]; // 0x3c8(0xa8)

	void OnDeactivateShimmer(); // Function TreasuryFramework.ShimmerActor.OnDeactivateShimmer // Native|Event|Public|BlueprintEvent // @ game+0x1685090
	void OnActivateShimmer(); // Function TreasuryFramework.ShimmerActor.OnActivateShimmer // Native|Event|Public|BlueprintEvent // @ game+0x1685070
};

// Class TreasuryFramework.TreasuryWaveDataAsset
// Size: 0x68 (Inherited: 0x28)
struct UTreasuryWaveDataAsset : UDataAsset {
	struct TArray<struct UAIProgressiveWavesSpawner*> Waves1Player; // 0x28(0x10)
	struct TArray<struct UAIProgressiveWavesSpawner*> Waves2Player; // 0x38(0x10)
	struct TArray<struct UAIProgressiveWavesSpawner*> Waves3Player; // 0x48(0x10)
	struct TArray<struct UAIProgressiveWavesSpawner*> Waves4Player; // 0x58(0x10)
};

// Class TreasuryFramework.TreasuryRoom
// Size: 0x4f8 (Inherited: 0x3c8)
struct ATreasuryRoom : AActor {
	char UnknownData_3C8[0x8]; // 0x3c8(0x08)
	struct UBoxComponent* RoomAreaComponent; // 0x3d0(0x08)
	float TreasuryInactiveDurationMinSeconds; // 0x3d8(0x04)
	float TreasuryInactiveDurationMaxSeconds; // 0x3dc(0x04)
	float RoomFailureDurationSeconds; // 0x3e0(0x04)
	float WaveDelaySeconds; // 0x3e4(0x04)
	float EncounterDelaySeconds; // 0x3e8(0x04)
	float VaultDoorAnimDurationSeconds; // 0x3ec(0x04)
	float VaultDoorOpenDurationSeconds; // 0x3f0(0x04)
	int32_t MinWavesInEncounter; // 0x3f4(0x04)
	int32_t MaxWavesInEncounter; // 0x3f8(0x04)
	int32_t MaxEncounters; // 0x3fc(0x04)
	struct TArray<struct FTreasuryWaveEncounter> WaveEncounters; // 0x400(0x10)
	struct AActor* FloodMechanismActor; // 0x410(0x08)
	struct AActor* FloodTriggerActor; // 0x418(0x08)
	struct AActor* DrainMechanismActor; // 0x420(0x08)
	struct AActor* DrainTriggerActor; // 0x428(0x08)
	struct AActor* VaultMechanismActor; // 0x430(0x08)
	struct AActor* VaultTriggerActor; // 0x438(0x08)
	struct UClass* VaultLootSpawner; // 0x440(0x08)
	struct AActor* VaultLootSpawnLocationActor; // 0x448(0x08)
	struct AActor* Shimmer; // 0x450(0x20)
	struct TArray<struct AActor*> OverlappingActors; // 0x470(0x10)
	struct TArray<struct AController*> CachedParticipantControllers; // 0x480(0x10)
	struct AActor* VaultLootSpawnerActor; // 0x490(0x08)
	struct FPlayerStat VaultOpenStat; // 0x498(0x04)
	char UnknownData_49C[0x4]; // 0x49c(0x04)
	struct UMechanismActionComponent* FloodMechanismComponent; // 0x4a0(0x08)
	struct UMechanismActionComponent* DrainMechanismComponent; // 0x4a8(0x08)
	struct UMechanismActionComponent* VaultMechanismComponent; // 0x4b0(0x08)
	TScriptInterface<struct UMechanismTriggerInterface> FloodTriggerComponent; // 0x4b8(0x10)
	TScriptInterface<struct UMechanismTriggerInterface> DrainTriggerComponent; // 0x4c8(0x10)
	TScriptInterface<struct UMechanismTriggerInterface> VaultTriggerComponent; // 0x4d8(0x10)
	char UnknownData_4E8[0x10]; // 0x4e8(0x10)

	void OnWaveStart(char EncounterType, char WaveType); // Function TreasuryFramework.TreasuryRoom.OnWaveStart // Native|Event|Public|BlueprintEvent // @ game+0x1685690
	void OnWaveFinishedVaultMaster(TScriptInterface<struct UMechanismActionInterface> Action); // Function TreasuryFramework.TreasuryRoom.OnWaveFinishedVaultMaster // Final|Native|Protected // @ game+0x16855f0
	void OnWaveFinished(TScriptInterface<struct UMechanismActionInterface> Action); // Function TreasuryFramework.TreasuryRoom.OnWaveFinished // Final|Native|Protected // @ game+0x1685550
	void OnWaveComplete(char EncounterType); // Function TreasuryFramework.TreasuryRoom.OnWaveComplete // Native|Event|Public|BlueprintEvent // @ game+0x16854d0
	void OnVaultOpen(); // Function TreasuryFramework.TreasuryRoom.OnVaultOpen // Native|Event|Public|BlueprintEvent // @ game+0x16854b0
	void OnVaultClosed(); // Function TreasuryFramework.TreasuryRoom.OnVaultClosed // Native|Event|Public|BlueprintEvent // @ game+0x1685490
	void OnTreasuryStateChange(char PrevState, char NewState); // Function TreasuryFramework.TreasuryRoom.OnTreasuryStateChange // Native|Event|Public|BlueprintEvent // @ game+0x16853d0
	void OnTreasuryDeactivate(); // Function TreasuryFramework.TreasuryRoom.OnTreasuryDeactivate // Native|Event|Public|BlueprintEvent // @ game+0x16853b0
	void OnTreasuryActivate(); // Function TreasuryFramework.TreasuryRoom.OnTreasuryActivate // Native|Event|Public|BlueprintEvent // @ game+0x1685390
	void OnStartRaiseWater(); // Function TreasuryFramework.TreasuryRoom.OnStartRaiseWater // Native|Event|Public|BlueprintEvent // @ game+0x1685370
	void OnStartDrainWater(); // Function TreasuryFramework.TreasuryRoom.OnStartDrainWater // Native|Event|Public|BlueprintEvent // @ game+0x1685350
	void OnRoomStarted(); // Function TreasuryFramework.TreasuryRoom.OnRoomStarted // Native|Event|Public|BlueprintEvent // @ game+0x1685330
	void OnRaisedWater(TScriptInterface<struct UMechanismResetInterface> Action); // Function TreasuryFramework.TreasuryRoom.OnRaisedWater // Final|Native|Protected // @ game+0x1685290
	void OnLeaveRoom(struct AActor* OtherActor); // Function TreasuryFramework.TreasuryRoom.OnLeaveRoom // BlueprintAuthorityOnly|Native|Event|Public|BlueprintEvent // @ game+0x1685200
	void OnEnterRoom(struct AActor* OtherActor); // Function TreasuryFramework.TreasuryRoom.OnEnterRoom // BlueprintAuthorityOnly|Native|Event|Public|BlueprintEvent // @ game+0x1685170
	void OnEncounterParamsSetup(); // Function TreasuryFramework.TreasuryRoom.OnEncounterParamsSetup // Native|Event|Public|BlueprintEvent // @ game+0x1685150
	void OnDrainedWater(TScriptInterface<struct UMechanismResetInterface> Action); // Function TreasuryFramework.TreasuryRoom.OnDrainedWater // Final|Native|Protected // @ game+0x16850b0
	char GetState(); // Function TreasuryFramework.TreasuryRoom.GetState // Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x1685040
};

