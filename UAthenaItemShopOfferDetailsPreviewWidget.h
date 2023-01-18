// Class /Script/FortniteUI.AthenaItemShopOfferDetailsPreviewWidget
// Size: 0x598
class UAthenaItemShopOfferDetailsPreviewWidget : public UAthenaItemShopOfferDetailsWidgetBase
{
	struct FDataTableRowHandle BackAction; // 0x4c0 (0x10)
	class UFortItemPreviewScreen* ItemPreviewWidget; // 0x4d0 (0x8)
	class UFortItemBaseWidget* ItemInfoHeader; // 0x4d8 (0x8)
	class UAthenaCosmeticUnlockingInfo* UnlockingInfo; // 0x4e0 (0x8)
	unsigned char unreflected_4e8[0x10]; // 0x4e8 (0x10) 
	float TimeBetweenVariantsRestart; // 0x4f8 (0x4)
	float TimeBetweenVariants; // 0x4fc (0x4)
	unsigned char unreflected_500[0x40]; // 0x500 (0x40) 
	class UFortItem* ItemToRepresent; // 0x540 (0x8)
	struct TArray<struct FFortCosmeticVariantPreview> CachedVariantPreviews; // 0x548 (0x10)
	struct FUnlockableVariantPreviewInfo VariantPreviewInfo; // 0x558 (0x28)
	class UAthenaItemShopOfferInspectionNavigator* OfferNavigatorArrowNavigation; // 0x580 (0x8)
	class UFortStoreSkinDetailsPopup* StorePopupDetails; // 0x588 (0x8)
	class UFortHoldableButton* ButtonGift; // 0x590 (0x8)

	/* Functions */

	// Function /Script/FortniteUI.AthenaItemShopOfferDetailsPreviewWidget.UpdateSwipeButtonsVisibility (Underlying native function: UpdateSwipeButtonsVisibility 0xa557eb0)
	void UpdateSwipeButtonsVisibility(); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteUI.AthenaItemShopOfferDetailsPreviewWidget.UpdatePreviewFromOffer (Underlying native function: UpdatePreviewFromOffer 0xa557e9c)
	void UpdatePreviewFromOffer(); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteUI.AthenaItemShopOfferDetailsPreviewWidget.TryDismiss (Underlying native function: TryDismiss 0xa557e64)
	void TryDismiss(); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteUI.AthenaItemShopOfferDetailsPreviewWidget.TriggerPurchaseChoiceRequest (Underlying native function: TriggerPurchaseChoiceRequest 0xa557e0c)
	void TriggerPurchaseChoiceRequest(); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteUI.AthenaItemShopOfferDetailsPreviewWidget.ShowItemFromItemReward (Underlying native function: ShowItemFromItemReward 0xa557858)
	void ShowItemFromItemReward(class UFortAthenaReward*& InItemReward); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteUI.AthenaItemShopOfferDetailsPreviewWidget.ShouldDisplayOfferPurchasedOverlay (Underlying native function: ShouldDisplayOfferPurchasedOverlay 0xa5577c4)
	bool ShouldDisplayOfferPurchasedOverlay(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.AthenaItemShopOfferDetailsPreviewWidget.SetItemToRepresent (Underlying native function: SetItemToRepresent 0xa557578)
	void SetItemToRepresent(class UFortItem*& InItemToRepresent); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteUI.AthenaItemShopOfferDetailsPreviewWidget.SetIsPurchasing (Underlying native function: SetIsPurchasing 0xa5574f8)
	void SetIsPurchasing(bool& bInIsPurchasing); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteUI.AthenaItemShopOfferDetailsPreviewWidget.RegisterItemRewardInteraction (Underlying native function: RegisterItemRewardInteraction 0xa556ea8)
	void RegisterItemRewardInteraction(class UFortAthenaReward*& InItemReward); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteUI.AthenaItemShopOfferDetailsPreviewWidget.OnVariantPreviewInfoUpdated (Has no native function)
	void OnVariantPreviewInfoUpdated(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaItemShopOfferDetailsPreviewWidget.OnUpdateItemRestrictionCallout (Has no native function)
	void OnUpdateItemRestrictionCallout(bool& bShouldShow, struct FText& RestrictionText); // (Event | Protected | HasOutParms | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaItemShopOfferDetailsPreviewWidget.IsMultiplePriceRealMoneyOffer (Underlying native function: IsMultiplePriceRealMoneyOffer 0xa556908)
	bool IsMultiplePriceRealMoneyOffer(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.AthenaItemShopOfferDetailsPreviewWidget.HandleItemShown (Underlying native function: HandleItemShown 0xa555e9c)
	void HandleItemShown(class UFortAccountItemDefinition*& AccountItemDef); // (Final | Native | Protected)

	// Function /Script/FortniteUI.AthenaItemShopOfferDetailsPreviewWidget.HandleGetVBucksClicked (Underlying native function: HandleGetVBucksClicked 0xa5556f0)
	void HandleGetVBucksClicked(); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteUI.AthenaItemShopOfferDetailsPreviewWidget.HandleBackAction (Has no native function)
	void HandleBackAction(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaItemShopOfferDetailsPreviewWidget.GetVariantPreviewInfo (Underlying native function: GetVariantPreviewInfo 0xa5555b0)
	struct FUnlockableVariantPreviewInfo GetVariantPreviewInfo(); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteUI.AthenaItemShopOfferDetailsPreviewWidget.GetSalePriceFromLastAppStore (Underlying native function: GetSalePriceFromLastAppStore 0xa55545c)
	bool GetSalePriceFromLastAppStore(int& PriceIndex, struct FText& SalePrice, int& ItemQuantity); // (Final | Native | Protected | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.AthenaItemShopOfferDetailsPreviewWidget.FocusOnWidget (Underlying native function: FocusOnWidget 0xa554e28)
	void FocusOnWidget(class UWidget*& WidgetToFocus); // (Final | Native | Protected | BlueprintCallable)
};

