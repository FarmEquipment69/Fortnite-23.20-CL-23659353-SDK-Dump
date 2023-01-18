// Class /Script/SaveTheWorldUI.FortDirectAcquisitionWidgetBase_Legacy
// Size: 0x5f8
class UFortDirectAcquisitionWidgetBase_Legacy : public UFortMtxStoreRootBase_Legacy
{
	unsigned char unreflected_5a0[0x8]; // 0x5a0 (0x8) 
	bool bShowIneligible; // 0x5a8 (0x1)
	unsigned char unreflected_5a9[0x7]; // 0x5a9 (0x7) 
	class UUserWidget* FirstOfferGenerated; // 0x5b0 (0x8)
	unsigned char unreflected_5b8[0x10]; // 0x5b8 (0x10) 
	class UHorizontalBox* HorizontalBoxLargeTile; // 0x5c8 (0x8)
	class UGridPanel* GridPanelSmallTile; // 0x5d0 (0x8)
	class UHorizontalBox* HorizontalBoxReorderedItems; // 0x5d8 (0x8)
	class UVerticalBox* VerticalBoxFeatureItems; // 0x5e0 (0x8)
	class UVerticalBox* VerticalBoxDailyItems; // 0x5e8 (0x8)
	class UScaleBox* ScaleBoxMain; // 0x5f0 (0x8)

	/* Functions */

	// Function /Script/SaveTheWorldUI.FortDirectAcquisitionWidgetBase_Legacy.OnDisplayToast (Has no native function)
	void OnDisplayToast(bool& bDisplayToast); // (Event | Public | BlueprintEvent)

	// Function /Script/SaveTheWorldUI.FortDirectAcquisitionWidgetBase_Legacy.IsTabsLayout (Has no native function)
	void IsTabsLayout(bool& bShouldDisplayTabs); // (Event | Public | BlueprintEvent)

	// Function /Script/SaveTheWorldUI.FortDirectAcquisitionWidgetBase_Legacy.HandleAffiliateButtonClicked (Underlying native function: HandleAffiliateButtonClicked 0x5b367e0)
	void HandleAffiliateButtonClicked(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/SaveTheWorldUI.FortDirectAcquisitionWidgetBase_Legacy.GetWeeklyStoreEndDate (Underlying native function: GetWeeklyStoreEndDate 0x5b367a0)
	struct FDateTime* GetWeeklyStoreEndDate(); // (Final | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/SaveTheWorldUI.FortDirectAcquisitionWidgetBase_Legacy.GetStoreCurrencies (Underlying native function: GetStoreCurrencies 0x5b36750)
	struct TArray<class UFortAccountItemDefinition*> GetStoreCurrencies(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/SaveTheWorldUI.FortDirectAcquisitionWidgetBase_Legacy.GetSeasonStoreEndDate (Underlying native function: GetSeasonStoreEndDate 0x5b36710)
	struct FDateTime* GetSeasonStoreEndDate(); // (Final | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/SaveTheWorldUI.FortDirectAcquisitionWidgetBase_Legacy.GetDailyStoreEndDate (Underlying native function: GetDailyStoreEndDate 0x5b366d0)
	struct FDateTime* GetDailyStoreEndDate(); // (Final | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)
};

