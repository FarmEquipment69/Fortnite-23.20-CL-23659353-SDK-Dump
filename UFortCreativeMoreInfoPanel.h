// Class /Script/FortniteUI.FortCreativeMoreInfoPanel
// Size: 0x568
class UFortCreativeMoreInfoPanel : public UFortActivatablePanel
{
	bool bShouldClearName; // 0x518 (0x1)
	unsigned char unreflected_519[0x7]; // 0x519 (0x7) 
	class UFortEditableFilteredCountedTextBox* FilteredTextEntryWidgetName; // 0x520 (0x8)
	class UFortEditableFilteredCountedTextBox* FilteredTextEntryWidget0; // 0x528 (0x8)
	class UFortEditableFilteredCountedTextBox* FilteredTextEntryWidget1; // 0x530 (0x8)
	class UFortEditableFilteredCountedTextBox* FilteredTextEntryWidget2; // 0x538 (0x8)
	class UCommonButtonLegacy* ButtonApply; // 0x540 (0x8)
	class UCommonButtonLegacy* ButtonPreview; // 0x548 (0x8)
	class UCommonButtonLegacy* ButtonClear; // 0x550 (0x8)
	class UHorizontalBox* HboxSetPhoto; // 0x558 (0x8)
	bool bShouldDisplayIslandDescriptionWidgets; // 0x560 (0x1)
	unsigned char padding_561[0x7]; // 0x561 (0x7)

	/* Functions */

	// Function /Script/FortniteUI.FortCreativeMoreInfoPanel.ShowSpinner (Has no native function)
	void ShowSpinner(bool& bShow); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortCreativeMoreInfoPanel.ShowError (Has no native function)
	void ShowError(struct FString& Error); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortCreativeMoreInfoPanel.OnSaveCallBack (Has no native function)
	void OnSaveCallBack(bool& bSuccess); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortCreativeMoreInfoPanel.OnPublishComplete (Underlying native function: OnPublishComplete 0xa6da080)
	void OnPublishComplete(struct FString& Result); // (Final | Native | Private)

	// Function /Script/FortniteUI.FortCreativeMoreInfoPanel.OnPreview (Has no native function)
	void OnPreview(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortCreativeMoreInfoPanel.OnIslandDescriptionToolsShouldDisplayChanged (Has no native function)
	void OnIslandDescriptionToolsShouldDisplayChanged(bool& bShouldDisplay); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortCreativeMoreInfoPanel.OnAccept (Has no native function)
	void OnAccept(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortCreativeMoreInfoPanel.InitializeData (Underlying native function: InitializeData 0xa6d9b90)
	void InitializeData(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortCreativeMoreInfoPanel.HandlePreviewClicked (Underlying native function: HandlePreviewClicked 0xa6d9688)
	void HandlePreviewClicked(); // (Final | Native | Protected)

	// Function /Script/FortniteUI.FortCreativeMoreInfoPanel.HandleClearClicked (Underlying native function: HandleClearClicked 0xa6d921c)
	void HandleClearClicked(); // (Final | Native | Protected)

	// Function /Script/FortniteUI.FortCreativeMoreInfoPanel.HandleAcceptClicked (Underlying native function: HandleAcceptClicked 0xa6d8ec0)
	void HandleAcceptClicked(); // (Final | Native | Protected)

	// Function /Script/FortniteUI.FortCreativeMoreInfoPanel.GetIslandDescriptionTags (Underlying native function: GetIslandDescriptionTags 0xa6d893c)
	struct TArray<struct FCreativeIslandDescriptionTag> GetIslandDescriptionTags(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

