// Class /Script/SaveTheWorldUI.FortQuestMapNodeLayout
// Size: 0x2d0
class UFortQuestMapNodeLayout : public UUserWidget
{
	class UPanelWidget* PanelNodeLayout; // 0x268 (0x8)
	class UCommonButtonBase* ButtonPrevious; // 0x270 (0x8)
	class UCommonButtonBase* ButtonNext; // 0x278 (0x8)
	class USizeBox* StartArrow; // 0x280 (0x8)
	class USizeBox* EndArrow; // 0x288 (0x8)
	class UCommonButtonGroupBase* QuestButtonGroup; // 0x290 (0x8)
	class UFortQuestMapScreen* ParentScreen; // 0x298 (0x8)
	unsigned char padding_2a0[0x30]; // 0x2a0 (0x30)

	/* Functions */

	// Function /Script/SaveTheWorldUI.FortQuestMapNodeLayout.HandleQuestIndexSelectionModelIndexChanged (Underlying native function: HandleQuestIndexSelectionModelIndexChanged 0x7598998)
	void HandleQuestIndexSelectionModelIndexChanged(); // (Final | Native | Private)

	// Function /Script/SaveTheWorldUI.FortQuestMapNodeLayout.HandleQuestButtonSelected (Underlying native function: HandleQuestButtonSelected 0x75987e0)
	void HandleQuestButtonSelected(class UCommonButtonBase*& SelectedQuestButton, int& ButtonIndex); // (Final | Native | Private)
};

