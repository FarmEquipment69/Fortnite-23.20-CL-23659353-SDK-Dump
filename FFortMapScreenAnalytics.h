// ScriptStruct /Script/FortniteGame.FortMapScreenAnalytics
// Size: 0x240
struct FFortMapScreenAnalytics
{
	struct FFortQuestsTabAnalytics QuestsTabAnalytics; // 0x0 (0x170)
	struct FFortCollectionTabAnalytics CollectionTabAnalytics; // 0x170 (0x68)
	enum EAccessedMapScreenFrom AccessedMapScreenFrom; // 0x1d8 (0x1)
	unsigned char unreflected_1d9[0x3]; // 0x1d9 (0x3) 
	struct FName FirstActiveTab; // 0x1dc (0x4)
	struct FName LastActiveTab; // 0x1e0 (0x4)
	struct FName ActiveTab; // 0x1e4 (0x4)
	float CurrentTabActivationTimestamp; // 0x1e8 (0x4)
	unsigned char unreflected_1ec[0x4]; // 0x1ec (0x4) 
	struct TMap<struct FName, float> TabIDToTimeViewed; // 0x1f0 (0x50)
};

