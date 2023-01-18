// ScriptStruct /Script/FortniteGame.HighlightClipPayload
// Size: 0x3f8
struct FHighlightClipPayload
{
	int UCRNHighlightId; // 0x0 (0x4)
	float UCRNStartTimestamp; // 0x4 (0x4)
	float UCRNDuration; // 0x8 (0x4)
	unsigned char unreflected_c[0x4]; // 0xc (0x4) 
	struct TMap<enum EHighlightFeatures, float> UCRNGameplayFeatures; // 0x10 (0x50)
	float UCRNGameplayScore; // 0x60 (0x4)
	unsigned char unreflected_64[0x4]; // 0x64 (0x4) 
	struct FUnicornSocialMetaPayload UCRNSocialMeta; // 0x68 (0xa8)
	float UCRNNetworkingFidelityAverage; // 0x110 (0x4)
	unsigned char unreflected_114[0x4]; // 0x114 (0x4) 
	struct TArray<struct FString> UCRNPOITags; // 0x118 (0x10)
	struct FVictimGameplayInfoPayload UCRNFollowingPlayerKillVictimGameplayInfo; // 0x128 (0x140)
	struct FVictimGameplayInfoPayload UCRNFollowingPlayerDeathVictimGameplayInfo; // 0x268 (0x140)
	struct TMap<struct FString, struct FString> UCRNUnicornTags; // 0x3a8 (0x50)
};

