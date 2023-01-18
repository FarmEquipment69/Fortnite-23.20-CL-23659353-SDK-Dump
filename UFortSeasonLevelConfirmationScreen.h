// Class /Script/FortniteUI.FortSeasonLevelConfirmationScreen
// Size: 0x760
class UFortSeasonLevelConfirmationScreen : public UFortItemPreviewScreen
{
	unsigned char unreflected_668[0x38]; // 0x668 (0x38) 
	struct FDataTableRowHandle CloseScreenRowHandle; // 0x6a0 (0x10)
	struct FGameplayTag SpatialCamera; // 0x6b0 (0x4)
	unsigned char unreflected_6b4[0x4]; // 0x6b4 (0x4) 
	class UBacchusCloseButton* MobileCloseButton; // 0x6b8 (0x8)
	class UCommonButtonLegacy* ButtonIncreasePurchaseTier; // 0x6c0 (0x8)
	class UCommonButtonLegacy* ButtonDecreasePurchaseTier; // 0x6c8 (0x8)
	class UCommonTextBlock* TextHeader; // 0x6d0 (0x8)
	class UCommonTextBlock* TextTierBundleOfferHeader; // 0x6d8 (0x8)
	class UCommonTextBlock* TextRewardCount; // 0x6e0 (0x8)
	class UCommonTextBlock* TextPurchasePrice; // 0x6e8 (0x8)
	class UCommonTextBlock* TextTierBundleOriginalPrice; // 0x6f0 (0x8)
	class UCommonTextBlock* TextTierBundlePurchasePrice; // 0x6f8 (0x8)
	class UCommonTextBlock* TextRefundDisclaimer; // 0x700 (0x8)
	class UDynamicEntryBox* EntryBoxRewardIcons; // 0x708 (0x8)
	class UCommonButtonLegacy* ButtonPurchase; // 0x710 (0x8)
	class UCommonButtonLegacy* ButtonTierBundlePurchase; // 0x718 (0x8)
	class USizeBox* SBTierBundle; // 0x720 (0x8)
	class UWidget* WidgetTierBundleWarning; // 0x728 (0x8)
	struct FText RefundDisclaimerSingleOffer; // 0x730 (0x18)
	struct FText RefundDisclaimerMultipleOffer; // 0x748 (0x18)

	/* Functions */

	// Function /Script/FortniteUI.FortSeasonLevelConfirmationScreen.OnWidgetsRefreshed (Has no native function)
	void OnWidgetsRefreshed(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortSeasonLevelConfirmationScreen.OnPurchaseFinished (Has no native function)
	void OnPurchaseFinished(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortSeasonLevelConfirmationScreen.HandlePurchaseComplete (Underlying native function: HandlePurchaseComplete 0xa5315c8)
	void HandlePurchaseComplete(bool& bSuccess, struct TArray<struct FPurchasedItemInfo>& PurchasedItems, struct FString& OfferId); // (Final | Native | Private | HasOutParms)

	// Function /Script/FortniteUI.FortSeasonLevelConfirmationScreen.HandleCloseScreen (Underlying native function: HandleCloseScreen 0xa530aa4)
	void HandleCloseScreen(bool& bPassThrough); // (Final | Native | Private | HasOutParms)

	// Function /Script/FortniteUI.FortSeasonLevelConfirmationScreen.CanAffordTierPurchase (Underlying native function: CanAffordTierPurchase 0xa530820)
	bool CanAffordTierPurchase(); // (Final | Native | Private | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortSeasonLevelConfirmationScreen.CanAffordTierBundlePurchase (Underlying native function: CanAffordTierBundlePurchase 0xa5307fc)
	bool CanAffordTierBundlePurchase(); // (Final | Native | Private | BlueprintCallable | BlueprintPure | Const)
};

