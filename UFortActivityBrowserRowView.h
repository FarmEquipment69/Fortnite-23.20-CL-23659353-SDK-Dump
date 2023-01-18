// Class /Script/DiscoveryBrowserUI.FortActivityBrowserRowView
// Size: 0x620
class UFortActivityBrowserRowView : public UFortActivityBrowserView
{
	unsigned char unreflected_488[0x8]; // 0x488 (0x8) 
	float MouseWheelScrollTimeThreshold; // 0x490 (0x4)
	unsigned char unreflected_494[0x4]; // 0x494 (0x4) 
	class UFortActivityBrowserListView* BrowserListActivities; // 0x498 (0x8)
	unsigned char unreflected_4a0[0x60]; // 0x4a0 (0x60) 
	struct FName TabNameID; // 0x500 (0x4)
	unsigned char unreflected_504[0xc]; // 0x504 (0xc) 
	struct FFortTabButtonLabelInfo TabButtonLabelInfo; // 0x510 (0xe0)
	class UFortSwipePanel* SwipePanelNavigation; // 0x5f0 (0x8)
	unsigned char padding_5f8[0x28]; // 0x5f8 (0x28)

	/* Functions */

	// Function /Script/DiscoveryBrowserUI.FortActivityBrowserRowView.OnRowChanged (Has no native function)
	void OnRowChanged(int& NewCategoryIndex); // (Event | Public | BlueprintEvent)

	// Function /Script/DiscoveryBrowserUI.FortActivityBrowserRowView.OnQueryActivitiesFinished (Has no native function)
	void OnQueryActivitiesFinished(); // (Event | Public | BlueprintEvent)

	// Function /Script/DiscoveryBrowserUI.FortActivityBrowserRowView.OnActivityUpdated (Has no native function)
	void OnActivityUpdated(); // (Event | Public | BlueprintEvent)
};

