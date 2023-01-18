// Class /Script/FortniteGame.FortMcpProfileAthena
// Size: 0x700
class UFortMcpProfileAthena : public UFortMcpProfileSubgame
{
	unsigned char unreflected_3b0[0x1d0]; // 0x3b0 (0x1d0) 
	float ClientQuestLoginTimerNoise; // 0x580 (0x4)
	unsigned char padding_584[0x17c]; // 0x584 (0x17c)

	/* Functions */

	// Function /Script/FortniteGame.FortMcpProfileAthena.UnlockRewardNode (Has no native function)
	void UnlockRewardNode(struct FString& NodeId, struct FString& rewardGraphId, struct FString& rewardCfg, struct FClientUrlContext& Context); // (0x00000002 | Net | NetReliable | NetRequest | Native | Event | Public | HasOutParms)

	// Function /Script/FortniteGame.FortMcpProfileAthena.ToggleQuestActiveState (Has no native function)
	void ToggleQuestActiveState(struct TArray<struct FString>& QuestIds, struct FClientUrlContext& Context); // (Net | NetReliable | NetRequest | Native | Event | Public | HasOutParms)

	// Function /Script/FortniteGame.FortMcpProfileAthena.SetRewardGraphConfig (Has no native function)
	void SetRewardGraphConfig(struct TArray<struct FString>& State, struct FString& rewardGraphId, struct FClientUrlContext& Context); // (0x00000002 | Net | NetReliable | NetRequest | Native | Event | Public | HasOutParms)

	// Function /Script/FortniteGame.FortMcpProfileAthena.SetHardcoreModifier (Has no native function)
	void SetHardcoreModifier(struct TArray<struct FHardcoreModifierUpdate>& Updates, struct FClientUrlContext& Context); // (0x00000002 | Net | NetReliable | NetRequest | Native | Event | Public | HasOutParms)

	// Function /Script/FortniteGame.FortMcpProfileAthena.RequestRestedStateIncrease (Has no native function)
	void RequestRestedStateIncrease(int& timeToCompensateFor, int& restedXpGenAccumulated, struct FClientUrlContext& Context); // (Net | NetReliable | NetRequest | Native | Event | Public | HasOutParms)

	// Function /Script/FortniteGame.FortMcpProfileAthena.ReportConsumableUsed (Has no native function)
	void ReportConsumableUsed(int& UsedQuantity, struct FString& ItemType, struct FDedicatedServerUrlContext& Context); // (Net | NetReliable | NetRequest | Native | Event | Public | HasOutParms)

	// Function /Script/FortniteGame.FortMcpProfileAthena.RedeemSTWAccoladeTokens (Has no native function)
	void RedeemSTWAccoladeTokens(struct FClientUrlContext& Context); // (Net | NetReliable | NetRequest | Native | Event | Public | HasOutParms)

	// Function /Script/FortniteGame.FortMcpProfileAthena.HasPurchasedSeasonBook (Underlying native function: HasPurchasedSeasonBook 0x2820058)
	bool HasPurchasedSeasonBook(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortMcpProfileAthena.HandleActiveEventFlagsChanged (Underlying native function: HandleActiveEventFlagsChanged 0x8391d5c)
	void HandleActiveEventFlagsChanged(struct TArray<struct FString>& ActiveEventFlags); // (Final | Native | Private | HasOutParms)

	// Function /Script/FortniteGame.FortMcpProfileAthena.GetSeasonRestedXp (Underlying native function: GetSeasonRestedXp 0x8391ce8)
	int GetSeasonRestedXp(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortMcpProfileAthena.GetSeasonMatchXpBoost (Underlying native function: GetSeasonMatchXpBoost 0x8391cc4)
	int GetSeasonMatchXpBoost(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortMcpProfileAthena.GetSeasonLevelUpReward (Underlying native function: GetSeasonLevelUpReward 0x8391b9c)
	bool GetSeasonLevelUpReward(int& SeasonLevel, struct FFortItemInstanceQuantityPair& Reward, int& RewardLevel); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortMcpProfileAthena.GetSeasonLevelInfo (Underlying native function: GetSeasonLevelInfo 0x8391ab8)
	struct FAthenaSeasonRewardLevelInfo GetSeasonLevelInfo(int& SeasonLevel); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortMcpProfileAthena.GetSeasonFriendMatchXpBoost (Underlying native function: GetSeasonFriendMatchXpBoost 0x8391a94)
	int GetSeasonFriendMatchXpBoost(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortMcpProfileAthena.GetSeasonBookLevel (Underlying native function: GetSeasonBookLevel 0x8391a70)
	int GetSeasonBookLevel(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortMcpProfileAthena.GetActiveSeasonDefinition (Underlying native function: GetActiveSeasonDefinition 0x83915c0)
	class UAthenaSeasonItemDefinition* GetActiveSeasonDefinition(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortMcpProfileAthena.ExchangeGiftToken (Has no native function)
	void ExchangeGiftToken(struct FClientUrlContext& Context); // (0x00000002 | Net | NetReliable | NetRequest | Native | Event | Public | HasOutParms)

	// Function /Script/FortniteGame.FortMcpProfileAthena.ExchangeGameCurrencyForBattlePassOffer (Has no native function)
	void ExchangeGameCurrencyForBattlePassOffer(struct TArray<struct FString>& OfferItemIdList, struct FClientUrlContext& Context); // (Net | NetReliable | NetRequest | Native | Event | Public | HasOutParms)

	// Function /Script/FortniteGame.FortMcpProfileAthena.EndBattleRoyaleGameV2 (Has no native function)
	void EndBattleRoyaleGameV2(struct TArray<struct FFortQuestObjectiveCompletion>& Advance, struct FString& PlaylistId, struct FAthenaMatchStats& MatchStats, int& TotalXPAccum, int& RestedXPAccum, int& FriendshipXpBoost, int& CosmeticXpBoost, float& AntiAddictionPlayTimeMultiplier, bool& ShouldAccumulateToProfileStats, bool& ShouldSaveToRecentGameLists, struct TArray<struct FAthenaAccolades>& Accolades, struct TArray<struct FString>& ShuffledLoadoutUsed, int& ShuffledLockerUsedIndex, struct TArray<struct FString>& UsedCosmetics, struct TArray<struct FFortQuestDelete>& DeletedQuests, struct TArray<struct FString>& GrantedQuestDefs, struct TArray<struct FSecondaryXpGained>& secondaryXp, struct TArray<struct FFortCreateItemDetail>& GrantedItems, struct TArray<struct FFortTransientQuestGrant>& GrantedQuests, struct TArray<struct FFortTransientQuestGrant>& CompletedQuestsToClaim, struct FString& PinnedSharedQuest, struct TArray<struct FAthenaSeasonItemMCPState>& SeasonItemStates, struct FCampsiteAccountData& CampsiteData, struct FVictoryCrownAccountData& VictoryCrownData, struct FRealitySaplingAccountData& RealitySaplingData, struct FPlayerAugmentsPersistenceData& PlayerAugmentsPersistenceData, int& PlayerTimeInMatchSec, struct TArray<struct FFortQuestAnalyticEvent>& QuestAnalyticEvents, struct FDedicatedServerUrlContext& Context); // (Net | NetReliable | NetRequest | Native | Event | Public | HasOutParms)

	// Function /Script/FortniteGame.FortMcpProfileAthena.ChallengeBundleLevelUp (Has no native function)
	void ChallengeBundleLevelUp(struct FString& BundleIdToLevel, struct FClientUrlContext& Context); // (Net | NetReliable | NetRequest | Native | Event | Public | HasOutParms)

	// Function /Script/FortniteGame.FortMcpProfileAthena.CanPurchaseSeasonBook (Underlying native function: CanPurchaseSeasonBook 0x8391554)
	bool CanPurchaseSeasonBook(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortMcpProfileAthena.AthenaRemoveQuests (Has no native function)
	void AthenaRemoveQuests(struct TArray<struct FString>& RemovedQuests, struct FClientUrlContext& Context); // (Final | Net | NetReliable | NetRequest | Native | Event | Private | HasOutParms)

	// Function /Script/FortniteGame.FortMcpProfileAthena.AthenaPinQuest (Has no native function)
	void AthenaPinQuest(struct FString& PinnedQuest, struct FClientUrlContext& Context); // (Final | Net | NetReliable | NetRequest | Native | Event | Private | HasOutParms)

	// Function /Script/FortniteGame.FortMcpProfileAthena.ApplyVote (Has no native function)
	void ApplyVote(struct FString& OfferId, struct FClientUrlContext& Context); // (0x00000002 | Net | NetReliable | NetRequest | Native | Event | Public | HasOutParms)
};

