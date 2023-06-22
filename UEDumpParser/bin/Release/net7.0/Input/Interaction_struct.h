// Enum Interaction.EInteractionBlockReason
enum class EInteractionBlockReason : uint8_t {
	None,
	Radial,
	Other,
	EInteractionBlockReason_MAX,
};

// Enum Interaction.EInteractableIdentifier
enum class EInteractableIdentifier : uint8_t {
	None,
	Capstan,
	Cannon,
	Harpoon,
	Sail,
	Wheel,
	MAX,
	EInteractableIdentifier_MAX,
};

// Enum Interaction.EInteractionObject
enum class EInteractionObject : uint8_t {
	None,
	Shop,
	Chest,
	Barrel,
	CaptainsBookcase,
	EInteractionObject_MAX,
};

// ScriptStruct Interaction.EventOptimalInteractionObjectChanged
// Size: 0x10 (Inherited: 0x00)
struct FEventOptimalInteractionObjectChanged {
	struct UObject* PreviousFocusObject; // 0x00(0x08)
	struct UObject* NewFocusObject; // 0x08(0x08)
};

// ScriptStruct Interaction.EventInteractionBlockingStateChanged
// Size: 0x02 (Inherited: 0x00)
struct FEventInteractionBlockingStateChanged {
	bool IsInteractionBlocked; // 0x00(0x01)
	char InteractionBlockReason; // 0x01(0x01)
};

// ScriptStruct Interaction.IsNewInteractingPlayerCondition
// Size: 0x48 (Inherited: 0x08)
struct FIsNewInteractingPlayerCondition : FConditionBase {
	struct FConditionContextPayloadSelectorInstance PlayerPayloadSelector; // 0x08(0x20)
	struct FConditionContextPayloadSelectorInstance InteractablePayloadSelector; // 0x28(0x20)
};

