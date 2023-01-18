// Class /Script/FortniteGame.FortCreativeDiscoverySurfaceManager
// Size: 0xc0
class UFortCreativeDiscoverySurfaceManager : public UObject
{
	struct TArray<class UFortCreativeDiscoverySurface*> Surfaces; // 0x28 (0x10)
	float SurfaceRefreshRate; // 0x38 (0x4)
	unsigned char unreflected_3c[0x54]; // 0x3c (0x54) 
	bool bShouldUseDiscoveryService; // 0x90 (0x1)
	unsigned char unreflected_91[0x7]; // 0x91 (0x7) 
	struct TArray<struct FOnlineDiscoveryModeSetDef> ModeSetEntries; // 0x98 (0x10)
	bool bForceShowModeSetEntries; // 0xa8 (0x1)
	unsigned char unreflected_a9[0x7]; // 0xa9 (0x7) 
	struct TArray<struct FString> DevelopmentLinkCodes; // 0xb0 (0x10)
};

