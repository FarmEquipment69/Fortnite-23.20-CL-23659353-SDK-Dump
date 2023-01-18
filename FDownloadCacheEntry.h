// ScriptStruct /Script/EpicCMS.DownloadCacheEntry
// Size: 0x28
struct FDownloadCacheEntry
{
	struct FString FilePath; // 0x0 (0x10)
	struct FString SourceUrl; // 0x10 (0x10)
	struct FDateTime* LastAccessTime; // 0x20 (0x8)
};

