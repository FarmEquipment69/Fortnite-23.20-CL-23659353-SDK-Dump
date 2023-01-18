// ScriptStruct /Script/FortniteGame.CobaltWidgetRoundData
// Size: 0x28
struct FCobaltWidgetRoundData
{
	int8_t RoundNumber; // 0x0 (0x1)
	int8_t FirstRound; // 0x1 (0x1)
	unsigned char unreflected_2[0x6]; // 0x2 (0x6) 
	struct TArray<struct FCobaltWidgetMatchData> CurrentRoundMatches; // 0x8 (0x10)
	struct TArray<unsigned char> PreviousRoundWinners; // 0x18 (0x10)
};

