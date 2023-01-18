// Class /Script/FortniteGame.FortCreativeDiscoverySurface
// Size: 0x160
class UFortCreativeDiscoverySurface : public UPrimaryDataAsset
{
	unsigned char unreflected_30[0x8]; // 0x30 (0x8) 
	struct FName SurfaceName; // 0x38 (0x4)
	struct FName TestName; // 0x3c (0x4)
	struct TArray<struct FFortCreativeDiscoveryTestCohort> TestCohorts; // 0x40 (0x10)
	struct TArray<struct FString> GlobalLinkCodeBlacklist; // 0x50 (0x10)
	struct TArray<struct FString> GlobalLinkCodeWhitelist; // 0x60 (0x10)
	struct FString AnalyticsId; // 0x70 (0x10)
	bool bIsResolvedDataDirty; // 0x80 (0x1)
	bool bHasResolvedData; // 0x81 (0x1)
	unsigned char unreflected_82[0x2]; // 0x82 (0x2) 
	int ResolvedRevision; // 0x84 (0x4)
	unsigned char unreflected_88[0xa0]; // 0x88 (0xa0) 
	struct TArray<struct FName> ResolvedPanelOrder; // 0x128 (0x10)
	struct TArray<struct FName> ResolvedTestCohortNames; // 0x138 (0x10)
	unsigned char padding_148[0x18]; // 0x148 (0x18)
};

