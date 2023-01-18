// Class /Script/FortniteUI.FortCreativeItemDetailsSidePanel
// Size: 0x298
class UFortCreativeItemDetailsSidePanel : public UUserWidget
{
	struct TArray<struct FString> SpecialItemTags; // 0x268 (0x10)
	class UImage* ImageSelectedItem; // 0x278 (0x8)
	class UCommonVisibilitySwitcher* SwitcherDetails; // 0x280 (0x8)
	class UCreativeContentBrowserItemInfo* ContentBrowserItemInfoItemDetails; // 0x288 (0x8)
	class UFortItemDetailsHostPanel* ItemInspectionMainItemDetailsLegacyDetailsPanel; // 0x290 (0x8)

	/* Functions */

	// Function /Script/FortniteUI.FortCreativeItemDetailsSidePanel.SetSpecialItemTagVisibility (Has no native function)
	void SetSpecialItemTagVisibility(struct FString& SpecialItemTag); // (Event | Public | BlueprintCallable | BlueprintEvent)
};

