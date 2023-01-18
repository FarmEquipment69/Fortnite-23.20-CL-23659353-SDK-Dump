// Class /Script/EventScreenBase.FortEventPurchaseModal
// Size: 0x420
class UFortEventPurchaseModal : public UCommonActivatableWidget
{
	unsigned char unreflected_3a8[0x8]; // 0x3a8 (0x8) 
	class UCommonButtonBase* ButtonAddition; // 0x3b0 (0x8)
	class UCommonButtonBase* ButtonSubtraction; // 0x3b8 (0x8)
	class UFortHoldableButton* ButtonPurchase; // 0x3c0 (0x8)
	class UCommonButtonBase* ButtonGetVBucks; // 0x3c8 (0x8)
	class UCommonButtonBase* ButtonBack; // 0x3d0 (0x8)
	class UCommonButtonBase* ButtonCloseMobile; // 0x3d8 (0x8)
	class UEventScreenListView* ListViewRewardPreview; // 0x3e0 (0x8)
	int CurrentResourceValue; // 0x3e8 (0x4)
	int MaxResourceValue; // 0x3ec (0x4)
	int CurrentVBucks; // 0x3f0 (0x4)
	int OfferResourceQuantity; // 0x3f4 (0x4)
	class UFortItemDefinition* LevelPreviewItem; // 0x3f8 (0x8)
	unsigned char padding_400[0x20]; // 0x400 (0x20)

	/* Functions */

	// Function /Script/EventScreenBase.FortEventPurchaseModal.OnTotalPriceChanged (Has no native function)
	void OnTotalPriceChanged(int& NewPrice); // (Event | Protected | BlueprintEvent)

	// Function /Script/EventScreenBase.FortEventPurchaseModal.OnPurchaseAmountChanged (Has no native function)
	void OnPurchaseAmountChanged(int& PurchaseQuantity, int& ResourceQuantity); // (Event | Protected | BlueprintEvent)

	// Function /Script/EventScreenBase.FortEventPurchaseModal.OnEventScreenDataSet (Has no native function)
	void OnEventScreenDataSet(class UFortEventScreenData*& InEventScreenData); // (Event | Protected | BlueprintEvent)

	// Function /Script/EventScreenBase.FortEventPurchaseModal.OnCMSTextApplied (Has no native function)
	void OnCMSTextApplied(struct FText& LegalText); // (Event | Protected | HasOutParms | BlueprintEvent)

	// Function /Script/EventScreenBase.FortEventPurchaseModal.OnAmountChangeButtonClicked (Has no native function)
	void OnAmountChangeButtonClicked(); // (Event | Protected | BlueprintEvent)

	// Function /Script/EventScreenBase.FortEventPurchaseModal.HandlePurchaseComplete (Underlying native function: HandlePurchaseComplete 0x7433f84)
	void HandlePurchaseComplete(bool& bSuccess, struct TArray<struct FPurchasedItemInfo>& PurchasedItems, struct FString& InOfferId); // (Final | Native | Private | HasOutParms)

	// Function /Script/EventScreenBase.FortEventPurchaseModal.GetEventScreenData (Underlying native function: GetEventScreenData 0x7433e98)
	class UFortEventScreenData* GetEventScreenData(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)
};

