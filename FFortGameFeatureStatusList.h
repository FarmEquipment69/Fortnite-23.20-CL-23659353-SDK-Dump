// ScriptStruct /Script/FortniteGame.FortGameFeatureStatusList
// Size: 0x78
struct FFortGameFeatureStatusList
{
	struct FCombinedFeatureProgressSummary ProgressSummary; // 0x0 (0x50)
	struct TArray<struct FFortGameFeatureStatus> Features; // 0x50 (0x10)
	struct TArray<struct FFortGameFeatureOptionalInstallStatus> FeatureOptionalInstalls; // 0x60 (0x10)
	bool bHasNetworkConnection; // 0x70 (0x1)
	bool bIsUsingCellularConnection; // 0x71 (0x1)
	bool bAutoLaunchFullGame; // 0x72 (0x1)
	unsigned char padding_73[0x5]; // 0x73 (0x5)
};

