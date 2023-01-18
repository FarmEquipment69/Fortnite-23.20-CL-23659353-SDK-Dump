// Class /Script/FortniteUI.AthenaItemShopOfferDetailsWidgetBase
// Size: 0x4c0
class UAthenaItemShopOfferDetailsWidgetBase : public UCommonActivatableWidget
{
	unsigned char unreflected_3a8[0x20]; // 0x3a8 (0x20) 
	struct TArray<class UFortStoreFrontOfferInfo*> PagedItems; // 0x3c8 (0x10)
	class UFortStoreFrontOfferInfo* OfferData; // 0x3d8 (0x8)
	class UCommonTextBlock* TextCosmeticWarning; // 0x3e0 (0x8)
	class UCommonTextBlock* TextUndoAvailability; // 0x3e8 (0x8)
	class UCommonTextBlock* TextUndoBottomBarWarning; // 0x3f0 (0x8)
	class UFortHoldableButton* ButtonUndo; // 0x3f8 (0x8)
	struct FDataTableRowHandle UndoAction; // 0x400 (0x10)
	unsigned char unreflected_410[0x30]; // 0x410 (0x30) 
	class UClass* PurchaseModalClass; // 0x440 (0x8)
	struct TWeakObjectPtr<class UClass> ConfirmPurchaseModalClass; // 0x448 (0x28)
	unsigned char unreflected_470[0x38]; // 0x470 (0x38) 
	bool bShowRefundWarningWhileMatchmaking; // 0x4a8 (0x1)
	bool bShowRefundWarningWhileInZone; // 0x4a9 (0x1)
	unsigned char unreflected_4aa[0x6]; // 0x4aa (0x6) 
	struct TArray<struct FPurchasedItemInfo> CachedRefundedItems; // 0x4b0 (0x10)

	/* Functions */

	// Function /Script/FortniteUI.AthenaItemShopOfferDetailsWidgetBase.ShowReloadMtx (Underlying native function: ShowReloadMtx 0xa557df8)
	void ShowReloadMtx(); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteUI.AthenaItemShopOfferDetailsWidgetBase.ShowPurchasedOverlayWidget (Underlying native function: ShowPurchasedOverlayWidget 0xa557ae8)
	void ShowPurchasedOverlayWidget(int& QuantityPurchased, struct TArray<struct FPurchasedItemInfo>& PurchasedItems, bool& bShowAsRefund, struct FString& OfferId); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteUI.AthenaItemShopOfferDetailsWidgetBase.ShowItemPresentationScreen (Underlying native function: ShowItemPresentationScreen 0xa5578e8)
	void ShowItemPresentationScreen(struct TArray<struct FPurchasedItemInfo>& PurchasedItems); // (Final | Native | Protected | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteUI.AthenaItemShopOfferDetailsWidgetBase.ShouldHavePurchaseConfirmation (Underlying native function: ShouldHavePurchaseConfirmation 0xa55781c)
	bool ShouldHavePurchaseConfirmation(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.AthenaItemShopOfferDetailsWidgetBase.SetOffer (Underlying native function: SetOffer 0xa5575f8)
	void SetOffer(class UFortStoreFrontOfferInfo*& InOfferData); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.AthenaItemShopOfferDetailsWidgetBase.SendShopInteractionAnalytic (Underlying native function: SendShopInteractionAnalytic 0xa557184)
	void SendShopInteractionAnalytic(struct FString& Interaction, float& HoldTime); // (Final | Native | Protected | BlueprintCallable | Const)

	// Function /Script/FortniteUI.AthenaItemShopOfferDetailsWidgetBase.SendRealMoneyPurchase (Underlying native function: SendRealMoneyPurchase 0xa5570c4)
	void SendRealMoneyPurchase(int& PriceIndex, int& Quantity); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteUI.AthenaItemShopOfferDetailsWidgetBase.RefreshUndoState (Underlying native function: RefreshUndoState 0xa556d94)
	void RefreshUndoState(class UFortStoreFrontOfferInfo*& OfferPurchased); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.AthenaItemShopOfferDetailsWidgetBase.RefreshOfferInfo (Underlying native function: RefreshOfferInfo 0xa556d6c)
	void RefreshOfferInfo(); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteUI.AthenaItemShopOfferDetailsWidgetBase.PurchaseOffer (Underlying native function: PurchaseOffer 0xa556c2c)
	void PurchaseOffer(struct FDelegate& Callback, int& Quantity, float& HoldTime); // (Final | Native | Protected | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteUI.AthenaItemShopOfferDetailsWidgetBase.PurchaseAmountRight (Has no native function)
	void PurchaseAmountRight(); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaItemShopOfferDetailsWidgetBase.PurchaseAmountLeft (Has no native function)
	void PurchaseAmountLeft(); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaItemShopOfferDetailsWidgetBase.OnUpdateStatus (Has no native function)
	void OnUpdateStatus(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaItemShopOfferDetailsWidgetBase.OnUndoAction (Has no native function)
	void OnUndoAction(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaItemShopOfferDetailsWidgetBase.OnPurchasingStarted (Has no native function)
	void OnPurchasingStarted(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaItemShopOfferDetailsWidgetBase.IsReloadMtxEnabled (Underlying native function: IsReloadMtxEnabled 0xa55692c)
	bool IsReloadMtxEnabled(); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteUI.AthenaItemShopOfferDetailsWidgetBase.IsFocusableButton (Underlying native function: IsFocusableButton 0xa5567d8)
	bool IsFocusableButton(class UWidget*& InButton); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.AthenaItemShopOfferDetailsWidgetBase.HandleUndoAction (Underlying native function: HandleUndoAction 0xa556630)
	void HandleUndoAction(float& HoldTime); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteUI.AthenaItemShopOfferDetailsWidgetBase.HandleRealMoneyPurchaseComplete (Underlying native function: HandleRealMoneyPurchaseComplete 0xa556464)
	void HandleRealMoneyPurchaseComplete(bool& bSuccess, struct TArray<struct FPurchasedItemInfo>& PurchasedItems); // (Final | Native | Private | HasOutParms)

	// Function /Script/FortniteUI.AthenaItemShopOfferDetailsWidgetBase.HandleGiftingItemPurchaseComplete (Underlying native function: HandleGiftingItemPurchaseComplete 0xa555704)
	void HandleGiftingItemPurchaseComplete(bool& bSuccess, struct TArray<struct FPurchasedItemInfo>& PurchasedItems, struct FString& OfferId); // (Final | Native | Private | HasOutParms)

	// Function /Script/FortniteUI.AthenaItemShopOfferDetailsWidgetBase.HandleCurrentlyViewedAccountInfoChanged (Underlying native function: HandleCurrentlyViewedAccountInfoChanged 0xa55563c)
	void HandleCurrentlyViewedAccountInfoChanged(struct FFortPublicAccountInfo& NewInfo); // (Final | Native | Protected)

	// Function /Script/FortniteUI.AthenaItemShopOfferDetailsWidgetBase.GetOfferInfoById (Underlying native function: GetOfferInfoById 0xa55512c)
	class UFortStoreFrontOfferInfo* GetOfferInfoById(struct FString& OfferId); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.AthenaItemShopOfferDetailsWidgetBase.GetOfferInfo (Underlying native function: GetOfferInfo 0xa555114)
	class UFortStoreFrontOfferInfo* GetOfferInfo(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.AthenaItemShopOfferDetailsWidgetBase.GetNextFocusableButton (Underlying native function: GetNextFocusableButton 0xa554fe4)
	class UWidget* GetNextFocusableButton(struct TArray<class UWidget*>& Buttons, int& InitialIndex, bool& bForwardDirection); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.AthenaItemShopOfferDetailsWidgetBase.BP_OnSetOffer (Has no native function)
	void BPOnSetOffer(); // (Event | Protected | BlueprintEvent)
};

