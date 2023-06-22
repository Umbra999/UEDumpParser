// Class AIActionFramework.AIActionActivity
// Size: 0x28 (Inherited: 0x28)
struct UAIActionActivity : UObject {
};

// Class AIActionFramework.AIActionActivity_Idle
// Size: 0x28 (Inherited: 0x28)
struct UAIActionActivity_Idle : UAIActionActivity {
};

// Class AIActionFramework.AIActionActivity_Quest
// Size: 0x28 (Inherited: 0x28)
struct UAIActionActivity_Quest : UAIActionActivity {
};

// Class AIActionFramework.AIActionContextTag
// Size: 0x28 (Inherited: 0x28)
struct UAIActionContextTag : UObject {
};

// Class AIActionFramework.AIActionInstigatorInterface
// Size: 0x28 (Inherited: 0x28)
struct UAIActionInstigatorInterface : UInterface {
};

// Class AIActionFramework.AIActionInstigatorComponent
// Size: 0xf0 (Inherited: 0xc8)
struct UAIActionInstigatorComponent : UActorComponent {
	char UnknownData_C8[0x8]; // 0xc8(0x08)
	struct TArray<struct UClass*> CurrentRoles; // 0xd0(0x10)
	struct UClass* InitialActivity; // 0xe0(0x08)
	struct UClass* CurrentActivity; // 0xe8(0x08)
};

// Class AIActionFramework.AIActionRole
// Size: 0x28 (Inherited: 0x28)
struct UAIActionRole : UObject {
};

// Class AIActionFramework.AIActionSpotInterface
// Size: 0x28 (Inherited: 0x28)
struct UAIActionSpotInterface : UInterface {
};

// Class AIActionFramework.AIActionSpotComponent
// Size: 0x120 (Inherited: 0xc8)
struct UAIActionSpotComponent : UActorComponent {
	char UnknownData_C8[0x8]; // 0xc8(0x08)
	struct TArray<struct UClass*> SupportedRoles; // 0xd0(0x10)
	struct TArray<struct UClass*> SupportedActivities; // 0xe0(0x10)
	struct TArray<struct UClass*> ContextTags; // 0xf0(0x10)
	struct UClass* CustomAnimInstance; // 0x100(0x08)
	char UnknownData_108[0x18]; // 0x108(0x18)
};

// Class AIActionFramework.AIActionSpotServiceInterface
// Size: 0x28 (Inherited: 0x28)
struct UAIActionSpotServiceInterface : UInterface {
};

// Class AIActionFramework.AIActionSpotService
// Size: 0x90 (Inherited: 0x28)
struct UAIActionSpotService : UObject {
	char UnknownData_28[0x68]; // 0x28(0x68)
};

