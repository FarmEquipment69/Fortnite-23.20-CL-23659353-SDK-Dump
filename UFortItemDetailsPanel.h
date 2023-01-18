// Class /Script/FortniteUI.FortItemDetailsPanel
// Size: 0x2b8
class UFortItemDetailsPanel : public UCommonUserWidget
{
	struct TWeakObjectPtr<class UFortItem> ItemToDetail; // 0x290 (0x8)
	struct TWeakObjectPtr<class UFortItem> ItemToCompareWith; // 0x298 (0x8)
	unsigned char padding_2a0[0x18]; // 0x2a0 (0x18)

	/* Functions */

	// Function /Script/FortniteUI.FortItemDetailsPanel.SetItemToDetail (Underlying native function: SetItemToDetail 0xa84a3e4)
	void SetItemToDetail(class UFortItem*& ItemToDetail); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortItemDetailsPanel.SetItemToCompareWith (Underlying native function: SetItemToCompareWith 0xa84a198)
	void SetItemToCompareWith(class UFortItem*& ItemToCompareWith); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortItemDetailsPanel.HandleItemToDetailChanged (Underlying native function: HandleItemToDetailChanged 0xa848140)
	void HandleItemToDetailChanged(bool& bItemChanged, bool& bAmmoChanged, bool& bIngredientsChanged); // (Final | Native | Private)

	// Function /Script/FortniteUI.FortItemDetailsPanel.HandleItemToCompareWithChanged (Underlying native function: HandleItemToCompareWithChanged 0xa848034)
	void HandleItemToCompareWithChanged(bool& bItemChanged, bool& bAmmoChanged, bool& bIngredientsChanged); // (Final | Native | Private)

	// Function /Script/FortniteUI.FortItemDetailsPanel.HandleDifferentItemToDetailSet (Has no native function)
	void HandleDifferentItemToDetailSet(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortItemDetailsPanel.HandleDifferentItemToCompareSet (Has no native function)
	void HandleDifferentItemToCompareSet(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortItemDetailsPanel.HandleCursorModeChanged (Underlying native function: HandleCursorModeChanged 0xa847b04)
	void HandleCursorModeChanged(bool& bCursorModeEnabled, struct FName& ActionName, class UUserWidget*& CustomWidget); // (Final | Native | Private)
};

