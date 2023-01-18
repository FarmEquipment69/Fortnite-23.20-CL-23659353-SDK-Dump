// ScriptStruct /Script/FortniteUI.VideoConfig_Mono
// Size: 0x58
struct FVideoConfig_Mono
{
	class UFortStreamMediaSource* StreamingMediaSource; // 0x0 (0x8)
	struct FName VideoString; // 0x8 (0x4)
	struct FName StreamingVideoID; // 0xc (0x4)
	struct FName FallbackVideoID; // 0x10 (0x4)
	unsigned char unreflected_14[0x4]; // 0x14 (0x4) 
	struct FString ProdLinkID; // 0x18 (0x10)
	struct FString GamedevLinkID; // 0x28 (0x10)
	bool bIsAutoPlay; // 0x38 (0x1)
	bool bForceAutoPlay; // 0x39 (0x1)
	bool bStreamingEnabled; // 0x3a (0x1)
	unsigned char unreflected_3b[0x5]; // 0x3b (0x5) 
	struct FString VideoUID; // 0x40 (0x10)
	bool bShouldBeModal; // 0x50 (0x1)
	bool bUseSkipBoundaries; // 0x51 (0x1)
	bool bKairosPlayer; // 0x52 (0x1)
	bool bHoldToSkip; // 0x53 (0x1)
	unsigned char padding_54[0x4]; // 0x54 (0x4)
};

