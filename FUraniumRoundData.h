// ScriptStruct /Script/FortniteGame.UraniumRoundData
// Size: 0x18
struct FUraniumRoundData
{
	int8_t CurrentRoundNumber; // 0x0 (0x1)
	int8_t CurrentRoundCheckPoint; // 0x1 (0x1)
	unsigned char unreflected_2[0x6]; // 0x2 (0x6) 
	struct TArray<struct FUraniumSingleRoundInfo> SingleRoundInfos; // 0x8 (0x10)
};

