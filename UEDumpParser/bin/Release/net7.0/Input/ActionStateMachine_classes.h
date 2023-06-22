// Class ActionStateMachine.ActionStateId
// Size: 0x28 (Inherited: 0x28)
struct UActionStateId : UObject {
};

// Class ActionStateMachine.ActionStateCreatorDefinition
// Size: 0x3c8 (Inherited: 0x3c8)
struct AActionStateCreatorDefinition : AActor {
};

// Class ActionStateMachine.ActionStateInitialStateCreatorDefinition
// Size: 0x28 (Inherited: 0x28)
struct UActionStateInitialStateCreatorDefinition : UObject {
};

// Class ActionStateMachine.TestActionStateCreatorDefinition
// Size: 0x3e0 (Inherited: 0x3c8)
struct ATestActionStateCreatorDefinition : AActionStateCreatorDefinition {
	char UnknownData_3C8[0x18]; // 0x3c8(0x18)
};

// Class ActionStateMachine.CustomClientValidityActionState2Id
// Size: 0x28 (Inherited: 0x28)
struct UCustomClientValidityActionState2Id : UActionStateId {
};

// Class ActionStateMachine.CustomClientValidityActionStateId
// Size: 0x28 (Inherited: 0x28)
struct UCustomClientValidityActionStateId : UActionStateId {
};

// Class ActionStateMachine.NullActionStateId
// Size: 0x28 (Inherited: 0x28)
struct UNullActionStateId : UActionStateId {
};

// Class ActionStateMachine.TestActionStateId
// Size: 0x28 (Inherited: 0x28)
struct UTestActionStateId : UActionStateId {
};

// Class ActionStateMachine.TestActionStateId2
// Size: 0x28 (Inherited: 0x28)
struct UTestActionStateId2 : UActionStateId {
};

// Class ActionStateMachine.ActionStateMachineComponent
// Size: 0x858 (Inherited: 0xc8)
struct UActionStateMachineComponent : UActorComponent {
	char UnknownData_C8[0x18]; // 0xc8(0x18)
	struct FMulticastDelegate OnActionChangedOnTrack; // 0xe0(0x10)
	char UnknownData_F0[0x768]; // 0xf0(0x768)

	void Server_RequestActionWithMessageForCurrentState(struct FActionStateChangeRequestId InEpochId, struct FActionStateChangeRequestId InRequestId, struct FSerialisedActionStateInfo InSerialisedActionStateConstructionInfo, struct FSerialisedActionStateMessage InSerialisedPreviousStateMessage); // Function ActionStateMachine.ActionStateMachineComponent.Server_RequestActionWithMessageForCurrentState // Net|NetReliableNative|Event|Protected|NetServer|NetValidate // @ game+0x3433680
	void Server_RequestAction(struct FActionStateChangeRequestId InEpochId, struct FActionStateChangeRequestId InRequestId, struct FSerialisedActionStateInfo InSerialisedActionStateConstructionInfo, char ClientPredicted); // Function ActionStateMachine.ActionStateMachineComponent.Server_RequestAction // Net|NetReliableNative|Event|Protected|NetServer|NetValidate // @ game+0x34334b0
	void PostNetInit(); // Function ActionStateMachine.ActionStateMachineComponent.PostNetInit // Final|Native|Public|BlueprintCallable // @ game+0x3433080
	void OnNetOwnershipChanged(); // Function ActionStateMachine.ActionStateMachineComponent.OnNetOwnershipChanged // Final|Native|Protected // @ game+0x3433060
	void Multicast_PushSerialisableData(struct FActionStateChangeRequestId InEpochId, struct FSerialisedActionStateInfo InSerialisedActionStateSerialisationStateInfo); // Function ActionStateMachine.ActionStateMachineComponent.Multicast_PushSerialisableData // Net|NetReliableNative|Event|NetMulticast|Protected // @ game+0x3432f60
	void Multicast_PushActionFromRequest(struct FActionStateChangeRequestId InEpochId, struct FSerialisedActionStateInfo InSerialisedActionStateConstructionInfo); // Function ActionStateMachine.ActionStateMachineComponent.Multicast_PushActionFromRequest // Net|NetReliableNative|Event|NetMulticast|Protected // @ game+0x3432e60
	void Multicast_PushAction(struct FActionStateChangeRequestId InEpochId, struct FSerialisedActionStateInfo InSerialisedActionStateConstructionInfo); // Function ActionStateMachine.ActionStateMachineComponent.Multicast_PushAction // Net|NetReliableNative|Event|NetMulticast|Protected // @ game+0x3432d60
	void End(); // Function ActionStateMachine.ActionStateMachineComponent.End // Final|Native|Public|BlueprintCallable // @ game+0x3432410
	void Client_ResetStateMachine(struct FResetStateMachineRpc Rpc); // Function ActionStateMachine.ActionStateMachineComponent.Client_ResetStateMachine // Net|NetReliableNative|Event|Protected|NetClient // @ game+0x3431d70
	void Client_CorrectAction(struct FActionStateChangeRequestId InEpochId, struct FActionStateChangeRequestId InRequestId, struct FSerialisedActionStateInfo InSerialisedActionStateConstructionInfo); // Function ActionStateMachine.ActionStateMachineComponent.Client_CorrectAction // Net|NetReliableNative|Event|Protected|NetClient // @ game+0x3431c10
};

// Class ActionStateMachine.ActionStateMachineInterface
// Size: 0x28 (Inherited: 0x28)
struct UActionStateMachineInterface : UInterface {
};

// Class ActionStateMachine.SelfInitialisingActionStateMachineComponent
// Size: 0x8a0 (Inherited: 0x858)
struct USelfInitialisingActionStateMachineComponent : UActionStateMachineComponent {
	char UnknownData_858[0x8]; // 0x858(0x08)
	struct UActionStatePriorityTableData* ActionStatePriorityTableData; // 0x860(0x08)
	struct UClass* ActionStateCreatorDefinition; // 0x868(0x08)
	struct UClass* ActionStateInitialStateCreatorDefinition; // 0x870(0x08)
	char UnknownData_878[0x28]; // 0x878(0x28)
};

// Class ActionStateMachine.CustomClientValidityCheckCallback
// Size: 0x30 (Inherited: 0x28)
struct UCustomClientValidityCheckCallback : UObject {
	bool ShouldPassClientValidation; // 0x28(0x01)
	char UnknownData_29[0x7]; // 0x29(0x07)
};

// Class ActionStateMachine.ActionStateMachineComponentTestFunctions
// Size: 0x28 (Inherited: 0x28)
struct UActionStateMachineComponentTestFunctions : UBlueprintFunctionLibrary {

	bool SetTestStateValidatorThatAlwaysPassesExceptForId(struct UActionStateMachineComponent* InComponent, struct UClass* StateId); // Function ActionStateMachine.ActionStateMachineComponentTestFunctions.SetTestStateValidatorThatAlwaysPassesExceptForId // Final|Native|Static|Public|BlueprintCallable // @ game+0x3433b20
	bool SetTestStateValidatorThatAlwaysPasses(struct UActionStateMachineComponent* InComponent); // Function ActionStateMachine.ActionStateMachineComponentTestFunctions.SetTestStateValidatorThatAlwaysPasses // Final|Native|Static|Public|BlueprintCallable // @ game+0x3433aa0
	bool SetTestStateValidatorThatAlwaysFails(struct UActionStateMachineComponent* InComponent); // Function ActionStateMachine.ActionStateMachineComponentTestFunctions.SetTestStateValidatorThatAlwaysFails // Final|Native|Static|Public|BlueprintCallable // @ game+0x3433a20
	bool SetTestStateFactoryChangeToNullOnUpdate(struct UActionStateMachineComponent* InComponent); // Function ActionStateMachine.ActionStateMachineComponentTestFunctions.SetTestStateFactoryChangeToNullOnUpdate // Final|Native|Static|Public|BlueprintCallable // @ game+0x34339a0
	bool SetTestStateFactory(struct UActionStateMachineComponent* InComponent); // Function ActionStateMachine.ActionStateMachineComponentTestFunctions.SetTestStateFactory // Final|Native|Static|Public|BlueprintCallable // @ game+0x3433920
	bool SetCustomClientValidationTestStateFactory(struct UActionStateMachineComponent* InComponent, struct UCustomClientValidityCheckCallback* InCallback); // Function ActionStateMachine.ActionStateMachineComponentTestFunctions.SetCustomClientValidationTestStateFactory // Final|Native|Static|Public|BlueprintCallable // @ game+0x3433860
	bool RequestUnpredictedTestActionStateWithIdOnTrack(struct UActionStateMachineComponent* InComponent, char TrackId, struct UClass* ClientStateId, struct UClass* ServerStateId); // Function ActionStateMachine.ActionStateMachineComponentTestFunctions.RequestUnpredictedTestActionStateWithIdOnTrack // Final|Native|Static|Public|BlueprintCallable // @ game+0x3433380
	bool RequestTestActionStateWithIdOnTrack(struct UActionStateMachineComponent* InComponent, char TrackId, struct UClass* StateId); // Function ActionStateMachine.ActionStateMachineComponentTestFunctions.RequestTestActionStateWithIdOnTrack // Final|Native|Static|Public|BlueprintCallable // @ game+0x3433290
	bool RequestNullActionStateOnTrack(struct UActionStateMachineComponent* InComponent, char TrackId); // Function ActionStateMachine.ActionStateMachineComponentTestFunctions.RequestNullActionStateOnTrack // Final|Native|Static|Public|BlueprintCallable // @ game+0x34331d0
	void PushTestActionStateSerialisableDataOnTrack(struct UActionStateMachineComponent* InComponent, char TrackId, struct UClass* StateId, int32_t DataValue); // Function ActionStateMachine.ActionStateMachineComponentTestFunctions.PushTestActionStateSerialisableDataOnTrack // Final|Native|Static|Public|BlueprintCallable // @ game+0x34330a0
	bool IsActionStateTypeActiveOnTrack(struct UActionStateMachineComponent* InComponent, char TrackId, struct UClass* StateId); // Function ActionStateMachine.ActionStateMachineComponentTestFunctions.IsActionStateTypeActiveOnTrack // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x3432bc0
	struct UClass* GetTypeOfActionStateActiveOnTrack(struct UActionStateMachineComponent* InComponent, char TrackId); // Function ActionStateMachine.ActionStateMachineComponentTestFunctions.GetTypeOfActionStateActiveOnTrack // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x34329a0
	bool GetTestActionStateSerialisableDataOnTrack(struct UActionStateMachineComponent* InComponent, char TrackId, struct FTestActionStateSerialisableData Data); // Function ActionStateMachine.ActionStateMachineComponentTestFunctions.GetTestActionStateSerialisableDataOnTrack // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x3432610
	struct UCustomClientValidityCheckCallback* CreateCustomClientValidityCheckCallback(); // Function ActionStateMachine.ActionStateMachineComponentTestFunctions.CreateCustomClientValidityCheckCallback // Final|Native|Static|Public|BlueprintCallable // @ game+0x3431f30
};

// Class ActionStateMachine.ActionStatePriorityTableData
// Size: 0x48 (Inherited: 0x28)
struct UActionStatePriorityTableData : UDataAsset {
	struct TArray<struct FActionStatePriorityRelationship> StateDefaultValue; // 0x28(0x10)
	struct TArray<struct FActionStatePriorityList> PriorityTableEntry; // 0x38(0x10)
};

// Class ActionStateMachine.ActionStatePriorityTableUtility
// Size: 0x28 (Inherited: 0x28)
struct UActionStatePriorityTableUtility : UBlueprintFunctionLibrary {

	char GetPriority(struct FActionStatePriorityTable PriorityTable, struct UClass* InStateA, struct UClass* InStateB); // Function ActionStateMachine.ActionStatePriorityTableUtility.GetPriority // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x3432430
	struct FActionStatePriorityTable CreatePriorityTable(struct UActionStatePriorityTableData* Data); // Function ActionStateMachine.ActionStatePriorityTableUtility.CreatePriorityTable // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x3431f60
};

// Class ActionStateMachine.SerialisedActionStateConstructionInfoTestFunctions
// Size: 0x28 (Inherited: 0x28)
struct USerialisedActionStateConstructionInfoTestFunctions : UBlueprintFunctionLibrary {

	bool IsValid(struct FSerialisedActionStateInfo TestStruct); // Function ActionStateMachine.SerialisedActionStateConstructionInfoTestFunctions.IsValid // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x3432cb0
	bool HasTestConstructionInfoWithInner(struct FSerialisedActionStateInfo TestStruct); // Function ActionStateMachine.SerialisedActionStateConstructionInfoTestFunctions.HasTestConstructionInfoWithInner // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x3432b10
	bool HasTestConstructionInfo(struct FSerialisedActionStateInfo TestStruct); // Function ActionStateMachine.SerialisedActionStateConstructionInfoTestFunctions.HasTestConstructionInfo // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x3432a60
	struct FTestActionStateConstructionInfoWithInner GetTestConstructionInfoWithInner(struct FSerialisedActionStateInfo TestStruct); // Function ActionStateMachine.SerialisedActionStateConstructionInfoTestFunctions.GetTestConstructionInfoWithInner // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x3432850
	struct FTestActionStateConstructionInfo GetTestConstructionInfo(struct FSerialisedActionStateInfo TestStruct); // Function ActionStateMachine.SerialisedActionStateConstructionInfoTestFunctions.GetTestConstructionInfo // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x3432760
	struct FSerialisedActionStateInfo CreateTestSerialisableData(struct UClass* Id, int32_t IntProp); // Function ActionStateMachine.SerialisedActionStateConstructionInfoTestFunctions.CreateTestSerialisableData // Final|Native|Static|Public|BlueprintCallable // @ game+0x3432310
	struct FSerialisedActionStateInfo CreateTestConstructionInfoWithInner(struct UClass* Id, float FloatProp, bool BoolProp, struct FString StringProp); // Function ActionStateMachine.SerialisedActionStateConstructionInfoTestFunctions.CreateTestConstructionInfoWithInner // Final|Native|Static|Public|BlueprintCallable // @ game+0x3432170
	struct FSerialisedActionStateInfo CreateTestConstructionInfo(struct UClass* Id, int32_t IntProp); // Function ActionStateMachine.SerialisedActionStateConstructionInfoTestFunctions.CreateTestConstructionInfo // Final|Native|Static|Public|BlueprintCallable // @ game+0x3432070
};

