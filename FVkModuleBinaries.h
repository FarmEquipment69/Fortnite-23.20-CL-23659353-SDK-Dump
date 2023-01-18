// ScriptStruct /Script/VkEngineTypes.VkModuleBinaries
// Size: 0x50
struct FVkModuleBinaries
{
	struct FString BaseUrl; // 0x0 (0x10)
	struct FString manifest; // 0x10 (0x10)
	struct TArray<struct FString> Files; // 0x20 (0x10)
	double TotalSizeKb; // 0x30 (0x8)
	double ManifestSizeKb; // 0x38 (0x8)
	double ManifestDiskSizeKb; // 0x40 (0x8)
	double ManifestDownloadSizeKb; // 0x48 (0x8)
};

