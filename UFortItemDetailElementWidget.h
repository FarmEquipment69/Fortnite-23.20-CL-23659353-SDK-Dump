// Class /Script/FortniteUI.FortItemDetailElementWidget
// Size: 0x2e8
class UFortItemDetailElementWidget : public UCommonUserWidget
{
	struct TWeakObjectPtr<class UFortItem> ItemToDetail; // 0x290 (0x8)
	struct TWeakObjectPtr<class UFortItem> ItemToCompareWith; // 0x298 (0x8)
	bool bShouldPreviewUpgradingItem; // 0x2a0 (0x1)
	unsigned char unreflected_2a1[0x3]; // 0x2a1 (0x3) 
	int UpgradeLevelDelta; // 0x2a4 (0x4)
	struct TScriptInterface<class IFortItemViewContextInterface> ItemViewContext; // 0x2a8 (0x10)
	enum EFortItemInspectionMode CurrentInspectMode; // 0x2b8 (0x1)
	unsigned char unreflected_2b9[0x3]; // 0x2b9 (0x3) 
	int QuantityOverride; // 0x2bc (0x4)
	bool bIsUpdatingSuspended; // 0x2c0 (0x1)
	unsigned char padding_2c1[0x27]; // 0x2c1 (0x27)

	/* Functions */

	// Function /Script/FortniteUI.FortItemDetailElementWidget.HandleUpgradeLevelDeltaChanged (Has no native function)
	void HandleUpgradeLevelDeltaChanged(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortItemDetailElementWidget.HandleShouldPreviewUpgradingItemChanged (Has no native function)
	void HandleShouldPreviewUpgradingItemChanged(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortItemDetailElementWidget.HandleQuantityOverrideChanged (Has no native function)
	void HandleQuantityOverrideChanged(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortItemDetailElementWidget.HandlePreDifferentItemToDetailSet (Has no native function)
	void HandlePreDifferentItemToDetailSet(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortItemDetailElementWidget.HandlePreDifferentItemToCompareWithSet (Has no native function)
	void HandlePreDifferentItemToCompareWithSet(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortItemDetailElementWidget.HandlePostDifferentItemToDetailSet (Has no native function)
	void HandlePostDifferentItemToDetailSet(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortItemDetailElementWidget.HandlePostDifferentItemToCompareWithSet (Has no native function)
	void HandlePostDifferentItemToCompareWithSet(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortItemDetailElementWidget.HandleItemToDetailChangedBP (Has no native function)
	void HandleItemToDetailChangedBP(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortItemDetailElementWidget.HandleItemToCompareWithChangedBP (Has no native function)
	void HandleItemToCompareWithChangedBP(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortItemDetailElementWidget.HandleInspectModeChanged (Has no native function)
	void HandleInspectModeChanged(); // (Event | Protected | BlueprintEvent)
};

