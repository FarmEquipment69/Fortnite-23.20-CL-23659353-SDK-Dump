// Class /Script/SaveTheWorldUI.FortLlamaStoreBase_Legacy
// Size: 0x670
class UFortLlamaStoreBase_Legacy : public UFortDirectAcquisitionWidgetBase_Legacy
{
	struct TArray<struct FOfferGroup> OfferCategoriesToDisplay; // 0x5f8 (0x10)
	class UDynamicEntryBox* OfferEntryBox; // 0x608 (0x8)
	class UCommonButtonGroupLegacy* OfferButtonGroup; // 0x610 (0x8)
	class UFortLlamaStoreDetailsBase* OfferDetails; // 0x618 (0x8)
	class UFortLlamaStoreData* StoreData; // 0x620 (0x8)
	class UCommonButtonLegacy* ButtonUnopenedLlamas; // 0x628 (0x8)
	class UFortLlamaStoreOfferInfo* PendingPurchaseOffer; // 0x630 (0x8)
	class UCommonActivatablePanelLegacy* StoreOpeningCardPack; // 0x638 (0x8)
	bool bHideSoldOffers; // 0x640 (0x1)
	unsigned char padding_641[0x2f]; // 0x641 (0x2f)

	/* Functions */

	// Function /Script/SaveTheWorldUI.FortLlamaStoreBase_Legacy.SwapToCardEnterState (Has no native function)
	void SwapToCardEnterState(); // (Event | Protected | BlueprintEvent)

	// Function /Script/SaveTheWorldUI.FortLlamaStoreBase_Legacy.SetupFocus (Underlying native function: SetupFocus 0x5b53880)
	void SetupFocus(); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/SaveTheWorldUI.FortLlamaStoreBase_Legacy.OnStoreStateChanged (Underlying native function: OnStoreStateChanged 0x5b537e0)
	void OnStoreStateChanged(enum EFortStoreState& NewStoreState); // (Final | Native | Protected)

	// Function /Script/SaveTheWorldUI.FortLlamaStoreBase_Legacy.OnStorePurchaseCompleted (Underlying native function: OnStorePurchaseCompleted 0x5b53760)
	void OnStorePurchaseCompleted(); // (Final | Native | Private)

	// Function /Script/SaveTheWorldUI.FortLlamaStoreBase_Legacy.CreateTencentPuchaseOpenModal (Has no native function)
	void CreateTencentPuchaseOpenModal(); // (Event | Protected | BlueprintEvent)
};

