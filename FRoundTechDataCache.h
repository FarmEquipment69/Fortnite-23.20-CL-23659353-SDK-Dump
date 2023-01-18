// ScriptStruct /Script/FortniteGame.RoundTechDataCache
// Size: 0x28
struct FRoundTechDataCache
{
	struct TArray<struct FFutureTechData> FuturePerks; // 0x0 (0x10)
	int LevelAtRoundStart; // 0x10 (0x4)
	int FactionXPAtRoundStart; // 0x14 (0x4)
	bool bDataReady; // 0x18 (0x1)
	unsigned char unreflected_19[0x3]; // 0x19 (0x3) 
	int MaxCalandarLevel; // 0x1c (0x4)
	int MaxLevel; // 0x20 (0x4)
	unsigned char padding_24[0x4]; // 0x24 (0x4)
};

