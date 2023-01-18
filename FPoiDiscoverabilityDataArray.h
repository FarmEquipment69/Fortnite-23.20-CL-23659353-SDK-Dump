// ScriptStruct /Script/FortniteGame.PoiDiscoverabilityDataArray
// Size: 0x120
struct FPoiDiscoverabilityDataArray : FFastArraySerializer
{
	struct TArray<struct FPoiDiscoverabilityDataEntry> Entries; // 0x108 (0x10)
	class UFortControllerComponent_MapDiscoverability* Owner; // 0x118 (0x8)
};

