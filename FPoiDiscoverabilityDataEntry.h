// ScriptStruct /Script/FortniteGame.PoiDiscoverabilityDataEntry
// Size: 0x18
struct FPoiDiscoverabilityDataEntry : FFastArraySerializerItem
{
	struct FGameplayTag POITag; // 0xc (0x4)
	bool bDiscovered; // 0x10 (0x1)
	bool bWasInitiallyDiscovered; // 0x11 (0x1)
	unsigned char VisitCounter; // 0x12 (0x1)
	unsigned char padding_13[0x5]; // 0x13 (0x5)
};

