// Class /Script/FortniteUI.SpatialFactionUnlockedPerksScreen
// Size: 0x6c8
class USpatialFactionUnlockedPerksScreen : public UFortActivatablePanelWithItemPreview
{
	struct FMulticastInlineDelegate BPOnUnlockedPerksScreenClosed; // 0x660 (0x10)
	float StaggerTime; // 0x670 (0x4)
	unsigned char unreflected_674[0x4]; // 0x674 (0x4) 
	class UCommonButtonLegacy* ButtonBack; // 0x678 (0x8)
	class UTileView* TileViewPerks; // 0x680 (0x8)
	class UCommonButtonLegacy* ButtonCloseMobile; // 0x688 (0x8)
	unsigned char unreflected_690[0x18]; // 0x690 (0x18) 
	class UFortItem* LastViewedItem; // 0x6a8 (0x8)
	struct TArray<class UFactionUnlockedPerkData*> AllPerkItems; // 0x6b0 (0x10)
	unsigned char padding_6c0[0x8]; // 0x6c0 (0x8)

	/* Functions */

	// DelegateFunction /Script/FortniteUI.SpatialFactionUnlockedPerksScreen.OnUnlockedPerksScreenClosedDynamic__DelegateSignature (Has no native function)
	void OnUnlockedPerksScreenClosedDynamicDelegateSignature(); // (MulticastDelegate | Public | Delegate)

	// Function /Script/FortniteUI.SpatialFactionUnlockedPerksScreen.OnItemViewed (Has no native function)
	void OnItemViewed(class UFactionUnlockedPerkData*& ItemDisplayed); // (Event | Protected | BlueprintEvent)
};

