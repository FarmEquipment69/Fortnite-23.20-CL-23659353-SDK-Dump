// ScriptStruct /Script/FortniteUI.AthenaLeaderboardData
// Size: 0x40
struct FAthenaLeaderboardData : FTableRowBase
{
	enum EFortAthenaPlaylist Playlist; // 0x8 (0x1)
	unsigned char unreflected_9[0x3]; // 0x9 (0x3) 
	struct FName PlaylistName; // 0xc (0x4)
	enum ECommonInputType InputType; // 0x10 (0x1)
	unsigned char unreflected_11[0x7]; // 0x11 (0x7) 
	struct TArray<struct FAthenaPlaylistLeaderboardData> Stats; // 0x18 (0x10)
	bool bExcludePlaylistNames; // 0x28 (0x1)
	unsigned char unreflected_29[0x7]; // 0x29 (0x7) 
	struct TArray<struct FString> PlaylistNames; // 0x30 (0x10)
};

