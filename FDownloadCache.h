// ScriptStruct /Script/EpicCMS.DownloadCache
// Size: 0x58
struct FDownloadCache
{
	int Version; // 0x4 (0x4)
	struct TMap<struct FString, struct FDownloadCacheEntry> Cache; // 0x8 (0x50)
};

