// Class /Script/FortniteUI.FortCreativeIslandNamingModal
// Size: 0x548
class UFortCreativeIslandNamingModal : public UFortActivatablePanel
{
	struct FText InitialDisplayText; // 0x518 (0x18)
	class UFortEditableFilteredCountedTextBox* FilteredTextEntryWidgetName; // 0x530 (0x8)
	class UCommonButtonLegacy* ButtonConfirm; // 0x538 (0x8)
	class UFortCreativeRealEstatePlotItemDefinition* TemplateRealEstatePlotDefinition; // 0x540 (0x8)

	/* Functions */

	// Function /Script/FortniteUI.FortCreativeIslandNamingModal.InitFromPlotItemDefinition (Underlying native function: InitFromPlotItemDefinition 0xa6d9aec)
	void InitFromPlotItemDefinition(class UFortCreativeRealEstatePlotItemDefinition*& RealEstateItemDefinition); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortCreativeIslandNamingModal.InitFromIslandLink (Underlying native function: InitFromIslandLink 0xa6d9a50)
	void InitFromIslandLink(class UFortCreativeIslandLink*& IslandLink); // (Final | Native | Public | BlueprintCallable)
};

