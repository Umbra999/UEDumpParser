// Class OceanCrawlers.BTTask_BroadcastOceanCrawlerAbilityAudioEvent
// Size: 0x68 (Inherited: 0x60)
struct UBTTask_BroadcastOceanCrawlerAbilityAudioEvent : UBTTaskNode {
	char OceanCrawlerAudioKeyToBroadcast; // 0x60(0x01)
	char UnknownData_61[0x7]; // 0x61(0x07)
};

// Class OceanCrawlers.OceanCrawlerAudioParamsDataAsset
// Size: 0xa0 (Inherited: 0x28)
struct UOceanCrawlerAudioParamsDataAsset : UDataAsset {
	struct UWwiseObjectPoolWrapper* WwiseObjectPoolWrapper; // 0x28(0x08)
	struct TArray<struct FOceanCrawlerAudioKeyPair> AudioKeyPairs; // 0x30(0x10)
	struct FWeightedProbabilityRangeOfRanges BuffThankDelay; // 0x40(0x30)
	struct FOceanCrawlerBuffAudioSettings CrabBuffAudioSettings; // 0x70(0x10)
	struct FOceanCrawlerBuffAudioSettings EelBuffAudioSettings; // 0x80(0x10)
	struct FOceanCrawlerBuffAudioSettings HermitBuffAudioSettings; // 0x90(0x10)
};

// Class OceanCrawlers.OceanCrawlerAudioBroadcaster
// Size: 0x1c0 (Inherited: 0xc8)
struct UOceanCrawlerAudioBroadcaster : UActorComponent {
	struct UOceanCrawlerAudioParamsDataAsset* AudioDataAsset; // 0xc8(0x08)
	struct AActor* CachedOwner; // 0xd0(0x08)
	char UnknownData_D8[0xe8]; // 0xd8(0xe8)

	void Multicast_PlayBuffAudio(struct FEventOceanCrawlerAIBuffAudioRequest InRequest); // Function OceanCrawlers.OceanCrawlerAudioBroadcaster.Multicast_PlayBuffAudio // Final|Net|Native|Event|NetMulticast|Private // @ game+0x1509e70
	void Multicast_PlayAudio(char InAudioKey, float InAudioDelay); // Function OceanCrawlers.OceanCrawlerAudioBroadcaster.Multicast_PlayAudio // Final|Net|Native|Event|NetMulticast|Private // @ game+0x1509db0
};

