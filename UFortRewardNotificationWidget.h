// Class /Script/SaveTheWorldUI.FortRewardNotificationWidget
// Size: 0x5d0
class UFortRewardNotificationWidget : public UCommonActivatablePanelLegacy
{
	unsigned char unreflected_4e0[0x8]; // 0x4e0 (0x8) 
	struct TArray<class UFortRewardNotificationData*> NotificationDataList; // 0x4e8 (0x10)
	unsigned char unreflected_4f8[0x10]; // 0x4f8 (0x10) 
	class UOverlay* OverlayMain; // 0x508 (0x8)
	struct FFortSwipeDetector SwipeDetector; // 0x510 (0x90)
	unsigned char unreflected_5a0[0x20]; // 0x5a0 (0x20) 
	class UClass* MulchConfirmationModalClass; // 0x5c0 (0x8)
	class UFortMulchConfirmationModalWidget* MulchConfirmationModal; // 0x5c8 (0x8)

	/* Functions */

	// Function /Script/SaveTheWorldUI.FortRewardNotificationWidget.ShowMulchConfirmationModal (Underlying native function: ShowMulchConfirmationModal 0x759b154)
	void ShowMulchConfirmationModal(); // (Native | Public | BlueprintCallable)

	// Function /Script/SaveTheWorldUI.FortRewardNotificationWidget.SetPrimaryActionText (Underlying native function: SetPrimaryActionText 0x75c28b4)
	void SetPrimaryActionText(struct FText& Text); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/SaveTheWorldUI.FortRewardNotificationWidget.SetPrimaryActionHidden (Underlying native function: SetPrimaryActionHidden 0x75c274c)
	void SetPrimaryActionHidden(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/SaveTheWorldUI.FortRewardNotificationWidget.SetPrimaryActionEnabled (Underlying native function: SetPrimaryActionEnabled 0x75c2670)
	void SetPrimaryActionEnabled(bool& bEnabled); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/SaveTheWorldUI.FortRewardNotificationWidget.ResetAllRewardData (Underlying native function: ResetAllRewardData 0x75c1418)
	void ResetAllRewardData(); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/SaveTheWorldUI.FortRewardNotificationWidget.PopulateReward (Underlying native function: PopulateReward 0x75c0dac)
	void PopulateReward(class UFortRewardNotificationData*& Reward); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/SaveTheWorldUI.FortRewardNotificationWidget.OnRewardsScreenClosed (Has no native function)
	void OnRewardsScreenClosed(); // (Event | Protected | BlueprintEvent)

	// Function /Script/SaveTheWorldUI.FortRewardNotificationWidget.OnRewardsClaimFailed (Has no native function)
	void OnRewardsClaimFailed(); // (Event | Protected | BlueprintEvent)

	// Function /Script/SaveTheWorldUI.FortRewardNotificationWidget.OnRewardsClaimed (Has no native function)
	void OnRewardsClaimed(struct TArray<struct FFortItemInstanceQuantityPair>& ItemList); // (Event | Protected | HasOutParms | BlueprintEvent)

	// Function /Script/SaveTheWorldUI.FortRewardNotificationWidget.OnPrimaryActionTextChanged (Has no native function)
	void OnPrimaryActionTextChanged(struct FText& Text); // (Event | Protected | HasOutParms | BlueprintEvent)

	// Function /Script/SaveTheWorldUI.FortRewardNotificationWidget.OnPrimaryActionHidden (Has no native function)
	void OnPrimaryActionHidden(); // (Event | Protected | BlueprintEvent)

	// Function /Script/SaveTheWorldUI.FortRewardNotificationWidget.OnPrimaryActionEnabled (Has no native function)
	void OnPrimaryActionEnabled(); // (Event | Protected | BlueprintEvent)

	// Function /Script/SaveTheWorldUI.FortRewardNotificationWidget.OnPrimaryActionDisabled (Has no native function)
	void OnPrimaryActionDisabled(); // (Event | Protected | BlueprintEvent)

	// Function /Script/SaveTheWorldUI.FortRewardNotificationWidget.OnPopulateNewQuestReward (Has no native function)
	void OnPopulateNewQuestReward(class UFortRewardEpicQuestData*& QuestReward); // (Event | Protected | BlueprintEvent)

	// Function /Script/SaveTheWorldUI.FortRewardNotificationWidget.OnPopulateGiftBoxReward (Has no native function)
	void OnPopulateGiftBoxReward(class UFortRewardGiftBoxData*& GiftBoxReward); // (Event | Protected | BlueprintEvent)

	// Function /Script/SaveTheWorldUI.FortRewardNotificationWidget.OnPopulateExpeditionReward (Has no native function)
	void OnPopulateExpeditionReward(class UFortRewardExpeditionData*& ExpeditionReward); // (Event | Protected | BlueprintEvent)

	// Function /Script/SaveTheWorldUI.FortRewardNotificationWidget.OnPopulateChoiceRewards (Has no native function)
	void OnPopulateChoiceRewards(struct TArray<struct FFortItemInstanceQuantityPair>& ItemList); // (Event | Protected | HasOutParms | BlueprintEvent)

	// Function /Script/SaveTheWorldUI.FortRewardNotificationWidget.OnNavigationUp (Has no native function)
	void OnNavigationUp(); // (Event | Public | BlueprintEvent)

	// Function /Script/SaveTheWorldUI.FortRewardNotificationWidget.OnNavigationRight (Has no native function)
	void OnNavigationRight(); // (Event | Public | BlueprintEvent)

	// Function /Script/SaveTheWorldUI.FortRewardNotificationWidget.OnNavigationLeft (Has no native function)
	void OnNavigationLeft(); // (Event | Public | BlueprintEvent)

	// Function /Script/SaveTheWorldUI.FortRewardNotificationWidget.OnNavigationDown (Has no native function)
	void OnNavigationDown(); // (Event | Public | BlueprintEvent)

	// Function /Script/SaveTheWorldUI.FortRewardNotificationWidget.OnMulchCompleted (Has no native function)
	void OnMulchCompleted(); // (Event | Protected | BlueprintEvent)

	// Function /Script/SaveTheWorldUI.FortRewardNotificationWidget.NotifyPanelDeactivated (Underlying native function: NotifyPanelDeactivated 0x75995e0)
	void NotifyPanelDeactivated(); // (Native | Protected | BlueprintCallable)

	// Function /Script/SaveTheWorldUI.FortRewardNotificationWidget.NotifyPanelActivated (Underlying native function: NotifyPanelActivated 0x75995a8)
	void NotifyPanelActivated(); // (Native | Protected | BlueprintCallable)

	// Function /Script/SaveTheWorldUI.FortRewardNotificationWidget.MarkDefaultItemsForMulch (Underlying native function: MarkDefaultItemsForMulch 0x75c0b44)
	void MarkDefaultItemsForMulch(struct TArray<struct FFortItemInstanceQuantityPair>& ItemList); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/SaveTheWorldUI.FortRewardNotificationWidget.IsPrimaryActionHidden (Underlying native function: IsPrimaryActionHidden 0x75c07ec)
	void IsPrimaryActionHidden(bool& bHidden); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/SaveTheWorldUI.FortRewardNotificationWidget.IsPrimaryActionEnabled (Underlying native function: IsPrimaryActionEnabled 0x75c0760)
	void IsPrimaryActionEnabled(bool& bEnabled); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/SaveTheWorldUI.FortRewardNotificationWidget.InspectItem (Has no native function)
	void InspectItem(class UFortItem*& ItemToInspect, int& QuantityOverride); // (Event | Public | BlueprintCallable | BlueprintEvent)

	// Function /Script/SaveTheWorldUI.FortRewardNotificationWidget.HideMulchConfirmationModal (Underlying native function: HideMulchConfirmationModal 0x7598cc4)
	void HideMulchConfirmationModal(); // (Native | Public | BlueprintCallable)

	// Function /Script/SaveTheWorldUI.FortRewardNotificationWidget.HandleOnQuestRewardClaimed (Underlying native function: HandleOnQuestRewardClaimed 0x75bffd8)
	void HandleOnQuestRewardClaimed(class UFortQuestItem*& Quest, struct TArray<struct FFortItemInstanceQuantityPair>& Rewards); // (Final | Native | Private | HasOutParms)

	// Function /Script/SaveTheWorldUI.FortRewardNotificationWidget.HandleOnNoQuestRewardsToClaim (Underlying native function: HandleOnNoQuestRewardsToClaim 0x75bff28)
	void HandleOnNoQuestRewardsToClaim(); // (Final | Native | Private)

	// Function /Script/SaveTheWorldUI.FortRewardNotificationWidget.HandleOnMissionRewardsOpenFailed (Underlying native function: HandleOnMissionRewardsOpenFailed 0x75bff28)
	void HandleOnMissionRewardsOpenFailed(); // (Final | Native | Private)

	// Function /Script/SaveTheWorldUI.FortRewardNotificationWidget.HandleOnMissionRewardsOpened (Underlying native function: HandleOnMissionRewardsOpened 0x75bff3c)
	void HandleOnMissionRewardsOpened(struct TArray<struct FFortItemInstanceQuantityPair>& MissionRewards); // (Final | Native | Private | HasOutParms)

	// Function /Script/SaveTheWorldUI.FortRewardNotificationWidget.HandleOnMissionAlertRewardsOpened (Underlying native function: HandleOnMissionAlertRewardsOpened 0x75bff3c)
	void HandleOnMissionAlertRewardsOpened(struct TArray<struct FFortItemInstanceQuantityPair>& AlertRewards); // (Final | Native | Private | HasOutParms)

	// Function /Script/SaveTheWorldUI.FortRewardNotificationWidget.HandleOnItemCacheRewardsClaimFailed (Underlying native function: HandleOnItemCacheRewardsClaimFailed 0x75bff28)
	void HandleOnItemCacheRewardsClaimFailed(); // (Final | Native | Private)

	// Function /Script/SaveTheWorldUI.FortRewardNotificationWidget.HandleOnItemCacheRewardsClaimed (Underlying native function: HandleOnItemCacheRewardsClaimed 0x75bff3c)
	void HandleOnItemCacheRewardsClaimed(struct TArray<struct FFortItemInstanceQuantityPair>& ClaimedRewards); // (Final | Native | Private | HasOutParms)

	// Function /Script/SaveTheWorldUI.FortRewardNotificationWidget.HandleOnDifficultyIncreaseRewardsClaimFailed (Underlying native function: HandleOnDifficultyIncreaseRewardsClaimFailed 0x75bff28)
	void HandleOnDifficultyIncreaseRewardsClaimFailed(); // (Final | Native | Private)

	// Function /Script/SaveTheWorldUI.FortRewardNotificationWidget.HandleOnDifficultyIncreaseRewardsClaimed (Underlying native function: HandleOnDifficultyIncreaseRewardsClaimed 0x75bff3c)
	void HandleOnDifficultyIncreaseRewardsClaimed(struct TArray<struct FFortItemInstanceQuantityPair>& DifficultyRewards); // (Final | Native | Private | HasOutParms)

	// Function /Script/SaveTheWorldUI.FortRewardNotificationWidget.HandleOnCollectionBookRewardClaimed (Underlying native function: HandleOnCollectionBookRewardClaimed 0x75bfd94)
	void HandleOnCollectionBookRewardClaimed(struct FFortCollectionBookRewards& RewardClaimed, bool& bSuccess, struct TArray<struct FFortItemInstanceQuantityPair>& ActualRewards); // (Final | Native | Private | HasOutParms)

	// Function /Script/SaveTheWorldUI.FortRewardNotificationWidget.BeginCloseRewardsScreen (Underlying native function: BeginCloseRewardsScreen 0x75be39c)
	void BeginCloseRewardsScreen(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/SaveTheWorldUI.FortRewardNotificationWidget.AddQuestData (Underlying native function: AddQuestData 0x75be2a8)
	void AddQuestData(class UFortQuestItem*& Quest); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/SaveTheWorldUI.FortRewardNotificationWidget.AddPhoenixLevelUpRewardData (Underlying native function: AddPhoenixLevelUpRewardData 0x75be294)
	void AddPhoenixLevelUpRewardData(); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/SaveTheWorldUI.FortRewardNotificationWidget.AddMissionData (Underlying native function: AddMissionData 0x75be220)
	void AddMissionData(); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/SaveTheWorldUI.FortRewardNotificationWidget.AddMissionAlertData (Underlying native function: AddMissionAlertData 0x75be1ac)
	void AddMissionAlertData(); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/SaveTheWorldUI.FortRewardNotificationWidget.AddItemCacheRewardData (Underlying native function: AddItemCacheRewardData 0x75be0f4)
	void AddItemCacheRewardData(class UFortItem*& ItemCache); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/SaveTheWorldUI.FortRewardNotificationWidget.AddGiftBoxData (Underlying native function: AddGiftBoxData 0x75bdf24)
	void AddGiftBoxData(); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/SaveTheWorldUI.FortRewardNotificationWidget.AddExpeditionData (Underlying native function: AddExpeditionData 0x75bde6c)
	void AddExpeditionData(class UFortExpeditionItem*& ExpeditionItem); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/SaveTheWorldUI.FortRewardNotificationWidget.AddEpicQuestData (Underlying native function: AddEpicQuestData 0x75bddb4)
	void AddEpicQuestData(class UFortQuestItem*& Quest); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/SaveTheWorldUI.FortRewardNotificationWidget.AddDifficultyIncreaseRewardData (Underlying native function: AddDifficultyIncreaseRewardData 0x75bdd40)
	void AddDifficultyIncreaseRewardData(); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/SaveTheWorldUI.FortRewardNotificationWidget.AddCollectionBookData (Underlying native function: AddCollectionBookData 0x75bdc20)
	void AddCollectionBookData(struct FFortCollectionBookRewards& CollectionBookRewards); // (Final | Native | Protected | HasOutParms | BlueprintCallable)
};

