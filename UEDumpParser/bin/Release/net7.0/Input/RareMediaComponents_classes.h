// Class RareMediaComponents.MediaSubtitleComponent
// Size: 0x130 (Inherited: 0xc8)
struct UMediaSubtitleComponent : UActorComponent {
	char UnknownData_C8[0x68]; // 0xc8(0x68)

	void SetMediaPlayer(struct UMediaPlayer* NewMediaPlayer); // Function RareMediaComponents.MediaSubtitleComponent.SetMediaPlayer // Final|RequiredAPI|Native|Public|BlueprintCallable // @ game+0x542bea0
	struct UMediaPlayer* GetMediaPlayer(); // Function RareMediaComponents.MediaSubtitleComponent.GetMediaPlayer // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x542be70
};

// Class RareMediaComponents.WwiseMediaSoundComponent
// Size: 0x390 (Inherited: 0x2e0)
struct UWwiseMediaSoundComponent : USceneComponent {
	char UnknownData_2E0[0x60]; // 0x2e0(0x60)
	struct UWwiseEvent* MediaSoundEvent; // 0x340(0x08)
	char UnknownData_348[0x48]; // 0x348(0x48)
};

