// BlueprintGeneratedClass BP_CaptainsLog_Proxy.BP_CaptainsLog_Proxy_C
// Size: 0x900 (Inherited: 0x8e8)
struct ABP_CaptainsLog_Proxy_C : ACaptainsLogbookProxy {
	struct UConfigurableBuryableItemComponent* ConfigurableBuryableItem; // 0x8e8(0x08)
	struct UGlintComponent* Glint; // 0x8f0(0x08)
	struct UInteractableComponent* Interactable; // 0x8f8(0x08)

	struct FVector GetClosestInteractionPoint(struct FVector ReferencePosition, float OutInteractionPointRadius); // Function BP_CaptainsLog_Proxy.BP_CaptainsLog_Proxy_C.GetClosestInteractionPoint // Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent // @ game+0x1848130
	struct FText GetObjectDisplayName(); // Function BP_CaptainsLog_Proxy.BP_CaptainsLog_Proxy_C.GetObjectDisplayName // Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const // @ game+0x1848130
	void UserConstructionScript(); // Function BP_CaptainsLog_Proxy.BP_CaptainsLog_Proxy_C.UserConstructionScript // Event|Public|BlueprintCallable|BlueprintEvent // @ game+0x1848130
};

