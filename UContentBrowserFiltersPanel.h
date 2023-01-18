// Class /Script/FortniteUI.ContentBrowserFiltersPanel
// Size: 0x310
class UContentBrowserFiltersPanel : public UCommonUserWidget
{
	struct FMulticastInlineDelegate OnFilterChanged; // 0x290 (0x10)
	struct FMulticastInlineDelegate OnFocusChanged; // 0x2a0 (0x10)
	class UClass* FilterEntryWidgetClass; // 0x2b0 (0x8)
	class UVerticalBox* BoxFilters; // 0x2b8 (0x8)
	class UScrollBox* ScrollBoxFilterScroll; // 0x2c0 (0x8)
	class UContentBrowserFilterEntry* ButtonAll; // 0x2c8 (0x8)
	class USearchPanel* SearchPanel; // 0x2d0 (0x8)
	unsigned char padding_2d8[0x38]; // 0x2d8 (0x38)

	/* Functions */

	// Function /Script/FortniteUI.ContentBrowserFiltersPanel.HandleShowAll (Underlying native function: HandleShowAll 0xa620344)
	void HandleShowAll(bool& bShowAllItems, class UObject*& ListItemObject); // (Final | Native | Private)

	// Function /Script/FortniteUI.ContentBrowserFiltersPanel.HandleSearchTextChanged (Underlying native function: HandleSearchTextChanged 0xa620288)
	void HandleSearchTextChanged(struct FText& Text); // (Final | Native | Private | HasOutParms)

	// Function /Script/FortniteUI.ContentBrowserFiltersPanel.HandleFilterSelected (Underlying native function: HandleFilterSelected 0xa61f9ac)
	void HandleFilterSelected(bool& bIsFilterEnabled, class UContentBrowserFilterEntry*& Entry); // (Final | Native | Private)

	// Function /Script/FortniteUI.ContentBrowserFiltersPanel.HandleFilterEnabled (Underlying native function: HandleFilterEnabled 0xa61f8e8)
	void HandleFilterEnabled(bool& bIsFilterEnabled, class UObject*& ListItemObject); // (Final | Native | Private)

	// Function /Script/FortniteUI.ContentBrowserFiltersPanel.GetFilterCount (Underlying native function: GetFilterCount 0xa61d668)
	int GetFilterCount(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

