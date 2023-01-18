// Class /Script/FortniteGame.FortAnalyticsData
// Size: 0x2a0
class UFortAnalyticsData : public UDataAsset
{
	struct FGameplayTagContainer DownedOrFinishTagWhitelist; // 0x30 (0x20)
	struct TArray<struct FGameplayTag> WhiteListTags; // 0x50 (0x10)
	struct FGameplayTag BanhammerTag; // 0x60 (0x4)
	struct FGameplayTag RemovedFromGameTag; // 0x64 (0x4)
	struct FGameplayTag LoggedOutTag; // 0x68 (0x4)
	unsigned char unreflected_6c[0x4]; // 0x6c (0x4) 
	struct FScalableFloat PlaylistAnalyticPercentBotWriteAllEvents; // 0x70 (0x28)
	struct FScalableFloat PlaylistAnalyticPercentBotEndPhase; // 0x98 (0x28)
	struct FScalableFloat PlaylistAnalyticPercentPCEndPhase; // 0xc0 (0x28)
	struct FScalableFloat PlaylistAnalyticPercentBotSlide; // 0xe8 (0x28)
	struct FScalableFloat PlaylistAnalyticPercentPCSlide; // 0x110 (0x28)
	struct FScalableFloat PlaylistAnalyticPercentBotMatchStats; // 0x138 (0x28)
	struct FScalableFloat PlaylistAnalyticPercentBotsWonMatch; // 0x160 (0x28)
	struct FScalableFloat PlaylistAnalyticPercentBotStartMatch; // 0x188 (0x28)
	struct FScalableFloat PlaylistAnalyticPercentBotStartZone; // 0x1b0 (0x28)
	struct FScalableFloat PlaylistAnalyticPercentBotDeath; // 0x1d8 (0x28)
	struct FScalableFloat PlaylistAnalyticPercentPCDeath; // 0x200 (0x28)
	struct FScalableFloat PlaylistAnalyticPercentPlayerInterrogated; // 0x228 (0x28)
	struct FScalableFloat PlaylistAnalyticPercentZero; // 0x250 (0x28)
	struct FScalableFloat PlaylistAnalyticPercentOneHundred; // 0x278 (0x28)
};

