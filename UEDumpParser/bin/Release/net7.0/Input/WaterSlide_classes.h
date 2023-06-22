// Class WaterSlide.Ride
// Size: 0x3e0 (Inherited: 0x3c8)
struct ARide : AActor {
	char UnknownData_3C8[0x8]; // 0x3c8(0x08)
	struct USplineComponent* SplineComponent; // 0x3d0(0x08)
	struct USceneComponent* Root; // 0x3d8(0x08)
};

// Class WaterSlide.WaterSlideParamsDataAsset
// Size: 0x50 (Inherited: 0x28)
struct UWaterSlideParamsDataAsset : UDataAsset {
	struct FWaterSlideParams WaterSlideParams; // 0x28(0x28)
};

// Class WaterSlide.WaterSlide
// Size: 0x420 (Inherited: 0x3e0)
struct AWaterSlide : ARide {
	struct UWaterSlideParamsDataAsset* WaterSlideParamsDataAsset; // 0x3e0(0x08)
	struct UPrimitiveComponent* EntranceCollisionComponent; // 0x3e8(0x08)
	struct AWaterSlide* ContinuedWaterSlideRoute; // 0x3f0(0x08)
	struct AWaterSlide* LeftWaterSlideRoute; // 0x3f8(0x08)
	struct AWaterSlide* RightWaterSlideRoute; // 0x400(0x08)
	bool IsEndOfSlide; // 0x408(0x01)
	char UnknownData_409[0x3]; // 0x409(0x03)
	struct FVector EndOfSlideLaunchForce; // 0x40c(0x0c)
	struct UWaterSlideAudioParams* WaterSlideAudioParams; // 0x418(0x08)

	void SetEntranceCollisionComponent(struct UPrimitiveComponent* InEntranceCollisionComponent); // Function WaterSlide.WaterSlide.SetEntranceCollisionComponent // Final|Native|Protected|BlueprintCallable // @ game+0x48347f0
	void ComponentBeginOverlapCallBack(struct AActor* InOtherActor, struct UPrimitiveComponent* InOtherComp, int32_t InOtherBodyIndex, bool InFromSweep, struct FHitResult InSweepResult); // Function WaterSlide.WaterSlide.ComponentBeginOverlapCallBack // Final|Native|Private|HasOutParms // @ game+0x4834620
};

// Class WaterSlide.Zipline
// Size: 0x730 (Inherited: 0x3e0)
struct AZipline : ARide {
	char ZiplineStartPointConfig; // 0x3e0(0x01)
	bool ShouldLaunchPlayer; // 0x3e1(0x01)
	char UnknownData_3E2[0x2]; // 0x3e2(0x02)
	float LaunchForceMultiplier; // 0x3e4(0x04)
	struct FZiplineFeelParameters ZiplineFeelParameters; // 0x3e8(0x310)
	struct UZiplineFXParams* ZiplineFXParams; // 0x6f8(0x08)
	char UnknownData_700[0x8]; // 0x700(0x08)
	struct UStaticMesh* ZiplineGeometry; // 0x708(0x08)
	struct UStaticMesh* ZiplineTrolleyGeometry; // 0x710(0x08)
	struct UMaterialInterface* ZiplineGeometryMaterialOverride; // 0x718(0x08)
	struct FName ZiplineGeometryMaterialScalerParameterName; // 0x720(0x08)
	char UnknownData_728[0x8]; // 0x728(0x08)
};

// Class WaterSlide.InteractableZipline
// Size: 0x768 (Inherited: 0x730)
struct AInteractableZipline : AZipline {
	struct UInteractableComponentWithActionRules* ZiplineStartInteractionPoint; // 0x730(0x08)
	struct UInteractableComponentWithActionRules* ZiplineEndInteractionPoint; // 0x738(0x08)
	struct UClass* PressedNotificationInputId; // 0x740(0x08)
	struct UClass* ReleasedNotificationInputId; // 0x748(0x08)
	struct FVector2D AttachPointLocationOffset; // 0x750(0x08)
	float AttachPointSize; // 0x758(0x04)
	float HoldTime; // 0x75c(0x04)
	struct UClass* OptionalItem; // 0x760(0x08)
};

// Class WaterSlide.RidePlayerInterface
// Size: 0x28 (Inherited: 0x28)
struct URidePlayerInterface : UInterface {
};

// Class WaterSlide.RidePlayerComponent
// Size: 0x148 (Inherited: 0xe0)
struct URidePlayerComponent : UDoubleIntentComponent {
	char UnknownData_E0[0x8]; // 0xe0(0x08)
	struct UParticleSystemComponent* PlayerWaterSlideVFXComponent; // 0xe8(0x08)
	struct UParticleSystem* PlayerWaterSlideVFX; // 0xf0(0x08)
	float PlayerWaterSlideVFXSpawnLocationZOffset; // 0xf8(0x04)
	char UnknownData_FC[0x4]; // 0xfc(0x04)
	struct UParticleSystemComponent* PlayerZiplineWindVFXComponent; // 0x100(0x08)
	struct UParticleSystemComponent* PlayerZiplineTrailVFXComponent; // 0x108(0x08)
	struct UParticleSystem* PlayerZiplineTrailVFX; // 0x110(0x08)
	struct UParticleSystem* PlayerZiplineWindVFX; // 0x118(0x08)
	struct FVector PlayerZiplineTrailVFXSpawnLocation; // 0x120(0x0c)
	char UnknownData_12C[0x14]; // 0x12c(0x14)
	struct ARide* CurrentRide; // 0x140(0x08)
};

// Class WaterSlide.RideTransitionActionStateId
// Size: 0x28 (Inherited: 0x28)
struct URideTransitionActionStateId : UActionStateId {
};

// Class WaterSlide.WaterSlideActionStateId
// Size: 0x28 (Inherited: 0x28)
struct UWaterSlideActionStateId : UActionStateId {
};

// Class WaterSlide.WaterSlideAudioParams
// Size: 0x58 (Inherited: 0x28)
struct UWaterSlideAudioParams : UDataAsset {
	struct UWwiseEvent* WaterSlideStart; // 0x28(0x08)
	struct UWwiseEvent* WaterSlideEnd; // 0x30(0x08)
	struct UWwiseEvent* WaterSlideIsEndOneShot; // 0x38(0x08)
	struct UWwiseEvent* WaterSlideChangeForkOneShot; // 0x40(0x08)
	struct FName PlayerSpeedOnWaterSlideRTPC; // 0x48(0x08)
	float PlayerSpeedThatMapsToOne; // 0x50(0x04)
	float PlayerSpeedThatMapsToZero; // 0x54(0x04)
};

// Class WaterSlide.WaterSlideInputComponent
// Size: 0x2b0 (Inherited: 0x2a0)
struct UWaterSlideInputComponent : ULookAtOffsetInputComponent {
	char UnknownData_2A0[0x10]; // 0x2a0(0x10)
};

// Class WaterSlide.WaterSlideVeeringAnalogInputId
// Size: 0x38 (Inherited: 0x38)
struct UWaterSlideVeeringAnalogInputId : UAnalogInputId {
};

// Class WaterSlide.ZiplineActionStateId
// Size: 0x28 (Inherited: 0x28)
struct UZiplineActionStateId : UActionStateId {
};

// Class WaterSlide.ZiplineEditorComponent
// Size: 0x850 (Inherited: 0x850)
struct UZiplineEditorComponent : UCameraComponent {
};

// Class WaterSlide.ZiplineFXParams
// Size: 0x70 (Inherited: 0x28)
struct UZiplineFXParams : UDataAsset {
	struct UWwiseEvent* ZiplineStartSFX; // 0x28(0x08)
	struct UWwiseEvent* ZiplineAdditiveOneShotSFX; // 0x30(0x08)
	struct UWwiseEvent* ZiplineLoopStartSFX; // 0x38(0x08)
	struct UWwiseEvent* ZiplineEndSFX; // 0x40(0x08)
	struct UWwiseEvent* ZiplineLoopEndSFX; // 0x48(0x08)
	struct FName PlayerSpeedOnZiplineRTPC; // 0x50(0x08)
	struct UParticleSystem* PlayerZiplineWindVFX; // 0x58(0x08)
	struct UParticleSystem* PlayerZiplineTrailVFX; // 0x60(0x08)
	struct FVector2D SpawnParticleSpeedThreshold; // 0x68(0x08)
};

// Class WaterSlide.ZiplineInputComponent
// Size: 0x2a8 (Inherited: 0x2a0)
struct UZiplineInputComponent : ULookAtOffsetInputComponent {
	char UnknownData_2A0[0x8]; // 0x2a0(0x08)
};

