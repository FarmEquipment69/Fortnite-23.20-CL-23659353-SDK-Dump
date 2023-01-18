// ScriptStruct /Script/FortniteGame.WorldHLODStreamingData
// Size: 0xb0
struct FWorldHLODStreamingData
{
	struct TSet<struct FName> MediumLevelHLODPackageNames; // 0x0 (0x50)
	struct TSet<struct FName> SplineHLODPackageNames; // 0x50 (0x50)
	struct TArray<struct FName> MapsToRebuildHLODs; // 0xa0 (0x10)
};

