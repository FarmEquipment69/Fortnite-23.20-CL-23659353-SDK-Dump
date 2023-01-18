// ScriptStruct /Script/FortniteGame.FortGameFeatureOptionalInstallStatus
// Size: 0xa0
struct FFortGameFeatureOptionalInstallStatus
{
	enum EFortGameFeature Feature; // 0x0 (0x1)
	bool bContentReady; // 0x1 (0x1)
	unsigned char unreflected_2[0x6]; // 0x2 (0x6) 
	struct FString ErrorCode; // 0x8 (0x10)
	struct FText ErrorText; // 0x18 (0x18)
	bool bIsUsingBackgroundDownloads; // 0x30 (0x1)
	bool bIsProgressPaused; // 0x31 (0x1)
	unsigned char unreflected_32[0x6]; // 0x32 (0x6) 
	struct FString PauseReason; // 0x38 (0x10)
	struct FCombinedFeatureProgressSummary ProgressSummary; // 0x48 (0x50)
	int BundlesToInstall; // 0x98 (0x4)
	bool bEnoughFreeSpace; // 0x9c (0x1)
	unsigned char padding_9d[0x3]; // 0x9d (0x3)
};

