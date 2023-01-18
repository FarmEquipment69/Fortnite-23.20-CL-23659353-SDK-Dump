// Class /Script/FortniteUI.FortAlterationsWidget
// Size: 0x308
class UFortAlterationsWidget : public UCommonUserWidget
{
	class UFortItem* Item; // 0x290 (0x8)
	enum EFortAlterationWidgetState State; // 0x298 (0x1)
	unsigned char unreflected_299[0x7]; // 0x299 (0x7) 
	class UFortItem* ItemToCompareWith; // 0x2a0 (0x8)
	bool bUseButtons; // 0x2a8 (0x1)
	unsigned char unreflected_2a9[0x37]; // 0x2a9 (0x37) 
	class UCommonTextBlock* EmptyText; // 0x2e0 (0x8)
	class UCommonButtonGroupLegacy* ButtonGroup; // 0x2e8 (0x8)
	unsigned char padding_2f0[0x18]; // 0x2f0 (0x18)

	/* Functions */

	// Function /Script/FortniteUI.FortAlterationsWidget.SetupInteractionEvents (Underlying native function: SetupInteractionEvents 0xa91b09c)
	void SetupInteractionEvents(class UFortAlterationButtonWidget*& Buttion); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortAlterationsWidget.SetUpgradeLevelDelta (Underlying native function: SetUpgradeLevelDelta 0xa91aeac)
	void SetUpgradeLevelDelta(int& InUpgradeLevelDelta); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortAlterationsWidget.SetState (Underlying native function: SetState 0xa91aae8)
	void SetState(enum EFortAlterationWidgetState& InState); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortAlterationsWidget.SetItemToCompareWith (Underlying native function: SetItemToCompareWith 0xa91a948)
	void SetItemToCompareWith(class UFortItem*& InItem); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortAlterationsWidget.SetItem (Underlying native function: SetItem 0xa91a83c)
	void SetItem(class UFortItem*& InItem, bool& bInPreviewNewAlterations, bool& bIntroAlterations); // (Final | 0x00000002 | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortAlterationsWidget.ProcessAlterations (Underlying native function: ProcessAlterations 0xa9198e8)
	void ProcessAlterations(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortAlterationsWidget.OnUpgradeLevelDeltaChanged (Has no native function)
	void OnUpgradeLevelDeltaChanged(); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteUI.FortAlterationsWidget.OnStateChanged (Has no native function)
	void OnStateChanged(); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteUI.FortAlterationsWidget.OnItemToCompareWithChanged (Has no native function)
	void OnItemToCompareWithChanged(); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteUI.FortAlterationsWidget.OnItemChanged (Has no native function)
	void OnItemChanged(bool& bIntroAlterations, bool& bWasFavoritedChanged); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteUI.FortAlterationsWidget.OnGenerateAlteration (Has no native function)
	void OnGenerateAlteration(class UFortAlterationInfo*& AlterationInfo); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteUI.FortAlterationsWidget.OnFocusFirstItem (Has no native function)
	void OnFocusFirstItem(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortAlterationsWidget.OnAlterationSlotIndexModifiedBP (Has no native function)
	void OnAlterationSlotIndexModifiedBP(int& ModifiedIndex); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteUI.FortAlterationsWidget.HandleAlterationsSlotSelected (Underlying native function: HandleAlterationsSlotSelected 0xa9181f8)
	void HandleAlterationsSlotSelected(class UCommonButtonLegacy*& InAlterationButton, int& SelectedIndex); // (Final | Native | Private)

	// Function /Script/FortniteUI.FortAlterationsWidget.HandleAlterationsSlotHovered (Underlying native function: HandleAlterationsSlotHovered 0xa918134)
	void HandleAlterationsSlotHovered(class UCommonButtonLegacy*& InAlterationButton, int& SelectedIndex); // (Final | Native | Private)
};

