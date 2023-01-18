// ScriptStruct /Script/FortniteGame.DynamicXpPlayerSessionTransient
// Size: 0xa8
struct FDynamicXpPlayerSessionTransient
{
	struct TArray<struct FDynamicXpQueuedAccolade> QueuedAccolade; // 0x0 (0x10)
	unsigned char unreflected_10[0x50]; // 0x10 (0x50) 
	int TotalXpGained; // 0x60 (0x4)
	int TotalXpPotential; // 0x64 (0x4)
	float SessionStartTime; // 0x68 (0x4)
	float LastTimeUpdate; // 0x6c (0x4)
	float BankXpReductionTimer; // 0x70 (0x4)
	bool bInMiddleOfRound; // 0x74 (0x1)
	bool bHitXpThreshold; // 0x75 (0x1)
	bool bPrevHitXpThreshold; // 0x76 (0x1)
	bool bHitExcessXpCutoff; // 0x77 (0x1)
	bool bPrevHitExcessXpCutoff; // 0x78 (0x1)
	unsigned char unreflected_79[0x3]; // 0x79 (0x3) 
	int TimeSpanOutliers; // 0x7c (0x4)
	int LastPotentialXp; // 0x80 (0x4)
	float LastBoostedXp; // 0x84 (0x4)
	bool bReportedTimeSpanOutlier; // 0x88 (0x1)
	unsigned char unreflected_89[0x3]; // 0x89 (0x3) 
	float AfkTime; // 0x8c (0x4)
	float PrevAfkTime; // 0x90 (0x4)
	float AfkRewardMult; // 0x94 (0x4)
	int NumTimesAfk; // 0x98 (0x4)
	int NumTimesAfkMax; // 0x9c (0x4)
	int NumTimesBoosted; // 0xa0 (0x4)
	bool bWasAfk; // 0xa4 (0x1)
	unsigned char padding_a5[0x3]; // 0xa5 (0x3)
};

