// Class /Script/SaveTheWorldUI.FortCollectionBookOverviewWidget
// Size: 0x2d8
class UFortCollectionBookOverviewWidget : public UCommonUserWidget
{
	struct FMulticastInlineDelegate OnCollectionBookPageSelected; // 0x290 (0x10)
	struct FMulticastInlineDelegate OnCollectionBookPageClicked; // 0x2a0 (0x10)
	class UFortCollectionBookPage* LastSelectedPage; // 0x2b0 (0x8)
	class UFortCollectionBookCategory* LastSelectedCategory; // 0x2b8 (0x8)
	struct TArray<class UFortCollectionBookCategory*> CategoryObjectPool; // 0x2c0 (0x10)
	class UCommonTreeView* PageTreeViewWidget; // 0x2d0 (0x8)

	/* Functions */

	// Function /Script/SaveTheWorldUI.FortCollectionBookOverviewWidget.OnDeactivated (Underlying native function: OnDeactivated 0x7570aa8)
	void OnDeactivated(); // (Native | Event | Public | BlueprintEvent)

	// Function /Script/SaveTheWorldUI.FortCollectionBookOverviewWidget.OnActivated (Underlying native function: OnActivated 0x756d618)
	void OnActivated(); // (Native | Event | Public | BlueprintEvent)

	// Function /Script/SaveTheWorldUI.FortCollectionBookOverviewWidget.HandlePagesChanged (Underlying native function: HandlePagesChanged 0x756f5b0)
	void HandlePagesChanged(class UFortCollectionBookManager*& CBManager); // (Final | Native | Private)
};

