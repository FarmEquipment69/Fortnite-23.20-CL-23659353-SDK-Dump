// Class /Script/FortniteGame.FortChallengeBundleItemDefinition
// Size: 0x7b8
class UFortChallengeBundleItemDefinition : public UFortAccountItemDefinition
{
	struct FBundleVisibilityData BundleVisiblityData; // 0x420 (0x4)
	unsigned char unreflected_424[0x4]; // 0x424 (0x4) 
	struct TArray<struct FFortChallengeBundleQuestEntry> QuestInfos; // 0x428 (0x10)
	struct TArray<struct TWeakObjectPtr<class UFortQuestItemDefinition>> SuppressedQuestDefs; // 0x438 (0x10)
	struct FString CalendarEventTag; // 0x448 (0x10)
	struct FString CalendarEventName; // 0x458 (0x10)
	struct TArray<struct FFortChallengeBundleRewards> BundleCompletionRewards; // 0x468 (0x10)
	struct TArray<struct FFortChallengeBundleLevel> BundleLevelRewards; // 0x478 (0x10)
	struct TArray<struct FFortChallengeBundleSpecialOffer> SpecialOffers; // 0x488 (0x10)
	struct TArray<struct TWeakObjectPtr<class UFortQuestItemDefinition>> CareerQuestBitShifts; // 0x498 (0x10)
	bool bSkipAddToGoalBundles; // 0x4a8 (0x1)
	unsigned char unreflected_4a9[0x7]; // 0x4a9 (0x7) 
	struct FBundleGoalCardDisplayData GoalCardDisplayData; // 0x4b0 (0x80)
	struct TArray<struct FBundleEventDisplayData> EventDisplayData; // 0x530 (0x10)
	struct FGameplayTag GoalCardPinSeasonItemTag; // 0x540 (0x4)
	bool bIsGoalCardSelectable; // 0x544 (0x1)
	unsigned char unreflected_545[0x3]; // 0x545 (0x3) 
	struct TWeakObjectPtr<class UObject> GoalCardCustomMapBackground; // 0x548 (0x28)
	struct TWeakObjectPtr<class UClass> GoalCardCustomMapWidget; // 0x570 (0x28)
	struct TWeakObjectPtr<class UObject> NotificationIconOverride; // 0x598 (0x28)
	struct FFortChallengeSetStyle DisplayStyle; // 0x5c0 (0xa0)
	struct FAthenaRewardItemReference OverrideRewardItem; // 0x660 (0xa0)
	class UAthenaCharacterItemDefinition* CharacterOverrideForRewardPreviews; // 0x700 (0x8)
	int MaxChainDepth; // 0x708 (0x4)
	unsigned char unreflected_70c[0x4]; // 0x70c (0x4) 
	struct TWeakObjectPtr<class UMaterial> BundleHidenImageMaterial; // 0x710 (0x28)
	struct FText UniqueLockedMessage; // 0x738 (0x18)
	struct FText LockedDisplayTextOverride; // 0x750 (0x18)
	bool bHideFromMapChallenges; // 0x768 (0x1)
	unsigned char bHideFromMapChallengeUntilBundleExists; // 0x769 (0x1)
	bool bHideWhenCompleted; // 0x76a (0x1)
	unsigned char unreflected_76b[0x5]; // 0x76b (0x5) 
	struct TWeakObjectPtr<class UFortChallengeBundleItemDefinition> HideUntilBundleCompleted; // 0x770 (0x28)
	bool bHideRewardFromMapChallenges; // 0x798 (0x1)
	bool bHideTimeRemaining; // 0x799 (0x1)
	bool bDeleteProgressTokenOnRemoval; // 0x79a (0x1)
	bool bGetActiveQuestInChain; // 0x79b (0x1)
	bool bUseQuestExpirationTimer; // 0x79c (0x1)
	unsigned char padding_79d[0x1b]; // 0x79d (0x1b)

	/* Functions */

	// Function /Script/FortniteGame.FortChallengeBundleItemDefinition.IsLinearChainQuest (Underlying native function: IsLinearChainQuest 0x868c758)
	bool IsLinearChainQuest(class UFortQuestItemDefinition*& InQuestDef, int& ChainLength, int& ChainPos); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortChallengeBundleItemDefinition.GetTotalNumberOfQuests (Underlying native function: GetTotalNumberOfQuests 0x868c64c)
	int GetTotalNumberOfQuests(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortChallengeBundleItemDefinition.GetRewardCompletionThreshold (Underlying native function: GetRewardCompletionThreshold 0x868c5c8)
	int GetRewardCompletionThreshold(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortChallengeBundleItemDefinition.GetQuests (Underlying native function: GetQuests 0x868c3c8)
	void GetQuests(class UFortQuestManager*& QuestManager, struct TArray<class UFortQuestItem*>& GrantedQuests, struct TArray<class UFortQuestItem*>& OwnedQuests, struct TArray<class UFortQuestItemDefinition*>& UnownedQuests, bool& bGetAllQuestsInChain); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortChallengeBundleItemDefinition.GetNumVisibleQuests (Underlying native function: GetNumVisibleQuests 0x868c0ac)
	int GetNumVisibleQuests(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortChallengeBundleItemDefinition.GetNumQuests (Underlying native function: GetNumQuests 0x868c094)
	int GetNumQuests(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortChallengeBundleItemDefinition.GetNotificationIconOverride (Underlying native function: GetNotificationIconOverride 0x868c000)
	struct TWeakObjectPtr<class UObject> GetNotificationIconOverride(); // (Final | Native | Public | Const)

	// Function /Script/FortniteGame.FortChallengeBundleItemDefinition.GetLockedDisplayTextOverride (Underlying native function: GetLockedDisplayTextOverride 0x868befc)
	struct FText GetLockedDisplayTextOverride(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortChallengeBundleItemDefinition.GetHexCodeForStyleColor (Underlying native function: GetHexCodeForStyleColor 0x868be2c)
	struct FString GetHexCodeForStyleColor(enum EBundleStyleColor& DesiredColor); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortChallengeBundleItemDefinition.GetGoalCardPinSeasonItemTag (Underlying native function: GetGoalCardPinSeasonItemTag 0x868be14)
	struct FGameplayTag GetGoalCardPinSeasonItemTag(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortChallengeBundleItemDefinition.GetEventName (Underlying native function: GetEventName 0x868bc54)
	struct FString GetEventName(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortChallengeBundleItemDefinition.GetDisplayStyle (Underlying native function: GetDisplayStyle 0x868bc38)
	struct FFortChallengeSetStyle GetDisplayStyle(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortChallengeBundleItemDefinition.GetCompletionRewards (Underlying native function: GetCompletionRewards 0x868bbfc)
	struct TArray<struct FAthenaRewardItemReference> GetCompletionRewards(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortChallengeBundleItemDefinition.GetCalendarEventName (Underlying native function: GetCalendarEventName 0x868b8f8)
	struct FString GetCalendarEventName(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortChallengeBundleItemDefinition.GetBundleLevelForQuest (Underlying native function: GetBundleLevelForQuest 0x868b868)
	int GetBundleLevelForQuest(class UFortQuestItemDefinition*& QuestDef); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

