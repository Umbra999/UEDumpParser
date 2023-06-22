// Class AthenaEngine.ForceFeedbackCondition
// Size: 0x28 (Inherited: 0x28)
struct UForceFeedbackCondition : UObject {

	bool CanPlayForceFeedback(struct AActor* InOwner); // Function AthenaEngine.ForceFeedbackCondition.CanPlayForceFeedback // Native|Event|Public|BlueprintEvent|Const // @ game+0x3233d20
};

// Class AthenaEngine.AthenaEngineInterface
// Size: 0x28 (Inherited: 0x28)
struct UAthenaEngineInterface : UInterface {
};

// Class AthenaEngine.AthenaGameStateInterface
// Size: 0x28 (Inherited: 0x28)
struct UAthenaGameStateInterface : UInterface {
};

// Class AthenaEngine.BoxedRpcDispatcherInterface
// Size: 0x28 (Inherited: 0x28)
struct UBoxedRpcDispatcherInterface : UInterface {
};

// Class AthenaEngine.BoxedRpcDispatcherComponent
// Size: 0xd0 (Inherited: 0xc8)
struct UBoxedRpcDispatcherComponent : UActorComponent {
	char UnknownData_C8[0x8]; // 0xc8(0x08)

	void Server_SendRpc(struct FSerialisedRpc Event); // Function AthenaEngine.BoxedRpcDispatcherComponent.Server_SendRpc // Net|NetReliableNative|Event|Protected|NetServer|NetValidate // @ game+0x3234220
	void NetMulticastExcludeServer_SendRpc(struct FSerialisedRpc Event); // Function AthenaEngine.BoxedRpcDispatcherComponent.NetMulticastExcludeServer_SendRpc // Net|NetReliableNative|Event|NetMulticast|Protected // @ game+0x32340f0
	void Client_SendRpc(struct FSerialisedRpc Event); // Function AthenaEngine.BoxedRpcDispatcherComponent.Client_SendRpc // Net|NetReliableNative|Event|Protected|NetClient // @ game+0x3233e00
};

// Class AthenaEngine.DynamicColourPointLightComponent
// Size: 0x5e0 (Inherited: 0x4b0)
struct UDynamicColourPointLightComponent : UPointLightComponent {
	struct FRuntimeFloatCurve ActivationCurve; // 0x4a8(0x80)
	struct FRuntimeFloatCurve DeactivationCurve; // 0x528(0x80)
	char UnknownData_5B0[0x30]; // 0x5b0(0x30)

	void DeactivateLight(bool Blend); // Function AthenaEngine.DynamicColourPointLightComponent.DeactivateLight // Final|Native|Public|BlueprintCallable // @ game+0x3233ea0
	void ActivateLight(bool Blend); // Function AthenaEngine.DynamicColourPointLightComponent.ActivateLight // Final|Native|Public|BlueprintCallable // @ game+0x3233c60
};

// Class AthenaEngine.EmptyObject
// Size: 0x28 (Inherited: 0x28)
struct UEmptyObject : UObject {
};

// Class AthenaEngine.GameInstanceSessionIdProviderInterface
// Size: 0x28 (Inherited: 0x28)
struct UGameInstanceSessionIdProviderInterface : UInterface {
};

// Class AthenaEngine.NestedWorldRootDataAsset
// Size: 0x38 (Inherited: 0x28)
struct UNestedWorldRootDataAsset : UDataAsset {
	char UnknownData_28[0x10]; // 0x28(0x10)
};

// Class AthenaEngine.OnlinePlayerPermissionsRetrieverInterface
// Size: 0x28 (Inherited: 0x28)
struct UOnlinePlayerPermissionsRetrieverInterface : UInterface {
};

// Class AthenaEngine.PersistentAssetCollectionDataAsset
// Size: 0x38 (Inherited: 0x28)
struct UPersistentAssetCollectionDataAsset : UDataAsset {
	struct TArray<struct UObject*> Assets; // 0x28(0x10)
};

// Class AthenaEngine.PlayModeHelpers
// Size: 0x28 (Inherited: 0x28)
struct UPlayModeHelpers : UBlueprintFunctionLibrary {

	void SetPlayModeVariantOverride(char NewPlayModeVariantOverride); // Function AthenaEngine.PlayModeHelpers.SetPlayModeVariantOverride // Final|Native|Static|Public|BlueprintCallable // @ game+0x3234350
	void SetPlayModeOverride(char NewPlayModeOverride); // Function AthenaEngine.PlayModeHelpers.SetPlayModeOverride // Final|Native|Static|Public|BlueprintCallable // @ game+0x32342e0
	char GetPlayModeVariant(struct UObject* WorldContext); // Function AthenaEngine.PlayModeHelpers.GetPlayModeVariant // Final|Native|Static|Public|BlueprintCallable // @ game+0x3233fb0
	char GetPlayMode(struct UObject* WorldContext); // Function AthenaEngine.PlayModeHelpers.GetPlayMode // Final|Native|Static|Public|BlueprintCallable // @ game+0x3233f30
	void ClearPlayModeVariantOverride(); // Function AthenaEngine.PlayModeHelpers.ClearPlayModeVariantOverride // Final|Native|Static|Public|BlueprintCallable // @ game+0x3233de0
	void ClearPlayModeOverride(); // Function AthenaEngine.PlayModeHelpers.ClearPlayModeOverride // Final|Native|Static|Public|BlueprintCallable // @ game+0x3233dc0
};

// Class AthenaEngine.PlayModeInterface
// Size: 0x28 (Inherited: 0x28)
struct UPlayModeInterface : UInterface {
};

// Class AthenaEngine.PrimitiveCollisionExtentAdjustOverTimeComponent
// Size: 0x108 (Inherited: 0xc8)
struct UPrimitiveCollisionExtentAdjustOverTimeComponent : UActorComponent {
	float DelayBeforeExtentAdjustment; // 0xc8(0x04)
	char UnknownData_CC[0x2c]; // 0xcc(0x2c)
	struct UWorld* CachedWorld; // 0xf8(0x08)
	char UnknownData_100[0x8]; // 0x100(0x08)
};

// Class AthenaEngine.BoxCollisionExtentAdjustOverTimeComponent
// Size: 0x138 (Inherited: 0x108)
struct UBoxCollisionExtentAdjustOverTimeComponent : UPrimitiveCollisionExtentAdjustOverTimeComponent {
	bool ShouldAdjustBoxExtentX; // 0x108(0x01)
	char UnknownData_109[0x3]; // 0x109(0x03)
	float PostAdjustmentBoxExtentX; // 0x10c(0x04)
	bool ShouldAdjustBoxExtentY; // 0x110(0x01)
	char UnknownData_111[0x3]; // 0x111(0x03)
	float PostAdjustmentBoxExtentY; // 0x114(0x04)
	bool ShouldAdjustBoxExtentZ; // 0x118(0x01)
	char UnknownData_119[0x3]; // 0x119(0x03)
	float PostAdjustmentBoxExtentZ; // 0x11c(0x04)
	struct FVector ServerSizeScale; // 0x120(0x0c)
	char UnknownData_12C[0x4]; // 0x12c(0x04)
	struct UBoxComponent* BoxCollisionToAdjust; // 0x130(0x08)
};

// Class AthenaEngine.SphereCollisionExtentAdjustOverTimeComponent
// Size: 0x120 (Inherited: 0x108)
struct USphereCollisionExtentAdjustOverTimeComponent : UPrimitiveCollisionExtentAdjustOverTimeComponent {
	bool ShouldAdjustSphereRadius; // 0x108(0x01)
	char UnknownData_109[0x3]; // 0x109(0x03)
	float PostAdjustmentSphereRadius; // 0x10c(0x04)
	float ServerSizeScale; // 0x110(0x04)
	char UnknownData_114[0x4]; // 0x114(0x04)
	struct USphereComponent* SphereCollisionToAdjust; // 0x118(0x08)
};

// Class AthenaEngine.ResourceProviderInterface
// Size: 0x28 (Inherited: 0x28)
struct UResourceProviderInterface : UInterface {
};

// Class AthenaEngine.RotateMeshToActorComponent
// Size: 0xf8 (Inherited: 0xc8)
struct URotateMeshToActorComponent : UActorComponent {
	struct UMeshComponent* MeshToRotate; // 0xc8(0x08)
	struct AActor* ActorToRotateTo; // 0xd0(0x08)
	float CloseProximityRadius; // 0xd8(0x04)
	bool Use2DDistanceForCloseProximityRadius; // 0xdc(0x01)
	bool WhenInCloseProximityKeepLastYaw; // 0xdd(0x01)
	char UnknownData_DE[0x2]; // 0xde(0x02)
	float RotationSpeed; // 0xe0(0x04)
	bool PreventPitchModification; // 0xe4(0x01)
	char UnknownData_E5[0x3]; // 0xe5(0x03)
	float MaxPitch; // 0xe8(0x04)
	float CloseProximityYawRotation; // 0xec(0x04)
	char UnknownData_F0[0x8]; // 0xf0(0x08)

	void SnapMeshToLookAtActor(); // Function AthenaEngine.RotateMeshToActorComponent.SnapMeshToLookAtActor // Final|Native|Public|BlueprintCallable // @ game+0x32343f0
	void Initialise(struct UMeshComponent* InMeshToRotate, struct AActor* InActorToRotateTo); // Function AthenaEngine.RotateMeshToActorComponent.Initialise // Final|Native|Public|BlueprintCallable // @ game+0x3234030
};

// Class AthenaEngine.RotateMeshToLocalPlayerComponent
// Size: 0xf8 (Inherited: 0xf8)
struct URotateMeshToLocalPlayerComponent : URotateMeshToActorComponent {
};

// Class AthenaEngine.ServicesStampIdInterface
// Size: 0x28 (Inherited: 0x28)
struct UServicesStampIdInterface : UInterface {
};

// Class AthenaEngine.SkeletalMeshAggregateTickComponent
// Size: 0xf8 (Inherited: 0xc8)
struct USkeletalMeshAggregateTickComponent : UActorComponent {
	struct USkeletalMeshComponent* Mesh; // 0xc8(0x08)
	char UnknownData_D0[0x28]; // 0xd0(0x28)
};

// Class AthenaEngine.StringToAssetClassMap
// Size: 0x50 (Inherited: 0x28)
struct UStringToAssetClassMap : UDataAsset {
	struct TArray<struct FStringAssetClassPair> StringAssetClassPairs; // 0x28(0x10)
	char UnknownData_38[0x18]; // 0x38(0x18)
};

// Class AthenaEngine.SyncedRandomRetrievalInterface
// Size: 0x28 (Inherited: 0x28)
struct USyncedRandomRetrievalInterface : UInterface {
};

