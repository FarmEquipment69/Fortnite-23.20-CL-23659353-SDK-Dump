// ScriptStruct /Script/FortniteGame.TournamentPayoutThresholdData
// Size: 0x40
struct FTournamentPayoutThresholdData
{
	enum EPayoutScoringType ScoringType; // 0x0 (0x1)
	unsigned char unreflected_1[0x27]; // 0x1 (0x27) 
	double Threshold; // 0x28 (0x8)
	struct TArray<struct FTournamentPayoutData> PayoutData; // 0x30 (0x10)
};

