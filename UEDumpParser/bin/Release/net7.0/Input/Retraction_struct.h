// ScriptStruct Retraction.RetractorOrientationAdjustmentFlags
// Size: 0x03 (Inherited: 0x00)
struct FRetractorOrientationAdjustmentFlags {
	bool AdjustPitch; // 0x00(0x01)
	bool AdjustRoll; // 0x01(0x01)
	bool AdjustYaw; // 0x02(0x01)
};

// ScriptStruct Retraction.EventItemProxyMovedFromSlot
// Size: 0x0c (Inherited: 0x00)
struct FEventItemProxyMovedFromSlot {
	struct FVector ItemLocation; // 0x00(0x0c)
};

// ScriptStruct Retraction.EventAttachedRetractableToItemProxy
// Size: 0x08 (Inherited: 0x00)
struct FEventAttachedRetractableToItemProxy {
	struct AActor* Item; // 0x00(0x08)
};

