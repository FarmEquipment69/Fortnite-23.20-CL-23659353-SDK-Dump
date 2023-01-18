// Class /Script/SaveTheWorldUI.FortCollectionBookPrimaryPanel
// Size: 0x5a0
class UFortCollectionBookPrimaryPanel : public UCommonActivatablePanelLegacy
{
	struct FMulticastInlineDelegate OnCollectionBookPageSelectedDelegate; // 0x4e0 (0x10)
	struct FMulticastInlineDelegate OnCollectionBookPageClickedDelegate; // 0x4f0 (0x10)
	struct FMulticastInlineDelegate OnCollectionBookSectionClickedDelegate; // 0x500 (0x10)
	struct FDataTableRowHandle BackActionRowHandle; // 0x510 (0x10)
	struct FDataTableRowHandle SummonInfoPanelActionRowHandle; // 0x520 (0x10)
	class UFortCollectionBookOverviewWidget* OverviewWidget; // 0x530 (0x8)
	class UCommonTileView* SectionTileViewWidget; // 0x538 (0x8)
	enum ECollectionBookPrimaryNavTarget CurrentNavTarget; // 0x540 (0x1)
	unsigned char unreflected_541[0x7]; // 0x541 (0x7) 
	class UFortCollectionBookSection* LastClickedSection; // 0x548 (0x8)
	unsigned char padding_550[0x50]; // 0x550 (0x50)

	/* Functions */

	// Function /Script/SaveTheWorldUI.FortCollectionBookPrimaryPanel.OnSummonInfoPanelExecuted (Underlying native function: OnSummonInfoPanelExecuted 0x7571dd0)
	void OnSummonInfoPanelExecuted(bool& bPassThrough); // (Native | Event | Protected | HasOutParms | BlueprintEvent)

	// Function /Script/SaveTheWorldUI.FortCollectionBookPrimaryPanel.OnInputMethodChanged (Underlying native function: OnInputMethodChanged 0x7570b50)
	void OnInputMethodChanged(enum ECommonInputType& CurrentInputType); // (Final | Native | Protected)

	// Function /Script/SaveTheWorldUI.FortCollectionBookPrimaryPanel.OnCollectionBookSectionClicked (Underlying native function: OnCollectionBookSectionClicked 0x75707fc)
	void OnCollectionBookSectionClicked(class UFortCollectionBookSection*& ClickedSection); // (Native | Event | Protected | BlueprintEvent)

	// Function /Script/SaveTheWorldUI.FortCollectionBookPrimaryPanel.OnCollectionBookPageSelected (Underlying native function: OnCollectionBookPageSelected 0x7570880)
	void OnCollectionBookPageSelected(class UFortCollectionBookPage*& SelectedPage); // (Native | Event | Protected | BlueprintEvent)

	// Function /Script/SaveTheWorldUI.FortCollectionBookPrimaryPanel.OnCollectionBookPageClicked (Underlying native function: OnCollectionBookPageClicked 0x7570778)
	void OnCollectionBookPageClicked(class UFortCollectionBookPage*& ClickedPage); // (Native | Event | Protected | BlueprintEvent)

	// Function /Script/SaveTheWorldUI.FortCollectionBookPrimaryPanel.OnBackActionExecuted (Underlying native function: OnBackActionExecuted 0x7570554)
	void OnBackActionExecuted(bool& bPassThrough); // (Final | Native | Public | HasOutParms)
};

