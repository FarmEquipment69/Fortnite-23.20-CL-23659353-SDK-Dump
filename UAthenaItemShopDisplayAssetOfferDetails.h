// Class /Script/FortniteUI.AthenaItemShopDisplayAssetOfferDetails
// Size: 0x578
class UAthenaItemShopDisplayAssetOfferDetails : public UAthenaItemShopOfferDetailsWidgetBase
{
	unsigned char unreflected_4c0[0x8]; // 0x4c0 (0x8) 
	class UWidget* ContentPurchaseFocusWidget; // 0x4c8 (0x8)
	struct FDataTableRowHandle BackAction; // 0x4d0 (0x10)
	struct FDataTableRowHandle PurchaseAction; // 0x4e0 (0x10)
	struct FDataTableRowHandle VBuckAction; // 0x4f0 (0x10)
	struct FDataTableRowHandle ReloadMtxAction; // 0x500 (0x10)
	struct FDataTableRowHandle LegalTextAction; // 0x510 (0x10)
	class UClass* ItemInspectScreenClass; // 0x520 (0x8)
	class UFortHoldableButton* ButtonPurchase; // 0x528 (0x8)
	class UFortHoldableButton* ButtonSendGift; // 0x530 (0x8)
	class UFortHoldableButton* ButtonInspect; // 0x538 (0x8)
	class UCommonButtonLegacy* ButtonMobileClose; // 0x540 (0x8)
	class UCommonButtonLegacy* ButtonMTX; // 0x548 (0x8)
	class UWidget* ContainerSimpleMTXDisplay; // 0x550 (0x8)
	class UOverlay* OverlayMobileCloseButton; // 0x558 (0x8)
	class UScrollBox* ScrollBoxDetails; // 0x560 (0x8)
	unsigned char unreflected_568[0xc]; // 0x568 (0xc) 
	struct FPrimaryContentSetup PrimaryContentSetup; // 0x574 (0x3)
	unsigned char padding_577[0x1]; // 0x577 (0x1)

	/* Functions */

	// Function /Script/FortniteUI.AthenaItemShopDisplayAssetOfferDetails.UpdatePurchaseBlocked (Has no native function)
	void UpdatePurchaseBlocked(bool& bIsBlocked, struct FText& PurchaseNotAllowedReason); // (Event | Protected | HasOutParms | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaItemShopDisplayAssetOfferDetails.ShowPurchasedOverlay (Has no native function)
	void ShowPurchasedOverlay(int& QuantityPurchased, struct TArray<struct FPurchasedItemInfo>& PurchasedItems, struct FString& OfferId); // (Event | Protected | HasOutParms | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaItemShopDisplayAssetOfferDetails.ShowPurchaseConfirmation (Has no native function)
	void ShowPurchaseConfirmation(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaItemShopDisplayAssetOfferDetails.ShowLegalTextInPopup (Underlying native function: ShowLegalTextInPopup 0xa557984)
	void ShowLegalTextInPopup(struct FText& ItemName, struct FText& LegalText); // (Final | Native | Private | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteUI.AthenaItemShopDisplayAssetOfferDetails.SetVBuckActionOnPurchaseButton (Underlying native function: SetVBuckActionOnPurchaseButton 0xa55770c)
	void SetVBuckActionOnPurchaseButton(); // (Final | Native | Private | BlueprintCallable)

	// Function /Script/FortniteUI.AthenaItemShopDisplayAssetOfferDetails.SetPurchaseActionOnPurchaseButton (Underlying native function: SetPurchaseActionOnPurchaseButton 0xa557678)
	void SetPurchaseActionOnPurchaseButton(); // (Final | Native | Private | BlueprintCallable)

	// Function /Script/FortniteUI.AthenaItemShopDisplayAssetOfferDetails.SetCanPurchase (Underlying native function: SetCanPurchase 0xa5573a4)
	void SetCanPurchase(bool& bInCanPurchase); // (Final | Native | Private | BlueprintCallable)

	// Function /Script/FortniteUI.AthenaItemShopDisplayAssetOfferDetails.SendGift (Underlying native function: SendGift 0xa5570b0)
	void SendGift(); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteUI.AthenaItemShopDisplayAssetOfferDetails.ResetPurchaseButtonText (Has no native function)
	void ResetPurchaseButtonText(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaItemShopDisplayAssetOfferDetails.RequestMtxPurchase (Underlying native function: RequestMtxPurchase 0xa556f60)
	void RequestMtxPurchase(); // (Final | Native | Private | BlueprintCallable)

	// Function /Script/FortniteUI.AthenaItemShopDisplayAssetOfferDetails.OnSendGiftComplete (Has no native function)
	void OnSendGiftComplete(bool& bSuccess); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaItemShopDisplayAssetOfferDetails.IsGiftable (Underlying native function: IsGiftable 0xa556858)
	bool IsGiftable(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.AthenaItemShopDisplayAssetOfferDetails.HandleMtxPurchaseComplete (Underlying native function: HandleMtxPurchaseComplete 0xa555fd4)
	void HandleMtxPurchaseComplete(bool& bSuccess, struct TArray<struct FPurchasedItemInfo>& PurchasedItems, struct FString& OfferId); // (Final | Native | Private | HasOutParms)

	// Function /Script/FortniteUI.AthenaItemShopDisplayAssetOfferDetails.HandleLegalTextAction (Underlying native function: HandleLegalTextAction 0xa555f1c)
	void HandleLegalTextAction(); // (Final | Native | Private)

	// Function /Script/FortniteUI.AthenaItemShopDisplayAssetOfferDetails.HandleItemPurchaseComplete (Underlying native function: HandleItemPurchaseComplete 0xa555bd8)
	void HandleItemPurchaseComplete(bool& bSuccess, struct TArray<struct FPurchasedItemInfo>& PurchasedItems, struct FString& OfferId); // (Final | Native | Private | HasOutParms)

	// Function /Script/FortniteUI.AthenaItemShopDisplayAssetOfferDetails.HandleBackAction (Underlying native function: HandleBackAction 0x6a4a708)
	void HandleBackAction(); // (Final | Native | Private)

	// Function /Script/FortniteUI.AthenaItemShopDisplayAssetOfferDetails.GetSalePriceFromLastAppStore (Underlying native function: GetSalePriceFromLastAppStore 0xa555308)
	bool GetSalePriceFromLastAppStore(int& PriceIndex, struct FText& SalePrice, int& ItemQuantity); // (Final | Native | Protected | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.AthenaItemShopDisplayAssetOfferDetails.GetFirstFocusableButton (Underlying native function: GetFirstFocusableButton 0xa554fa4)
	class UWidget* GetFirstFocusableButton(); // (Final | Native | Private | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.AthenaItemShopDisplayAssetOfferDetails.DeclineMtxPurchase (Underlying native function: DeclineMtxPurchase 0xa554cbc)
	void DeclineMtxPurchase(); // (Final | Native | Private | BlueprintCallable)

	// Function /Script/FortniteUI.AthenaItemShopDisplayAssetOfferDetails.ClearActionOnPurchaseButton (Underlying native function: ClearActionOnPurchaseButton 0xa554c84)
	void ClearActionOnPurchaseButton(); // (Final | Native | Private | BlueprintCallable)
};

