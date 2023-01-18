// Class /Script/FortniteUI.FortCreativeIslandSelectListTab
// Size: 0x480
class UFortCreativeIslandSelectListTab : public UFortCreativeIslandSelectTab
{
	class UListView* ListViewActivities; // 0x3e8 (0x8)
	class UCommonButtonBase* ButtonSelect; // 0x3f0 (0x8)
	class UCommonButtonBase* ButtonRemove; // 0x3f8 (0x8)
	class UCommonButtonBase* ButtonFavorite; // 0x400 (0x8)
	class UWidgetSwitcher* SwitcherIslandsList; // 0x408 (0x8)
	class UOverlay* OverlayIslandListContent; // 0x410 (0x8)
	class UOverlay* OverlayNoIslandsContent; // 0x418 (0x8)
	class UOverlay* OverlayNoFavorites; // 0x420 (0x8)
	class UTextBlock* TextNoIslands; // 0x428 (0x8)
	class UUserWidget* WidgetLaunchError; // 0x430 (0x8)
	class UImage* ImageLoadingIndicator; // 0x438 (0x8)
	class UFortCreativeIslandDetailsPanel* IslandDetailsPanel; // 0x440 (0x8)
	unsigned char unreflected_448[0x8]; // 0x448 (0x8) 
	class UFortGameActivityProvider* ActivityProvider; // 0x450 (0x8)
	class UObject* LastItemToTriggerLoading; // 0x458 (0x8)
	unsigned char padding_460[0x20]; // 0x460 (0x20)

	/* Functions */

	// Function /Script/FortniteUI.FortCreativeIslandSelectListTab.HandleListScrolled (Underlying native function: HandleListScrolled 0xa664aec)
	void HandleListScrolled(float& ItemOffset, float& DistanceRemaining); // (Final | Native | Protected)

	// Function /Script/FortniteUI.FortCreativeIslandSelectListTab.HandleIslandSelectionChanged (Underlying native function: HandleIslandSelectionChanged 0xa664a6c)
	void HandleIslandSelectionChanged(class UObject*& Item); // (Final | Native | Protected)
};

