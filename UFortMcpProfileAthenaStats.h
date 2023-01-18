// Class /Script/FortniteGame.FortMcpProfileAthenaStats
// Size: 0x1d0
class UFortMcpProfileAthenaStats : public UFortMcpProfile
{
	unsigned char unreflected_180[0x8]; // 0x180 (0x8) 
	class UAthenaSeasonStats* LifeTimeStats; // 0x188 (0x8)
	unsigned char unreflected_190[0x18]; // 0x190 (0x18) 
	struct TArray<class UAthenaSeasonStats*> LifeTimeAndSeasonStatsList; // 0x1a8 (0x10)
	unsigned char padding_1b8[0x18]; // 0x1b8 (0x18)

	/* Functions */

	// Function /Script/FortniteGame.FortMcpProfileAthenaStats.GetLifetimeStats (Underlying native function: GetLifetimeStats 0x8391688)
	class UAthenaSeasonStats* GetLifetimeStats(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortMcpProfileAthenaStats.GetLifeTimeAndSeasonList (Underlying native function: GetLifeTimeAndSeasonList 0x8391614)
	struct TArray<class UAthenaSeasonStats*> GetLifeTimeAndSeasonList(); // (Final | 0x00000002 | Native | Public | BlueprintCallable)
};

