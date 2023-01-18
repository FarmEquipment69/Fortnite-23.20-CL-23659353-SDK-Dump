// Class /Script/FortniteUI.FortCreativeContentBrowserTabPanelBase
// Size: 0x3f0
class UFortCreativeContentBrowserTabPanelBase : public UCommonActivatableWidget
{
	struct FMulticastInlineDelegate OnSelectionChanged; // 0x3a8 (0x10)
	unsigned char unreflected_3b8[0x4]; // 0x3b8 (0x4) 
	struct FName TabName; // 0x3bc (0x4)
	struct FText TabLabel; // 0x3c0 (0x18)
	struct TArray<struct FName> LastFilters; // 0x3d8 (0x10)
	unsigned char padding_3e8[0x8]; // 0x3e8 (0x8)

	/* Functions */

	// Function /Script/FortniteUI.FortCreativeContentBrowserTabPanelBase.SelectTab (Has no native function)
	void SelectTab(); // (Event | Public | BlueprintCallable | BlueprintEvent)

	// Function /Script/FortniteUI.FortCreativeContentBrowserTabPanelBase.GetSelectedItemIndex (Underlying native function: GetSelectedItemIndex 0xa6d8c30)
	int GetSelectedItemIndex(); // (Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortCreativeContentBrowserTabPanelBase.GetItemType (Underlying native function: GetItemType 0x8ed2044)
	enum EFortCreativeItemType GetItemType(); // (Final | Native | Public | BlueprintCallable | BlueprintPure)
};

