// ScriptStruct /Script/FortniteGame.FortReplayPlaybackState
// Size: 0x18
struct FFortReplayPlaybackState
{
	float StartTime; // 0x0 (0x4)
	float EndTime; // 0x4 (0x4)
	float TimeNow; // 0x8 (0x4)
	bool bIsPaused; // 0xc (0x1)
	unsigned char unreflected_d[0x3]; // 0xd (0x3) 
	float PlaybackSpeedMultiplier; // 0x10 (0x4)
	enum EHudVisibilityState HUDVisibility; // 0x14 (0x1)
	bool bLevelStreaming; // 0x15 (0x1)
	bool bHasRelevancyZone; // 0x16 (0x1)
	unsigned char padding_17[0x1]; // 0x17 (0x1)
};

