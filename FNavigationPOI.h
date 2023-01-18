// ScriptStruct /Script/FortniteAI.NavigationPOI
// Size: 0x80
struct FNavigationPOI
{
	struct FScalableFloat IsEnabled; // 0x0 (0x28)
	struct FGameplayTagQuery POIFilterQuery; // 0x28 (0x48)
	struct TArray<class AFortPoiVolume*> ValidPOIVolumeList; // 0x70 (0x10)
};

