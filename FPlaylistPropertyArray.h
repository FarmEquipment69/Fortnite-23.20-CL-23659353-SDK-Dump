// ScriptStruct /Script/FortniteGame.PlaylistPropertyArray
// Size: 0x1e8
struct FPlaylistPropertyArray : FFastArraySerializer
{
	struct TArray<struct FPropertyOverride> PropertyOverrides; // 0x108 (0x10)
	int PlaylistReplicationKey; // 0x118 (0x4)
	unsigned char unreflected_11c[0x4]; // 0x11c (0x4) 
	class UFortPlaylistAthena* BasePlaylist; // 0x120 (0x8)
	class UFortPlaylistAthena* OverridePlaylist; // 0x128 (0x8)
	struct TMap<struct FString, struct FPropertyOverrideScope> PropertyOverrideScopes; // 0x130 (0x50)
	unsigned char padding_180[0x68]; // 0x180 (0x68)
};

