// Class /Script/FortniteGame.GameDataSTW
// Size: 0x1398
class UGameDataSTW : public UPrimaryDataAsset
{
	unsigned char unreflected_30[0x50]; // 0x30 (0x50) 
	struct FText DefaultHeroName; // 0x80 (0x18)
	struct FQuickBarData QuickBarDefinitions[0x3]; // 0x98 (0x10) (ARRAY) 
	float ScoreDisplayFactor; // 0xc8 (0x4)
	int ScoreDivisor; // 0xcc (0x4)
	int XPMult; // 0xd0 (0x4)
	float GroupScoreRates[0x5]; // 0xd4 (0x4) (ARRAY) 
	float ScoreToXPLinearRate; // 0xe8 (0x4)
	int LinearEnd; // 0xec (0x4)
	int XpPerAccountLevel; // 0xf0 (0x4)
	float CriticalMatchXpBonusPercent; // 0xf4 (0x4)
	float PersonalBoostXpBonusPercent; // 0xf8 (0x4)
	float GroupBoostXpBonusPercent; // 0xfc (0x4)
	float GroupBoostBuffMultiplier; // 0x100 (0x4)
	float RestXpBonusPercent; // 0x104 (0x4)
	float LowXpConningValue; // 0x108 (0x4)
	float VeryLowXpConningValue; // 0x10c (0x4)
	float NoXpConningValue; // 0x110 (0x4)
	unsigned char unreflected_114[0x4]; // 0x114 (0x4) 
	struct FText FullXpConningMsg; // 0x118 (0x18)
	struct FText LowXpConningMsg; // 0x130 (0x18)
	struct FText VeryLowXpConningMsg; // 0x148 (0x18)
	struct FText NoXpConningMsg; // 0x160 (0x18)
	int MaxCraftQueueSize; // 0x178 (0x4)
	unsigned char unreflected_17c[0x4]; // 0x17c (0x4) 
	struct FDataTableRowHandle OnboardingCompleteZoneObjective; // 0x180 (0x10)
	struct FDataTableRowHandle ArmoryCollectionBookGatingQuestObjectiveStat; // 0x190 (0x10)
	struct FCurveTableRowHandle PowerPointToRatingConversion; // 0x1a0 (0x10)
	struct FDataTableRowHandle GameDifficultyRowPIE; // 0x1b0 (0x10)
	struct TArray<struct FSettingsHUDVisibilityAndText> HUDVisibilityGameplayTags; // 0x1c0 (0x10)
	struct TArray<struct FItemDefinitionAndCount> DefaultInventoryList; // 0x1d0 (0x10)
	struct TArray<struct FItemDefinitionAndCount> FastLoadDefaultInventoryList; // 0x1e0 (0x10)
	struct TArray<struct FFortReplicatedStatMapping> StatMappings; // 0x1f0 (0x10)
	float SquadMemberStatBonusMultiplier; // 0x200 (0x4)
	unsigned char unreflected_204[0x4]; // 0x204 (0x4) 
	struct TWeakObjectPtr<class USoundBase> PlayerIdleWarningSound; // 0x208 (0x28)
	struct FGameplayTag ExpeditionUnlockedTag; // 0x230 (0x4)
	unsigned char unreflected_234[0x4]; // 0x234 (0x4) 
	struct FGameplayTagContainer ExpeditionVehicleTags; // 0x238 (0x20)
	int DailyMissionAlertQuota; // 0x258 (0x4)
	unsigned char unreflected_25c[0x4]; // 0x25c (0x4) 
	struct FConditionalFoundationQuota ConditionalFoundationQuota; // 0x260 (0x10)
	int MinLevelToPromoteItem; // 0x270 (0x4)
	int LevelsPerItemPromotion; // 0x274 (0x4)
	int MaxPromotionsPerItem; // 0x278 (0x4)
	unsigned char unreflected_27c[0x4]; // 0x27c (0x4) 
	struct TWeakObjectPtr<class UClass> TestEncounter; // 0x280 (0x28)
	struct TWeakObjectPtr<class UClass> CombatManager; // 0x2a8 (0x28)
	struct TWeakObjectPtr<class UClass> UIMapManagerSTW; // 0x2d0 (0x28)
	struct TWeakObjectPtr<class UAthenaMusicPackItemDefinition> DefaultStWLobbyMusic; // 0x2f8 (0x28)
	struct TWeakObjectPtr<class UFortAnalyticsItemExclusions> StWAnalyticsItemExclusionData; // 0x320 (0x28)
	struct TWeakObjectPtr<class UClass> DefaultDamageReceiverClass; // 0x348 (0x28)
	struct TWeakObjectPtr<class UFortTokenType> AccountInventoryBonusToken; // 0x370 (0x28)
	struct TWeakObjectPtr<class UFortTokenType> WorldInventoryBonusToken; // 0x398 (0x28)
	struct TWeakObjectPtr<class UFortTokenType> FounderChatUnlockToken; // 0x3c0 (0x28)
	struct TWeakObjectPtr<class UFortScoreStylingData> ScoreStylingData; // 0x3e8 (0x28)
	struct TWeakObjectPtr<class UDataTable> ScoreMultiplierDataTable; // 0x410 (0x28)
	class UDataTable* CachedScoreMultiplierDataTable; // 0x438 (0x8)
	struct TWeakObjectPtr<class USoundMix> StWSoundMix; // 0x440 (0x28)
	struct TArray<struct TWeakObjectPtr<class UFortWeaponMeleeItemDefinition>> HarvestingTools; // 0x468 (0x10)
	struct FFortPlayerSpawnPadPlacementData DefaultPlayerSpawnPadPlacementData; // 0x478 (0x58)
	struct TArray<struct FDefaultCharacterPartsForPawnClass> DefaultCharacterPartOverridesPerPawnClass; // 0x4d0 (0x10)
	struct TArray<struct TWeakObjectPtr<class UClass>> CampaignPlayerPawnClasses; // 0x4e0 (0x10)
	struct TWeakObjectPtr<class UClass> AIGoalManagerClass; // 0x4f0 (0x28)
	struct TWeakObjectPtr<class UClass> SharedMissionListsClass; // 0x518 (0x28)
	float FORTAttributeToPowerMultiplier; // 0x540 (0x4)
	unsigned char unreflected_544[0x4]; // 0x544 (0x4) 
	struct TWeakObjectPtr<class UFortNeverPersistItemDefinition> BluGloItemDefinition; // 0x548 (0x28)
	struct TWeakObjectPtr<class UFortItemDefinition> CriticalMissionRewardItemDefinition; // 0x570 (0x28)
	struct TWeakObjectPtr<class UFortItemDefinition> ScoreBonusMultiplerItemDefinition; // 0x598 (0x28)
	struct TWeakObjectPtr<class UFortItemDefinition> GenericCampaignEventCurrency; // 0x5c0 (0x28)
	struct TWeakObjectPtr<class UFortWorldItemDefinition> BackpackItemDefinition; // 0x5e8 (0x28)
	struct TWeakObjectPtr<class UFortWorldItemDefinition> MissionRewardPackItemDefinition; // 0x610 (0x28)
	struct FText OutpostRefundDialogTitle; // 0x638 (0x18)
	struct FText OutpostRefundDialogText; // 0x650 (0x18)
	struct FText OutpostRefundButtonText; // 0x668 (0x18)
	struct TWeakObjectPtr<class UFortHeroData> FortHeroData; // 0x680 (0x28)
	struct TWeakObjectPtr<class UFortItemGlobalData> FortItemGlobalData; // 0x6a8 (0x28)
	struct TWeakObjectPtr<class UDataTable> AlterationMigrationMapping; // 0x6d0 (0x28)
	struct TWeakObjectPtr<class UDataTable> AlterationIntrinsicMapping; // 0x6f8 (0x28)
	struct TWeakObjectPtr<class UDataTable> AlterationNamedExclusions; // 0x720 (0x28)
	struct TWeakObjectPtr<class UDataTable> AlterationGroups; // 0x748 (0x28)
	struct TWeakObjectPtr<class UDataTable> AlterationSlotDefinitions; // 0x770 (0x28)
	struct TWeakObjectPtr<class UDataTable> AlterationSlotsLoadouts; // 0x798 (0x28)
	struct TWeakObjectPtr<class UDataTable> BasePromotionCosts; // 0x7c0 (0x28)
	struct TArray<struct FTagRestrictedTable> LootTierDataTablesSTW; // 0x7e8 (0x10)
	struct TArray<struct FTagRestrictedTable> LootPackageDataTablesSTW; // 0x7f8 (0x10)
	struct TWeakObjectPtr<class UDataTable> WaveSetCollectionData; // 0x808 (0x28)
	struct TWeakObjectPtr<class UDataTable> WaveSetData; // 0x830 (0x28)
	struct TWeakObjectPtr<class UDataTable> ModifierSetData; // 0x858 (0x28)
	struct TWeakObjectPtr<class UDataTable> WaveSetCollectionLootData; // 0x880 (0x28)
	struct TWeakObjectPtr<class UDataTable> PlayerStatClampingData; // 0x8a8 (0x28)
	struct FGameplayTagContainer NonGameplayRelevantTags; // 0x8d0 (0x20)
	struct TWeakObjectPtr<class UCurveTable> CraftingTimeTable; // 0x8f0 (0x28)
	struct TWeakObjectPtr<class USoundBase> DefaultCraftingSuccessSound; // 0x918 (0x28)
	struct TWeakObjectPtr<class UClass> TeamStatsGameplayEffect; // 0x940 (0x28)
	struct TWeakObjectPtr<class UFortDailyRewardScheduleDefinitions> DailyRewardSchedules; // 0x968 (0x28)
	struct TWeakObjectPtr<class UDataTable> ExpeditionCriteriaRequirementsData; // 0x990 (0x28)
	struct TWeakObjectPtr<class UDataTable> DifficultyData; // 0x9b8 (0x28)
	struct TWeakObjectPtr<class UFortWeaponReticleExtensionData> WeaponReticleExtensions; // 0x9e0 (0x28)
	struct TWeakObjectPtr<class UDataTable> RewardOverrides; // 0xa08 (0x28)
	struct TWeakObjectPtr<class UDataTable> ItemToQuestDataTable; // 0xa30 (0x28)
	unsigned char unreflected_a58[0x38]; // 0xa58 (0x38) 
	struct TArray<struct FIronCityRowToRating> IronCityRatingArray; // 0xa90 (0x10)
	struct TArray<struct FIronCityDifficultyInfo> IronCityDifficultyLevels; // 0xaa0 (0x10)
	struct TArray<struct FIronCityMatchmakingBuckets*> IronCityMatchmakingBuckets; // 0xab0 (0x10)
	struct TWeakObjectPtr<class UDataTable> IronCityDifficultyTable; // 0xac0 (0x28)
	struct TWeakObjectPtr<class UDataTable> QuestObjectiveStatData; // 0xae8 (0x28)
	struct TWeakObjectPtr<class UDataTable> XPAccountLevelsTable; // 0xb10 (0x28)
	struct TWeakObjectPtr<class UDataTable> PostMaxAccountLevelRewardsTable; // 0xb38 (0x28)
	struct TWeakObjectPtr<class UDataTable> PhoenixLevelRewardsTable; // 0xb60 (0x28)
	struct TWeakObjectPtr<class UDataTable> PostMaxPhoenixLevelRewardsTable; // 0xb88 (0x28)
	struct TMap<struct FString, struct FPhoneixXPStats> CachedPhoenixStats; // 0xbb0 (0x50)
	struct TArray<struct FString> PhoenixEventFlags; // 0xc00 (0x10)
	struct TMap<struct FString, int> PhoenixEventOverlevelXPPerLevel; // 0xc10 (0x50)
	struct TWeakObjectPtr<class UFortAccountItemDefinition> PhoenixXpItemDefinition; // 0xc60 (0x28)
	struct TWeakObjectPtr<class UCurveTable> XPAccountItemLevelsTable; // 0xc88 (0x28)
	struct TWeakObjectPtr<class UCurveTable> XPAccountItemRewardsTable; // 0xcb0 (0x28)
	struct TWeakObjectPtr<class UCurveTable> XPConningTable; // 0xcd8 (0x28)
	struct TWeakObjectPtr<class UDataTable> WeaponAlterationRarityMappingTable; // 0xd00 (0x28)
	struct TArray<float> CachedWeaponAlterationRarityMappingInfo; // 0xd28 (0x10)
	struct TWeakObjectPtr<class UFortQuestItemDefinition> OnboardingQuestItemDefinition; // 0xd38 (0x28)
	struct TWeakObjectPtr<class UFortQuestItemDefinition> ManualSurvivorSlottingQuestItemDefinition; // 0xd60 (0x28)
	struct TWeakObjectPtr<class UFortQuestItemDefinition> ArmoryCollectionBookGatingQuestItemDefinition; // 0xd88 (0x28)
	struct TWeakObjectPtr<class UFortQuestItemDefinition> ArmoryResourcesGatingQuestItemDefinition; // 0xdb0 (0x28)
	struct TWeakObjectPtr<class UDataTable> QuestAchievementData; // 0xdd8 (0x28)
	struct TWeakObjectPtr<class UFortQuestMapData> QuestMapData; // 0xe00 (0x28)
	struct TWeakObjectPtr<class UFortItemDefinition> SkillPointItemDef; // 0xe28 (0x28)
	struct TWeakObjectPtr<class UFortItemDefinition> ResearchPointItemDef; // 0xe50 (0x28)
	struct TArray<struct TWeakObjectPtr<class UFortWorldItemDefinition>> CheatInventoryItems; // 0xe78 (0x10)
	struct TWeakObjectPtr<class UClass> TheaterMapViewerClass; // 0xe88 (0x28)
	struct TWeakObjectPtr<class UDataTable> MissionAlertCategories; // 0xeb0 (0x28)
	struct TWeakObjectPtr<class UMyTownData> MyFortData; // 0xed8 (0x28)
	struct TWeakObjectPtr<class UFortHomebaseManager> HomebaseManager; // 0xf00 (0x28)
	struct TWeakObjectPtr<class UFortCollectionBookData> CollectionBookData; // 0xf28 (0x28)
	struct TWeakObjectPtr<class UFortSurvivorData> SurvivorData; // 0xf50 (0x28)
	struct TWeakObjectPtr<class UFortOutpostData> OutpostData; // 0xf78 (0x28)
	struct TWeakObjectPtr<class UClass> AIDirectorSTW; // 0xfa0 (0x28)
	struct TWeakObjectPtr<class UClass> FeedbackManagerClass; // 0xfc8 (0x28)
	struct TWeakObjectPtr<class UClass> BluGloManagerClass; // 0xff0 (0x28)
	struct TWeakObjectPtr<class UFortUIFeedbackBank> UIFeedbackBankSTW; // 0x1018 (0x28)
	struct TWeakObjectPtr<class UClass> StatEventManagerClass; // 0x1040 (0x28)
	struct TWeakObjectPtr<class UFortHeroType> DefaultHero; // 0x1068 (0x28)
	struct TWeakObjectPtr<class UClass> ThreatVisualsManager; // 0x1090 (0x28)
	struct TWeakObjectPtr<class UClass> WindManager; // 0x10b8 (0x28)
	struct TWeakObjectPtr<class UFortAbilitySet> GenericPlayerAbilitySet; // 0x10e0 (0x28)
	struct TWeakObjectPtr<class UClass> SquadMemberStatBonusGE; // 0x1108 (0x28)
	struct TWeakObjectPtr<class UClass> TeamTrapBonusGE; // 0x1130 (0x28)
	struct TWeakObjectPtr<class UClass> BASEClass; // 0x1158 (0x28)
	struct TWeakObjectPtr<class UClass> MissionVoteNotificationClass; // 0x1180 (0x28)
	struct TWeakObjectPtr<class UCurveTable> SessionXPCurveTable; // 0x11a8 (0x28)
	struct TWeakObjectPtr<class UCurveTable> TieredWavesDefenseReqTable; // 0x11d0 (0x28)
	struct TWeakObjectPtr<class UClass> ExpeditionMasterWidgetClass; // 0x11f8 (0x28)
	struct TWeakObjectPtr<class UFortTimeOfDayData> FortTimeOfDayData; // 0x1220 (0x28)
	struct TArray<struct TWeakObjectPtr<class UClass>> FrontendGameStateComponents; // 0x1248 (0x10)
	struct TWeakObjectPtr<class UClass> MusicManager; // 0x1258 (0x28)
	struct TWeakObjectPtr<class UFortMusicManagerBank> MusicManagerBank; // 0x1280 (0x28)
	struct TWeakObjectPtr<class UFortItemWrapMappingData> ItemWrapConfigAsset; // 0x12a8 (0x28)
	struct TMap<struct FGameplayTag, struct FText> UpgradeRarityUnlockRequirementsText; // 0x12d0 (0x50)
	struct TMap<struct FGameplayTag, struct FText> UpgradeTierUnlockRequirementsText; // 0x1320 (0x50)
	struct TWeakObjectPtr<class UClass> DefaultQuestStatConversationClass; // 0x1370 (0x28)

	/* Functions */

	// Function /Script/FortniteGame.GameDataSTW.GetXpPerAccountLevel (Underlying native function: GetXpPerAccountLevel 0x8eaad30)
	static int GetXpPerAccountLevel(); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.GameDataSTW.GetTeamXpBoost (Underlying native function: GetTeamXpBoost 0x8eaaae8)
	static float GetTeamXpBoost(); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.GameDataSTW.GetRecruitmentRewardForHero (Underlying native function: GetRecruitmentRewardForHero 0x8eaa5e0)
	static struct TWeakObjectPtr<class UFortTeamPerkItemDefinition> GetRecruitmentRewardForHero(class UFortHeroType*& Hero); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.GameDataSTW.GetPersonalXpBoost (Underlying native function: GetPersonalXpBoost 0x8eaa448)
	static float GetPersonalXpBoost(); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)
};

