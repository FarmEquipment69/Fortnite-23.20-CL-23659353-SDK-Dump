// ScriptStruct /Script/FortniteGame.PlaylistFrontEndData
// Size: 0x50
struct FPlaylistFrontEndData
{
	struct TWeakObjectPtr<class UFortPlaylistAthena> WeakPlaylistData; // 0x0 (0x8)
	unsigned char unreflected_8[0x20]; // 0x8 (0x20) 
	enum EPlaylistVisibilityState Visibility; // 0x28 (0x1)
	bool bDisplayAsDefault; // 0x29 (0x1)
	enum EPlaylistAdvertisementType AdvertiseType; // 0x2a (0x1)
	bool bDisplayAsLimitedTime; // 0x2b (0x1)
	int CategoryIndex; // 0x2c (0x4)
	struct FDateTime* EndDateUTC; // 0x30 (0x8)
	struct FOnlineLinkId LinkId; // 0x38 (0x18)
};

