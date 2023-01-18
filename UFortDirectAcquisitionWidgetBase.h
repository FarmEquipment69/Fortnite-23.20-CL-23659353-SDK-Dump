// Class /Script/SaveTheWorldUI.FortDirectAcquisitionWidgetBase
// Size: 0x488
class UFortDirectAcquisitionWidgetBase : public UFortMtxStoreRootBase
{
	unsigned char unreflected_430[0x8]; // 0x430 (0x8) 
	bool bShowIneligible; // 0x438 (0x1)
	unsigned char unreflected_439[0x7]; // 0x439 (0x7) 
	class UUserWidget* FirstOfferGenerated; // 0x440 (0x8)
	unsigned char unreflected_448[0x10]; // 0x448 (0x10) 
	class UHorizontalBox* HorizontalBoxLargeTile; // 0x458 (0x8)
	class UGridPanel* GridPanelSmallTile; // 0x460 (0x8)
	class UHorizontalBox* HorizontalBoxReorderedItems; // 0x468 (0x8)
	class UVerticalBox* VerticalBoxFeatureItems; // 0x470 (0x8)
	class UVerticalBox* VerticalBoxDailyItems; // 0x478 (0x8)
	class UScaleBox* ScaleBoxMain; // 0x480 (0x8)

	/* Functions */

	// Function /Script/SaveTheWorldUI.FortDirectAcquisitionWidgetBase.OnDisplayToast (Has no native function)
	void OnDisplayToast(bool& bDisplayToast); // (Event | Public | BlueprintEvent)

	// Function /Script/SaveTheWorldUI.FortDirectAcquisitionWidgetBase.IsTabsLayout (Has no native function)
	void IsTabsLayout(bool& bShouldDisplayTabs); // (Event | Public | BlueprintEvent)

	// Function /Script/SaveTheWorldUI.FortDirectAcquisitionWidgetBase.HandleAffiliateButtonClicked (Underlying native function: HandleAffiliateButtonClicked 0x756ec04)
	void HandleAffiliateButtonClicked(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/SaveTheWorldUI.FortDirectAcquisitionWidgetBase.GetWeeklyStoreEndDate (Underlying native function: GetWeeklyStoreEndDate 0x756ea60)
	struct FDateTime* GetWeeklyStoreEndDate(); // (Final | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/SaveTheWorldUI.FortDirectAcquisitionWidgetBase.GetStoreCurrencies (Underlying native function: GetStoreCurrencies 0x756e2b0)
	struct TArray<class UFortAccountItemDefinition*> GetStoreCurrencies(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/SaveTheWorldUI.FortDirectAcquisitionWidgetBase.GetSeasonStoreEndDate (Underlying native function: GetSeasonStoreEndDate 0x756e1b0)
	struct FDateTime* GetSeasonStoreEndDate(); // (Final | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/SaveTheWorldUI.FortDirectAcquisitionWidgetBase.GetDailyStoreEndDate (Underlying native function: GetDailyStoreEndDate 0x756d8cc)
	struct FDateTime* GetDailyStoreEndDate(); // (Final | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)
};

