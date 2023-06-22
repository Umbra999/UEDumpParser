// BlueprintGeneratedClass BP_LocomotionFunctionLibrary.BP_LocomotionFunctionLibrary_C
// Size: 0x28 (Inherited: 0x28)
struct UBP_LocomotionFunctionLibrary_C : UBlueprintFunctionLibrary {

	void DriveValueToClampByDelta(float Value, float Min, float Max, float Delta, struct UObject* __WorldContext, bool Hit Min, bool Hit Max); // Function BP_LocomotionFunctionLibrary.BP_LocomotionFunctionLibrary_C.DriveValueToClampByDelta // Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent // @ game+0x1848130
	void FindSailControlHandIKPositionFromAnimation(struct FVector Animation Hand IK Location, struct FVector LowerRopeLocation, struct FVector UpperRopeLocation, struct UObject* __WorldContext, struct FVector Location On Rope); // Function BP_LocomotionFunctionLibrary.BP_LocomotionFunctionLibrary_C.FindSailControlHandIKPositionFromAnimation // Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent // @ game+0x1848130
	void ArrayLoadingFromDataDrivenBlendSpace(struct TArray<struct UBlendSpace*> TargetArrayBlendspace, struct TArray<struct UBlendSpace*> LoadedArrayDataBlendspace, struct UBlendSpace* FallbackBlendspace, struct UObject* __WorldContext); // Function BP_LocomotionFunctionLibrary.BP_LocomotionFunctionLibrary_C.ArrayLoadingFromDataDrivenBlendSpace // Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent // @ game+0x1848130
	void ArrayLoadingFromDataDriven1DBlendSpace(struct TArray<struct UBlendSpace1D*> TargetArray 1D, struct TArray<struct UBlendSpace1D*> LoadedArrayData 1D, struct UBlendSpace1D* FallbackBlendspace1D, struct UObject* __WorldContext); // Function BP_LocomotionFunctionLibrary.BP_LocomotionFunctionLibrary_C.ArrayLoadingFromDataDriven1DBlendSpace // Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent // @ game+0x1848130
	void ArrayLoadingFromDataDriven(struct TArray<struct UAnimSequence*> TargetArray, struct TArray<struct UAnimSequence*> LoadedArrayData, struct UAnimSequence* FallBackAnimation, struct UObject* __WorldContext); // Function BP_LocomotionFunctionLibrary.BP_LocomotionFunctionLibrary_C.ArrayLoadingFromDataDriven // Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent // @ game+0x1848130
	void Update IK Limb Controls(struct USkeletalMeshComponent* SkeletalMeshComponent, char Limb ID, bool Active, char Coordinate Space, float Translation Strength, float Rotation Strength, struct FTransform Transform, float BlendIn, float BlendOut, struct UObject* __WorldContext); // Function BP_LocomotionFunctionLibrary.BP_LocomotionFunctionLibrary_C.Update IK Limb Controls // Static|Public|BlueprintCallable|BlueprintEvent // @ game+0x1848130
	void Decrement Integer(int32_t Value, int32_t Decrement, struct UObject* __WorldContext); // Function BP_LocomotionFunctionLibrary.BP_LocomotionFunctionLibrary_C.Decrement Integer // Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent // @ game+0x1848130
	void Increment Integer(int32_t integer, int32_t Increment, struct UObject* __WorldContext); // Function BP_LocomotionFunctionLibrary.BP_LocomotionFunctionLibrary_C.Increment Integer // Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent // @ game+0x1848130
	void Calculate Turn Times(bool TurnLeft, float CurrentControllerYaw, float PreviousControllerYaw, struct FBP_Turning Turning, struct UObject* __WorldContext); // Function BP_LocomotionFunctionLibrary.BP_LocomotionFunctionLibrary_C.Calculate Turn Times // Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent // @ game+0x1848130
	bool InRangeAndRate(bool InZone, float Min, float Max, struct FBP_Turning Turning, struct UObject* __WorldContext); // Function BP_LocomotionFunctionLibrary.BP_LocomotionFunctionLibrary_C.InRangeAndRate // Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent // @ game+0x1848130
	void Turn State Change Check(struct FBP_Turning Turning, bool InZone, struct UObject* __WorldContext); // Function BP_LocomotionFunctionLibrary.BP_LocomotionFunctionLibrary_C.Turn State Change Check // Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent // @ game+0x1848130
	bool Not In Range(float Value, float Min, float Max, struct UObject* __WorldContext); // Function BP_LocomotionFunctionLibrary.BP_LocomotionFunctionLibrary_C.Not In Range // Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent // @ game+0x1848130
	void Update Animation Turn State(struct FBP_Turning Turning, struct UObject* __WorldContext); // Function BP_LocomotionFunctionLibrary.BP_LocomotionFunctionLibrary_C.Update Animation Turn State // Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent // @ game+0x1848130
	void Update Animation Turn Time(bool TurningLeft, float CurrentTurnAngle, float Reset Angle, float Previous Controller Yaw, float Current Controller Yaw, float Animation Time, struct UObject* __WorldContext); // Function BP_LocomotionFunctionLibrary.BP_LocomotionFunctionLibrary_C.Update Animation Turn Time // Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent // @ game+0x1848130
	void JumpingLogic(struct ACharacter* PlayerCharacter, float MovementSpeed, float FrameDelta, float JumpImpactTimerMax, char JumpingState, float PreImpactTime, float JumpImpactTimer, struct UObject* __WorldContext); // Function BP_LocomotionFunctionLibrary.BP_LocomotionFunctionLibrary_C.JumpingLogic // Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent // @ game+0x1848130
	void Ik Blending(float BlendCounter, bool IKON, float Translation_Strength, float Rotation_Strength, char EaseingType, float BlendMax, float FrameDeltaTime, struct UObject* __WorldContext); // Function BP_LocomotionFunctionLibrary.BP_LocomotionFunctionLibrary_C.Ik Blending // Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent // @ game+0x1848130
	void Increment Counter(float Counter, float CounterMax, float DeltaTime, struct UObject* __WorldContext, bool Hit Max Count, float IncrementedCounter); // Function BP_LocomotionFunctionLibrary.BP_LocomotionFunctionLibrary_C.Increment Counter // Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent // @ game+0x1848130
	void Decrement Counter(float Counter, float CounterMin, float DeltaTime, struct UObject* __WorldContext, bool Hit Min Count, float DecrementedCounter); // Function BP_LocomotionFunctionLibrary.BP_LocomotionFunctionLibrary_C.Decrement Counter // Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent // @ game+0x1848130
	void Out Over Time(float CurrentTime, float MaxTime, char EasingType, struct UObject* __WorldContext, float Return Val   0-1); // Function BP_LocomotionFunctionLibrary.BP_LocomotionFunctionLibrary_C.Out Over Time // Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent // @ game+0x1848130
	void Update Animation Times(bool TurningLeft, float Current Controller Yaw, float Previous Controller Yaw, struct FBP_Turning Turning, struct UObject* __WorldContext); // Function BP_LocomotionFunctionLibrary.BP_LocomotionFunctionLibrary_C.Update Animation Times // Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent // @ game+0x1848130
	void Update Turn Animations(bool TurningLeft, float CurrentYaw, float PreviousYaw, float FrameDeltaTime, struct FBP_Turning Turning, struct UObject* __WorldContext); // Function BP_LocomotionFunctionLibrary.BP_LocomotionFunctionLibrary_C.Update Turn Animations // Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent // @ game+0x1848130
	void Fix Yaw Wraparound(float CurrentYaw, float PreviousYaw, struct UObject* __WorldContext, float NewPreviousYaw); // Function BP_LocomotionFunctionLibrary.BP_LocomotionFunctionLibrary_C.Fix Yaw Wraparound // Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent // @ game+0x1848130
	void ReflexAngleCheck(float Direction A, float Direction B, struct UObject* __WorldContext, bool ReflexAngle); // Function BP_LocomotionFunctionLibrary.BP_LocomotionFunctionLibrary_C.ReflexAngleCheck // Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent // @ game+0x1848130
	void ControllerRotation(struct ACharacter* Character, struct UObject* __WorldContext, float Pitch, float Yaw); // Function BP_LocomotionFunctionLibrary.BP_LocomotionFunctionLibrary_C.ControllerRotation // Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent // @ game+0x1848130
	void Character Speed(struct ACharacter* Character, struct UObject* __WorldContext, struct FVector Velocity, float Speed); // Function BP_LocomotionFunctionLibrary.BP_LocomotionFunctionLibrary_C.Character Speed // Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent // @ game+0x1848130
};

