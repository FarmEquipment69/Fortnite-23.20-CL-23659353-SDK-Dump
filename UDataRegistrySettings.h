// Class /Script/DataRegistry.DataRegistrySettings
// Size: 0x48
class UDataRegistrySettings : public UDeveloperSettings
{
	struct TArray<struct FDirectoryPath> DirectoriesToScan; // 0x30 (0x10)
	bool bInitializeAllLoadedRegistries; // 0x40 (0x1)
	bool bIgnoreMissingCookedAssetRegistryData; // 0x41 (0x1)
	unsigned char padding_42[0x6]; // 0x42 (0x6)
};

