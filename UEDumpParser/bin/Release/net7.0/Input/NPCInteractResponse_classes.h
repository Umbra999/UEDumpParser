// Class NPCInteractResponse.InteractResponseType
// Size: 0x28 (Inherited: 0x28)
struct UInteractResponseType : UObject {
};

// Class NPCInteractResponse.DefaultInteractResponseType
// Size: 0x28 (Inherited: 0x28)
struct UDefaultInteractResponseType : UInteractResponseType {
};

// Class NPCInteractResponse.PositiveInteractResponseType
// Size: 0x28 (Inherited: 0x28)
struct UPositiveInteractResponseType : UInteractResponseType {
};

// Class NPCInteractResponse.NegativeInteractResponseType
// Size: 0x28 (Inherited: 0x28)
struct UNegativeInteractResponseType : UInteractResponseType {
};

// Class NPCInteractResponse.NPCInteractAnimResponseDataAsset
// Size: 0x38 (Inherited: 0x28)
struct UNPCInteractAnimResponseDataAsset : UDataAsset {
	struct TArray<struct FNPCInteractResponseStruct> NPCInteractResponseAnimData; // 0x28(0x10)
};

// Class NPCInteractResponse.NPCInteractResponseAnimationInstanceInterface
// Size: 0x28 (Inherited: 0x28)
struct UNPCInteractResponseAnimationInstanceInterface : UInterface {
};

// Class NPCInteractResponse.NPCInteractResponseInterface
// Size: 0x28 (Inherited: 0x28)
struct UNPCInteractResponseInterface : UInterface {
};

// Class NPCInteractResponse.NPCInteractResponseComponent
// Size: 0xd0 (Inherited: 0xc8)
struct UNPCInteractResponseComponent : UActorComponent {
	char UnknownData_C8[0x8]; // 0xc8(0x08)
};

// Class NPCInteractResponse.NPCInteractResponseDialogInterface
// Size: 0x28 (Inherited: 0x28)
struct UNPCInteractResponseDialogInterface : UInterface {
};

