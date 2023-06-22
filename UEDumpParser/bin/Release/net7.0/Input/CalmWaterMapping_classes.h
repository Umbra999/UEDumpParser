// Class CalmWaterMapping.CalmWaterMappingInterface
// Size: 0x28 (Inherited: 0x28)
struct UCalmWaterMappingInterface : UInterface {

	float GetDampeningFactor(struct FVector2D InPosition); // Function CalmWaterMapping.CalmWaterMappingInterface.GetDampeningFactor // Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x35f1530
	float GetChoppinessFactor(struct FVector2D InPosition); // Function CalmWaterMapping.CalmWaterMappingInterface.GetChoppinessFactor // Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x35f1490
};

// Class CalmWaterMapping.AthenaCalmWaterZone
// Size: 0x3f0 (Inherited: 0x3d0)
struct AAthenaCalmWaterZone : ACalmWaterZone {
	char UnknownData_3D0[0x20]; // 0x3d0(0x20)
};

// Class CalmWaterMapping.CalmWaterMappingService
// Size: 0x50 (Inherited: 0x28)
struct UCalmWaterMappingService : UObject {
	char UnknownData_28[0x28]; // 0x28(0x28)

	float GetMaxWindSpeed(); // Function CalmWaterMapping.CalmWaterMappingService.GetMaxWindSpeed // Final|Native|Static|Public|BlueprintCallable // @ game+0x35f15d0
};

