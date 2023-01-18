// Class /Script/FortniteUI.SearchPanel
// Size: 0x500
class USearchPanel : public UCommonActivatablePanelLegacy
{
	struct FMulticastInlineDelegate OnSearchTextChanged; // 0x4e0 (0x10)
	class UEditableTextBox* EditableTextSearch; // 0x4f0 (0x8)
	class UCommonButtonLegacy* ButtonTextSearch; // 0x4f8 (0x8)

	/* Functions */

	// Function /Script/FortniteUI.SearchPanel.HandleSearchButtonClick (Underlying native function: HandleSearchButtonClick 0xa8aa310)
	void HandleSearchButtonClick(); // (Final | Native | Private)

	// Function /Script/FortniteUI.SearchPanel.HandleOnSearchTextChanged (Underlying native function: HandleOnSearchTextChanged 0xa8aa1f8)
	void HandleOnSearchTextChanged(struct FText& Text); // (Final | Native | Private | HasOutParms)
};

