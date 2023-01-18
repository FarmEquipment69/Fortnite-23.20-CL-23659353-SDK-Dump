// Class /Script/FortniteGame.FortQuestItem
// Size: 0x2e0
class UFortQuestItem : public UFortAccountItem
{
	unsigned char unreflected_108[0x28]; // 0x108 (0x28) 
	struct TArray<class UFortQuestObjectiveInfo*> Objectives; // 0x130 (0x10)
	struct TArray<class UFortQuestObjectiveInfo*> UpdatingObjectives; // 0x140 (0x10)
	struct TArray<class UFortQuestObjectiveInfo*> ObjectivesToAddToUpdates; // 0x150 (0x10)
	unsigned char unreflected_160[0x4]; // 0x160 (0x4) 
	int LastNotifiedQuestCount; // 0x164 (0x4)
	enum EFortQuestState queststate; // 0x168 (0x1)
	bool sentnewnotification; // 0x169 (0x1)
	unsigned char unreflected_16a[0x6]; // 0x16a (0x6) 
	struct FDateTime* laststatechangetime; // 0x170 (0x8)
	enum EFortRarity questrarity; // 0x178 (0x1)
	unsigned char unreflected_179[0x7]; // 0x179 (0x7) 
	struct TArray<struct FCompletionCountEntry*> CompletionCounts; // 0x180 (0x10)
	bool bSentCompleteNotification; // 0x190 (0x1)
	bool bAllObjectivesComplete; // 0x191 (0x1)
	bool bIsManuallyGrantedQuest; // 0x192 (0x1)
	bool bIsQuestInTransientState; // 0x193 (0x1)
	bool bIsBoundToQuestProp; // 0x194 (0x1)
	unsigned char unreflected_195[0x3]; // 0x195 (0x3) 
	struct FString twitchbroadcasterchannelid; // 0x198 (0x10)
	int CurrentStage; // 0x1a8 (0x4)
	bool bSoundSequenceMuted; // 0x1ac (0x1)
	bool bHasSetInitialNotifiedStates; // 0x1ad (0x1)
	unsigned char unreflected_1ae[0x2]; // 0x1ae (0x2) 
	struct FDateTime* expirytime; // 0x1b0 (0x8)
	struct FString questpool; // 0x1b8 (0x10)
	float xprewardscalar; // 0x1c8 (0x4)
	unsigned char unreflected_1cc[0x4]; // 0x1cc (0x4) 
	struct FFortMissionInstancedConfigData InstancedConfigData; // 0x1d0 (0x10)
	struct FString challengelinkedquestgiven; // 0x1e0 (0x10)
	struct FString challengelinkedquestparent; // 0x1f0 (0x10)
	struct FString challengebundleid; // 0x200 (0x10)
	int PlayerLevel; // 0x210 (0x4)
	unsigned char unreflected_214[0x4]; // 0x214 (0x4) 
	struct TArray<struct FGuid> TrackedGuids; // 0x218 (0x10)
	struct FString Bucket; // 0x228 (0x10)
	struct TArray<struct FString> Playlists; // 0x238 (0x10)
	bool bIsMine; // 0x248 (0x1)
	unsigned char unreflected_249[0x3]; // 0x249 (0x3) 
	int SoundSequenceIndex; // 0x24c (0x4)
	unsigned char unreflected_250[0x8]; // 0x250 (0x8) 
	class UFortSoundSequence* ActiveSoundSequence; // 0x258 (0x8)
	struct TArray<class UFortQuestItemComponent*> QuestItemComponents; // 0x260 (0x10)
	struct TArray<struct FString> TrackedData; // 0x270 (0x10)
	unsigned char padding_280[0x60]; // 0x280 (0x60)

	/* Functions */

	// Function /Script/FortniteGame.FortQuestItem.StartSoundSequenceDelay (Underlying native function: StartSoundSequenceDelay 0x8e01208)
	void StartSoundSequenceDelay(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortQuestItem.ShouldDisplayOverallQuestInformation (Underlying native function: ShouldDisplayOverallQuestInformation 0x8e00ed4)
	bool ShouldDisplayOverallQuestInformation(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortQuestItem.PlayIntroConversation (Underlying native function: PlayIntroConversation 0x8dff634)
	void PlayIntroConversation(class UClass*& QuestConversationClass); // (Final | 0x00000002 | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortQuestItem.PlayCurrentSoundSequenceData (Underlying native function: PlayCurrentSoundSequenceData 0x8dff620)
	void PlayCurrentSoundSequenceData(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortQuestItem.IsVisibleToUser (Underlying native function: IsVisibleToUser 0x8dfe83c)
	bool IsVisibleToUser(bool& bAllowClaimedQuestsToBeVisible, bool& bAllowCompletedQuestsToBeVisible, bool& bAllowExpiredQuestsToBeVisible); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortQuestItem.IsQuestPinned (Underlying native function: IsQuestPinned 0x8dfe818)
	bool IsQuestPinned(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortQuestItem.IsQuestInProgress (Underlying native function: IsQuestInProgress 0x8dfe7f0)
	bool IsQuestInProgress(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortQuestItem.IsObjectiveWithNameInProgress (Underlying native function: IsObjectiveWithNameInProgress 0x8dfe764)
	bool IsObjectiveWithNameInProgress(struct FName& BackendName); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortQuestItem.IsObjectiveInProgress (Underlying native function: IsObjectiveInProgress 0x8dfe6c8)
	bool IsObjectiveInProgress(struct FDataTableRowHandle& ObjectiveStatHandle); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortQuestItem.IsIncludedInCategories (Underlying native function: IsIncludedInCategories 0x8dfe5d4)
	bool IsIncludedInCategories(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortQuestItem.HasVisibleRewards (Underlying native function: HasVisibleRewards 0x8dfe5b0)
	bool HasVisibleRewards(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortQuestItem.HasQuestExpired (Underlying native function: HasQuestExpired 0x8dfe520)
	bool HasQuestExpired(struct FDateTime*& UtcNow); // (Final | 0x00000002 | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortQuestItem.HasCompletedQuest (Underlying native function: HasCompletedQuest 0x8dfe4fc)
	bool HasCompletedQuest(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortQuestItem.HasCompletedObjectiveWithName (Underlying native function: HasCompletedObjectiveWithName 0x8dfe470)
	bool HasCompletedObjectiveWithName(struct FName& BackendName); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortQuestItem.HasCompletedObjective (Underlying native function: HasCompletedObjective 0x8dfe3d4)
	bool HasCompletedObjective(struct FDataTableRowHandle& ObjectiveStatHandle); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortQuestItem.HasCompletedAllObjectives (Underlying native function: HasCompletedAllObjectives 0x8dfe344)
	bool HasCompletedAllObjectives(bool& bCheckForTurnInObjective); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortQuestItem.GetXpRewardValue (Underlying native function: GetXpRewardValue 0x8dfd95c)
	int GetXpRewardValue(class UAthenaSeasonItemDefinition*& SeasonDef, class AFortPlayerController*& PlayerController); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortQuestItem.GetXpRewardScalar (Underlying native function: GetXpRewardScalar 0x890d76c)
	float GetXpRewardScalar(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortQuestItem.GetTwitchBroadcasterChannelId (Underlying native function: GetTwitchBroadcasterChannelId 0x8dfd810)
	struct FString GetTwitchBroadcasterChannelId(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortQuestItem.GetRewardInfo (Underlying native function: GetRewardInfo 0x8dfd7b8)
	struct FFortRewardInfo GetRewardInfo(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortQuestItem.GetRemainingExpirationDuration (Underlying native function: GetRemainingExpirationDuration 0x8dfd70c)
	struct FTimespan* GetRemainingExpirationDuration(struct FDateTime*& UtcNow); // (Final | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortQuestItem.GetQuestState (Underlying native function: GetQuestState 0x8dfd6e8)
	enum EFortQuestState GetQuestState(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortQuestItem.GetQuestPool (Underlying native function: GetQuestPool 0x8dfd59c)
	struct FString GetQuestPool(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortQuestItem.GetQuestDefinitionBP (Underlying native function: GetQuestDefinitionBP 0x8dfd520)
	class UFortQuestItemDefinition* GetQuestDefinitionBP(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortQuestItem.GetPreviewSelectableRewards (Underlying native function: GetPreviewSelectableRewards 0x8dfd40c)
	struct TArray<struct FFortItemInstanceQuantityPair> GetPreviewSelectableRewards(int& RewardIndex); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortQuestItem.GetPreviewRewards (Underlying native function: GetPreviewRewards 0x8dfd398)
	struct TArray<struct FFortItemInstanceQuantityPair> GetPreviewRewards(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortQuestItem.GetPreviewAllSelectableRewards (Underlying native function: GetPreviewAllSelectableRewards 0x8dfd324)
	struct TArray<struct FFortItemInstanceQuantityPair> GetPreviewAllSelectableRewards(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortQuestItem.GetPercentageComplete (Underlying native function: GetPercentageComplete 0x8dfd294)
	float GetPercentageComplete(class UFortQuestItemDefinition*& KnownQuestDef); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortQuestItem.GetObjectiveInfo (Underlying native function: GetObjectiveInfo 0x8dfd1f8)
	class UFortQuestObjectiveInfo* GetObjectiveInfo(struct FDataTableRowHandle& ObjectiveStatHandle); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortQuestItem.GetNumObjectivesComplete (Underlying native function: GetNumObjectivesComplete 0x8dfd1b4)
	int GetNumObjectivesComplete(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortQuestItem.GetMissionConfigData (Underlying native function: GetMissionConfigData 0x8dfd128)
	class UFortMissionConfigData* GetMissionConfigData(struct FGameplayTag& InBucketTag); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortQuestItem.GetChallengeChainRewardInfo (Underlying native function: GetChallengeChainRewardInfo 0x8dfd080)
	struct FFortRewardInfo GetChallengeChainRewardInfo(bool& bGetCurrentChainQuestOnly); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortQuestItem.GetChallengeBundleId (Underlying native function: GetChallengeBundleId 0x8dfcf34)
	struct FString GetChallengeBundleId(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortQuestItem.GetBroadcasterGrantWindowEnd (Underlying native function: GetBroadcasterGrantWindowEnd 0x8dfcf08)
	struct FDateTime* GetBroadcasterGrantWindowEnd(); // (Final | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortQuestItem.GetBarsRewardValue (Underlying native function: GetBarsRewardValue 0x8dfcee4)
	int GetBarsRewardValue(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortQuestItem.GetAchievedCountForCurrentStage (Underlying native function: GetAchievedCountForCurrentStage 0x8dfce0c)
	void GetAchievedCountForCurrentStage(int& OutTotalAchievedCount, int& OutTotalRequiredCount); // (Final | 0x00000002 | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortQuestItem.GetAchievedCount (Underlying native function: GetAchievedCount 0x8dfcc8c)
	void GetAchievedCount(int& OutTotalAchievedCount, int& OutTotalRequiredCount, int& OutLastKnownAchievedCount, bool& UseLastKnownMcp); // (Final | 0x00000002 | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortQuestItem.DoesQuestExpire (Underlying native function: DoesQuestExpire 0x8dfc964)
	bool DoesQuestExpire(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortQuestItem.CanPinQuest (Underlying native function: CanPinQuest 0x8dfc040)
	bool CanPinQuest(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortQuestItem.AdvanceSoundSequence (Underlying native function: AdvanceSoundSequence 0x8dfc028)
	void AdvanceSoundSequence(); // (Final | Native | Protected)
};

