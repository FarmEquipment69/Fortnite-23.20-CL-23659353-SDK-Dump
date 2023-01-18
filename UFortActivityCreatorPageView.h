// Class /Script/DiscoveryBrowserUI.FortActivityCreatorPageView
// Size: 0x680
class UFortActivityCreatorPageView : public UFortActivityCategoryPageView
{
	unsigned char unreflected_5f0[0x28]; // 0x5f0 (0x28) 
	int AmountOfCreatorLinkEntriesQueried; // 0x618 (0x4)
	int ProcessedCreatorLinkEntries; // 0x61c (0x4)
	int AmountOfEntriesQueried; // 0x620 (0x4)
	unsigned char unreflected_624[0x4]; // 0x624 (0x4) 
	class UCommonButtonBase* ButtonJoinAsSpectator; // 0x628 (0x8)
	unsigned char padding_630[0x50]; // 0x630 (0x50)

	/* Functions */

	// Function /Script/DiscoveryBrowserUI.FortActivityCreatorPageView.OnPlayerQueueTypeChanged (Has no native function)
	void OnPlayerQueueTypeChanged(enum EPlayerQueueType& PlayerQueueType); // (Event | Protected | BlueprintEvent | Const)

	// Function /Script/DiscoveryBrowserUI.FortActivityCreatorPageView.OnNoContentFoundForCreator (Has no native function)
	void OnNoContentFoundForCreator(); // (Event | Protected | BlueprintEvent)

	// Function /Script/DiscoveryBrowserUI.FortActivityCreatorPageView.OnCreatorActivitiesQueryFinished (Has no native function)
	void OnCreatorActivitiesQueryFinished(); // (Event | Protected | BlueprintEvent)
};

