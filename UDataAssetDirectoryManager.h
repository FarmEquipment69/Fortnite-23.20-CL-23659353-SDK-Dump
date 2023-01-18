// Class /Script/DataAssetDirectory.DataAssetDirectoryManager
// Size: 0x1d0
class UDataAssetDirectoryManager : public UObject
{
	unsigned char unreflected_28[0x178]; // 0x28 (0x178) 
	struct TArray<class UObject*> PatchedAssets; // 0x1a0 (0x10)
	struct FDateTime* LastUpdateCheck; // 0x1b0 (0x8)
	uint32_t UpdateCheckLimitSeconds; // 0x1b8 (0x4)
	bool bEnabled; // 0x1bc (0x1)
	bool bFailOnError; // 0x1bd (0x1)
	bool bAnalyticsEnabled; // 0x1be (0x1)
	unsigned char padding_1bf[0x11]; // 0x1bf (0x11)
};

