// ScriptStruct /Script/FortniteGame.AthenaPlayerRankingStats
// Size: 0x60
struct FAthenaPlayerRankingStats
{
	float BaseRankLoss; // 0x0 (0x4)
	struct FAthenaPlayerRankingAwards TotalPlayerRankingAwards; // 0x4 (0xc)
	struct TMap<struct FString, struct FAthenaPlayerRankingAwards> PerPlayerAwards; // 0x10 (0x50)
};

