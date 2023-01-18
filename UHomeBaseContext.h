// Class /Script/FortniteGame.HomeBaseContext
// Size: 0xc8
class UHomeBaseContext : public UBlueprintContextBase
{
	struct FMulticastInlineDelegate OnWorkerPreviewStateChanged; // 0x30 (0x10)
	struct FMulticastInlineDelegate OnHomebaseInventoryUpdated; // 0x40 (0x10)
	struct FMulticastInlineDelegate OnMaximumItemLevelChanged; // 0x50 (0x10)
	struct FMulticastInlineDelegate OnItemUpgradePointsChanged; // 0x60 (0x10)
	struct FMulticastInlineDelegate SquadSlotMarkedAsSeen; // 0x70 (0x10)
	unsigned char unreflected_80[0x18]; // 0x80 (0x18) 
	struct FMulticastInlineDelegate OnPlayerInfoChangedDelegate; // 0x98 (0x10)
	unsigned char unreflected_a8[0x10]; // 0xa8 (0x10) 
	struct FMulticastInlineDelegate OnItemSlottingPreviewInfoChangedEvent; // 0xb8 (0x10)

	/* Functions */

	// Function /Script/FortniteGame.HomeBaseContext.TryGetHomebaseSquadData (Underlying native function: TryGetHomebaseSquadData 0x8ed2b80)
	bool TryGetHomebaseSquadData(struct FName& SquadId, struct FHomebaseSquad& OutHomebaseSquad); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.HomeBaseContext.SetActiveHeroLoadout (Underlying native function: SetActiveHeroLoadout 0x8ed2990)
	void SetActiveHeroLoadout(class UFortCampaignHeroLoadoutItem*& HeroLoadout); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.HomeBaseContext.HasHeroUnlockedCommanderPerk (Underlying native function: HasHeroUnlockedCommanderPerk 0x8ed1ef8)
	bool HasHeroUnlockedCommanderPerk(class UFortHero*& Hero); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.HomeBaseContext.GetTotalSkillPointsEarned (Underlying native function: GetTotalSkillPointsEarned 0x8ed1d70)
	int GetTotalSkillPointsEarned(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.HomeBaseContext.GetTotalHomebaseRating (Underlying native function: GetTotalHomebaseRating 0x8ed1ba4)
	bool GetTotalHomebaseRating(struct FUniqueNetIdRepl& UniqueId, int& Rating, float& ProgressFraction, bool& bUsePhoenixStats); // (Final | 0x00000002 | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.HomeBaseContext.GetTeamHomebaseRating (Underlying native function: GetTeamHomebaseRating 0x8ed1874)
	bool GetTeamHomebaseRating(struct FUniqueNetIdRepl& PlayerId, int& Rating, float& ProgressFraction, bool& bUsePhoenixStats); // (Final | 0x00000002 | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.HomeBaseContext.GetStaticSetBonusData (Underlying native function: GetStaticSetBonusData 0x8ed14bc)
	static void GetStaticSetBonusData(struct FGameplayTag& InSetBonusTag, struct FWorkerSetBonusData& OutSetBonusData, struct FFortMultiSizeBrush& OutBrush); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.HomeBaseContext.GetResourceCollectorRewardsEstimates (Underlying native function: GetResourceCollectorRewardsEstimates 0x8ed0d38)
	void GetResourceCollectorRewardsEstimates(struct TArray<class UFortCollectedResourceItem*>& CollectorTypes, struct TArray<struct FFortItemQuantityPair>& OutEstimates); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.HomeBaseContext.GetResourceCollectorRewardsEstimate (Underlying native function: GetResourceCollectorRewardsEstimate 0x8ed0c64)
	void GetResourceCollectorRewardsEstimate(class UFortCollectedResourceItem*& CollectorType, struct FFortItemQuantityPair& OutEstimate); // (Final | 0x00000002 | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.HomeBaseContext.GetResourceCollectorRateInfo (Underlying native function: GetResourceCollectorRateInfo 0x8ed0b40)
	void GetResourceCollectorRateInfo(class UFortCollectedResourceItem*& CollectorType, float& RatePerSecond, int& MaxCapacity); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.HomeBaseContext.GetNumAccountLimitedItems (Underlying native function: GetNumAccountLimitedItems 0x8ed09dc)
	int GetNumAccountLimitedItems(); // (Final | 0x00000002 | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.HomeBaseContext.GetMissionDefenderSquadId (Underlying native function: GetMissionDefenderSquadId 0x8ed052c)
	struct FName GetMissionDefenderSquadId(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.HomeBaseContext.GetMaxDeployableDefenderCount (Underlying native function: GetMaxDeployableDefenderCount 0x8ed0508)
	int GetMaxDeployableDefenderCount(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.HomeBaseContext.GetLocalTeamHomebaseRating (Underlying native function: GetLocalTeamHomebaseRating 0x8ed03e0)
	bool GetLocalTeamHomebaseRating(int& Rating, float& ProgressFraction, bool& bUsePhoenixStats); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.HomeBaseContext.GetLocalPlayerHomebaseRating (Underlying native function: GetLocalPlayerHomebaseRating 0x8ed02b8)
	bool GetLocalPlayerHomebaseRating(int& Rating, float& ProgressFraction, bool& bUsePhoenixStats); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.HomeBaseContext.GetHomebaseDefenderSquadId (Underlying native function: GetHomebaseDefenderSquadId 0x8ecfb44)
	struct FName GetHomebaseDefenderSquadId(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.HomeBaseContext.GetCurrentDeployedDefenderCount (Underlying native function: GetCurrentDeployedDefenderCount 0x8ecf600)
	int GetCurrentDeployedDefenderCount(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.HomeBaseContext.GetAllResourceCollectorRewardEstimates (Underlying native function: GetAllResourceCollectorRewardEstimates 0x8ecf01c)
	void GetAllResourceCollectorRewardEstimates(struct TArray<struct FFortItemQuantityPair>& OutEstimates); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.HomeBaseContext.GetActiveHeroLoadout (Underlying native function: GetActiveHeroLoadout 0x8ecefd4)
	class UFortCampaignHeroLoadoutItem* GetActiveHeroLoadout(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.HomeBaseContext.GetActiveDefenderSquadId (Underlying native function: GetActiveDefenderSquadId 0x8ecefa8)
	struct FName GetActiveDefenderSquadId(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.HomeBaseContext.DoesTeamMeetRequiredHomebaseRating (Underlying native function: DoesTeamMeetRequiredHomebaseRating 0x8ece700)
	bool DoesTeamMeetRequiredHomebaseRating(int& RequiredHomebaseRating, bool& bUsePhoenixStats); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.HomeBaseContext.DoesTeamMeetMaximumHomebaseRatingRequirement (Underlying native function: DoesTeamMeetMaximumHomebaseRatingRequirement 0x8ece5f8)
	bool DoesTeamMeetMaximumHomebaseRatingRequirement(int& MaximumAllowedHomebaseRating, bool& bUsePhoenixStats); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.HomeBaseContext.ClearHeroLoadout (Underlying native function: ClearHeroLoadout 0x8ece0fc)
	void ClearHeroLoadout(class UFortCampaignHeroLoadoutItem*& HeroLoadout); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.HomeBaseContext.BroadcastSquadSlotMarkedAsSeen (Underlying native function: BroadcastSquadSlotMarkedAsSeen 0x8ece0e4)
	void BroadcastSquadSlotMarkedAsSeen(); // (Final | Native | Public | BlueprintCallable)
};

