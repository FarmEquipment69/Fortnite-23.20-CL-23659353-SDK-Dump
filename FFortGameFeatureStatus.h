// ScriptStruct /Script/FortniteGame.FortGameFeatureStatus
// Size: 0x148
struct FFortGameFeatureStatus
{
	enum EFortGameFeature Feature; // 0x0 (0x1)
	enum EFortGameFeatureState CurrentState; // 0x1 (0x1)
	enum EFortGameFeatureState RequestedState; // 0x2 (0x1)
	unsigned char unreflected_3[0x5]; // 0x3 (0x5) 
	struct FString ErrorCode; // 0x8 (0x10)
	struct FText ErrorText; // 0x18 (0x18)
	bool bIsUsingBackgroundDownloads; // 0x30 (0x1)
	bool bIsProgressPaused; // 0x31 (0x1)
	unsigned char unreflected_32[0x6]; // 0x32 (0x6) 
	struct FString PauseReason; // 0x38 (0x10)
	struct FCombinedFeatureProgressSummary ProgressSummary; // 0x48 (0x50)
	struct TMap<struct FName, struct FJsonObjectWrapper> BundleFullProgress; // 0x98 (0x50)
	struct TMap<struct FName, struct FJsonObjectWrapper> PreloadBundleFullProgress; // 0xe8 (0x50)
	bool IsActive; // 0x138 (0x1)
	bool IsPendingActive; // 0x139 (0x1)
	unsigned char unreflected_13a[0x2]; // 0x13a (0x2) 
	int BundlesToInstall; // 0x13c (0x4)
	bool bEnoughFreeSpace; // 0x140 (0x1)
	unsigned char padding_141[0x7]; // 0x141 (0x7)
};

