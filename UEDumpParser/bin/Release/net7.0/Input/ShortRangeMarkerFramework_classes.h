// Class ShortRangeMarkerFramework.ShortRangeMarker
// Size: 0x420 (Inherited: 0x3c8)
struct AShortRangeMarker : AActor {
	char UnknownData_3C8[0x10]; // 0x3c8(0x10)
	struct TArray<struct UMaterialInstanceDynamic*> DynamicMaterials; // 0x3d8(0x10)
	float LifetimerTimer; // 0x3e8(0x04)
	float FadeTimer; // 0x3ec(0x04)
	struct FMulticastDelegate TriggerFadeIn; // 0x3f0(0x10)
	struct FMulticastDelegate TriggerFadeOut; // 0x400(0x10)
	struct TArray<struct AActor*> CachedActors; // 0x410(0x10)

	void Multicast_OnCleanUp(); // Function ShortRangeMarkerFramework.ShortRangeMarker.Multicast_OnCleanUp // Net|NetReliableNative|Event|NetMulticast|Protected // @ game+0x3b7ca70
};

// Class ShortRangeMarkerFramework.ShortRangeMarkerInterface
// Size: 0x28 (Inherited: 0x28)
struct UShortRangeMarkerInterface : UInterface {
};

// Class ShortRangeMarkerFramework.ShortRangeMarkerBlueprintFunctionLibrary
// Size: 0x28 (Inherited: 0x28)
struct UShortRangeMarkerBlueprintFunctionLibrary : UBlueprintFunctionLibrary {

	void RegisterActorsWithShortRangeMarker(struct UObject* WorldContextObject, struct AActor* InMarker, struct TArray<struct AActor*> InActors); // Function ShortRangeMarkerFramework.ShortRangeMarkerBlueprintFunctionLibrary.RegisterActorsWithShortRangeMarker // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x3b7ca90
};

// Class ShortRangeMarkerFramework.ShortRangeMarkerDataAsset
// Size: 0x38 (Inherited: 0x28)
struct UShortRangeMarkerDataAsset : UDataAsset {
	struct UActorSpawnData* RewardMarker; // 0x28(0x08)
	float RewardMarkerHeight; // 0x30(0x04)
	char UnknownData_34[0x4]; // 0x34(0x04)
};

