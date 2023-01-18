// ScriptStruct /Script/FortniteGame.FortMediaMetadataExt
// Size: 0x138
struct FFortMediaMetadataExt
{
	struct TArray<struct FFortMediaPlaylistExt> Playlists; // 0x0 (0x10)
	struct TArray<struct FFortMediaPlaylistExt> SelectedPlaylists; // 0x10 (0x10)
	struct FString Type; // 0x20 (0x10)
	struct FString Envelope; // 0x30 (0x10)
	struct FString Limits; // 0x40 (0x10)
	struct FString Subtitles; // 0x50 (0x10)
	struct FString UserContentProtection; // 0x60 (0x10)
	bool Sharelock; // 0x70 (0x1)
	bool AudioOnly; // 0x71 (0x1)
	unsigned char unreflected_72[0x2]; // 0x72 (0x2) 
	float AspectRatio; // 0x74 (0x4)
	bool PartySync; // 0x78 (0x1)
	bool LIVE; // 0x79 (0x1)
	unsigned char unreflected_7a[0x6]; // 0x7a (0x6) 
	struct FString DenyHTTPCode; // 0x80 (0x10)
	struct FFortMediaRegionLockExt RegionLockData; // 0x90 (0xa8)
};

