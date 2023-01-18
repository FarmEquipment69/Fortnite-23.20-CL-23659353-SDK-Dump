// Class /Script/Engine.AssetManagerSettings
// Size: 0xf8
class UAssetManagerSettings : public UDeveloperSettings
{
	struct TArray<struct FPrimaryAssetTypeInfo> PrimaryAssetTypesToScan; // 0x30 (0x10)
	struct TArray<struct FDirectoryPath> DirectoriesToExclude; // 0x40 (0x10)
	struct TArray<struct FPrimaryAssetRulesOverride> PrimaryAssetRules; // 0x50 (0x10)
	struct TArray<struct FPrimaryAssetRulesCustomOverride> CustomPrimaryAssetRules; // 0x60 (0x10)
	bool bOnlyCookProductionAssets; // 0x70 (0x1)
	bool bShouldManagerDetermineTypeAndName; // 0x71 (0x1)
	bool bShouldGuessTypeAndNameInEditor; // 0x72 (0x1)
	bool bShouldAcquireMissingChunksOnLoad; // 0x73 (0x1)
	bool bShouldWarnAboutInvalidAssets; // 0x74 (0x1)
	unsigned char unreflected_75[0x3]; // 0x75 (0x3) 
	struct TArray<struct FAssetManagerRedirect> PrimaryAssetIdRedirects; // 0x78 (0x10)
	struct TArray<struct FAssetManagerRedirect> PrimaryAssetTypeRedirects; // 0x88 (0x10)
	struct TArray<struct FAssetManagerRedirect> AssetPathRedirects; // 0x98 (0x10)
	struct TSet<struct FName> MetaDataTagsForAssetRegistry; // 0xa8 (0x50)
};

