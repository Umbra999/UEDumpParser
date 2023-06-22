// Class ServerMigration.MigrationControlChannel
// Size: 0xb0 (Inherited: 0x68)
struct UMigrationControlChannel : UChannel {
	char UnknownData_68[0x48]; // 0x68(0x48)
};

// Class ServerMigration.MigrationRelevancyClusterActor
// Size: 0x3c8 (Inherited: 0x3c8)
struct AMigrationRelevancyClusterActor : AActor {
};

// Class ServerMigration.NetworkTestingBlueprintFunctionLibrary
// Size: 0x28 (Inherited: 0x28)
struct UNetworkTestingBlueprintFunctionLibrary : UBlueprintFunctionLibrary {

	void SwitchNetworkClusterForActor(struct AActor* TargetActor, struct AActor* NewOwner); // Function ServerMigration.NetworkTestingBlueprintFunctionLibrary.SwitchNetworkClusterForActor // Final|Native|Static|Public|BlueprintCallable // @ game+0x340f670
	void SetConnectionLastReceiveTime(struct APlayerController* PlayerController, float OffsetFromDriverTime); // Function ServerMigration.NetworkTestingBlueprintFunctionLibrary.SetConnectionLastReceiveTime // Final|Native|Static|Public|BlueprintCallable // @ game+0x340f2e0
	void ResumePropertyTracking(struct AActor* TargetActor); // Function ServerMigration.NetworkTestingBlueprintFunctionLibrary.ResumePropertyTracking // Final|Native|Static|Public|BlueprintCallable // @ game+0x340f200
	void PausePropertyTrackingOnNextSend(struct AActor* TargetActor); // Function ServerMigration.NetworkTestingBlueprintFunctionLibrary.PausePropertyTrackingOnNextSend // Final|Native|Static|Public|BlueprintCallable // @ game+0x340f000
	bool IsComponentNetDormant(int32_t ClientConnectionIdx, struct UActorComponent* TargetComponent); // Function ServerMigration.NetworkTestingBlueprintFunctionLibrary.IsComponentNetDormant // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x340ef40
	bool IsActorNetRelevantFor(struct AActor* TargetActor, struct APlayerController* PlayerController); // Function ServerMigration.NetworkTestingBlueprintFunctionLibrary.IsActorNetRelevantFor // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x340ee80
	bool IsActorNetDormant(struct AActor* TargetActor); // Function ServerMigration.NetworkTestingBlueprintFunctionLibrary.IsActorNetDormant // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x340ee00
	bool IsActorInNetworkClusterGlobal(struct AActor* TargetActor); // Function ServerMigration.NetworkTestingBlueprintFunctionLibrary.IsActorInNetworkClusterGlobal // Final|Native|Static|Public|BlueprintCallable // @ game+0x340ed80
	bool IsActorInNetworkCluster(struct AActor* TargetActor, struct AActor* NetworkClusterOwner); // Function ServerMigration.NetworkTestingBlueprintFunctionLibrary.IsActorInNetworkCluster // Final|RequiredAPI|Native|Static|Public|BlueprintCallable // @ game+0x340ecc0
	bool IsActorInLevelNetworkClusterOnOwner(struct AActor* TargetActor, struct AActor* LevelOwner); // Function ServerMigration.NetworkTestingBlueprintFunctionLibrary.IsActorInLevelNetworkClusterOnOwner // Final|Native|Static|Public|BlueprintCallable // @ game+0x340ec00
	bool IsActorInLevelNetworkCluster(struct AActor* TargetActor, struct FName Level); // Function ServerMigration.NetworkTestingBlueprintFunctionLibrary.IsActorInLevelNetworkCluster // Final|Native|Static|Public|BlueprintCallable // @ game+0x340eb40
	bool HasComponentReplicator(int32_t ClientConnectionIdx, struct UActorComponent* TargetComponent); // Function ServerMigration.NetworkTestingBlueprintFunctionLibrary.HasComponentReplicator // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x340ea80
	int32_t GetReliableBufferBunchCount(struct AActor* TargetActor); // Function ServerMigration.NetworkTestingBlueprintFunctionLibrary.GetReliableBufferBunchCount // Final|Native|Static|Public|BlueprintCallable // @ game+0x340e980
	bool FlushComponentNetDormancy(struct UActorComponent* TargetComponent); // Function ServerMigration.NetworkTestingBlueprintFunctionLibrary.FlushComponentNetDormancy // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x340e900
	void ClearRecentRelevanceTimerForPlayer(struct AActor* TargetActor, struct APlayerController* PlayerController); // Function ServerMigration.NetworkTestingBlueprintFunctionLibrary.ClearRecentRelevanceTimerForPlayer // Final|Native|Static|Public|BlueprintCallable // @ game+0x340e750
	void ClearRecentRelevanceTimer(struct AActor* TargetActor); // Function ServerMigration.NetworkTestingBlueprintFunctionLibrary.ClearRecentRelevanceTimer // Final|Native|Static|Public|BlueprintCallable // @ game+0x340e6e0
};

// Class ServerMigration.ServerMigrationBlueprintFunctionLibrary
// Size: 0x28 (Inherited: 0x28)
struct UServerMigrationBlueprintFunctionLibrary : UBlueprintFunctionLibrary {

	void WaitWhileMigrationInProgress(struct UObject* WorldContextObject, struct FLatentActionInfo LatentInfo); // Function ServerMigration.ServerMigrationBlueprintFunctionLibrary.WaitWhileMigrationInProgress // Final|Native|Static|Public|BlueprintCallable // @ game+0x3410130
	void WaitForPendingNetTraffic(struct UObject* WorldContextObject, struct FLatentActionInfo LatentInfo, struct AActor* TargetActor); // Function ServerMigration.ServerMigrationBlueprintFunctionLibrary.WaitForPendingNetTraffic // Final|Native|Static|Public|BlueprintCallable // @ game+0x3410010
	void WaitForMigrationCompletedEvent(struct UObject* WorldContextObject, struct FLatentActionInfo LatentInfo); // Function ServerMigration.ServerMigrationBlueprintFunctionLibrary.WaitForMigrationCompletedEvent // Final|Native|Static|Public|BlueprintCallable // @ game+0x340ff30
	void WaitForClientsToHaveActorChannel(struct UObject* WorldContextObject, struct FLatentActionInfo LatentInfo, struct AActor* TargetActor); // Function ServerMigration.ServerMigrationBlueprintFunctionLibrary.WaitForClientsToHaveActorChannel // Final|Native|Static|Public|BlueprintCallable // @ game+0x340fe10
	struct TArray<char> TestSerialiseActorToBuffer(struct AActor* TargetActor); // Function ServerMigration.ServerMigrationBlueprintFunctionLibrary.TestSerialiseActorToBuffer // Final|Native|Static|Public|BlueprintCallable // @ game+0x340fd30
	struct TArray<char> TestSerialiseActorGroupToBuffer(struct TArray<struct AActor*> ActorGroup); // Function ServerMigration.ServerMigrationBlueprintFunctionLibrary.TestSerialiseActorGroupToBuffer // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x340fc30
	struct AActor* TestDeserialiseActorWithOffsetFromBuffer(struct UObject* WorldContextObject, struct TArray<char> Buffer, struct FVector Offset); // Function ServerMigration.ServerMigrationBlueprintFunctionLibrary.TestDeserialiseActorWithOffsetFromBuffer // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x340fae0
	struct TArray<struct AActor*> TestDeserialiseActorGroupWithOffsetFromBuffer(struct UObject* WorldContextObject, struct TArray<char> Buffer, struct FVector Offset); // Function ServerMigration.ServerMigrationBlueprintFunctionLibrary.TestDeserialiseActorGroupWithOffsetFromBuffer // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x340f950
	struct TArray<struct AActor*> TestDeserialiseActorGroupFromBuffer(struct UObject* WorldContextObject, struct TArray<char> Buffer); // Function ServerMigration.ServerMigrationBlueprintFunctionLibrary.TestDeserialiseActorGroupFromBuffer // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x340f810
	struct AActor* TestDeserialiseActorFromBuffer(struct UObject* WorldContextObject, struct TArray<char> Buffer); // Function ServerMigration.ServerMigrationBlueprintFunctionLibrary.TestDeserialiseActorFromBuffer // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x340f720
	void SetServerMigrationTestServerSettings(struct UObject* WorldContextObject, struct FServerSettings Settings); // Function ServerMigration.ServerMigrationBlueprintFunctionLibrary.SetServerMigrationTestServerSettings // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x340f5a0
	void SetServerMigrationTestClientSettings(struct UObject* WorldContextObject, struct FClientSettings Settings); // Function ServerMigration.ServerMigrationBlueprintFunctionLibrary.SetServerMigrationTestClientSettings // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x340f4d0
	void SetPacketSimulationSettings(struct UObject* WorldContextObject, int32_t PacketLag, int32_t PacketLagVariance, int32_t PacketLoss); // Function ServerMigration.ServerMigrationBlueprintFunctionLibrary.SetPacketSimulationSettings // Final|Native|Static|Public|BlueprintCallable // @ game+0x340f3a0
	void ResumeReplication(struct AActor* TargetActor); // Function ServerMigration.ServerMigrationBlueprintFunctionLibrary.ResumeReplication // Final|Native|Static|Public|BlueprintCallable // @ game+0x340f270
	void RegisterPersistentDynamicActor(struct AActor* TargetActor, struct FString IdentificationName); // Function ServerMigration.ServerMigrationBlueprintFunctionLibrary.RegisterPersistentDynamicActor // Final|Native|Static|Public|BlueprintCallable // @ game+0x340f130
	void PauseReplication(struct AActor* TargetActor, bool bDropUnreliableRPCsWhilePaused); // Function ServerMigration.ServerMigrationBlueprintFunctionLibrary.PauseReplication // Final|Native|Static|Public|BlueprintCallable // @ game+0x340f070
	bool HasActorChannelFromServer(struct AActor* TargetActor); // Function ServerMigration.ServerMigrationBlueprintFunctionLibrary.HasActorChannelFromServer // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x340ea00
	bool ClientsHaveDormantActor(struct AActor* TargetActor); // Function ServerMigration.ServerMigrationBlueprintFunctionLibrary.ClientsHaveDormantActor // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x340e880
	bool ClientsHaveActorChannel(struct AActor* TargetActor); // Function ServerMigration.ServerMigrationBlueprintFunctionLibrary.ClientsHaveActorChannel // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x340e800
};

// Class ServerMigration.ServerMigrationSerialisationDetailsTestsActorRef
// Size: 0x30 (Inherited: 0x28)
struct UServerMigrationSerialisationDetailsTestsActorRef : UObject {
	struct AActor* ActorReferenceWithMigrationMarkup; // 0x28(0x08)
};

// Class ServerMigration.ServerMigrationSerialisationDetailsTestsActorThatMovesOnBeginPlay
// Size: 0x3d0 (Inherited: 0x3c8)
struct AServerMigrationSerialisationDetailsTestsActorThatMovesOnBeginPlay : AActor {
	struct UPrimitiveComponent* PrimitiveComponent; // 0x3c8(0x08)
};

// Class ServerMigration.ServerMigrationSerialisationDetailsTestsActorWithChild
// Size: 0x3d0 (Inherited: 0x3c8)
struct AServerMigrationSerialisationDetailsTestsActorWithChild : AActor {
	struct UChildActorComponent* ChildActorComponent; // 0x3c8(0x08)
};

// Class ServerMigration.ServerMigrationSerialisationDetailsTestsActorWithReplicatedChild
// Size: 0x3d0 (Inherited: 0x3c8)
struct AServerMigrationSerialisationDetailsTestsActorWithReplicatedChild : AActor {
	struct UChildActorComponent* ChildActorComponent; // 0x3c8(0x08)
};

// Class ServerMigration.ServerMigrationSerialisationDetailsTestsActorWithDynamicComponent
// Size: 0x3e0 (Inherited: 0x3c8)
struct AServerMigrationSerialisationDetailsTestsActorWithDynamicComponent : AActor {
	struct UServerMigrationSerialisationDetailsTestsMigratableComponent* SubObject; // 0x3c8(0x08)
	struct UServerMigrationSerialisationDetailsTestsMigratableComponent* ActorComponent; // 0x3d0(0x08)
	struct UServerMigrationSerialisationDetailsTestsMigratableComponent* Subobject2; // 0x3d8(0x08)
};

// Class ServerMigration.ServerMigrationSerialisationDetailsTestsActorWithNetActorPtr
// Size: 0x3e0 (Inherited: 0x3c8)
struct AServerMigrationSerialisationDetailsTestsActorWithNetActorPtr : AActor {
	struct FNetActorPtr ActorPtr; // 0x3c8(0x14)
	char UnknownData_3DC[0x4]; // 0x3dc(0x04)
};

// Class ServerMigration.ServerMigrationSerialisationDetailsTestsActorWithUniqueNetId
// Size: 0x3e0 (Inherited: 0x3c8)
struct AServerMigrationSerialisationDetailsTestsActorWithUniqueNetId : AActor {
	struct FUniqueNetIdRepl UniqueId; // 0x3c8(0x18)
};

// Class ServerMigration.ServerMigrationSerialisationDetailsTestsMigratableComponent
// Size: 0xd0 (Inherited: 0xc8)
struct UServerMigrationSerialisationDetailsTestsMigratableComponent : UActorComponent {
	float FloatWithMigrationMarkup; // 0xc8(0x04)
	int32_t IntWithNoMarkup; // 0xcc(0x04)
};

// Class ServerMigration.ServerMigrationSerialisationDetailsTestsMigratableComponentActor
// Size: 0x3d0 (Inherited: 0x3c8)
struct AServerMigrationSerialisationDetailsTestsMigratableComponentActor : AActor {
	struct UServerMigrationSerialisationDetailsTestsMigratableComponent* ComponentWithMigrationMarkup; // 0x3c8(0x08)
};

// Class ServerMigration.ServerMigrationSerialisationDetailsTestsMigratableDefaultComponentActor
// Size: 0x3d0 (Inherited: 0x3c8)
struct AServerMigrationSerialisationDetailsTestsMigratableDefaultComponentActor : AActor {
	struct UServerMigrationSerialisationDetailsTestsMigratableComponent* ComponentWithMigrationMarkup; // 0x3c8(0x08)
};

// Class ServerMigration.ServerMigrationSerialisationDetailsTestsMigrationActorCallsOrderingTestActor
// Size: 0x3d0 (Inherited: 0x3c8)
struct AServerMigrationSerialisationDetailsTestsMigrationActorCallsOrderingTestActor : AActor {
	char UnknownData_3C8[0x8]; // 0x3c8(0x08)
};

// Class ServerMigration.ServerMigrationSerialisationDetailsTestsMigrationActorWithRootComponentSimulatePhysicsEnabledByDefault
// Size: 0x3c8 (Inherited: 0x3c8)
struct AServerMigrationSerialisationDetailsTestsMigrationActorWithRootComponentSimulatePhysicsEnabledByDefault : AActor {
};

// Class ServerMigration.ServerMigrationSerialisationDetailsTestsMigrationChildActorLinkedActor
// Size: 0x3d0 (Inherited: 0x3c8)
struct AServerMigrationSerialisationDetailsTestsMigrationChildActorLinkedActor : AActor {
	struct UChildActorComponent* Component; // 0x3c8(0x08)
};

// Class ServerMigration.ServerMigrationSerialisationDetailsTestsMigrationCustomSerialiseActor
// Size: 0x3d0 (Inherited: 0x3c8)
struct AServerMigrationSerialisationDetailsTestsMigrationCustomSerialiseActor : AActor {
	struct FServerMigrationCustomMigrationSerialisationStruct TestStruct; // 0x3c8(0x04)
	char UnknownData_3CC[0x4]; // 0x3cc(0x04)
};

// Class ServerMigration.ServerMigrationSerialisationDetailsTestsMigrationCustomSerialiseReplicatingActor
// Size: 0x3d0 (Inherited: 0x3d0)
struct AServerMigrationSerialisationDetailsTestsMigrationCustomSerialiseReplicatingActor : AServerMigrationSerialisationDetailsTestsMigrationCustomSerialiseActor {
};

// Class ServerMigration.ServerMigrationSerialisationDetailsTestsMigrationGetLinkedActor
// Size: 0x3d0 (Inherited: 0x3c8)
struct AServerMigrationSerialisationDetailsTestsMigrationGetLinkedActor : AActor {
	struct AActor* DependentActor; // 0x3c8(0x08)
};

// Class ServerMigration.ServerMigrationSerialisationDetailsTestsMigrationReferenceActor
// Size: 0x3d8 (Inherited: 0x3c8)
struct AServerMigrationSerialisationDetailsTestsMigrationReferenceActor : AActor {
	struct AActor* ActorReferenceWithMigrationMarkup; // 0x3c8(0x08)
	char UnknownData_3D0[0x8]; // 0x3d0(0x08)
};

// Class ServerMigration.ServerMigrationSerialisationDetailsTestsPropertyMarkup
// Size: 0x48 (Inherited: 0x28)
struct UServerMigrationSerialisationDetailsTestsPropertyMarkup : UObject {
	int32_t Int32NoMarkup; // 0x28(0x04)
	bool BoolWithMigrationMarkup; // 0x2c(0x01)
	char UnknownData_2D[0x3]; // 0x2d(0x03)
	struct FString StringWithSaveGameMarkup; // 0x30(0x10)
	float FloatWithMigrationAndReplicationMarkup; // 0x40(0x04)
	char UnknownData_44[0x4]; // 0x44(0x04)
};

// Class ServerMigration.ServerMigrationSerialisationDetailsTestsTArrayProperty
// Size: 0x38 (Inherited: 0x28)
struct UServerMigrationSerialisationDetailsTestsTArrayProperty : UObject {
	struct TArray<int32_t> IntegerArrayWithMigrationMarkup; // 0x28(0x10)
};

// Class ServerMigration.ServerMigrationSerialisationDetailsTestsUStructProperty
// Size: 0x38 (Inherited: 0x28)
struct UServerMigrationSerialisationDetailsTestsUStructProperty : UObject {
	struct FServerMigrationSerialisationDetailsTestsUStruct SubStructWithMigrationMarkup; // 0x28(0x0c)
	char UnknownData_34[0x4]; // 0x34(0x04)
};

// Class ServerMigration.ServerMigrationSettings
// Size: 0x70 (Inherited: 0x28)
struct UServerMigrationSettings : UObject {
	int32_t MaxSimultaneousMigrations; // 0x28(0x04)
	char UnknownData_2C[0x4]; // 0x2c(0x04)
	struct FString TransportImplementation; // 0x30(0x10)
	int32_t ServerDefaultListenPort; // 0x40(0x04)
	int32_t ServerListenPortRangeSize; // 0x44(0x04)
	int32_t AutomationServerDefaultListenPort; // 0x48(0x04)
	char UnknownData_4C[0x4]; // 0x4c(0x04)
	struct FString InstanceImplementation; // 0x50(0x10)
	float MigrationConnectionTimeoutSeconds; // 0x60(0x04)
	float WaitForClientActorRemappingTimeoutLength; // 0x64(0x04)
	float WaitForTransferOwnershipAcknowledgementTimeoutLength; // 0x68(0x04)
	float DeserialisationTimeSliceLength; // 0x6c(0x04)
};

// Class ServerMigration.TestActorWithUObjectProperty
// Size: 0x3d0 (Inherited: 0x3c8)
struct ATestActorWithUObjectProperty : AActor {
	struct UObject* ObjectProperty; // 0x3c8(0x08)
};

// Class ServerMigration.TestUObjectWithObjectProperty
// Size: 0x30 (Inherited: 0x28)
struct UTestUObjectWithObjectProperty : UObject {
	struct UObject* ObjectProperty; // 0x28(0x08)
};

