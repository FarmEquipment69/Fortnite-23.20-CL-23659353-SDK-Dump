// Class /Script/FortniteGame.AthenaPlayerMatchReport
// Size: 0x1d8
class UAthenaPlayerMatchReport : public UObject
{
	struct FMulticastInlineDelegate OnRewardsAvailable; // 0x28 (0x10)
	struct FMulticastInlineDelegate OnStatsAvailable; // 0x38 (0x10)
	struct FMulticastInlineDelegate OnTeamStatsAvailable; // 0x48 (0x10)
	struct FAthenaLevelInfo InitialLevelInfo; // 0x58 (0x24)
	bool bHasMatchStats; // 0x7c (0x1)
	unsigned char unreflected_7d[0x3]; // 0x7d (0x3) 
	struct FAthenaMatchStats MatchStats; // 0x80 (0xe8)
	bool bHasTeamStats; // 0x168 (0x1)
	unsigned char unreflected_169[0x3]; // 0x169 (0x3) 
	struct FAthenaMatchTeamStats* TeamStats; // 0x16c (0x8)
	bool bHasRewards; // 0x174 (0x1)
	unsigned char unreflected_175[0x3]; // 0x175 (0x3) 
	struct FAthenaRewardResult EndOfMatchResults; // 0x178 (0x40)
	struct FAthenaTravelRecord TravelRecord; // 0x1b8 (0x10)
	struct FMulticastInlineDelegate TravelLogUpdated; // 0x1c8 (0x10)

	/* Functions */

	// Function /Script/FortniteGame.AthenaPlayerMatchReport.GetXpRewards (Underlying native function: GetXpRewards 0x82654d4)
	void GetXpRewards(struct TArray<struct FAthenaMatchXpReward>& XpRewards); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.AthenaPlayerMatchReport.GetTotalSeasonalXpEarned (Underlying native function: GetTotalSeasonalXpEarned 0x82654ac)
	int GetTotalSeasonalXpEarned(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.AthenaPlayerMatchReport.GetTotalScoreEarned (Underlying native function: GetTotalScoreEarned 0x8265468)
	int GetTotalScoreEarned(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.AthenaPlayerMatchReport.GetTotalBookXpEarned (Underlying native function: GetTotalBookXpEarned 0x8265440)
	int GetTotalBookXpEarned(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.AthenaPlayerMatchReport.GetLootRewards (Underlying native function: GetLootRewards 0x82652dc)
	void GetLootRewards(struct TArray<struct FAthenaMatchLootReward>& LootRewards); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// DelegateFunction /Script/FortniteGame.AthenaPlayerMatchReport.DataAvailableEvent__DelegateSignature (Has no native function)
	void DataAvailableEventDelegateSignature(); // (MulticastDelegate | Public | Delegate)
};

