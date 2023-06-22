// Class PuzzleManagerComposite.SwitchesActivatedInCorrectOrderPuzzleManagerPolicy
// Size: 0x108 (Inherited: 0xe0)
struct USwitchesActivatedInCorrectOrderPuzzleManagerPolicy : UPuzzleManagerPolicy {
	struct TArray<struct AActor*> Switches; // 0xe0(0x10)
	bool IsRandomSwitchOrder; // 0xf0(0x01)
	char UnknownData_F1[0x7]; // 0xf1(0x07)
	struct TArray<struct FSwitchesActivatedInCorrectOrderPresetParams> Presets; // 0xf8(0x10)
};

