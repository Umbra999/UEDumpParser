// Class FerretBlueprint.MemFerretBlueprintInterface
// Size: 0x28 (Inherited: 0x28)
struct UMemFerretBlueprintInterface : UBlueprintFunctionLibrary {

	void StopTracking(); // Function FerretBlueprint.MemFerretBlueprintInterface.StopTracking // Final|Native|Static|Public|BlueprintCallable // @ game+0x1485c20
	struct FString StopAndSave(struct FString FileName); // Function FerretBlueprint.MemFerretBlueprintInterface.StopAndSave // Final|Native|Static|Public|BlueprintCallable // @ game+0x1485b30
	void StopAllocTracking(); // Function FerretBlueprint.MemFerretBlueprintInterface.StopAllocTracking // Final|Native|Static|Public|BlueprintCallable // @ game+0x1485b10
	void StartTracking(); // Function FerretBlueprint.MemFerretBlueprintInterface.StartTracking // Final|Native|Static|Public|BlueprintCallable // @ game+0x1485af0
	struct FString Snapshot(struct FString FileName, bool ShouldClearData); // Function FerretBlueprint.MemFerretBlueprintInterface.Snapshot // Final|Native|Static|Public|BlueprintCallable // @ game+0x14859c0
	void SetMemoryStatCollectionInterval(float CollectionInterval); // Function FerretBlueprint.MemFerretBlueprintInterface.SetMemoryStatCollectionInterval // Final|Native|Static|Public|BlueprintCallable // @ game+0x1485950
	void Reset(); // Function FerretBlueprint.MemFerretBlueprintInterface.Reset // Final|Native|Static|Public|BlueprintCallable // @ game+0x1485930
};

