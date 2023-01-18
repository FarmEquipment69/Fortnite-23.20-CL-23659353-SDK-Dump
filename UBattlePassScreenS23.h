// Class /Script/BattlePassS23UI.BattlePassScreenS23
// Size: 0xcc0
class UBattlePassScreenS23 : public UBattlePassScreenBase
{
	class UClass* ResourcePurchaseScreenClass; // 0x840 (0x8)
	unsigned char unreflected_848[0x8]; // 0x848 (0x8) 
	class UCommonButtonBase* ButtonClose; // 0x850 (0x8)
	class UCommonButtonLegacy* ButtonCloseMobile; // 0x858 (0x8)
	class UCommonButtonBase* ButtonToggleViewDetails; // 0x860 (0x8)
	class UCommonButtonBase* ButtonReplayTrailer; // 0x868 (0x8)
	class UCommonButtonBase* ButtonReplayTrailerMobile; // 0x870 (0x8)
	class UCommonButtonBase* ButtonShowAbout; // 0x878 (0x8)
	class UCommonButtonBase* ButtonShowAboutMobile; // 0x880 (0x8)
	class UCommonButtonBase* ButtonShowAboutCustomization; // 0x888 (0x8)
	class UCommonButtonBase* ButtonShowAboutCustomizationMobile; // 0x890 (0x8)
	class UCommonButtonBase* ButtonBulkBuyRewards; // 0x898 (0x8)
	class UCommonButtonBase* ButtonPageComplete; // 0x8a0 (0x8)
	class UCommonButtonBase* ButtonGiftBattlePass; // 0x8a8 (0x8)
	class UCommonVisibilitySwitcher* MobileVisibilitySwitcher; // 0x8b0 (0x8)
	class UFortBattlePassResourcesWidgetBase* BattlePassCurrencyPanel; // 0x8b8 (0x8)
	class UAthenaExclusiveRewardBanner* AthenaExclusiveRewardBanner; // 0x8c0 (0x8)
	class UCommonTextBlock* TextDescription; // 0x8c8 (0x8)
	class UCommonTextBlock* TextItemName; // 0x8d0 (0x8)
	class UAthenaRewardItemTypeRarityTag* ItemRewardTag; // 0x8d8 (0x8)
	class UCommonTextBlock* TextSetDetails; // 0x8e0 (0x8)
	class UWidgetSwitcher* SwitcherPrerequisiteInfo; // 0x8e8 (0x8)
	class UCommonTextBlock* TextPrerequisite; // 0x8f0 (0x8)
	class UWidget* WidgetPrerequisiteProgress; // 0x8f8 (0x8)
	class UWidget* WidgetLevelUpMessageFree; // 0x900 (0x8)
	class UWidget* WidgetLevelUpMessagePremium; // 0x908 (0x8)
	class UWidget* WidgetCustomResourceMessage; // 0x910 (0x8)
	class UWidgetSwitcher* SwitcherPrimaryAction; // 0x918 (0x8)
	class UFortHoldableButton* ButtonBuyLevels; // 0x920 (0x8)
	class UFortHoldableButton* ButtonBuyBattlePass; // 0x928 (0x8)
	class UFortHoldableButton* ButtonClaimReward; // 0x930 (0x8)
	class UCommonButtonBase* ButtonViewQuests; // 0x938 (0x8)
	class UCommonButtonBase* ButtonPreviewLoadingScreen; // 0x940 (0x8)
	class UBorder* TagRequiresBP; // 0x948 (0x8)
	class UBorder* TagPageLocked; // 0x950 (0x8)
	class UBorder* TagBaseItem; // 0x958 (0x8)
	class UBorder* TagPrerequisite; // 0x960 (0x8)
	class UBorder* TagCompletePage; // 0x968 (0x8)
	class UBorder* TagNotEnoughCurrency; // 0x970 (0x8)
	class UBorder* TagCost; // 0x978 (0x8)
	class UBorder* TagOwned; // 0x980 (0x8)
	class UBorder* TagDelayed; // 0x988 (0x8)
	struct FGameplayTag QuestCategoryParentTag; // 0x990 (0x4)
	unsigned char unreflected_994[0x4]; // 0x994 (0x4) 
	class UClass* PreviewLoadingScreenWidgetClass; // 0x998 (0x8)
	unsigned char unreflected_9a0[0x58]; // 0x9a0 (0x58) 
	class UAthenaSeasonItemData_BattleStar* SeasonDataBattleStar; // 0x9f8 (0x8)
	class UAthenaSeasonItemEntryBase* CurrentSelectedEntry; // 0xa00 (0x8)
	struct TArray<enum EBattlePassView> SwitcherSubPageTypes; // 0xa08 (0x10)
	class UCommonVisibilitySwitcher* SubPageSwitcher; // 0xa18 (0x8)
	unsigned char unreflected_a20[0x100]; // 0xa20 (0x100) 
	class UFortItemDefinition* SeasonalBaseCustomizationItem; // 0xb20 (0x8)
	bool bHasSubscription; // 0xb28 (0x1)
	unsigned char unreflected_b29[0x7]; // 0xb29 (0x7) 
	class UFortBattlePassTutorialTooltipS23* TutorialTooltipBattleStars; // 0xb30 (0x8)
	class UFortBattlePassTutorialTooltipS23* TutorialTooltipStylePoints; // 0xb38 (0x8)
	class UFortSwipePanel* SwipePanelNavigation; // 0xb40 (0x8)
	unsigned char padding_b48[0x178]; // 0xb48 (0x178)

	/* Functions */

	// Function /Script/BattlePassS23UI.BattlePassScreenS23.OverviewShowAnimationFinished (Underlying native function: OverviewShowAnimationFinished 0x26daa0c)
	void OverviewShowAnimationFinished(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/BattlePassS23UI.BattlePassScreenS23.OnUpdateStatusBar (Has no native function)
	void OnUpdateStatusBar(struct FText& StatusText, enum EBattlePassStatusBarTypeS23& BarType); // (Event | Protected | HasOutParms | BlueprintEvent)

	// Function /Script/BattlePassS23UI.BattlePassScreenS23.OnUpdateBattlePassRequiredBar (Has no native function)
	void OnUpdateBattlePassRequiredBar(bool& bPassRequiredVisible); // (Event | Protected | BlueprintEvent)

	// Function /Script/BattlePassS23UI.BattlePassScreenS23.OnTransitionItemDetails (Has no native function)
	void OnTransitionItemDetails(bool& bTransitionForward); // (Event | Protected | BlueprintEvent)

	// Function /Script/BattlePassS23UI.BattlePassScreenS23.OnSetWeeklyRewardsInfo (Has no native function)
	void OnSetWeeklyRewardsInfo(struct FTimespan*& DelayTimespan, struct FText& ObjectiveDescription, int& NumObjectives, int& NumObjectivesCompleted, struct FText& RewardName, int& OwnedRewards, int& TotalRewards); // (Event | Protected | HasOutParms | HasDefaults | BlueprintEvent)

	// Function /Script/BattlePassS23UI.BattlePassScreenS23.OnSetResourcePrice (Has no native function)
	void OnSetResourcePrice(int& Cost, class UFortPersistentResourceItemDefinition*& PersistentResource); // (Event | Protected | BlueprintEvent)

	// Function /Script/BattlePassS23UI.BattlePassScreenS23.OnSetQuestRewardsInfo (Has no native function)
	void OnSetQuestRewardsInfo(struct FTimespan*& DelayTimespan, int& OwnedRewards, int& TotalRewards, int& CompletedPages, int& TotalPages); // (Event | Protected | HasOutParms | HasDefaults | BlueprintEvent)

	// Function /Script/BattlePassS23UI.BattlePassScreenS23.OnSetPrerequisiteInfo (Has no native function)
	void OnSetPrerequisiteInfo(struct FText& Description, int& CurrentAmount, int& NeededAmount, enum EBattlePassRewardPrerequisiteType& PrerequisiteType, bool& bShowPrerequisiteLock); // (Event | Protected | HasOutParms | BlueprintEvent)

	// Function /Script/BattlePassS23UI.BattlePassScreenS23.OnSetItemPrice (Has no native function)
	void OnSetItemPrice(int& Cost, enum EBattlePassCurrencyType& CurrencyType); // (Event | Protected | BlueprintEvent)

	// Function /Script/BattlePassS23UI.BattlePassScreenS23.OnSetCrewInfo (Has no native function)
	void OnSetCrewInfo(bool& bIsNextMonthRewards, struct FText& MonthText, struct FTimespan*& NextMonthlyRewardTimespan, struct FText& CharacterDisplayName, struct FText& CharacterDescription); // (Event | Protected | HasOutParms | HasDefaults | BlueprintEvent)

	// Function /Script/BattlePassS23UI.BattlePassScreenS23.OnSetCoverPageData (Has no native function)
	void OnSetCoverPageData(struct FText& Title, struct FText& Description, bool& bPageComplete); // (Event | Protected | HasOutParms | BlueprintEvent)

	// Function /Script/BattlePassS23UI.BattlePassScreenS23.OnSetBonusRewardsInfo (Has no native function)
	void OnSetBonusRewardsInfo(bool& bIsUnlocked, int& OwnedRewards, int& TotalRewards, int& CompletedPages, int& TotalPages, int& ClaimedOutfits, int& TotalOutfits); // (Event | Protected | BlueprintEvent)

	// Function /Script/BattlePassS23UI.BattlePassScreenS23.OnSetBaseRewardsInfo (Has no native function)
	void OnSetBaseRewardsInfo(int& OwnedRewards, int& TotalRewards, int& CompletedPages, int& TotalPages); // (Event | Protected | BlueprintEvent)

	// Function /Script/BattlePassS23UI.BattlePassScreenS23.OnItemDelayed (Has no native function)
	void OnItemDelayed(struct FTimespan*& Delay); // (Event | Protected | HasDefaults | BlueprintEvent)

	// Function /Script/BattlePassS23UI.BattlePassScreenS23.OnInsufficientResource (Has no native function)
	void OnInsufficientResource(class UFortPersistentResourceItemDefinition*& PersistentResource); // (Event | Protected | BlueprintEvent)

	// Function /Script/BattlePassS23UI.BattlePassScreenS23.OnInsufficientFunds (Has no native function)
	void OnInsufficientFunds(enum EBattlePassCurrencyType& CurrencyType); // (Event | Protected | BlueprintEvent)

	// Function /Script/BattlePassS23UI.BattlePassScreenS23.OnBattlePassOwned (Has no native function)
	void OnBattlePassOwned(); // (Event | Protected | BlueprintEvent)

	// Function /Script/BattlePassS23UI.BattlePassScreenS23.OnBattlePassGiftingAllowed (Has no native function)
	void OnBattlePassGiftingAllowed(bool& bGiftingAllowed); // (Event | Protected | BlueprintEvent)

	// Function /Script/BattlePassS23UI.BattlePassScreenS23.IsSeasonalCustomizationItemOwned (Underlying native function: IsSeasonalCustomizationItemOwned 0x727b540)
	bool IsSeasonalCustomizationItemOwned(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/BattlePassS23UI.BattlePassScreenS23.HandleSwitcherVisibilityShown (Underlying native function: HandleSwitcherVisibilityShown 0x727b518)
	void HandleSwitcherVisibilityShown(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/BattlePassS23UI.BattlePassScreenS23.HandleFullscreenMapToggled (Underlying native function: HandleFullscreenMapToggled 0x727b404)
	void HandleFullscreenMapToggled(bool& bMapVisible); // (Final | Native | Private)

	// Function /Script/BattlePassS23UI.BattlePassScreenS23.HandleClaimRewardComplete (Underlying native function: HandleClaimRewardComplete 0x727b318)
	void HandleClaimRewardComplete(bool& bSuccess, struct TArray<struct FString>& OfferTemplateIdList); // (Final | Native | Private | HasOutParms)

	// Function /Script/BattlePassS23UI.BattlePassScreenS23.GetQuestPageDelay (Underlying native function: GetQuestPageDelay 0x727b2ec)
	struct FTimespan* GetQuestPageDelay(); // (Final | Native | Protected | HasDefaults | BlueprintCallable | BlueprintPure | Const)
};

