// Class /Script/DiscoveryBrowserUI.FortActivityCategoryView
// Size: 0x5a0
class UFortActivityCategoryView : public UFortActivityBrowserView
{
	unsigned char unreflected_488[0x8]; // 0x488 (0x8) 
	struct FName TabNameID; // 0x490 (0x4)
	unsigned char unreflected_494[0xc]; // 0x494 (0xc) 
	struct FFortTabButtonLabelInfo TabButtonLabelInfo; // 0x4a0 (0xe0)
	class UFortActivityCategoryTilePanel* TilePanelFeatured; // 0x580 (0x8)
	class UFortActivityCategoryTilePanel* TilePanelAll; // 0x588 (0x8)
	class UFortActivityCategoryTilePanel* CurrentSelectedPanel; // 0x590 (0x8)
	unsigned char padding_598[0x8]; // 0x598 (0x8)

	/* Functions */

	// Function /Script/DiscoveryBrowserUI.FortActivityCategoryView.OnSurfaceDataReady (Has no native function)
	void OnSurfaceDataReady(); // (Event | Protected | BlueprintEvent)

	// Function /Script/DiscoveryBrowserUI.FortActivityCategoryView.OnCategoryTilePanelSelected (Has no native function)
	void OnCategoryTilePanelSelected(class UFortActivityCategoryTilePanel*& SelectedPanel); // (Event | Protected | BlueprintEvent)

	// Function /Script/DiscoveryBrowserUI.FortActivityCategoryView.NavigateFromPanel (Underlying native function: NavigateFromPanel 0x74214c0)
	class UFortActivityCategoryTilePanel* NavigateFromPanel(enum EUINavigation& Direction, class UFortActivityCategoryTilePanel*& NavigatingPanel); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/DiscoveryBrowserUI.FortActivityCategoryView.GetTopMostVisiblePanel (Underlying native function: GetTopMostVisiblePanel 0x7420f7c)
	class UFortActivityCategoryTilePanel* GetTopMostVisiblePanel(); // (Native | Event | Protected | BlueprintEvent | Const)

	// Function /Script/DiscoveryBrowserUI.FortActivityCategoryView.GetCurrentSelectedPanel (Underlying native function: GetCurrentSelectedPanel 0x7420d84)
	class UFortActivityCategoryTilePanel* GetCurrentSelectedPanel(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)
};

