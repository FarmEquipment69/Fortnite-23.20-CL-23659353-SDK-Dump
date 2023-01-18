// ScriptStruct /Script/HmxAudio.MusicClipSyncConfig
// Size: 0x18
struct FMusicClipSyncConfig
{
	enum EMusicClipSyncOptions syncOption; // 0x0 (0x1)
	enum EMusicClipTimelineMapping timelineMapping; // 0x1 (0x1)
	unsigned char unreflected_2[0x2]; // 0x2 (0x2) 
	int offsetTicks; // 0x4 (0x4)
	int minWaitTicks; // 0x8 (0x4)
	float minWaitMs; // 0xc (0x4)
	bool ignoreMasterLoopsAndSeeks; // 0x10 (0x1)
	bool continueIfMasterStops; // 0x11 (0x1)
	enum EMusicClipUnmutePoint unmutePoint; // 0x12 (0x1)
	unsigned char unreflected_13[0x1]; // 0x13 (0x1) 
	int maxPreRollBars; // 0x14 (0x4)
};

