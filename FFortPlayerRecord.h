// ScriptStruct /Script/FortniteGame.FortPlayerRecord
// Size: 0xd0
struct FFortPlayerRecord
{
	struct FString DisplayName; // 0x0 (0x10)
	struct FString UniqueId; // 0x10 (0x10)
	struct TArray<unsigned char> BackpackData; // 0x20 (0x10)
	bool bPlayerIsNew; // 0x30 (0x1)
	unsigned char unreflected_31[0x3]; // 0x31 (0x3) 
	struct FPlayerStatsRecord PlayerStatsData; // 0x34 (0x8c)
	struct FStatManagerPeriodRecord CampaignPeriodRecord; // 0xc0 (0x10)
};

