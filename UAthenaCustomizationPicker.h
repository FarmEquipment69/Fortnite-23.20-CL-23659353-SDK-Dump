// Class /Script/FortniteUI.AthenaCustomizationPicker
// Size: 0x538
class UAthenaCustomizationPicker : public UFortItemPickerBase
{
	struct FMulticastInlineDelegate OnCosmeticSelectionSaving; // 0x3d0 (0x10)
	struct FMulticastInlineDelegate OnCosmeticSelectionSaved; // 0x3e0 (0x10)
	struct TMap<enum EInventoryContentSortType, struct FText> SortLabels; // 0x3f0 (0x50)
	struct TArray<struct FFortAthenaItemManagementInventoryFilterTabLabelInfo> FilterTabLabelInfoArray; // 0x440 (0x10)
	class UCommonButtonBase* ButtonJumpToTop; // 0x450 (0x8)
	class UCommonButtonBase* ButtonTextSearch; // 0x458 (0x8)
	class UCommonButtonBase* ButtonSortAndFilter; // 0x460 (0x8)
	struct FName CurrentFilterName; // 0x468 (0x4)
	unsigned char unreflected_46c[0x26]; // 0x46c (0x26) 
	bool bArchiveFiltering; // 0x492 (0x1)
	unsigned char unreflected_493[0x5]; // 0x493 (0x5) 
	class UCommonTextBlock* TextSortTag; // 0x498 (0x8)
	class UCommonTextBlock* TextFilterTag; // 0x4a0 (0x8)
	class UCommonTextBlock* TextNumArchived; // 0x4a8 (0x8)
	class UWidget* WidgetArchivedTag; // 0x4b0 (0x8)
	enum EAthenaCustomizationCategory CustomizeCategory; // 0x4b8 (0x1)
	unsigned char unreflected_4b9[0x3]; // 0x4b9 (0x3) 
	int SubslotIndex; // 0x4bc (0x4)
	float ItemOffsetForJumpToTopButton; // 0x4c0 (0x4)
	unsigned char unreflected_4c4[0x4]; // 0x4c4 (0x4) 
	class UAthenaCustomizationPickerSortAndFilterBlade* BladeSortAndFilter; // 0x4c8 (0x8)
	class UUserWidget* TooltipArchiveFilter; // 0x4d0 (0x8)
	bool bAllowUnownedItems; // 0x4d8 (0x1)
	bool bAllowCommits; // 0x4d9 (0x1)
	bool bOneItemPerSlot; // 0x4da (0x1)
	unsigned char unreflected_4db[0x15]; // 0x4db (0x15) 
	struct TArray<class UObject*> InitialPickerItems; // 0x4f0 (0x10)
	class UFortItem* ItemListeningTo; // 0x500 (0x8)
	class UAthenaCosmeticAccountItem* LocalCampaignHeroItem; // 0x508 (0x8)
	unsigned char padding_510[0x28]; // 0x510 (0x28)

	/* Functions */

	// Function /Script/FortniteUI.AthenaCustomizationPicker.SetFilter (Underlying native function: SetFilter 0xa48dfa0)
	void SetFilter(struct FName& FilterName); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.AthenaCustomizationPicker.SearchText (Underlying native function: SearchText 0xa48dc5c)
	void SearchText(struct FText& Text); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteUI.AthenaCustomizationPicker.OnUpdateArchiveFilterTooltipText (Has no native function)
	void OnUpdateArchiveFilterTooltipText(struct FText& Text); // (Event | Public | HasOutParms | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaCustomizationPicker.OnShowArchiveFilterTooltip (Has no native function)
	void OnShowArchiveFilterTooltip(bool& bShowTooltip); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaCustomizationPicker.OnSearchEnabled (Has no native function)
	void OnSearchEnabled(bool& bEnabled); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaCustomizationPicker.OnNoItemsAvailableInFilter (Has no native function)
	void OnNoItemsAvailableInFilter(struct FText& EmptyDisplayText); // (Event | Public | HasOutParms | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaCustomizationPicker.OnItemsAvailableInFilter (Has no native function)
	void OnItemsAvailableInFilter(); // (Event | Public | BlueprintEvent)

	// DelegateFunction /Script/FortniteUI.AthenaCustomizationPicker.OnCosmeticChangeSaveEvent__DelegateSignature (Has no native function)
	void OnCosmeticChangeSaveEventDelegateSignature(); // (MulticastDelegate | Public | Delegate)

	// Function /Script/FortniteUI.AthenaCustomizationPicker.HasSelectableTile (Has no native function)
	bool HasSelectableTile(); // (Event | Protected | BlueprintEvent | Const)

	// Function /Script/FortniteUI.AthenaCustomizationPicker.HandleSelectedItemHasChanged (Underlying native function: HandleSelectedItemHasChanged 0xa48cfc4)
	void HandleSelectedItemHasChanged(bool& ItemChanged, bool& AmmoChanged, bool& IngredientsChanged); // (Final | Native | Protected)

	// Function /Script/FortniteUI.AthenaCustomizationPicker.HandleButtonTextSearchClicked (Has no native function)
	void HandleButtonTextSearchClicked(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaCustomizationPicker.HandleArchiveFilterTooltipDismissed (Underlying native function: HandleArchiveFilterTooltipDismissed 0xa48bfe0)
	void HandleArchiveFilterTooltipDismissed(); // (Final | Native | Private | BlueprintCallable | Const)

	// Function /Script/FortniteUI.AthenaCustomizationPicker.GetQualifiedFilterDisplayName (Underlying native function: GetQualifiedFilterDisplayName 0xa48be58)
	struct FText GetQualifiedFilterDisplayName(enum EAthenaFilterDisplayType& InTopFilterDisplaySetting); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.AthenaCustomizationPicker.EndCustomizationCategory (Underlying native function: EndCustomizationCategory 0xa48b728)
	void EndCustomizationCategory(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.AthenaCustomizationPicker.BP_OnUpdateNumArchivedItems (Has no native function)
	void BPOnUpdateNumArchivedItems(int& InNumArchivedItems); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaCustomizationPicker.BeginCustomizationCategory (Underlying native function: BeginCustomizationCategory 0xa48b3d4)
	void BeginCustomizationCategory(enum EAthenaCustomizationCategory& category, int& SubslotToEdit, bool& bInAllowUnownedItems, bool& bInOneItemPerSlot); // (Final | Native | Public | BlueprintCallable)
};

