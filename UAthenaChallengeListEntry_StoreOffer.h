// Class /Script/FortniteUI.AthenaChallengeListEntry_StoreOffer
// Size: 0x2f0
class UAthenaChallengeListEntry_StoreOffer : public UAthenaChallengeListEntryBase
{
	struct TWeakObjectPtr<class UClass> OfferDetailsWidgetClass; // 0x2a8 (0x28)
	class UFortStoreFrontOfferInfo* OfferInfo; // 0x2d0 (0x8)
	class UButton* SimpleButtonClickArea; // 0x2d8 (0x8)
	class UCommonRichTextBlock* RichTextDescription; // 0x2e0 (0x8)
	class UFortLazyImage* LazyImageSpecialOffer; // 0x2e8 (0x8)

	/* Functions */

	// Function /Script/FortniteUI.AthenaChallengeListEntry_StoreOffer.OnOfferSet (Has no native function)
	void OnOfferSet(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaChallengeListEntry_StoreOffer.HandleClicked (Underlying native function: HandleClicked 0xa4e0da8)
	void HandleClicked(); // (Final | Native | Protected)
};

