// Enum Repair.ERepairableState
enum class ERepairableState : uint8_t {
	NeverDamaged,
	Repairable,
	Repairing,
	Repaired,
	UndoingRepair,
	ERepairableState_MAX,
};

// ScriptStruct Repair.ShipPartDamagePersistenceModel
// Size: 0x20 (Inherited: 0x01)
struct FShipPartDamagePersistenceModel : FPersistenceModel {
	struct TArray<char> ComponentRepairableStates; // 0x00(0x10)
	struct FString Identifier; // 0x10(0x10)
};

// ScriptStruct Repair.DamageZoneRepairableStateChangedEvent
// Size: 0x10 (Inherited: 0x00)
struct FDamageZoneRepairableStateChangedEvent {
	struct AActor* DamageZoneActor; // 0x00(0x08)
	char RepairableState; // 0x08(0x01)
	char UnknownData_9[0x7]; // 0x09(0x07)
};

// ScriptStruct Repair.RepairableComponentRepairableStateChangedEvent
// Size: 0x10 (Inherited: 0x00)
struct FRepairableComponentRepairableStateChangedEvent {
	struct UActorComponent* RepairableComponent; // 0x00(0x08)
	char RepairableState; // 0x08(0x01)
	char UnknownData_9[0x7]; // 0x09(0x07)
};

// ScriptStruct Repair.EventRepairableObjectRepairEndedEvent
// Size: 0x28 (Inherited: 0x00)
struct FEventRepairableObjectRepairEndedEvent {
	struct UObject* Repairable; // 0x00(0x08)
	struct FVector Position; // 0x08(0x0c)
	char UnknownData_14[0x4]; // 0x14(0x04)
	struct AActor* RepairerActor; // 0x18(0x08)
	float RepairPercentage; // 0x20(0x04)
	char UnknownData_24[0x4]; // 0x24(0x04)
};

// ScriptStruct Repair.EventRepairableObjectDestroyed
// Size: 0x01 (Inherited: 0x00)
struct FEventRepairableObjectDestroyed {
	char UnknownData_0[0x1]; // 0x00(0x01)
};

// ScriptStruct Repair.EventPlayerUndoRepairEnd
// Size: 0x08 (Inherited: 0x00)
struct FEventPlayerUndoRepairEnd {
	char UnknownData_0[0x8]; // 0x00(0x08)
};

// ScriptStruct Repair.EventPlayerUndoRepairCompleted
// Size: 0x08 (Inherited: 0x00)
struct FEventPlayerUndoRepairCompleted {
	char UnknownData_0[0x8]; // 0x00(0x08)
};

// ScriptStruct Repair.EventPlayerUndoRepairStart
// Size: 0x08 (Inherited: 0x00)
struct FEventPlayerUndoRepairStart {
	char UnknownData_0[0x8]; // 0x00(0x08)
};

