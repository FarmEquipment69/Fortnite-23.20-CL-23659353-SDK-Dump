// ScriptStruct /Script/FortniteGame.EndOfDayRecap
// Size: 0x20
struct FEndOfDayRecap
{
	int DayNumber; // 0x0 (0x4)
	int TeamScoreAtStartOfDay; // 0x4 (0x4)
	int TeamScoreAtEndOfDay; // 0x8 (0x4)
	unsigned char unreflected_c[0x4]; // 0xc (0x4) 
	struct TArray<struct FFortPlayerScoreReport> ScoreReports; // 0x10 (0x10)
};

