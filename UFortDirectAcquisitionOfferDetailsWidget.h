// Class /Script/FortniteUI.FortDirectAcquisitionOfferDetailsWidget
// Size: 0x888
class UFortDirectAcquisitionOfferDetailsWidget : public UFortStoreFrontOfferDetailsWidgetBase
{
	unsigned char unreflected_7d8[0x8]; // 0x7d8 (0x8) 
	class UClass* VoteFeedbackClass; // 0x7e0 (0x8)
	class UFortItemBaseWidget* ItemInfoHeader; // 0x7e8 (0x8)
	unsigned char unreflected_7f0[0x50]; // 0x7f0 (0x50) 
	class UCommonButtonLegacy* ButtonCastVote; // 0x840 (0x8)
	class UFortCommunityVotingVoteCounter* FlameCounter; // 0x848 (0x8)
	class UFortCommunityVotingAvailableVotesWidget* AvailableSparksWidget; // 0x850 (0x8)
	class UOverlay* ComVoteFeedbackContainer; // 0x858 (0x8)
	class UCommonButtonLegacy* ButtonSendGift; // 0x860 (0x8)
	class UWidgetSwitcher* SwitcherMtxAndVote; // 0x868 (0x8)
	class UFortCommunityVotingThanksPopup* ComThanksForVotingMessage; // 0x870 (0x8)
	class UAthenaItemShopOfferInspectionNavigator* OfferNavigatorArrowNavigation; // 0x878 (0x8)
	class UFortStoreSkinDetailsPopup* StorePopupDetails; // 0x880 (0x8)

	/* Functions */

	// Function /Script/FortniteUI.FortDirectAcquisitionOfferDetailsWidget.UpdateVoteCounter (Underlying native function: UpdateVoteCounter 0xa73e368)
	void UpdateVoteCounter(); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteUI.FortDirectAcquisitionOfferDetailsWidget.UpdateSwipeButtonsVisibility (Underlying native function: UpdateSwipeButtonsVisibility 0xa73e34c)
	void UpdateSwipeButtonsVisibility(); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteUI.FortDirectAcquisitionOfferDetailsWidget.TriggerPurchaseChoiceRequest (Underlying native function: TriggerPurchaseChoiceRequest 0xa557e0c)
	void TriggerPurchaseChoiceRequest(); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteUI.FortDirectAcquisitionOfferDetailsWidget.IsMultiplePriceRealMoneyOffer (Underlying native function: IsMultiplePriceRealMoneyOffer 0xa73d740)
	bool IsMultiplePriceRealMoneyOffer(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortDirectAcquisitionOfferDetailsWidget.HandleGetVBucksClicked (Underlying native function: HandleGetVBucksClicked 0xa73cb94)
	void HandleGetVBucksClicked(); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteUI.FortDirectAcquisitionOfferDetailsWidget.GetSalePriceFromLastAppStore (Underlying native function: GetSalePriceFromLastAppStore 0xa73c714)
	bool GetSalePriceFromLastAppStore(int& PriceIndex, struct FText& SalePrice, int& ItemQuantity); // (Final | Native | Protected | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortDirectAcquisitionOfferDetailsWidget.FocusOnWidget (Underlying native function: FocusOnWidget 0xa73bf34)
	void FocusOnWidget(class UWidget*& WidgetToFocus); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteUI.FortDirectAcquisitionOfferDetailsWidget.Dismiss (Underlying native function: Dismiss 0xa73bf20)
	void Dismiss(); // (Final | Native | Protected | BlueprintCallable)
};

