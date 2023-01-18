// Class /Script/MetasoundEngine.MetaSoundSettings
// Size: 0x78
class UMetaSoundSettings : public UDeveloperSettings
{
	bool bAutoUpdateEnabled; // 0x30 (0x1)
	unsigned char unreflected_31[0x7]; // 0x31 (0x7) 
	struct TArray<struct FMetasoundFrontendClassName> AutoUpdateDenylist; // 0x38 (0x10)
	struct TArray<struct FDefaultMetaSoundAssetAutoUpdateSettings> AutoUpdateAssetDenylist; // 0x48 (0x10)
	bool bAutoUpdateLogWarningOnDroppedConnection; // 0x58 (0x1)
	unsigned char unreflected_59[0x7]; // 0x59 (0x7) 
	struct TArray<struct FDirectoryPath> DirectoriesToRegister; // 0x60 (0x10)
	int DenyListCacheChangeID; // 0x70 (0x4)
	unsigned char padding_74[0x4]; // 0x74 (0x4)
};

