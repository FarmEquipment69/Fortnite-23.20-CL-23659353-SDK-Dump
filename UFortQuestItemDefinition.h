// Class /Script/FortniteGame.FortQuestItemDefinition
// Size: 0x7a0
class UFortQuestItemDefinition : public UFortAccountItemDefinition
{
	unsigned char unreflected_420[0x8]; // 0x420 (0x8) 
	enum EFortQuestType QuestType; // 0x428 (0x1)
	unsigned char bShouldDisplayOverallQuestInformation; // 0x429 (0x1)
	unsigned char bShouldDisplayStartingToast; // 0x429 (0x1)
	unsigned char bAthenaUpdateObjectiveOncePerMatch; // 0x429 (0x1)
	unsigned char bAthenaGrantRarityToken; // 0x429 (0x1)
	unsigned char bShouldAutoClaim; // 0x429 (0x1)
	unsigned char bShouldGetFullMatchProgress; // 0x429 (0x1)
	unsigned char bAthenaMustCompleteInSingleMatch; // 0x42a (0x1)
	unsigned char bUpdateObjectiveOncePerMatch; // 0x42a (0x1)
	unsigned char IsStreamingRequired; // 0x42a (0x1)
	unsigned char bExpandsStormShield; // 0x42a (0x1)
	unsigned char bHidden; // 0x42a (0x1)
	unsigned char unreflected_42b[0x5]; // 0x42b (0x5) 
	struct TWeakObjectPtr<class USoundBase> CharacterCompletionAudio; // 0x430 (0x28)
	float CharacterCompletionAudioDelay; // 0x458 (0x4)
	unsigned char unreflected_45c[0x4]; // 0x45c (0x4) 
	struct FString CompletionVideoUID; // 0x460 (0x10)
	unsigned char bSuppressQuestGrantedEvent; // 0x470 (0x1)
	unsigned char bIncludedInCategories; // 0x470 (0x1)
	unsigned char bAutoLaunch; // 0x470 (0x1)
	unsigned char bDeprecated; // 0x470 (0x1)
	unsigned char bDisableBackendConditionEvaluation; // 0x470 (0x1)
	unsigned char bAllowTileMatching; // 0x470 (0x1)
	unsigned char bAllowPlayNowNavigation; // 0x470 (0x1)
	unsigned char bAllowMissionAlertMatchesBypassingTileRequirements; // 0x470 (0x1)
	unsigned char bTutorialQuest; // 0x471 (0x1)
	unsigned char bCanShowTimer; // 0x471 (0x1)
	unsigned char bHideStageDescription; // 0x471 (0x1)
	unsigned char bHideIncompleteObjectiveLocations; // 0x471 (0x1)
	unsigned char unreflected_472[0x2]; // 0x472 (0x2) 
	int ObjectiveCompletionCount; // 0x474 (0x4)
	struct TArray<struct FFortItemQuantityPair> Rewards; // 0x478 (0x10)
	bool bShouldUseGiftBox; // 0x488 (0x1)
	unsigned char unreflected_489[0x7]; // 0x489 (0x7) 
	struct FChallengeGiftBoxData GiftBoxToUse; // 0x490 (0x38)
	class UDataTable* RewardsTable; // 0x4c8 (0x8)
	struct TArray<struct FDataTableRowHandle> IndividualRewardTableRows; // 0x4d0 (0x10)
	struct FString QuestPool; // 0x4e0 (0x10)
	unsigned char unreflected_4f0[0x10]; // 0x4f0 (0x10) 
	struct TArray<struct FFortHiddenRewardQuantityPair*> HiddenRewards; // 0x500 (0x10)
	struct TArray<struct FString> FeatureRewards; // 0x510 (0x10)
	struct TArray<struct FFortMcpQuestRewardInfo> SelectableRewards; // 0x520 (0x10)
	struct TArray<struct FFortMcpQuestObjectiveInfo> Objectives; // 0x530 (0x10)
	struct FGameplayTagContainer Prerequisites; // 0x540 (0x20)
	struct FGameplayTagContainer ExcludedPlaylistTags; // 0x560 (0x20)
	struct TWeakObjectPtr<class UFortQuestItemDefinition> PrerequisiteQuest; // 0x580 (0x28)
	struct FDataTableRowHandle PrerequisiteObjective; // 0x5a8 (0x10)
	float Weight; // 0x5b8 (0x4)
	unsigned char unreflected_5bc[0x4]; // 0x5bc (0x4) 
	struct FDataTableRowHandle WeightOverride; // 0x5c0 (0x10)
	uint16_t GranterWindowPeriodMinutes; // 0x5d0 (0x2)
	uint16_t GranterCooldownPeriodSeconds; // 0x5d2 (0x2)
	unsigned char unreflected_5d4[0x4]; // 0x5d4 (0x4) 
	struct TArray<struct TWeakObjectPtr<class UFortQuestItemDefinition>> QuestsToComplete; // 0x5d8 (0x10)
	struct FDataTableRowHandle category; // 0x5e8 (0x10)
	struct TWeakObjectPtr<class UFortConversation> IntroConversation; // 0x5f8 (0x28)
	struct TWeakObjectPtr<class UFortConversation> SelectRewardsConversation; // 0x620 (0x28)
	struct TWeakObjectPtr<class UFortConversation> ClaimConversation; // 0x648 (0x28)
	struct FText RewardHeaderText; // 0x670 (0x18)
	struct FText RewardDescription; // 0x688 (0x18)
	struct FText CompletionText; // 0x6a0 (0x18)
	bool bCanDisplayLockWidget; // 0x6b8 (0x1)
	bool bCanShowQuestHeaderToastText; // 0x6b9 (0x1)
	unsigned char unreflected_6ba[0x6]; // 0x6ba (0x6) 
	struct FText QuestHeaderToastDisplayText; // 0x6c0 (0x18)
	struct FText LockedDisplayTextOverride; // 0x6d8 (0x18)
	struct TArray<struct FFortQuestMissionCreationContext> MissionCreationContexts; // 0x6f0 (0x10)
	struct FFortMissionConfigDataParams MissionConfigMetadata; // 0x700 (0x10)
	uint32_t ClaimPriority; // 0x710 (0x4)
	int SortPriority; // 0x714 (0x4)
	struct TWeakObjectPtr<class UFortAbilitySet> QuestAbilitySet; // 0x718 (0x28)
	bool bCanShowInPostMatch; // 0x740 (0x1)
	bool bHideQuestProgressNotification; // 0x741 (0x1)
	bool bHideQuestRewardNotification; // 0x742 (0x1)
	unsigned char unreflected_743[0x5]; // 0x743 (0x5) 
	struct TWeakObjectPtr<class UFortPlaylist> DiscoveryPlaylistOverride; // 0x748 (0x28)
	bool bOverrideDiscoveryPlaylist; // 0x770 (0x1)
	unsigned char unreflected_771[0x7]; // 0x771 (0x7) 
	struct FString IslandCode; // 0x778 (0x10)
	struct TArray<class UFortQuestDefinitionComponent*> QuestDefinitionComponents; // 0x788 (0x10)
	bool bAllowSimultaneousQuestInstances; // 0x798 (0x1)
	unsigned char padding_799[0x7]; // 0x799 (0x7)

	/* Functions */

	// Function /Script/FortniteGame.FortQuestItemDefinition.ShouldDisplayStartingToast (Underlying native function: ShouldDisplayStartingToast 0x8e1d264)
	bool ShouldDisplayStartingToast(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortQuestItemDefinition.ShouldDisplayOverallQuestInformation (Underlying native function: ShouldDisplayOverallQuestInformation 0x8e1d248)
	bool ShouldDisplayOverallQuestInformation(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortQuestItemDefinition.ShouldAutoLaunch (Underlying native function: ShouldAutoLaunch 0x8e1d22c)
	bool ShouldAutoLaunch(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortQuestItemDefinition.IsTutorialQuest (Underlying native function: IsTutorialQuest 0x8e1cc18)
	bool IsTutorialQuest(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortQuestItemDefinition.IsPunchCardQuest (Underlying native function: IsPunchCardQuest 0x8e1c674)
	bool IsPunchCardQuest(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortQuestItemDefinition.IsIncludedInCategories (Underlying native function: IsIncludedInCategories 0x8e1c4a0)
	bool IsIncludedInCategories(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortQuestItemDefinition.IsHidden (Underlying native function: IsHidden 0x8e1c464)
	bool IsHidden(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortQuestItemDefinition.IsGroupChallenge (Underlying native function: IsGroupChallenge 0x8e1c440)
	bool IsGroupChallenge(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortQuestItemDefinition.IsGlyphQuest (Underlying native function: IsGlyphQuest 0x8e1c41c)
	bool IsGlyphQuest(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortQuestItemDefinition.IsFeatQuest (Underlying native function: IsFeatQuest 0x8e1c3f4)
	bool IsFeatQuest(); // (0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortQuestItemDefinition.IsDeprecated (Underlying native function: IsDeprecated 0x8e1c3d8)
	bool IsDeprecated(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortQuestItemDefinition.HasComponentForWorldProcessingUpdates (Underlying native function: HasComponentForWorldProcessingUpdates 0x8e1c3a0)
	bool HasComponentForWorldProcessingUpdates(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortQuestItemDefinition.GetWeight (Underlying native function: GetWeight 0x8e1bc68)
	float GetWeight(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortQuestItemDefinition.GetUpdateObjectiveOncePerMatch (Underlying native function: GetUpdateObjectiveOncePerMatch 0x8e1bc30)
	bool GetUpdateObjectiveOncePerMatch(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortQuestItemDefinition.GetSelectRewardsConversation (Underlying native function: GetSelectRewardsConversation 0x8e1b8b4)
	class UFortConversation* GetSelectRewardsConversation(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortQuestItemDefinition.GetSelectableRewards_BP (Underlying native function: GetSelectableRewards_BP 0x8e1b8e4)
	struct TArray<struct FFortMcpQuestRewardInfo> GetSelectableRewardsBP(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortQuestItemDefinition.GetRewardType (Underlying native function: GetRewardType 0x8e1b850)
	enum EFortQuestRewardType GetRewardType(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortQuestItemDefinition.GetRewards_BP (Underlying native function: GetRewards_BP 0x8e1b874)
	struct TArray<struct FFortItemQuantityPair> GetRewardsBP(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortQuestItemDefinition.GetRewardInfo_BP (Underlying native function: GetRewardInfo_BP 0x8e1b810)
	struct FFortRewardInfo GetRewardInfoBP(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortQuestItemDefinition.GetRewardHeaderText (Underlying native function: GetRewardHeaderText 0x8a064a8)
	struct FText GetRewardHeaderText(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortQuestItemDefinition.GetRewardDescription (Underlying native function: GetRewardDescription 0x8a0651c)
	struct FText GetRewardDescription(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortQuestItemDefinition.GetQuestType (Underlying native function: GetQuestType 0x8e1b768)
	enum EFortQuestType GetQuestType(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortQuestItemDefinition.GetQuestHeaderToastDisplayText (Underlying native function: GetQuestHeaderToastDisplayText 0x8e1b64c)
	struct FText GetQuestHeaderToastDisplayText(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortQuestItemDefinition.GetPrerequisiteQuest (Underlying native function: GetPrerequisiteQuest 0x8e1b61c)
	class UFortQuestItemDefinition* GetPrerequisiteQuest(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortQuestItemDefinition.GetPrerequisiteObjective (Underlying native function: GetPrerequisiteObjective 0x8e1b600)
	struct FDataTableRowHandle GetPrerequisiteObjective(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortQuestItemDefinition.GetPartialObjectiveCompletionCount (Underlying native function: GetPartialObjectiveCompletionCount 0x8e1b5b8)
	int GetPartialObjectiveCompletionCount(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortQuestItemDefinition.GetObjectives_BP (Underlying native function: GetObjectives_BP 0x8e1b478)
	struct TArray<struct FFortMcpQuestObjectiveInfo> GetObjectivesBP(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortQuestItemDefinition.GetObjectiveNeededToComplete (Underlying native function: GetObjectiveNeededToComplete 0x8e1b454)
	int GetObjectiveNeededToComplete(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortQuestItemDefinition.GetLockedDisplayTextOverride (Underlying native function: GetLockedDisplayTextOverride 0x8e1b258)
	struct FText GetLockedDisplayTextOverride(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortQuestItemDefinition.GetIntroConversation (Underlying native function: GetIntroConversation 0x8e1b228)
	class UFortConversation* GetIntroConversation(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortQuestItemDefinition.GetHiddenRewards_BP (Underlying native function: GetHiddenRewards_BP 0x8e1b1c0)
	struct TArray<struct FFortHiddenRewardQuantityPair*> GetHiddenRewardsBP(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortQuestItemDefinition.GetCompletionVideoUID (Underlying native function: GetCompletionVideoUID 0x8e1afd4)
	struct FString GetCompletionVideoUID(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortQuestItemDefinition.GetCompletionText (Underlying native function: GetCompletionText 0x8a07558)
	struct FText GetCompletionText(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortQuestItemDefinition.GetClaimConversation (Underlying native function: GetClaimConversation 0x8e1af08)
	class UFortConversation* GetClaimConversation(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortQuestItemDefinition.GetCharacterCompletionAudioDelay (Underlying native function: GetCharacterCompletionAudioDelay 0x2d014a4)
	float GetCharacterCompletionAudioDelay(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortQuestItemDefinition.GetCharacterCompletionAudio (Underlying native function: GetCharacterCompletionAudio 0x8e1ae74)
	struct TWeakObjectPtr<class USoundBase> GetCharacterCompletionAudio(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortQuestItemDefinition.GetChallengeChainRewardInfo (Underlying native function: GetChallengeChainRewardInfo 0x8e1adcc)
	struct FFortRewardInfo GetChallengeChainRewardInfo(bool& bGetAllQuestRewards); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortQuestItemDefinition.GetCategory (Underlying native function: GetCategory 0x8e1adb0)
	struct FDataTableRowHandle GetCategory(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortQuestItemDefinition.GetCanDisplayLockWidget (Underlying native function: GetCanDisplayLockWidget 0x8e1ad98)
	bool GetCanDisplayLockWidget(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortQuestItemDefinition.GetAthenaUpdateObjectiveOncePerMatch (Underlying native function: GetAthenaUpdateObjectiveOncePerMatch 0x8e1ad7c)
	bool GetAthenaUpdateObjectiveOncePerMatch(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortQuestItemDefinition.GetAthenaObjectiveMustBeCompletedInASingleMatch (Underlying native function: GetAthenaObjectiveMustBeCompletedInASingleMatch 0x8e1ad60)
	bool GetAthenaObjectiveMustBeCompletedInASingleMatch(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortQuestItemDefinition.ExpandsStormShield (Underlying native function: ExpandsStormShield 0x8e1ad14)
	bool ExpandsStormShield(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortQuestItemDefinition.CanShowTimer (Underlying native function: CanShowTimer 0x8e1ace4)
	bool CanShowTimer(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortQuestItemDefinition.CanProgressInBRWarmup (Underlying native function: CanProgressInBRWarmup 0x8e1ac30)
	bool CanProgressInBRWarmup(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortQuestItemDefinition.CanPartyAssist (Underlying native function: CanPartyAssist 0x8e1ac0c)
	bool CanPartyAssist(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortQuestItemDefinition.AllowsTileMatching (Underlying native function: AllowsTileMatching 0x8e1a9e8)
	bool AllowsTileMatching(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortQuestItemDefinition.AllowsPlayNowNavigation (Underlying native function: AllowsPlayNowNavigation 0x8e1a9cc)
	bool AllowsPlayNowNavigation(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

