// Class StudiosAutomation.TestLevelScriptActor
// Size: 0x490 (Inherited: 0x3d0)
struct ATestLevelScriptActor : ALevelScriptActor {
	char UnknownData_3D0[0x8]; // 0x3d0(0x08)
	char Category; // 0x3d8(0x01)
	char Area; // 0x3d9(0x01)
	bool VisualTest; // 0x3da(0x01)
	bool RunInEditor; // 0x3db(0x01)
	bool RunOnServer; // 0x3dc(0x01)
	bool RequiresServices; // 0x3dd(0x01)
	bool OptOutOfFixedFrameTime; // 0x3de(0x01)
	char UnknownData_3DF[0x1]; // 0x3df(0x01)
	struct TArray<struct FTestLevelMetadataEntry> AdditionalMetadata; // 0x3e0(0x10)
	char CaptureType; // 0x3f0(0x01)
	char PlayModeOverride; // 0x3f1(0x01)
	char UnknownData_3F2[0x2]; // 0x3f2(0x02)
	float TestTimeout; // 0x3f4(0x04)
	float TestPausedTimeout; // 0x3f8(0x04)
	char UnknownData_3FC[0x4]; // 0x3fc(0x04)
	struct TArray<struct FString> VerboseLogCategories; // 0x400(0x10)
	struct TArray<int32_t> ClientsRunning; // 0x410(0x10)
	struct TArray<int32_t> ClientIds; // 0x420(0x10)
	struct TArray<struct FClientPawnDetails> ClientPawns; // 0x430(0x10)
	struct TArray<struct AActor*> SpawnedActors; // 0x440(0x10)
	int32_t NextSpawnedActorIndex; // 0x450(0x04)
	char UnknownData_454[0x3c]; // 0x454(0x3c)

	void YieldToServer(struct UObject* WorldContextObject, struct FLatentActionInfo LatentInfo); // Function StudiosAutomation.TestLevelScriptActor.YieldToServer // Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable // @ game+0x1c847d0
	void YieldToOriginalServer(struct UObject* WorldContextObject, struct FLatentActionInfo LatentInfo); // Function StudiosAutomation.TestLevelScriptActor.YieldToOriginalServer // Final|Native|Public|BlueprintCallable // @ game+0x1c846e0
	void YieldToDynamicServer(struct UObject* WorldContextObject, struct FLatentActionInfo LatentInfo, int32_t ServerIndex); // Function StudiosAutomation.TestLevelScriptActor.YieldToDynamicServer // Final|Native|Public|BlueprintCallable // @ game+0x1c845b0
	void YieldToClient(struct UObject* WorldContextObject, struct FLatentActionInfo LatentInfo, int32_t ClientId); // Function StudiosAutomation.TestLevelScriptActor.YieldToClient // Final|BlueprintAuthorityOnly|Native|Static|Public|BlueprintCallable // @ game+0x1c84490
	void WaitForPossessionAcknowledgement(struct UObject* WorldContextObject, struct FLatentActionInfo LatentInfo); // Function StudiosAutomation.TestLevelScriptActor.WaitForPossessionAcknowledgement // Final|Native|Static|Public|BlueprintCallable // @ game+0x1c843b0
	void WaitForOtherServers(struct UObject* WorldContextObject, struct FLatentActionInfo LatentInfo, int32_t NumberOfServers); // Function StudiosAutomation.TestLevelScriptActor.WaitForOtherServers // Final|Native|Public|BlueprintCallable // @ game+0x1c84280
	void WaitForClients(struct UObject* WorldContextObject, struct FLatentActionInfo LatentInfo, int32_t NumberOfClients); // Function StudiosAutomation.TestLevelScriptActor.WaitForClients // Final|BlueprintAuthorityOnly|Native|Static|Public|BlueprintCallable // @ game+0x1c84160
	void TestTriggerServerMigration(struct TArray<struct AActor*> ActorGroup, int32_t TargetServerIndex); // Function StudiosAutomation.TestLevelScriptActor.TestTriggerServerMigration // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x1c84060
	bool TestCloseConnection(int32_t ConnectionIdx); // Function StudiosAutomation.TestLevelScriptActor.TestCloseConnection // Final|Native|Public|BlueprintCallable // @ game+0x1c83e90
	void SyncClientServer(struct UObject* WorldContextObject, struct FLatentActionInfo LatentInfo, int32_t NumClients, bool RegisterPawnsForMPTesting, bool ClearPawnInputBindings); // Function StudiosAutomation.TestLevelScriptActor.SyncClientServer // Final|Native|Static|Public|BlueprintCallable // @ game+0x1c839f0
	struct AActor* SpawnActorForMPTesting(struct UObject* WorldContextObject, struct UClass* ActorClass, struct FVector SpawnLocation, struct FRotator SpawnRotation); // Function StudiosAutomation.TestLevelScriptActor.SpawnActorForMPTesting // Final|Native|Static|Public|HasDefaults|BlueprintCallable // @ game+0x1c837d0
	void SendServerMigrationTestValueInt32(int32_t TestValue); // Function StudiosAutomation.TestLevelScriptActor.SendServerMigrationTestValueInt32 // Final|Native|Public|BlueprintCallable // @ game+0x1c836d0
	void RegisterPawnsForMPTesting(struct UObject* WorldContextObject); // Function StudiosAutomation.TestLevelScriptActor.RegisterPawnsForMPTesting // Final|Native|Static|Public|BlueprintCallable // @ game+0x1c83660
	void RegisterActorForMPTestingRecursively(struct AActor* TargetActor); // Function StudiosAutomation.TestLevelScriptActor.RegisterActorForMPTestingRecursively // Final|Native|Public|BlueprintCallable // @ game+0x1c835e0
	void RegisterActorForMPTesting(struct AActor* TargetActor); // Function StudiosAutomation.TestLevelScriptActor.RegisterActorForMPTesting // Final|Native|Public|BlueprintCallable // @ game+0x1c83560
	void PostTestCleanup(); // Function StudiosAutomation.TestLevelScriptActor.PostTestCleanup // Event|Public|BlueprintEvent // @ game+0x1848130
	void OnServerMigrationTestValueInt32Received(int32_t TestValue); // Function StudiosAutomation.TestLevelScriptActor.OnServerMigrationTestValueInt32Received // Event|Public|BlueprintEvent // @ game+0x1848130
	void OnOutgoingServerMigrationStarted(struct FGuid MigrationId, struct TArray<struct APlayerController*> Players); // Function StudiosAutomation.TestLevelScriptActor.OnOutgoingServerMigrationStarted // Event|Public|HasOutParms|HasDefaults|BlueprintEvent // @ game+0x1848130
	void OnOutgoingServerMigrationCompleted(struct FGuid MigrationId); // Function StudiosAutomation.TestLevelScriptActor.OnOutgoingServerMigrationCompleted // Event|Public|HasDefaults|BlueprintEvent // @ game+0x1848130
	void OnOutgoingServerMigrationAborted(struct FGuid MigrationId); // Function StudiosAutomation.TestLevelScriptActor.OnOutgoingServerMigrationAborted // Event|Public|HasDefaults|BlueprintEvent // @ game+0x1848130
	void OnIncomingServerMigrationStarted(struct FGuid MigrationId, int32_t NumPlayers); // Function StudiosAutomation.TestLevelScriptActor.OnIncomingServerMigrationStarted // Event|Public|HasDefaults|BlueprintEvent // @ game+0x1848130
	void OnIncomingServerMigrationCompleted(struct FGuid MigrationId, struct TArray<struct APlayerController*> Players, struct TArray<struct AActor*> Actors); // Function StudiosAutomation.TestLevelScriptActor.OnIncomingServerMigrationCompleted // Event|Public|HasOutParms|HasDefaults|BlueprintEvent // @ game+0x1848130
	void OnIncomingServerMigrationAborted(struct FGuid MigrationId); // Function StudiosAutomation.TestLevelScriptActor.OnIncomingServerMigrationAborted // Event|Public|HasDefaults|BlueprintEvent // @ game+0x1848130
	void OnClientServerMigrationStarted(struct FGuid MigrationId); // Function StudiosAutomation.TestLevelScriptActor.OnClientServerMigrationStarted // Event|Public|HasDefaults|BlueprintEvent // @ game+0x1848130
	void OnClientServerMigrationCompleted(struct FGuid MigrationId); // Function StudiosAutomation.TestLevelScriptActor.OnClientServerMigrationCompleted // Event|Public|HasDefaults|BlueprintEvent // @ game+0x1848130
	void OnClientServerMigrationAborted(struct FGuid MigrationId); // Function StudiosAutomation.TestLevelScriptActor.OnClientServerMigrationAborted // Event|Public|HasDefaults|BlueprintEvent // @ game+0x1848130
	int32_t GetServerIndex(struct UObject* WorldContextObject); // Function StudiosAutomation.TestLevelScriptActor.GetServerIndex // Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x1c83120
	struct FString GetRemoteServerMigrationURL(int32_t TargetServerIndex); // Function StudiosAutomation.TestLevelScriptActor.GetRemoteServerMigrationURL // Final|Native|Public|BlueprintCallable // @ game+0x1c83030
	int32_t GetPlayerIndexFromClientId(int32_t ClientId); // Function StudiosAutomation.TestLevelScriptActor.GetPlayerIndexFromClientId // Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x1c82fa0
	int32_t GetNumClientsForMultiplayerTest(); // Function StudiosAutomation.TestLevelScriptActor.GetNumClientsForMultiplayerTest // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x1c82ef0
	int32_t GetNumAutomationClients(); // Function StudiosAutomation.TestLevelScriptActor.GetNumAutomationClients // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x1c82ec0
	struct APawn* GetClientPawn(int32_t ClientId, int32_t SplitScreenIndex); // Function StudiosAutomation.TestLevelScriptActor.GetClientPawn // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x1c82c80
	int32_t GetClientId(bool ErrorOnFailure); // Function StudiosAutomation.TestLevelScriptActor.GetClientId // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x1c82bf0
	void DoServerPostTestCleanup(); // Function StudiosAutomation.TestLevelScriptActor.DoServerPostTestCleanup // Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable // @ game+0x1c82ac0
	void ClearPawnInputBindings(struct UObject* WorldContextObject); // Function StudiosAutomation.TestLevelScriptActor.ClearPawnInputBindings // Final|Native|Static|Public|BlueprintCallable // @ game+0x1c82720
	void AddServerOnNewMap(struct FString Name, struct FString MapPath); // Function StudiosAutomation.TestLevelScriptActor.AddServerOnNewMap // Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable|Const // @ game+0x1c807a0
	void AddServer(struct FString Name); // Function StudiosAutomation.TestLevelScriptActor.AddServer // Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable|Const // @ game+0x1c80700
	void AddClient(int32_t Port, struct FString Name); // Function StudiosAutomation.TestLevelScriptActor.AddClient // Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable // @ game+0x1c80590
};

// Class StudiosAutomation.ActorThatLogsErrorWhenTicked
// Size: 0x3c8 (Inherited: 0x3c8)
struct AActorThatLogsErrorWhenTicked : AActor {
};

// Class StudiosAutomation.AggregateAssetAudit
// Size: 0x28 (Inherited: 0x28)
struct UAggregateAssetAudit : UInterface {
};

// Class StudiosAutomation.AssetAuditSettings
// Size: 0x68 (Inherited: 0x38)
struct UAssetAuditSettings : UDeveloperSettings {
	struct TArray<struct FString> PathsToAuditOnSave; // 0x38(0x10)
	struct TArray<struct UClass*> TypesToIgnoreInFeatureToggleAudits; // 0x48(0x10)
	struct TArray<struct FString> AssetAuditorsLoadExceptionList; // 0x58(0x10)
};

// Class StudiosAutomation.AutomationBlueprintFunctionLibrary
// Size: 0x28 (Inherited: 0x28)
struct UAutomationBlueprintFunctionLibrary : UBlueprintFunctionLibrary {

	void TestFinished(struct UObject* ContextObject); // Function StudiosAutomation.AutomationBlueprintFunctionLibrary.TestFinished // Final|RequiredAPI|Native|Static|Public|BlueprintCallable // @ game+0x1c83ff0
	void TestFailed(struct FString Message, struct UObject* ContextObject); // Function StudiosAutomation.AutomationBlueprintFunctionLibrary.TestFailed // Final|Native|Static|Public|BlueprintCallable // @ game+0x1c83f20
	void TakeAutomationScreenshotAtCamera(struct UObject* WorldContextObject, struct FLatentActionInfo LatentInfo, struct ACameraActor* Camera, struct FString NameOverride, float DelayBeforeScreenshotSeconds); // Function StudiosAutomation.AutomationBlueprintFunctionLibrary.TakeAutomationScreenshotAtCamera // Final|Native|Static|Public|BlueprintCallable // @ game+0x1c83cd0
	void TakeAutomationScreenshot(struct UObject* WorldContextObject, struct FLatentActionInfo LatentInfo, struct FString Name); // Function StudiosAutomation.AutomationBlueprintFunctionLibrary.TakeAutomationScreenshot // Final|Native|Static|Public|BlueprintCallable // @ game+0x1c83b90
	void StepStarted(struct FString StepName); // Function StudiosAutomation.AutomationBlueprintFunctionLibrary.StepStarted // Final|RequiredAPI|Native|Static|Public|BlueprintCallable // @ game+0x1c83960
	void StepFinished(); // Function StudiosAutomation.AutomationBlueprintFunctionLibrary.StepFinished // Final|RequiredAPI|Native|Static|Public|BlueprintCallable // @ game+0x1c83940
	void SetTestTimeoutAsFatal(bool TimeoutIsFatal); // Function StudiosAutomation.AutomationBlueprintFunctionLibrary.SetTestTimeoutAsFatal // Final|Native|Static|Public|BlueprintCallable // @ game+0x1c83750
	void PreventGarbageCollection(); // Function StudiosAutomation.AutomationBlueprintFunctionLibrary.PreventGarbageCollection // Final|Native|Static|Public|BlueprintCallable // @ game+0x1c83540
	void OpenLevelWithGameMode(struct UObject* WorldContextObject, struct FName LevelName, struct UClass* GameMode, bool Absolute); // Function StudiosAutomation.AutomationBlueprintFunctionLibrary.OpenLevelWithGameMode // Final|Native|Static|Public|BlueprintCallable // @ game+0x1c833f0
	void LogPlatformMemoryStats(); // Function StudiosAutomation.AutomationBlueprintFunctionLibrary.LogPlatformMemoryStats // Final|Native|Static|Public|BlueprintCallable // @ game+0x1c833d0
	bool IsTravelFinished(struct UObject* WorldContextObject); // Function StudiosAutomation.AutomationBlueprintFunctionLibrary.IsTravelFinished // Final|Native|Static|Public|BlueprintCallable // @ game+0x1c832d0
	bool IsEditor(); // Function StudiosAutomation.AutomationBlueprintFunctionLibrary.IsEditor // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x1c832a0
	bool IsAutomationBuild(); // Function StudiosAutomation.AutomationBlueprintFunctionLibrary.IsAutomationBuild // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x1c83270
	bool HasPerformanceDataBeenCaptured(); // Function StudiosAutomation.AutomationBlueprintFunctionLibrary.HasPerformanceDataBeenCaptured // Final|Native|Static|Public|BlueprintCallable // @ game+0x1c83240
	struct ATestLevelScriptActor* GetTestLevelScriptActor(bool ErrorOnFailure); // Function StudiosAutomation.AutomationBlueprintFunctionLibrary.GetTestLevelScriptActor // Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x1c831b0
	int32_t GetPlayerId(struct APlayerState* State); // Function StudiosAutomation.AutomationBlueprintFunctionLibrary.GetPlayerId // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x1c82f20
	struct FString GetLevelUrl(struct UObject* WorldContextObject); // Function StudiosAutomation.AutomationBlueprintFunctionLibrary.GetLevelUrl // Final|Native|Static|Public|BlueprintCallable // @ game+0x1c82de0
	struct FString GetCurrentMapTestName(); // Function StudiosAutomation.AutomationBlueprintFunctionLibrary.GetCurrentMapTestName // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x1c82d40
	void EndPerformanceCapture(bool DumpMemReport); // Function StudiosAutomation.AutomationBlueprintFunctionLibrary.EndPerformanceCapture // Final|RequiredAPI|Native|Static|Public|BlueprintCallable // @ game+0x1c82b70
	void DumpFullMemReportDelayed(int32_t FrameDelay); // Function StudiosAutomation.AutomationBlueprintFunctionLibrary.DumpFullMemReportDelayed // Final|Native|Static|Public|BlueprintCallable // @ game+0x1c82b00
	void DumpFullMemReport(); // Function StudiosAutomation.AutomationBlueprintFunctionLibrary.DumpFullMemReport // Final|Native|Static|Public|BlueprintCallable // @ game+0x1c82ae0
	void DelayForFramesWithDesc(struct UObject* WorldContextObject, struct FLatentActionInfo LatentInfo, int32_t NumFrames, struct FString Description); // Function StudiosAutomation.AutomationBlueprintFunctionLibrary.DelayForFramesWithDesc // Final|Native|Static|Public|BlueprintCallable // @ game+0x1c82930
	void DelayForFrames(struct UObject* WorldContextObject, struct FLatentActionInfo LatentInfo, int32_t NumFrames); // Function StudiosAutomation.AutomationBlueprintFunctionLibrary.DelayForFrames // Final|Native|Static|Public|BlueprintCallable // @ game+0x1c82810
	void CollectGarbageNow(bool FullPurge); // Function StudiosAutomation.AutomationBlueprintFunctionLibrary.CollectGarbageNow // Final|Native|Static|Public|BlueprintCallable // @ game+0x1c82790
	void BlockAsyncLoading(bool EnableBlock); // Function StudiosAutomation.AutomationBlueprintFunctionLibrary.BlockAsyncLoading // Final|Native|Static|Public|BlueprintCallable // @ game+0x1c826a0
	void BeginPerformanceCapture(struct FString FolderName, bool DumpMemReport, bool PreventGarbageCollection, struct FString StatGranularity); // Function StudiosAutomation.AutomationBlueprintFunctionLibrary.BeginPerformanceCapture // Final|RequiredAPI|Native|Static|Public|BlueprintCallable // @ game+0x1c82510
	void AssertValue_Int(int32_t Actual, char ShouldBe, int32_t Expected, struct FString What, struct UObject* ContextObject); // Function StudiosAutomation.AutomationBlueprintFunctionLibrary.AssertValue_Int // Final|Native|Static|Public|BlueprintCallable // @ game+0x1c82370
	void AssertValue_Float(float Actual, char ShouldBe, float Expected, struct FString What, struct UObject* ContextObject); // Function StudiosAutomation.AutomationBlueprintFunctionLibrary.AssertValue_Float // Final|Native|Static|Public|BlueprintCallable // @ game+0x1c821c0
	void AssertValue_DateTime(struct FDateTime Actual, char ShouldBe, struct FDateTime Expected, struct FString What, struct UObject* ContextObject); // Function StudiosAutomation.AutomationBlueprintFunctionLibrary.AssertValue_DateTime // Final|Native|Static|Public|HasDefaults|BlueprintCallable // @ game+0x1c82020
	void AssertTrue(bool Condition, struct FString Message, struct UObject* ContextObject); // Function StudiosAutomation.AutomationBlueprintFunctionLibrary.AssertTrue // Final|Native|Static|Public|BlueprintCallable // @ game+0x1c81ef0
	void AssertObjectMatchesStringAssetReference(struct UObject* Object, struct FStringAssetReference Reference, struct FString What, struct UObject* ContextObject); // Function StudiosAutomation.AutomationBlueprintFunctionLibrary.AssertObjectMatchesStringAssetReference // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x1c81d60
	void AssertNotEqual_Vector(struct FVector Actual, struct FVector NotExpected, struct FString What, struct UObject* ContextObject); // Function StudiosAutomation.AutomationBlueprintFunctionLibrary.AssertNotEqual_Vector // Final|Native|Static|Public|HasDefaults|BlueprintCallable // @ game+0x1c81bf0
	void AssertNotEqual_Transform(struct FTransform Actual, struct FTransform NotExpected, struct FString What, struct UObject* ContextObject); // Function StudiosAutomation.AutomationBlueprintFunctionLibrary.AssertNotEqual_Transform // Final|Native|Static|Public|HasDefaults|BlueprintCallable // @ game+0x1c819f0
	void AssertNotEqual_String(struct FString Actual, struct FString NotExpected, struct FString What, struct UObject* ContextObject); // Function StudiosAutomation.AutomationBlueprintFunctionLibrary.AssertNotEqual_String // Final|Native|Static|Public|BlueprintCallable // @ game+0x1c81840
	void AssertNotEqual_Rotator(struct FRotator Actual, struct FRotator NotExpected, struct FString What, struct UObject* ContextObject); // Function StudiosAutomation.AutomationBlueprintFunctionLibrary.AssertNotEqual_Rotator // Final|Native|Static|Public|HasDefaults|BlueprintCallable // @ game+0x1c816d0
	void AssertIsValid(struct UObject* Object, struct FString Message, struct UObject* ContextObject); // Function StudiosAutomation.AutomationBlueprintFunctionLibrary.AssertIsValid // Final|Native|Static|Public|BlueprintCallable // @ game+0x1c815b0
	void AssertIsNotValid(struct UObject* Object, struct FString Message, struct UObject* ContextObject); // Function StudiosAutomation.AutomationBlueprintFunctionLibrary.AssertIsNotValid // Final|Native|Static|Public|BlueprintCallable // @ game+0x1c81490
	void AssertFalse(bool Condition, struct FString Message, struct UObject* ContextObject); // Function StudiosAutomation.AutomationBlueprintFunctionLibrary.AssertFalse // Final|Native|Static|Public|BlueprintCallable // @ game+0x1c81360
	void AssertErrorOccurred(struct FString ErrorMessage); // Function StudiosAutomation.AutomationBlueprintFunctionLibrary.AssertErrorOccurred // Final|Native|Static|Public|BlueprintCallable // @ game+0x1c812d0
	void AssertEqual_Vector2D(struct FVector2D Actual, struct FVector2D Expected, struct FString What, float Tolerance, struct UObject* ContextObject); // Function StudiosAutomation.AutomationBlueprintFunctionLibrary.AssertEqual_Vector2D // Final|Native|Static|Public|HasDefaults|BlueprintCallable // @ game+0x1c80f70
	void AssertEqual_Vector(struct FVector Actual, struct FVector Expected, struct FString What, float Tolerance, struct UObject* ContextObject); // Function StudiosAutomation.AutomationBlueprintFunctionLibrary.AssertEqual_Vector // Final|Native|Static|Public|HasDefaults|BlueprintCallable // @ game+0x1c81110
	void AssertEqual_Transform(struct FTransform Actual, struct FTransform Expected, struct FString What, struct UObject* ContextObject); // Function StudiosAutomation.AutomationBlueprintFunctionLibrary.AssertEqual_Transform // Final|Native|Static|Public|HasDefaults|BlueprintCallable // @ game+0x1c80d70
	void AssertEqual_String(struct FString Actual, struct FString Expected, struct FString What, struct UObject* ContextObject); // Function StudiosAutomation.AutomationBlueprintFunctionLibrary.AssertEqual_String // Final|Native|Static|Public|BlueprintCallable // @ game+0x1c80bc0
	void AssertEqual_Rotator(struct FRotator Actual, struct FRotator Expected, struct FString What, struct UObject* ContextObject); // Function StudiosAutomation.AutomationBlueprintFunctionLibrary.AssertEqual_Rotator // Final|Native|Static|Public|HasDefaults|BlueprintCallable // @ game+0x1c80a50
	void AssertEqual_Float(float Actual, float Expected, struct FString What, float Tolerance, struct UObject* ContextObject); // Function StudiosAutomation.AutomationBlueprintFunctionLibrary.AssertEqual_Float // Final|Native|Static|Public|BlueprintCallable // @ game+0x1c808a0
	void AddExpectedError(struct FString ErrorMessage); // Function StudiosAutomation.AutomationBlueprintFunctionLibrary.AddExpectedError // Final|Native|Static|Public|BlueprintCallable // @ game+0x1c80670
};

// Class StudiosAutomation.AutomationLatentActionCallback
// Size: 0x60 (Inherited: 0x28)
struct UAutomationLatentActionCallback : UObject {
	char UnknownData_28[0x38]; // 0x28(0x38)

	void LatentCallback(int32_t Linkage); // Function StudiosAutomation.AutomationLatentActionCallback.LatentCallback // Final|Native|Private // @ game+0x1c83350
};

// Class StudiosAutomation.BPNamedObjectMock
// Size: 0x28 (Inherited: 0x28)
struct UBPNamedObjectMock : UObject {
};

// Class StudiosAutomation.DummyReplicatedActor
// Size: 0x3c8 (Inherited: 0x3c8)
struct ADummyReplicatedActor : AActor {
};

// Class StudiosAutomation.MapFixtureTestGameMode
// Size: 0x4c0 (Inherited: 0x4c0)
struct AMapFixtureTestGameMode : AGameMode {
};

// Class StudiosAutomation.ObjectWithSettableWorld
// Size: 0x30 (Inherited: 0x28)
struct UObjectWithSettableWorld : UObject {
	struct UWorld* World; // 0x28(0x08)
};

// Class StudiosAutomation.TestUObject
// Size: 0x28 (Inherited: 0x28)
struct UTestUObject : UObject {
};

// Class StudiosAutomation.OtherTestUObject
// Size: 0x28 (Inherited: 0x28)
struct UOtherTestUObject : UObject {
};

// Class StudiosAutomation.RunUnitTestsCommandlet
// Size: 0x80 (Inherited: 0x80)
struct URunUnitTestsCommandlet : UCommandlet {
};

// Class StudiosAutomation.TestablePlayerController
// Size: 0x770 (Inherited: 0x770)
struct ATestablePlayerController : APlayerController {
};

// Class StudiosAutomation.TestablePlayerControllerInterface
// Size: 0x28 (Inherited: 0x28)
struct UTestablePlayerControllerInterface : UInterface {
};

// Class StudiosAutomation.TestablePlayerControllerComponent
// Size: 0xe8 (Inherited: 0xc8)
struct UTestablePlayerControllerComponent : UActorComponent {
	char UnknownData_C8[0x20]; // 0xc8(0x20)

	void YieldToServer(); // Function StudiosAutomation.TestablePlayerControllerComponent.YieldToServer // Final|Net|NetReliableNative|Event|Private|NetServer|NetValidate // @ game+0x1c848b0
	void PerformPostTestCleanup(); // Function StudiosAutomation.TestablePlayerControllerComponent.PerformPostTestCleanup // Final|Net|NetReliableNative|Event|Private|NetClient // @ game+0x1c83520
	void DisconnectClientFromTest(); // Function StudiosAutomation.TestablePlayerControllerComponent.DisconnectClientFromTest // Final|Net|NetReliableNative|Event|Private|NetClient // @ game+0x1c82aa0
};

// Class StudiosAutomation.TestAbstractActor
// Size: 0x3c8 (Inherited: 0x3c8)
struct ATestAbstractActor : AActor {
};

// Class StudiosAutomation.TestSettings
// Size: 0x38 (Inherited: 0x38)
struct UTestSettings : UDeveloperSettings {
};

// Class StudiosAutomation.TextureAuditorSettings
// Size: 0x88 (Inherited: 0x38)
struct UTextureAuditorSettings : UTestSettings {
	struct TArray<struct FStringAssetReference> SpecificTexturesToNotAudit; // 0x38(0x10)
	struct TArray<struct FDirectoryPath> TextureDirectoriesToNotAudit; // 0x48(0x10)
	struct FTextureAuditorProperties DefaultTextureProperties; // 0x58(0x20)
	struct TArray<struct FTextureAuditorGroupProperties> PerTextureGroupPropertiesOverrides; // 0x78(0x10)
};

