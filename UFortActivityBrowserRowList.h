// Class /Script/DiscoveryBrowserUI.FortActivityBrowserRowList
// Size: 0x350
class UFortActivityBrowserRowList : public UFortActivityBrowserRow
{
	class UFortActivityListView* ListViewActivities; // 0x330 (0x8)
	class UCommonButtonBase* ButtonPageLeft; // 0x338 (0x8)
	class UCommonButtonBase* ButtonPageRight; // 0x340 (0x8)
	unsigned char padding_348[0x8]; // 0x348 (0x8)

	/* Functions */

	// Function /Script/DiscoveryBrowserUI.FortActivityBrowserRowList.OnQueryStatusChanged (Has no native function)
	void OnQueryStatusChanged(bool& bIsActive); // (Event | Public | BlueprintEvent)
};

