// ScriptStruct /Script/FortniteGame.HeistPostMatchAnalyticsData
// Size: 0x48
struct FHeistPostMatchAnalyticsData
{
	int SupplyDropsOpenedPerMatch; // 0x0 (0x4)
	int JewelsLostToStorm; // 0x4 (0x4)
	int HeistDropsLostToStorm; // 0x8 (0x4)
	int JewelsEquippedPerMatch; // 0xc (0x4)
	struct TArray<float> TimeJewelHeldPerTeam; // 0x10 (0x10)
	struct TArray<int> PlayersAlivePerEscape; // 0x20 (0x10)
	int NumSuccessfulEscapes; // 0x30 (0x4)
	unsigned char unreflected_34[0x4]; // 0x34 (0x4) 
	struct TArray<unsigned char> WinningTeams; // 0x38 (0x10)
};

