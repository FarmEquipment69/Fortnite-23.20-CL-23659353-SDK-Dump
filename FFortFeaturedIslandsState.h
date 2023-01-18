// ScriptStruct /Script/FortniteGame.FortFeaturedIslandsState
// Size: 0xc0
struct FFortFeaturedIslandsState
{
	struct TArray<struct FOnlineLinkId> IslandCodes; // 0x0 (0x10)
	struct TMap<struct FString, struct FFortPlaylistCuratedContent> PlaylistCuratedContent; // 0x10 (0x50)
	struct TMap<struct FString, struct FString> PlaylistCuratedHub; // 0x60 (0x50)
	struct TArray<struct FOnlineLinkId> IslandTemplates; // 0xb0 (0x10)
};

