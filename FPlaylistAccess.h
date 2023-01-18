// ScriptStruct /Script/FortniteGame.PlaylistAccess
// Size: 0x10
struct FPlaylistAccess
{
	bool bForcePlaylistOff; // 0x0 (0x1)
	bool bEnabled; // 0x1 (0x1)
	bool bVisibleWhenDisabled; // 0x2 (0x1)
	bool bInvisibleWhenEnabled; // 0x3 (0x1)
	bool bIsDefaultPlaylist; // 0x4 (0x1)
	enum EPlaylistAdvertisementType AdvertiseType; // 0x5 (0x1)
	bool bDisplayAsLimitedTime; // 0x6 (0x1)
	unsigned char unreflected_7[0x1]; // 0x7 (0x1) 
	int DisplayPriority; // 0x8 (0x4)
	int CategoryIndex; // 0xc (0x4)
};

