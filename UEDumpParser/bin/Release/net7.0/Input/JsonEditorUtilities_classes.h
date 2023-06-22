// Class JsonEditorUtilities.JsonUtilitiesBlueprintHelperLibrary
// Size: 0x28 (Inherited: 0x28)
struct UJsonUtilitiesBlueprintHelperLibrary : UBlueprintFunctionLibrary {

	bool UStructToJsonObjectString(struct FGenericStruct Struct, struct FString OutJsonString); // Function JsonEditorUtilities.JsonUtilitiesBlueprintHelperLibrary.UStructToJsonObjectString // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x4789790
	bool JsonObjectStringToUStruct(struct FString InJsonString, struct FGenericStruct Struct); // Function JsonEditorUtilities.JsonUtilitiesBlueprintHelperLibrary.JsonObjectStringToUStruct // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x4789640
};

