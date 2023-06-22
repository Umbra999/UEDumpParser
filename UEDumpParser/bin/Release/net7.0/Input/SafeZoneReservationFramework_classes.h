// Class SafeZoneReservationFramework.SafeZoneComponent
// Size: 0x730 (Inherited: 0x5e0)
struct USafeZoneComponent : UCapsuleComponent {
	struct FMulticastDelegate OnSafeZoneIsEmptyDelegate; // 0x5e0(0x10)
	float ExclusionRadius; // 0x5f0(0x04)
	char UnknownData_5F4[0x4]; // 0x5f4(0x04)
	float ExclusionHeight; // 0x5f8(0x04)
	struct FName SafeZoneEmptyCollisionProfile; // 0x5fc(0x08)
	bool AutoActivateSafeZone; // 0x604(0x01)
	bool DeactivateSafeZoneAfterExclusionRadiusIsEmpty; // 0x605(0x01)
	bool UsePlayerTeleport; // 0x606(0x01)
	char UnknownData_607[0x1]; // 0x607(0x01)
	float PlayerTeleportRadius; // 0x608(0x04)
	char UnknownData_60C[0x4]; // 0x60c(0x04)
	bool UseRepelForce; // 0x610(0x01)
	char UnknownData_611[0x3]; // 0x611(0x03)
	float RepelForceRadius; // 0x614(0x04)
	char UnknownData_618[0x4]; // 0x618(0x04)
	float RepelForceExtents; // 0x61c(0x04)
	float RepelForceMin; // 0x620(0x04)
	float RepelForceMax; // 0x624(0x04)
	bool ApplyRepelForceAtCentreOfMass; // 0x628(0x01)
	char UnknownData_629[0x7]; // 0x629(0x07)
	struct FRuntimeFloatCurve RepelForceGradientCurve; // 0x630(0x80)
	bool UseAngularImpulse; // 0x6b0(0x01)
	char UnknownData_6B1[0x3]; // 0x6b1(0x03)
	float AngularImpulseRadius; // 0x6b4(0x04)
	char UnknownData_6B8[0x4]; // 0x6b8(0x04)
	float AngularImpulseForce; // 0x6bc(0x04)
	float TargetDeflectionAngle; // 0x6c0(0x04)
	bool IsSafeZoneEmpty; // 0x6c4(0x01)
	bool StopAISpawning; // 0x6c5(0x01)
	char UnknownData_6C6[0x2]; // 0x6c6(0x02)
	struct FName CurrentCollisionProfile; // 0x6c8(0x08)
	char SafeZoneState; // 0x6d0(0x01)
	char UnknownData_6D1[0x5f]; // 0x6d1(0x5f)

	void SafeZoneIsEmpty__DelegateSignature(); // DelegateFunction SafeZoneReservationFramework.SafeZoneComponent.SafeZoneIsEmpty__DelegateSignature // MulticastDelegate|Public|Delegate // @ game+0x1848130
	void OnRep_UpdateCollisionProfile(); // Function SafeZoneReservationFramework.SafeZoneComponent.OnRep_UpdateCollisionProfile // Final|Native|Private // @ game+0x47ba430
	void OnRep_EmptyStateChanged(); // Function SafeZoneReservationFramework.SafeZoneComponent.OnRep_EmptyStateChanged // Final|Native|Private // @ game+0x47ba410
	void DeactivateSafeZone(); // Function SafeZoneReservationFramework.SafeZoneComponent.DeactivateSafeZone // Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable // @ game+0x47ba3f0
	void DeactivateCollider(); // Function SafeZoneReservationFramework.SafeZoneComponent.DeactivateCollider // Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable // @ game+0x47ba3d0
	void ActivateSafeZone(); // Function SafeZoneReservationFramework.SafeZoneComponent.ActivateSafeZone // Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable // @ game+0x47ba3b0
};

