// Class GameplayTasks.GameplayTaskOwnerInterface
// Size: 0x28 (Inherited: 0x28)
struct UGameplayTaskOwnerInterface : UInterface {
};

// Class GameplayTasks.GameplayTask
// Size: 0x58 (Inherited: 0x28)
struct UGameplayTask : UObject {
	struct FName InstanceName; // 0x28(0x08)
	char UnknownData_30[0x28]; // 0x30(0x28)

	void ReadyForActivation(); // Function GameplayTasks.GameplayTask.ReadyForActivation // Final|Native|Public|BlueprintCallable // @ game+0x230fd00
	void GenericGameplayTaskDelegate__DelegateSignature(); // DelegateFunction GameplayTasks.GameplayTask.GenericGameplayTaskDelegate__DelegateSignature // MulticastDelegate|Public|Delegate // @ game+0x1848130
	void EndTask(); // Function GameplayTasks.GameplayTask.EndTask // Final|Native|Public|BlueprintCallable // @ game+0x230f990
};

// Class GameplayTasks.GameplayTask_SpawnActor
// Size: 0x98 (Inherited: 0x58)
struct UGameplayTask_SpawnActor : UGameplayTask {
	struct FMulticastDelegate Success; // 0x58(0x10)
	struct FMulticastDelegate DidNotSpawn; // 0x68(0x10)
	char UnknownData_78[0x18]; // 0x78(0x18)
	struct UClass* ClassToSpawn; // 0x90(0x08)

	struct UGameplayTask_SpawnActor* SpawnActor(TScriptInterface<struct UGameplayTaskOwnerInterface> TaskOwner, struct FVector SpawnLocation, struct FRotator SpawnRotation, struct UClass* Class, bool bSpawnOnlyOnAuthority); // Function GameplayTasks.GameplayTask_SpawnActor.SpawnActor // Final|Native|Static|Public|HasDefaults|BlueprintCallable // @ game+0x230fd20
	void FinishSpawningActor(struct UObject* WorldContextObject, struct AActor* SpawnedActor); // Function GameplayTasks.GameplayTask_SpawnActor.FinishSpawningActor // Native|Public|BlueprintCallable // @ game+0x230f9b0
	bool BeginSpawningActor(struct UObject* WorldContextObject, struct AActor* SpawnedActor); // Function GameplayTasks.GameplayTask_SpawnActor.BeginSpawningActor // Native|Public|HasOutParms|BlueprintCallable // @ game+0x230f8b0
};

// Class GameplayTasks.GameplayTask_WaitDelay
// Size: 0x70 (Inherited: 0x58)
struct UGameplayTask_WaitDelay : UGameplayTask {
	struct FMulticastDelegate OnFinish; // 0x58(0x10)
	char UnknownData_68[0x8]; // 0x68(0x08)

	struct UGameplayTask_WaitDelay* TaskWaitDelay(TScriptInterface<struct UGameplayTaskOwnerInterface> TaskOwner, float Time); // Function GameplayTasks.GameplayTask_WaitDelay.TaskWaitDelay // Final|Native|Static|Public|BlueprintCallable // @ game+0x230fed0
	void TaskDelayDelegate__DelegateSignature(); // DelegateFunction GameplayTasks.GameplayTask_WaitDelay.TaskDelayDelegate__DelegateSignature // MulticastDelegate|Public|Delegate // @ game+0x1848130
};

// Class GameplayTasks.GameplayTaskResource
// Size: 0x38 (Inherited: 0x28)
struct UGameplayTaskResource : UObject {
	int32_t ManualResourceID; // 0x28(0x04)
	char UnknownData_2C[0x4]; // 0x2c(0x04)
	char bManuallySetID : 1; // 0x30(0x01)
	char UnknownData_30_1 : 7; // 0x30(0x01)
	char UnknownData_31[0x7]; // 0x31(0x07)
};

// Class GameplayTasks.GameplayTasksComponent
// Size: 0x128 (Inherited: 0xc8)
struct UGameplayTasksComponent : UActorComponent {
	char UnknownData_C8[0x8]; // 0xc8(0x08)
	struct TArray<struct UGameplayTask*> SimulatedTasks; // 0xd0(0x10)
	struct TArray<struct UGameplayTask*> TaskPriorityQueue; // 0xe0(0x10)
	char UnknownData_F0[0x28]; // 0xf0(0x28)
	struct FMulticastDelegate OnClaimedResourcesChange; // 0x118(0x10)

	void OnRep_SimulatedTasks(); // Function GameplayTasks.GameplayTasksComponent.OnRep_SimulatedTasks // Final|Native|Public // @ game+0x230fce0
	char K2_RunGameplayTask(TScriptInterface<struct UGameplayTaskOwnerInterface> TaskOwner, struct UGameplayTask* Task, char Priority, struct TArray<struct UClass*> AdditionalRequiredResources, struct TArray<struct UClass*> AdditionalClaimedResources); // Function GameplayTasks.GameplayTasksComponent.K2_RunGameplayTask // Final|Native|Static|Public|BlueprintCallable // @ game+0x230fa80
};

