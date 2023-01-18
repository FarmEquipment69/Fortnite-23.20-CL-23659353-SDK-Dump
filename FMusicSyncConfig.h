// ScriptStruct /Script/HmxAudio.MusicSyncConfig
// Size: 0x28
struct FMusicSyncConfig
{
	enum FMusicSyncOptions syncOption; // 0x0 (0x1)
	bool oneShot; // 0x1 (0x1)
	unsigned char unreflected_2[0x6]; // 0x2 (0x6) 
	class UMusicHandle* timeAuthorityHandle; // 0x8 (0x8)
	enum FMusicTimelineMapping timelineMapping; // 0x10 (0x1)
	unsigned char unreflected_11[0x3]; // 0x11 (0x3) 
	int offsetTicks; // 0x14 (0x4)
	int minWaitTicks; // 0x18 (0x4)
	float minWaitMs; // 0x1c (0x4)
	enum FMusicUnmutePoint unmutePoint; // 0x20 (0x1)
	unsigned char padding_21[0x7]; // 0x21 (0x7)
};

