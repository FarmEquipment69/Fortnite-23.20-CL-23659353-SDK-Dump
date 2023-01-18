// ScriptStruct /Script/FortniteGame.FortSimpleGameStats
// Size: 0x20
struct FFortSimpleGameStats
{
	int GamesPlayed; // 0x0 (0x4)
	int SecondsPlayed; // 0x4 (0x4)
	int KillCount; // 0x8 (0x4)
	int BestResult; // 0xc (0x4)
	struct FDateTime* LastReviewPromptDay; // 0x10 (0x8)
	int CampaignGamesPlayed; // 0x18 (0x4)
	unsigned char padding_1c[0x4]; // 0x1c (0x4)
};

