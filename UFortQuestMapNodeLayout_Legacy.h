// Class /Script/SaveTheWorldUI.FortQuestMapNodeLayout_Legacy
// Size: 0x2d0
class UFortQuestMapNodeLayout_Legacy : public UUserWidget
{
	class UPanelWidget* PanelNodeLayout; // 0x268 (0x8)
	class UCommonButtonLegacy* ButtonPrevious; // 0x270 (0x8)
	class UCommonButtonLegacy* ButtonNext; // 0x278 (0x8)
	class USizeBox* StartArrow; // 0x280 (0x8)
	class USizeBox* EndArrow; // 0x288 (0x8)
	class UCommonButtonGroupLegacy* QuestButtonGroup; // 0x290 (0x8)
	class UFortQuestMapScreen_Legacy* ParentScreen; // 0x298 (0x8)
	unsigned char padding_2a0[0x30]; // 0x2a0 (0x30)

	/* Functions */

	// Function /Script/SaveTheWorldUI.FortQuestMapNodeLayout_Legacy.HandleQuestIndexSelectionModelIndexChanged (Underlying native function: HandleQuestIndexSelectionModelIndexChanged 0x75989ac)
	void HandleQuestIndexSelectionModelIndexChanged(); // (Final | Native | Private)

	// Function /Script/SaveTheWorldUI.FortQuestMapNodeLayout_Legacy.HandleQuestButtonSelected (Underlying native function: HandleQuestButtonSelected 0x75988a4)
	void HandleQuestButtonSelected(class UCommonButtonLegacy*& SelectedQuestButton, int& ButtonIndex); // (Final | Native | Private)
};

