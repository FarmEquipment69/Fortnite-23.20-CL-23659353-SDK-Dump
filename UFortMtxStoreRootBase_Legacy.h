// Class /Script/FortniteUI.FortMtxStoreRootBase_Legacy
// Size: 0x5a0
class UFortMtxStoreRootBase_Legacy : public UFortActivatablePanel
{
	unsigned char unreflected_518[0x8]; // 0x518 (0x8) 
	class UFortMtxStoreSelectionPopup* MtxStoreSelectionWidget; // 0x520 (0x8)
	class UClass* MtxStoreSelectionClass; // 0x528 (0x8)
	unsigned char unreflected_530[0x10]; // 0x530 (0x10) 
	struct TArray<class UFortStoreFrontOfferInfo*> AcquisitionOfferData; // 0x540 (0x10)
	unsigned char unreflected_550[0x18]; // 0x550 (0x18) 
	struct TArray<struct FString> StorefrontNames; // 0x568 (0x10)
	unsigned char padding_578[0x28]; // 0x578 (0x28)

	/* Functions */

	// Function /Script/FortniteUI.FortMtxStoreRootBase_Legacy.SetStorefrontNames (Underlying native function: SetStorefrontNames 0x6226de0)
	void SetStorefrontNames(struct TArray<struct FString>& InStorefrontNames); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteUI.FortMtxStoreRootBase_Legacy.PushStoreSelection (Underlying native function: PushStoreSelection 0x52f5710)
	void PushStoreSelection(); // (Final | Native | Protected)

	// Function /Script/FortniteUI.FortMtxStoreRootBase_Legacy.OnUpdateOtherPlatformMTXMessage (Has no native function)
	void OnUpdateOtherPlatformMTXMessage(bool& HasOtherPlatformCurrency, struct FText& CurrencyMessageLocText); // (Event | Protected | HasOutParms | BlueprintEvent)

	// Function /Script/FortniteUI.FortMtxStoreRootBase_Legacy.OnStartReadingOffers (Underlying native function: OnStartReadingOffers 0x6226dc0)
	void OnStartReadingOffers(); // (Native | Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortMtxStoreRootBase_Legacy.OnPurchasingDisabled (Has no native function)
	void OnPurchasingDisabled(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortMtxStoreRootBase_Legacy.OnOffersGenerated (Has no native function)
	void OnOffersGenerated(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortMtxStoreRootBase_Legacy.NoOffersAvailable (Has no native function)
	void NoOffersAvailable(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortMtxStoreRootBase_Legacy.GetStorefrontNames (Underlying native function: GetStorefrontNames 0x6226d60)
	struct TArray<struct FString> GetStorefrontNames(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortMtxStoreRootBase_Legacy.GetMtxBreakdown (Underlying native function: GetMtxBreakdown 0x6226cf0)
	struct FMtxBreakdown GetMtxBreakdown(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortMtxStoreRootBase_Legacy.GenerateOfferWidget (Underlying native function: GenerateOfferWidget 0x6226c40)
	void GenerateOfferWidget(class UFortStoreFrontOfferInfo*& OfferData); // (Native | Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortMtxStoreRootBase_Legacy.ClearOfferWidgets (Underlying native function: ClearOfferWidgets 0x6226c20)
	void ClearOfferWidgets(); // (Native | Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortMtxStoreRootBase_Legacy.AreOffersLoaded (Underlying native function: AreOffersLoaded 0x6226c00)
	bool AreOffersLoaded(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)
};

