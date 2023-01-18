// Class /Script/SaveTheWorldUI.FortLlamaStoreBase
// Size: 0x528
class UFortLlamaStoreBase : public UFortDirectAcquisitionWidgetBase
{
	struct TArray<struct FOfferGroup> OfferCategoriesToDisplay; // 0x488 (0x10)
	struct FDataTableRowHandle TencentDetailsActionData; // 0x498 (0x10)
	struct FDataTableRowHandle AddVBucksActionData; // 0x4a8 (0x10)
	bool bShouldShowAddVBucksAction; // 0x4b8 (0x1)
	unsigned char unreflected_4b9[0x7]; // 0x4b9 (0x7) 
	class UDynamicEntryBox* OfferEntryBox; // 0x4c0 (0x8)
	class UCommonButtonGroupBase* OfferButtonGroup; // 0x4c8 (0x8)
	class UFortLlamaStoreDetailsBase* OfferDetails; // 0x4d0 (0x8)
	class UFortLlamaStoreData* StoreData; // 0x4d8 (0x8)
	class UCommonButtonBase* ButtonUnopenedLlamas; // 0x4e0 (0x8)
	class UFortLlamaStoreOfferInfo* PendingPurchaseOffer; // 0x4e8 (0x8)
	class UCommonActivatablePanelLegacy* StoreOpeningCardPack; // 0x4f0 (0x8)
	bool bHideSoldOffers; // 0x4f8 (0x1)
	unsigned char padding_4f9[0x2f]; // 0x4f9 (0x2f)

	/* Functions */

	// Function /Script/SaveTheWorldUI.FortLlamaStoreBase.SwapToCardEnterState (Has no native function)
	void SwapToCardEnterState(); // (Event | Protected | BlueprintEvent)

	// Function /Script/SaveTheWorldUI.FortLlamaStoreBase.SetupFocus (Underlying native function: SetupFocus 0x75c2c4c)
	void SetupFocus(); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/SaveTheWorldUI.FortLlamaStoreBase.OnStoreStateChanged (Underlying native function: OnStoreStateChanged 0x75c0cf8)
	void OnStoreStateChanged(enum EFortStoreState& NewStoreState); // (Final | Native | Protected)

	// Function /Script/SaveTheWorldUI.FortLlamaStoreBase.OnStorePurchaseCompleted (Underlying native function: OnStorePurchaseCompleted 0x75c0c70)
	void OnStorePurchaseCompleted(); // (Final | Native | Private)

	// Function /Script/SaveTheWorldUI.FortLlamaStoreBase.HandleTencentDetails (Has no native function)
	void HandleTencentDetails(); // (Event | Protected | BlueprintEvent)

	// Function /Script/SaveTheWorldUI.FortLlamaStoreBase.HandleAddVBucks (Has no native function)
	void HandleAddVBucks(); // (Event | Protected | BlueprintEvent)

	// Function /Script/SaveTheWorldUI.FortLlamaStoreBase.CreateTencentPuchaseOpenModal (Has no native function)
	void CreateTencentPuchaseOpenModal(); // (Event | Protected | BlueprintEvent)
};

