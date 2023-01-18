// ScriptStruct /Script/FortniteGame.MusicEventData
// Size: 0x30
struct FMusicEventData : FTableRowBase
{
	struct FGameplayTag EventTag; // 0x8 (0x4)
	enum EMusicEventResolutionRule ResolutionRule; // 0xc (0x1)
	unsigned char unreflected_d[0x3]; // 0xd (0x3) 
	float FadeInTime; // 0x10 (0x4)
	float FadeOutTime; // 0x14 (0x4)
	int MaxConcurrentEvents; // 0x18 (0x4)
	float AttenuationEvalThreshold; // 0x1c (0x4)
	struct FString Description; // 0x20 (0x10)
};

