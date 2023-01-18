// Class /Script/FortniteGame.FortMcpProfileCampaign
// Size: 0x520
class UFortMcpProfileCampaign : public UFortMcpProfileSubgame
{
	struct FMulticastInlineDelegate OnDifferentHeroLoadoutActivated; // 0x3a8 (0x10)
	unsigned char unreflected_3b8[0x158]; // 0x3b8 (0x158) 
	bool bEnableHeroLoadoutMocking; // 0x510 (0x1)
	unsigned char unreflected_511[0x3]; // 0x511 (0x3) 
	float HeroLoadoutCommandDelaySeconds; // 0x514 (0x4)
	unsigned char padding_518[0x8]; // 0x518 (0x8)

	/* Functions */

	// Function /Script/FortniteGame.FortMcpProfileCampaign.UpgradeItemRarity (Has no native function)
	void UpgradeItemRarity(struct FString& TargetItemId, struct FClientUrlContext& Context); // (Net | NetReliable | NetRequest | Native | Event | Public | HasOutParms)

	// Function /Script/FortniteGame.FortMcpProfileCampaign.UpgradeItemBulk (Has no native function)
	void UpgradeItemBulk(struct FString& TargetItemId, int& DesiredLevel, struct FString& DesiredTier, int& ConversionRecipeIndexChoice, struct FClientUrlContext& Context); // (Net | NetReliable | NetRequest | Native | Event | Public | HasOutParms)

	// Function /Script/FortniteGame.FortMcpProfileCampaign.UpgradeItem (Has no native function)
	void UpgradeItem(struct FString& TargetItemId, struct FClientUrlContext& Context); // (Net | NetReliable | NetRequest | Native | Event | Public | HasOutParms)

	// Function /Script/FortniteGame.FortMcpProfileCampaign.UpgradeAlteration (Has no native function)
	void UpgradeAlteration(struct FString& TargetItemId, int& AlterationSlot, struct FClientUrlContext& Context); // (0x00000002 | Net | NetReliable | NetRequest | Native | Event | Public | HasOutParms)

	// Function /Script/FortniteGame.FortMcpProfileCampaign.UpdateBuildingLevelAndRating (Has no native function)
	void UpdateBuildingLevelAndRating(struct FString& BuildingId, int& LastBuildingLevel, int& LastBuildingRating, struct FClientUrlContext& Context); // (Net | NetReliable | NetRequest | Native | Event | Public | HasOutParms)

	// Function /Script/FortniteGame.FortMcpProfileCampaign.UnslotItemFromCollectionBook (Has no native function)
	void UnslotItemFromCollectionBook(struct FString& ItemId, struct FString& Specific, struct FString& TemplateId, struct FClientUrlContext& Context); // (Net | NetReliable | NetRequest | Native | Event | Public | HasOutParms)

	// Function /Script/FortniteGame.FortMcpProfileCampaign.UnslotAllWorkers (Has no native function)
	void UnslotAllWorkers(struct TArray<struct FString>& BuildingIds, struct FClientUrlContext& Context); // (Net | NetReliable | NetRequest | Native | Event | Public | HasOutParms)

	// Function /Script/FortniteGame.FortMcpProfileCampaign.UnloadWarehouse (Has no native function)
	void UnloadWarehouse(struct TArray<struct FString>& ResourceTypes, struct FClientUrlContext& Context); // (Net | NetReliable | NetRequest | Native | Event | Public | HasOutParms)

	// Function /Script/FortniteGame.FortMcpProfileCampaign.UnassignAllSquads (Has no native function)
	void UnassignAllSquads(struct TArray<struct FString>& SquadIds, struct FClientUrlContext& Context); // (0x00000002 | Net | NetReliable | NetRequest | Native | Event | Public | HasOutParms)

	// Function /Script/FortniteGame.FortMcpProfileCampaign.TransmogItem (Has no native function)
	void TransmogItem(struct FString& TransmogKeyTemplateId, struct TArray<struct FString>& SacrificeItemIds, struct FClientUrlContext& Context); // (Net | NetReliable | NetRequest | Native | Event | Public | HasOutParms)

	// Function /Script/FortniteGame.FortMcpProfileCampaign.StartPrimaryMission (Has no native function)
	void StartPrimaryMission(struct TArray<struct FFortQuestObjectiveCompletion>& Advance, struct FString& MatchmakingSessionId, struct FString& MissionName, struct FDedicatedServerUrlContext& Context); // (Net | NetReliable | NetRequest | Native | Event | Public | HasOutParms)

	// Function /Script/FortniteGame.FortMcpProfileCampaign.StartExpedition (Has no native function)
	void StartExpedition(struct FString& ExpeditionId, struct FString& SquadId, struct TArray<struct FString>& ItemIds, struct TArray<int>& SlotIndices, struct FClientUrlContext& Context); // (0x00000002 | Net | NetReliable | NetRequest | Native | Event | Public | HasOutParms)

	// Function /Script/FortniteGame.FortMcpProfileCampaign.SlotItemInCollectionBook (Has no native function)
	void SlotItemInCollectionBook(struct FString& ItemId, struct FClientUrlContext& Context); // (Net | NetReliable | NetRequest | Native | Event | Public | HasOutParms)

	// Function /Script/FortniteGame.FortMcpProfileCampaign.SkipTutorial (Has no native function)
	void SkipTutorial(struct FClientUrlContext& Context); // (0x00000002 | Net | NetReliable | NetRequest | Native | Event | Public | HasOutParms)

	// Function /Script/FortniteGame.FortMcpProfileCampaign.SetLoadoutName (Has no native function)
	void SetLoadoutName(struct FString& LoadoutName, struct FString& LoadoutId, struct FClientUrlContext& Context); // (Net | NetReliable | NetRequest | Native | Event | Public | HasOutParms)

	// Function /Script/FortniteGame.FortMcpProfileCampaign.SetHeroCosmeticVariants (Has no native function)
	void SetHeroCosmeticVariants(struct FString& HeroItem, struct TArray<struct FMcpVariantReader>& OutfitVariants, struct TArray<struct FMcpVariantReader>& BackblingVariants, struct FClientUrlContext& Context); // (0x00000002 | Net | NetReliable | NetRequest | Native | Event | Public | HasOutParms)

	// Function /Script/FortniteGame.FortMcpProfileCampaign.SetGameplayStats (Has no native function)
	void SetGameplayStats(struct TArray<struct FFortPersistentGameplayStatValue>& GameplayStats, struct FClientUrlContext& Context); // (Net | NetReliable | NetRequest | Native | Event | Public | HasOutParms)

	// Function /Script/FortniteGame.FortMcpProfileCampaign.SetActiveHeroLoadout (Has no native function)
	void SetActiveHeroLoadout(struct FString& SelectedLoadout, struct FClientUrlContext& Context); // (Net | NetReliable | NetRequest | Native | Event | Public | HasOutParms)

	// Function /Script/FortniteGame.FortMcpProfileCampaign.RespecUpgrades (Has no native function)
	void RespecUpgrades(struct FClientUrlContext& Context); // (0x00000002 | Net | NetReliable | NetRequest | Native | Event | Public | HasOutParms)

	// Function /Script/FortniteGame.FortMcpProfileCampaign.RespecResearch (Has no native function)
	void RespecResearch(struct FClientUrlContext& Context); // (0x00000002 | Net | NetReliable | NetRequest | Native | Event | Public | HasOutParms)

	// Function /Script/FortniteGame.FortMcpProfileCampaign.RespecAlteration (Has no native function)
	void RespecAlteration(struct FString& TargetItemId, int& AlterationSlot, struct FString& AlterationId, struct FClientUrlContext& Context); // (0x00000002 | Net | NetReliable | NetRequest | Native | Event | Public | HasOutParms)

	// Function /Script/FortniteGame.FortMcpProfileCampaign.ResearchItemFromCollectionBook (Has no native function)
	void ResearchItemFromCollectionBook(struct FString& TemplateId, struct FClientUrlContext& Context); // (Net | NetReliable | NetRequest | Native | Event | Public | HasOutParms)

	// Function /Script/FortniteGame.FortMcpProfileCampaign.RefundItem (Has no native function)
	void RefundItem(struct FString& TargetItemId, struct FClientUrlContext& Context); // (0x00000002 | Net | NetReliable | NetRequest | Native | Event | Public | HasOutParms)

	// Function /Script/FortniteGame.FortMcpProfileCampaign.RefreshExpeditions (Has no native function)
	void RefreshExpeditions(struct FClientUrlContext& Context); // (Net | NetReliable | NetRequest | Native | Event | Public | HasOutParms)

	// Function /Script/FortniteGame.FortMcpProfileCampaign.RecycleItemBatch (Has no native function)
	void RecycleItemBatch(struct TArray<struct FString>& TargetItemIds, struct FClientUrlContext& Context); // (Net | NetReliable | NetRequest | Native | Event | Public | HasOutParms)

	// Function /Script/FortniteGame.FortMcpProfileCampaign.RecycleItem (Has no native function)
	void RecycleItem(struct FString& TargetItemId, struct FClientUrlContext& Context); // (Net | NetReliable | NetRequest | Native | Event | Public | HasOutParms)

	// Function /Script/FortniteGame.FortMcpProfileCampaign.PurchaseResearchStatUpgrade (Has no native function)
	void PurchaseResearchStatUpgrade(struct FString& StatId, struct FClientUrlContext& Context); // (Net | NetReliable | NetRequest | Native | Event | Public | HasOutParms)

	// Function /Script/FortniteGame.FortMcpProfileCampaign.PurchaseOrUpgradeHomebaseNode (Has no native function)
	void PurchaseOrUpgradeHomebaseNode(struct FString& NodeId, struct FClientUrlContext& Context); // (Net | NetReliable | NetRequest | Native | Event | Public | HasOutParms)

	// Function /Script/FortniteGame.FortMcpProfileCampaign.PromoteItem (Has no native function)
	void PromoteItem(struct FString& TargetItemId, struct FClientUrlContext& Context); // (Net | NetReliable | NetRequest | Native | Event | Public | HasOutParms)

	// Function /Script/FortniteGame.FortMcpProfileCampaign.PopulatePrerolledOffers (Has no native function)
	void PopulatePrerolledOffers(struct FClientUrlContext& Context); // (0x00000002 | Net | NetReliable | NetRequest | Native | Event | Public | HasOutParms)

	// Function /Script/FortniteGame.FortMcpProfileCampaign.OverrideMissionRewardLootTierGroup (Has no native function)
	void OverrideMissionRewardLootTierGroup(struct FString& MatchmakingSessionId, struct FString& OverrideRewardTag, struct FDedicatedServerUrlContext& Context); // (Net | NetReliable | NetRequest | Native | Event | Public | HasOutParms)

	// Function /Script/FortniteGame.FortMcpProfileCampaign.OverrideMissionRewardLootLevel (Has no native function)
	void OverrideMissionRewardLootLevel(struct FString& MatchmakingSessionId, int& OverrideLootLevel, struct FDedicatedServerUrlContext& Context); // (Net | NetReliable | NetRequest | Native | Event | Public | HasOutParms)

	// Function /Script/FortniteGame.FortMcpProfileCampaign.OpenCardPackBatch (Has no native function)
	void OpenCardPackBatch(struct TArray<struct FString>& CardPackItemIds, struct FClientUrlContext& Context); // (0x00000002 | Net | NetReliable | NetRequest | Native | Event | Public | HasOutParms)

	// Function /Script/FortniteGame.FortMcpProfileCampaign.OpenCardPack (Has no native function)
	void OpenCardPack(struct FString& CardPackItemId, int& SelectionIdx, struct FClientUrlContext& Context); // (0x00000002 | Net | NetReliable | NetRequest | Native | Event | Public | HasOutParms)

	// DelegateFunction /Script/FortniteGame.FortMcpProfileCampaign.OnDifferentHeroLoadoutActivated__DelegateSignature (Has no native function)
	void OnDifferentHeroLoadoutActivatedDelegateSignature(class UFortMcpProfileCampaign*& Profile); // (MulticastDelegate | Public | Delegate)

	// Function /Script/FortniteGame.FortMcpProfileCampaign.ModifyMission (Has no native function)
	void ModifyMission(struct FString& MatchmakingSessionId, struct FString& Difficulty, struct FDedicatedServerUrlContext& Context); // (Net | NetReliable | NetRequest | Native | Event | Public | HasOutParms)

	// Function /Script/FortniteGame.FortMcpProfileCampaign.GetOrderedHeroLoadoutItems (Underlying native function: GetOrderedHeroLoadoutItems 0x8efbf8c)
	struct TArray<class UFortCampaignHeroLoadoutItem*> GetOrderedHeroLoadoutItems(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.FortMcpProfileCampaign.GetCurrentHeroLoadoutItem (Underlying native function: GetCurrentHeroLoadoutItem 0x8efba8c)
	void GetCurrentHeroLoadoutItem(class UFortCampaignHeroLoadoutItem*& OutCampaignHeroLoadoutItem); // (Final | 0x00000002 | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortMcpProfileCampaign.FailsafeSaveMissionResults (Has no native function)
	void FailsafeSaveMissionResults(struct FEndZoneScoreAndAwards& PlayerScoreData, struct FString& MatchmakingSessionId, struct FString& MissionName, struct FString& MissionStatus, int& DifficultyIncreaseTier, struct FDedicatedServerUrlContext& Context); // (Net | NetReliable | NetRequest | Native | Event | Public | HasOutParms)

	// Function /Script/FortniteGame.FortMcpProfileCampaign.EquipCampaignCustomization (Has no native function)
	void EquipCampaignCustomization(enum ECampaignCustomizationCategory& SlotName, struct FString& ItemToSlot, int& IndexWithinSlot, struct FClientUrlContext& Context); // (Net | NetReliable | NetRequest | Native | Event | Public | HasOutParms)

	// Function /Script/FortniteGame.FortMcpProfileCampaign.EndPrimaryMission (Has no native function)
	void EndPrimaryMission(struct TArray<struct FFortQuestObjectiveCompletion>& Advance, struct FString& MatchmakingSessionId, struct FString& MissionName, struct FString& MissionStatus, struct TArray<struct FFortQuestEarnedBadgeData>& EarnedBadgeData, struct TArray<struct FString>& EarnedItemCaches, int& DifficultyIncreaseTier, int& NumMissionPoints, bool& bCriticalMatchBonus, struct TArray<struct FString>& ShuffledLoadoutUsed, int& ShuffledLockerUsedIndex, struct TArray<struct FString>& UsedCosmetics, int& TotalSecondsInMatch, struct FDedicatedServerUrlContext& Context); // (Net | NetReliable | NetRequest | Native | Event | Public | HasOutParms)

	// Function /Script/FortniteGame.FortMcpProfileCampaign.EndMatch (Has no native function)
	void EndMatch(struct TArray<struct FAccountIdAndMatchEndData>& PlayersAndMatchEndData, struct FString& MatchmakingSessionId, struct FString& MissionName, struct FString& MissionStatus, int& DifficultyIncreaseTier, struct FDedicatedServerUrlContext& Context); // (0x00000002 | Net | NetReliable | NetRequest | Native | Event | Public | HasOutParms)

	// Function /Script/FortniteGame.FortMcpProfileCampaign.EarnScore (Has no native function)
	void EarnScore(struct TArray<struct FAccountIdAndScore>& PlayersAndScores, struct FString& MatchmakingSessionId, struct FDedicatedServerUrlContext& Context); // (Net | NetReliable | NetRequest | Native | Event | Public | HasOutParms)

	// Function /Script/FortniteGame.FortMcpProfileCampaign.ConvertLegacyAlterations (Has no native function)
	void ConvertLegacyAlterations(struct FString& TargetItemId, struct FClientUrlContext& Context); // (0x00000002 | Net | NetReliable | NetRequest | Native | Event | Public | HasOutParms)

	// Function /Script/FortniteGame.FortMcpProfileCampaign.ConvertItem (Has no native function)
	void ConvertItem(struct FString& TargetItemId, int& ConversionIndex, struct FClientUrlContext& Context); // (Net | NetReliable | NetRequest | Native | Event | Public | HasOutParms)

	// Function /Script/FortniteGame.FortMcpProfileCampaign.ConsumeItems (Has no native function)
	void ConsumeItems(struct TArray<struct FString>& ItemsToConsumeIds, struct TArray<int>& ItemCountsToConsume, struct FString& ConsumeReason, struct FDedicatedServerUrlContext& Context); // (Net | NetReliable | NetRequest | Native | Event | Public | HasOutParms)

	// Function /Script/FortniteGame.FortMcpProfileCampaign.CollectExpedition (Has no native function)
	void CollectExpedition(struct FString& ExpeditionTemplate, struct FString& ExpeditionId, struct FClientUrlContext& Context); // (0x00000002 | Net | NetReliable | NetRequest | Native | Event | Public | HasOutParms)

	// Function /Script/FortniteGame.FortMcpProfileCampaign.ClearHeroLoadout (Has no native function)
	void ClearHeroLoadout(struct FString& LoadoutId, struct FClientUrlContext& Context); // (Net | NetReliable | NetRequest | Native | Event | Public | HasOutParms)

	// Function /Script/FortniteGame.FortMcpProfileCampaign.ClaimMissionAlertRewards (Has no native function)
	void ClaimMissionAlertRewards(struct FClientUrlContext& Context); // (Net | NetReliable | NetRequest | Native | Event | Public | HasOutParms)

	// Function /Script/FortniteGame.FortMcpProfileCampaign.ClaimLoginReward (Has no native function)
	void ClaimLoginReward(struct FClientUrlContext& Context); // (Net | NetReliable | NetRequest | Native | Event | Public | HasOutParms)

	// Function /Script/FortniteGame.FortMcpProfileCampaign.ClaimDifficultyIncreaseRewards (Has no native function)
	void ClaimDifficultyIncreaseRewards(struct FClientUrlContext& Context); // (Net | NetReliable | NetRequest | Native | Event | Public | HasOutParms)

	// Function /Script/FortniteGame.FortMcpProfileCampaign.ClaimCollectionBookRewards (Has no native function)
	void ClaimCollectionBookRewards(int& RequiredXp, int& SelectedRewardIndex, struct FClientUrlContext& Context); // (Net | NetReliable | NetRequest | Native | Event | Public | HasOutParms)

	// Function /Script/FortniteGame.FortMcpProfileCampaign.ClaimCollectedResources (Has no native function)
	void ClaimCollectedResources(struct TArray<struct FString>& CollectorsToClaim, struct FClientUrlContext& Context); // (Net | NetReliable | NetRequest | Native | Event | Public | HasOutParms)

	// Function /Script/FortniteGame.FortMcpProfileCampaign.AssignWorkerToSquadBatch (Has no native function)
	void AssignWorkerToSquadBatch(struct TArray<struct FString>& CharacterIds, struct TArray<struct FString>& SquadIds, struct TArray<int>& SlotIndices, struct FClientUrlContext& Context); // (0x00000002 | Net | NetReliable | NetRequest | Native | Event | Public | HasOutParms)

	// Function /Script/FortniteGame.FortMcpProfileCampaign.AssignWorkerToSquad (Has no native function)
	void AssignWorkerToSquad(struct FString& CharacterId, struct FString& SquadId, int& SlotIndex, struct FClientUrlContext& Context); // (0x00000002 | Net | NetReliable | NetRequest | Native | Event | Public | HasOutParms)

	// Function /Script/FortniteGame.FortMcpProfileCampaign.AssignTeamPerkToLoadout (Has no native function)
	void AssignTeamPerkToLoadout(struct FString& TeamPerkId, struct FString& LoadoutId, struct FClientUrlContext& Context); // (Net | NetReliable | NetRequest | Native | Event | Public | HasOutParms)

	// Function /Script/FortniteGame.FortMcpProfileCampaign.AssignHeroToLoadout (Has no native function)
	void AssignHeroToLoadout(struct FString& HeroId, struct FString& LoadoutId, struct FString& SlotName, struct FClientUrlContext& Context); // (Net | NetReliable | NetRequest | Native | Event | Public | HasOutParms)

	// Function /Script/FortniteGame.FortMcpProfileCampaign.AssignGadgetToLoadout (Has no native function)
	void AssignGadgetToLoadout(struct FString& GadgetId, struct FString& LoadoutId, int& SlotIndex, struct FClientUrlContext& Context); // (Net | NetReliable | NetRequest | Native | Event | Public | HasOutParms)

	// Function /Script/FortniteGame.FortMcpProfileCampaign.ApplyAlteration (Has no native function)
	void ApplyAlteration(struct FString& TargetItemId, struct FString& AlterationItemId, struct FClientUrlContext& Context); // (Net | NetReliable | NetRequest | Native | Event | Public | HasOutParms)

	// Function /Script/FortniteGame.FortMcpProfileCampaign.ActivateConsumable (Has no native function)
	void ActivateConsumable(struct FString& TargetItemId, struct FString& TargetAccountId, struct FClientUrlContext& Context); // (0x00000002 | Net | NetReliable | NetRequest | Native | Event | Public | HasOutParms)

	// Function /Script/FortniteGame.FortMcpProfileCampaign.AbandonExpedition (Has no native function)
	void AbandonExpedition(struct FString& ExpeditionId, struct FClientUrlContext& Context); // (0x00000002 | Net | NetReliable | NetRequest | Native | Event | Public | HasOutParms)
};

