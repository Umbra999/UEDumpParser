// Class DeliverableFramework.DeliverableRequirementBase
// Size: 0x30 (Inherited: 0x28)
struct UDeliverableRequirementBase : UObject {
	char UnknownData_28[0x8]; // 0x28(0x08)
};

// Class DeliverableFramework.DeliverableInterface
// Size: 0x28 (Inherited: 0x28)
struct UDeliverableInterface : UInterface {
};

// Class DeliverableFramework.DeliverableRedirectionInterface
// Size: 0x28 (Inherited: 0x28)
struct UDeliverableRedirectionInterface : UInterface {
};

// Class DeliverableFramework.DeliverableComponent
// Size: 0xe8 (Inherited: 0xc8)
struct UDeliverableComponent : UActorComponent {
	char UnknownData_C8[0x10]; // 0xc8(0x10)
	struct UDeliverableRequirementsDataAsset* DeliveryRequirementsAsset; // 0xd8(0x08)
	char UnknownData_E0[0x8]; // 0xe0(0x08)
};

// Class DeliverableFramework.DeliverableRedirectionComponent
// Size: 0xd8 (Inherited: 0xc8)
struct UDeliverableRedirectionComponent : UActorComponent {
	char UnknownData_C8[0x8]; // 0xc8(0x08)
	struct UDeliverableRedirectionContextBase* Context; // 0xd0(0x08)
};

// Class DeliverableFramework.DeliverableRedirectionContextBase
// Size: 0x28 (Inherited: 0x28)
struct UDeliverableRedirectionContextBase : UObject {
};

// Class DeliverableFramework.DeliverableRedirectionNoContext
// Size: 0x28 (Inherited: 0x28)
struct UDeliverableRedirectionNoContext : UDeliverableRedirectionContextBase {
};

// Class DeliverableFramework.DeliverableRedirectionCompositeContext
// Size: 0x50 (Inherited: 0x28)
struct UDeliverableRedirectionCompositeContext : UDeliverableRedirectionContextBase {
	struct TArray<struct UDeliverableRedirectionContextBase*> Contexts; // 0x28(0x10)
	char UnknownData_38[0x18]; // 0x38(0x18)
};

// Class DeliverableFramework.DeliverableRedirectionDestinationDescriptorBase
// Size: 0x28 (Inherited: 0x28)
struct UDeliverableRedirectionDestinationDescriptorBase : UObject {
};

// Class DeliverableFramework.DeliverableRedirectionContextHandlerBase
// Size: 0x30 (Inherited: 0x28)
struct UDeliverableRedirectionContextHandlerBase : UObject {
	struct UDeliverableRedirectionDestinationDescriptorBase* DestinationDescriptor; // 0x28(0x08)
};

// Class DeliverableFramework.DeliverableRedirectionLiteralDestinationDescriptor
// Size: 0x60 (Inherited: 0x28)
struct UDeliverableRedirectionLiteralDestinationDescriptor : UDeliverableRedirectionDestinationDescriptorBase {
	struct FText Destination; // 0x28(0x38)
};

// Class DeliverableFramework.DeliverableRequirementsDataAsset
// Size: 0x50 (Inherited: 0x28)
struct UDeliverableRequirementsDataAsset : UDataAsset {
	struct TArray<struct UDeliverableRequirementBase*> Requirements; // 0x28(0x10)
	struct FDeliverableRequirementFeatureOverride FeatureOverrideRequirements; // 0x38(0x18)
};

// Class DeliverableFramework.DeliverableTooltipCustomizerInterface
// Size: 0x28 (Inherited: 0x28)
struct UDeliverableTooltipCustomizerInterface : UInterface {
};

