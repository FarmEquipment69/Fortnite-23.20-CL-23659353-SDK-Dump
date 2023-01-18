// Class /Script/FortniteUI.FortStoreFrontOfferDetailsWidgetBase
// Size: 0x7d8
class UFortStoreFrontOfferDetailsWidgetBase : public UFortActivatablePanelWithItemPreview
{
	unsigned char unreflected_660[0x48]; // 0x660 (0x48) 
	struct FDataTableRowHandle EnterViewModeInputActionRowHandle; // 0x6a8 (0x10)
	bool IsInItemViewMode; // 0x6b8 (0x1)
	bool ShouldAllowItemViewModeAction; // 0x6b9 (0x1)
	bool bImmediatelyPurchased; // 0x6ba (0x1)
	unsigned char unreflected_6bb[0x5]; // 0x6bb (0x5) 
	struct TArray<class UFortStoreFrontOfferInfo*> PagedItems; // 0x6c0 (0x10)
	class UFortStoreFrontOfferInfo* OfferData; // 0x6d0 (0x8)
	class UFortVariantPicker* PickerVariantSelector; // 0x6d8 (0x8)
	class UCommonTextBlock* TextUndoAvailability; // 0x6e0 (0x8)
	class UCommonTextBlock* TextUndoBottomBarWarning; // 0x6e8 (0x8)
	class UCommonButtonLegacy* ButtonUndo; // 0x6f0 (0x8)
	class UCommonTextBlock* TextCosmeticWarning; // 0x6f8 (0x8)
	unsigned char unreflected_700[0x40]; // 0x700 (0x40) 
	class UClass* PurchaseModalClass; // 0x740 (0x8)
	unsigned char unreflected_748[0x30]; // 0x748 (0x30) 
	class UFortItem* ItemToRepresent; // 0x778 (0x8)
	class UFortItemDefinition* SecondaryItemDefinition; // 0x780 (0x8)
	float TimeBetweenVariantsRestart; // 0x788 (0x4)
	float TimeBetweenVariants; // 0x78c (0x4)
	unsigned char unreflected_790[0x9]; // 0x790 (0x9) 
	bool bShowRefundWarningWhileMatchmaking; // 0x799 (0x1)
	bool bShowRefundWarningWhileInZone; // 0x79a (0x1)
	unsigned char padding_79b[0x3d]; // 0x79b (0x3d)

	/* Functions */

	// Function /Script/FortniteUI.FortStoreFrontOfferDetailsWidgetBase.UpdateItemViewModeBP (Has no native function)
	void UpdateItemViewModeBP(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortStoreFrontOfferDetailsWidgetBase.ShowVaultItemFromItemReward (Underlying native function: ShowVaultItemFromItemReward 0xa8f3194)
	void ShowVaultItemFromItemReward(class UFortAthenaReward*& InItemReward); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteUI.FortStoreFrontOfferDetailsWidgetBase.ShowVaultItem (Underlying native function: ShowVaultItem 0xa8f3108)
	void ShowVaultItem(class UFortItem*& InItemToRepresent); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteUI.FortStoreFrontOfferDetailsWidgetBase.ShowUndoInBottomBar (Has no native function)
	void ShowUndoInBottomBar(); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteUI.FortStoreFrontOfferDetailsWidgetBase.ShowReloadMtx (Underlying native function: ShowReloadMtx 0xa8f30f4)
	void ShowReloadMtx(); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteUI.FortStoreFrontOfferDetailsWidgetBase.ShowPurchasedOverlayWidget (Underlying native function: ShowPurchasedOverlayWidget 0xa8f2de4)
	void ShowPurchasedOverlayWidget(int& QuantityPurchased, struct TArray<struct FPurchasedItemInfo>& PurchasedItems, bool& bShowAsRefund, struct FString& OfferId); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteUI.FortStoreFrontOfferDetailsWidgetBase.ShowItemPresentationScreen (Underlying native function: ShowItemPresentationScreen 0xa5578e8)
	void ShowItemPresentationScreen(struct TArray<struct FPurchasedItemInfo>& PurchasedItems); // (Final | Native | Protected | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteUI.FortStoreFrontOfferDetailsWidgetBase.ShouldHavePurchaseConfirmation (Underlying native function: ShouldHavePurchaseConfirmation 0xa55781c)
	bool ShouldHavePurchaseConfirmation(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortStoreFrontOfferDetailsWidgetBase.ShouldDisplayOfferPurchasedOverlay (Underlying native function: ShouldDisplayOfferPurchasedOverlay 0xa8f2cc8)
	bool ShouldDisplayOfferPurchasedOverlay(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortStoreFrontOfferDetailsWidgetBase.SetupOffer (Underlying native function: SetupOffer 0xa8f2c48)
	void SetupOffer(class UFortStoreFrontOfferInfo*& InOfferData); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortStoreFrontOfferDetailsWidgetBase.SetStoreRoot (Underlying native function: SetStoreRoot 0xa8f263c)
	void SetStoreRoot(class UFortMtxStoreRootBase*& InStoreRoot); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortStoreFrontOfferDetailsWidgetBase.SetShouldAllowItemViewModeAction (Underlying native function: SetShouldAllowItemViewModeAction 0xa8f25bc)
	void SetShouldAllowItemViewModeAction(bool& Value); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortStoreFrontOfferDetailsWidgetBase.SetSecondaryItem (Underlying native function: SetSecondaryItem 0xa8f253c)
	void SetSecondaryItem(class UFortItemDefinition*& ItemDefinition); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteUI.FortStoreFrontOfferDetailsWidgetBase.SetPagedItems (Underlying native function: SetPagedItems 0xa8f20e4)
	void SetPagedItems(struct TArray<class UFortStoreFrontOfferInfo*>& InPagedItems); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteUI.FortStoreFrontOfferDetailsWidgetBase.SetItemRewardSecondaryItem (Underlying native function: SetItemRewardSecondaryItem 0xa8f1ef0)
	void SetItemRewardSecondaryItem(class UFortItemDefinition*& ItemDef, struct TArray<struct FFortItemQuantityPair>& AllItemQuantityPairs, class UFortAthenaReward*& RewardWidget); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteUI.FortStoreFrontOfferDetailsWidgetBase.SetIsInItemViewMode (Underlying native function: SetIsInItemViewMode 0xa8f1e68)
	void SetIsInItemViewMode(bool& Value); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortStoreFrontOfferDetailsWidgetBase.SendUndoMtxReturnedAnalytic (Underlying native function: SendUndoMtxReturnedAnalytic 0xa8f17f8)
	void SendUndoMtxReturnedAnalytic(struct FString& Interaction, struct FString& PurchaseId, int& MtxReturned); // (Final | Native | Public | BlueprintCallable | Const)

	// Function /Script/FortniteUI.FortStoreFrontOfferDetailsWidgetBase.SendShopInteractionAnalytic (Underlying native function: SendShopInteractionAnalytic 0xa8f1660)
	void SendShopInteractionAnalytic(struct FString& Interaction, float& HoldTime); // (Final | Native | Public | BlueprintCallable | Const)

	// Function /Script/FortniteUI.FortStoreFrontOfferDetailsWidgetBase.SendSeasonPassInteractionAnalytic (Underlying native function: SendSeasonPassInteractionAnalytic 0xa8f1588)
	void SendSeasonPassInteractionAnalytic(struct FString& Interaction); // (Final | Native | Public | BlueprintCallable | Const)

	// Function /Script/FortniteUI.FortStoreFrontOfferDetailsWidgetBase.SendReloadMtxPurchaseSKUAnalytic (Underlying native function: SendReloadMtxPurchaseSKUAnalytic 0xa8f1574)
	void SendReloadMtxPurchaseSKUAnalytic(); // (Final | Native | Public | BlueprintCallable | Const)

	// Function /Script/FortniteUI.FortStoreFrontOfferDetailsWidgetBase.SendRealMoneyStoreInteractionAnalytic (Underlying native function: SendRealMoneyStoreInteractionAnalytic 0xa8f1420)
	void SendRealMoneyStoreInteractionAnalytic(struct FString& Interaction); // (Final | Native | Public | BlueprintCallable | Const)

	// Function /Script/FortniteUI.FortStoreFrontOfferDetailsWidgetBase.SendRealMoneyPurchase (Underlying native function: SendRealMoneyPurchase 0xa8f1360)
	void SendRealMoneyPurchase(int& PriceIndex, int& Quantity); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteUI.FortStoreFrontOfferDetailsWidgetBase.SendingToMainStore (Underlying native function: SendingToMainStore 0xa8f1aa4)
	void SendingToMainStore(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortStoreFrontOfferDetailsWidgetBase.RequestExternalPurchase (Underlying native function: RequestExternalPurchase 0xa8f0e0c)
	void RequestExternalPurchase(int& PriceIndex, int& Quantity); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortStoreFrontOfferDetailsWidgetBase.RegisterItemRewardInteraction (Underlying native function: RegisterItemRewardInteraction 0xa8f0d54)
	void RegisterItemRewardInteraction(class UFortAthenaReward*& InItemReward); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteUI.FortStoreFrontOfferDetailsWidgetBase.RefreshUndoState (Underlying native function: RefreshUndoState 0xa8f0cd4)
	void RefreshUndoState(class UFortStoreFrontOfferInfo*& OfferPurchased); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortStoreFrontOfferDetailsWidgetBase.RefreshOfferInfo (Underlying native function: RefreshOfferInfo 0xa8f0cc0)
	void RefreshOfferInfo(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortStoreFrontOfferDetailsWidgetBase.PurchaseOffer (Underlying native function: PurchaseOffer 0xa8f0b98)
	void PurchaseOffer(struct FDelegate& Callback, int& Quantity, float& HoldTime); // (Final | Native | Protected | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteUI.FortStoreFrontOfferDetailsWidgetBase.PurchaseAmountRight (Has no native function)
	void PurchaseAmountRight(); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteUI.FortStoreFrontOfferDetailsWidgetBase.PurchaseAmountLeft (Has no native function)
	void PurchaseAmountLeft(); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteUI.FortStoreFrontOfferDetailsWidgetBase.OnVariantChanged (Has no native function)
	void OnVariantChanged(struct FGameplayTag& VariantChannel, struct FGameplayTag& VariantTag, struct FString& VariantCustomData, bool& IsOwned); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortStoreFrontOfferDetailsWidgetBase.OnUpdateStatus (Has no native function)
	void OnUpdateStatus(); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteUI.FortStoreFrontOfferDetailsWidgetBase.OnUpdateItemRestrictionCallout (Has no native function)
	void OnUpdateItemRestrictionCallout(bool& bShouldShow, struct FText& RestrictionText); // (Event | Protected | HasOutParms | BlueprintEvent)

	// Function /Script/FortniteUI.FortStoreFrontOfferDetailsWidgetBase.OnPurchasingStarted (Has no native function)
	void OnPurchasingStarted(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortStoreFrontOfferDetailsWidgetBase.OnEnterViewModeActionCommitted (Underlying native function: OnEnterViewModeActionCommitted 0xa8f0b14)
	void OnEnterViewModeActionCommitted(bool& PassThrough); // (Final | Native | Protected | HasOutParms)

	// Function /Script/FortniteUI.FortStoreFrontOfferDetailsWidgetBase.IsReloadMtxEnabled (Underlying native function: IsReloadMtxEnabled 0xa8f0884)
	bool IsReloadMtxEnabled(); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteUI.FortStoreFrontOfferDetailsWidgetBase.HideUndoInBottomBar (Has no native function)
	void HideUndoInBottomBar(); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteUI.FortStoreFrontOfferDetailsWidgetBase.HandleVaultItemsViewed (Underlying native function: HandleVaultItemsViewed 0xa8efa80)
	void HandleVaultItemsViewed(struct TArray<class UFortItem*>& ItemsShown); // (Final | Native | Protected | HasOutParms)

	// Function /Script/FortniteUI.FortStoreFrontOfferDetailsWidgetBase.HandleRealMoneyPurchaseComplete (Underlying native function: HandleRealMoneyPurchaseComplete 0xa8ef6d0)
	void HandleRealMoneyPurchaseComplete(bool& bSuccess, struct TArray<struct FPurchasedItemInfo>& PurchasedItems); // (Final | Native | Private | HasOutParms)

	// Function /Script/FortniteUI.FortStoreFrontOfferDetailsWidgetBase.HandleGiftingItemPurchaseComplete (Underlying native function: HandleGiftingItemPurchaseComplete 0xa8eecd0)
	void HandleGiftingItemPurchaseComplete(bool& bSuccess, struct TArray<struct FPurchasedItemInfo>& PurchasedItems, struct FString& OfferId); // (Final | Native | Private | HasOutParms)

	// Function /Script/FortniteUI.FortStoreFrontOfferDetailsWidgetBase.HandleCurrentlyViewedAccountInfoChanged (Underlying native function: HandleCurrentlyViewedAccountInfoChanged 0xa8eec1c)
	void HandleCurrentlyViewedAccountInfoChanged(struct FFortPublicAccountInfo& NewInfo); // (Final | Native | Protected)

	// Function /Script/FortniteUI.FortStoreFrontOfferDetailsWidgetBase.HandleBattlePassPurchaseComplete (Underlying native function: HandleBattlePassPurchaseComplete 0xa8eeb8c)
	void HandleBattlePassPurchaseComplete(bool& bSuccess); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortStoreFrontOfferDetailsWidgetBase.GetPriceIndexToShow (Underlying native function: GetPriceIndexToShow 0xa8ed5b0)
	int GetPriceIndexToShow(); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteUI.FortStoreFrontOfferDetailsWidgetBase.GetOfferInfoById (Underlying native function: GetOfferInfoById 0xa8ed290)
	class UFortStoreFrontOfferInfo* GetOfferInfoById(struct FString& OfferId); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortStoreFrontOfferDetailsWidgetBase.GetOfferInfo (Underlying native function: GetOfferInfo 0xa8ed278)
	class UFortStoreFrontOfferInfo* GetOfferInfo(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortStoreFrontOfferDetailsWidgetBase.FindItemQuantityPair (Underlying native function: FindItemQuantityPair 0xa8ea6c4)
	static bool FindItemQuantityPair(class UFortItemDefinition*& ItemDefinition, struct TArray<struct FFortItemQuantityPair>& InItemQuantityPairs, struct FFortItemQuantityPair& OutItemQuantity); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteUI.FortStoreFrontOfferDetailsWidgetBase.DeactivateUndoButton (Underlying native function: DeactivateUndoButton 0xa8ea5c0)
	void DeactivateUndoButton(); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteUI.FortStoreFrontOfferDetailsWidgetBase.ConfirmUndo (Underlying native function: ConfirmUndo 0xa8ea370)
	void ConfirmUndo(); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteUI.FortStoreFrontOfferDetailsWidgetBase.BP_OnOfferSet (Has no native function)
	void BPOnOfferSet(); // (Event | Public | BlueprintEvent)
};

