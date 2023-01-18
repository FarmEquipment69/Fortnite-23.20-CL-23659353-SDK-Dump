// Class /Script/SaveTheWorldUI.FortCollectionBookSlotView
// Size: 0x338
class UFortCollectionBookSlotView : public UCommonUserWidget
{
	struct TWeakObjectPtr<class UClass> CollectionBookButtonClass; // 0x290 (0x28)
	class UHorizontalBox* CollectionBookButtonBox; // 0x2b8 (0x8)
	class UCommonButtonGroupLegacy* CollectionBookSlotButtonGroup; // 0x2c0 (0x8)
	struct TArray<class UFortCollectionBookSlotButton*> CollectionBookSlotButtons; // 0x2c8 (0x10)
	class UFortCollectionBookSection* AssociatedSection; // 0x2d8 (0x8)
	unsigned char unreflected_2e0[0x48]; // 0x2e0 (0x48) 
	int PreviousSelectedButtonIdx; // 0x328 (0x4)
	int CurrentSelectedButtonIdx; // 0x32c (0x4)
	unsigned char padding_330[0x8]; // 0x330 (0x8)

	/* Functions */

	// Function /Script/SaveTheWorldUI.FortCollectionBookSlotView.OnSlotButtonHovered (Underlying native function: OnSlotButtonHovered 0x75718f0)
	void OnSlotButtonHovered(class UCommonButtonLegacy*& HoveredButton, int& ButtonIdx); // (Native | Protected)

	// Function /Script/SaveTheWorldUI.FortCollectionBookSlotView.OnSlotButtonClicked (Underlying native function: OnSlotButtonClicked 0x7571728)
	void OnSlotButtonClicked(class UCommonButtonLegacy*& ClickedButton, int& ButtonIdx); // (Native | Protected)

	// Function /Script/SaveTheWorldUI.FortCollectionBookSlotView.OnSelectedSlotButtonChanged (Underlying native function: OnSelectedSlotButtonChanged 0x7571660)
	void OnSelectedSlotButtonChanged(class UCommonButtonLegacy*& SelectedButton, int& ButtonIdx); // (Native | Protected)
};

