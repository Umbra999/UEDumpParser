// ScriptStruct OceanCrawlers.OceanCrawlerBuffAudioSettings
// Size: 0x10 (Inherited: 0x00)
struct FOceanCrawlerBuffAudioSettings {
	struct UWwiseEvent* GiveBuffAudioEvent; // 0x00(0x08)
	struct UWwiseEvent* ReceiveBuffAudioEvent; // 0x08(0x08)
};

// ScriptStruct OceanCrawlers.OceanCrawlerAudioKeyPair
// Size: 0x10 (Inherited: 0x00)
struct FOceanCrawlerAudioKeyPair {
	char AudioKey; // 0x00(0x01)
	char UnknownData_1[0x7]; // 0x01(0x07)
	struct UWwiseEvent* AudioEvent; // 0x08(0x08)
};

