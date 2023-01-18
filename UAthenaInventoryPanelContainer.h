// Class /Script/FortniteUI.AthenaInventoryPanelContainer
// Size: 0x5a0
class UAthenaInventoryPanelContainer : public UCommonActivatableWidget
{
	unsigned char unreflected_3a8[0xe0]; // 0x3a8 (0xe0) 
	struct FName TabNameID; // 0x488 (0x4)
	unsigned char unreflected_48c[0x4]; // 0x48c (0x4) 
	struct FFortTabButtonLabelInfo TabButtonLabelInfo; // 0x490 (0xe0)
	class UClass* TabButtonClass; // 0x570 (0x8)
	class UFortTabListWidgetBase_Legacy* TabList; // 0x578 (0x8)
	class UCommonWidgetSwitcherLegacy* SwitcherTabs; // 0x580 (0x8)
	class UAthenaInventoryItemInfo* ItemInfoWidget; // 0x588 (0x8)
	unsigned char padding_590[0x10]; // 0x590 (0x10)

	/* Functions */

	// Function /Script/FortniteUI.AthenaInventoryPanelContainer.HandleInventoryTabChanged (Underlying native function: HandleInventoryTabChanged 0x1f84980)
	void HandleInventoryTabChanged(class UWidget*& NewActiveWidget, int& WidgetIndex); // (Final | Native | Private)
};

