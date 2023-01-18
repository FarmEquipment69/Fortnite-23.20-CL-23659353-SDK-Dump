// Class /Script/FortniteGame.AthenaSeasonStats
// Size: 0x88
class UAthenaSeasonStats : public UObject
{
	class UAthenaStatsSet* CumulativeStats; // 0x28 (0x8)
	struct TMap<struct FName, class UAthenaStatsSet*> Buckets; // 0x30 (0x50)
	class UAthenaSeasonItemDefinition* SeasonDefinition; // 0x80 (0x8)

	/* Functions */

	// Function /Script/FortniteGame.AthenaSeasonStats.GetSeasonDefintion (Underlying native function: GetSeasonDefintion 0x751a904)
	class UAthenaSeasonItemDefinition* GetSeasonDefintion(); // (Final | Native | Public | BlueprintCallable)
};

