// Class Describables.DescribableComponent
// Size: 0x188 (Inherited: 0x128)
struct UDescribableComponent : UInteractableComponent {
	char UnknownData_128[0x8]; // 0x128(0x08)
	bool TooltipActiveOnBeginPlay; // 0x130(0x01)
	char UnknownData_131[0x7]; // 0x131(0x07)
	struct FText DescribableTooltipText; // 0x138(0x38)
	bool TooltipActive; // 0x170(0x01)
	char UnknownData_171[0x17]; // 0x171(0x17)

	void SetTooltipActive(bool IsActive); // Function Describables.DescribableComponent.SetTooltipActive // Final|RequiredAPI|Native|Public|BlueprintCallable // @ game+0x147cec0
	void OnRep_TooltipActive(); // Function Describables.DescribableComponent.OnRep_TooltipActive // Final|RequiredAPI|Native|Private // @ game+0x147cea0
};

