// ScriptStruct /Script/FortniteAI.BattleBusPOI
// Size: 0x90
struct FBattleBusPOI
{
	struct FScalableFloat IsEnabled; // 0x0 (0x28)
	struct FGameplayTagQuery POIFilterQuery; // 0x28 (0x48)
	struct TArray<class AFortPoiVolume*> ValidPOIVolumeList; // 0x70 (0x10)
	unsigned char padding_80[0x10]; // 0x80 (0x10)
};

