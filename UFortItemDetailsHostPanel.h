// Class /Script/FortniteUI.FortItemDetailsHostPanel
// Size: 0x368
class UFortItemDetailsHostPanel : public UCommonUserWidget
{
	struct FMulticastInlineDelegate OnItemChanged; // 0x290 (0x10)
	struct TWeakObjectPtr<class UFortItem> ItemToDetail; // 0x2a0 (0x8)
	unsigned char unreflected_2a8[0x10]; // 0x2a8 (0x10) 
	struct TWeakObjectPtr<class UFortItem> ItemToCompareWith; // 0x2b8 (0x8)
	unsigned char unreflected_2c0[0x10]; // 0x2c0 (0x10) 
	bool bShouldPreviewUpgradingItem; // 0x2d0 (0x1)
	unsigned char unreflected_2d1[0x3]; // 0x2d1 (0x3) 
	int UpgradeLevelDelta; // 0x2d4 (0x4)
	class UScrollBox* ScrollBox; // 0x2d8 (0x8)
	class UNamedSlot* DetailsContainerSlotWidget; // 0x2e0 (0x8)
	class UCommonBorder* HighRarityBorder; // 0x2e8 (0x8)
	struct TScriptInterface<class IFortItemViewContextInterface> ItemViewContext; // 0x2f0 (0x10)
	enum EFortItemInspectionMode CurrentInspectMode; // 0x300 (0x1)
	unsigned char unreflected_301[0x27]; // 0x301 (0x27) 
	int QuantityOverride; // 0x328 (0x4)
	unsigned char unreflected_32c[0x4]; // 0x32c (0x4) 
	class UFortTooltipLoadingWrapper* ItemToDetailLoadingWrapper; // 0x330 (0x8)
	class UFortTooltipLoadingWrapper* ItemToCompareLoadingWrapper; // 0x338 (0x8)
	class UCommonLoadGuard* ItemToDetailLoadGuard; // 0x340 (0x8)
	class UCommonLoadGuard* ItemToCompareLoadGuard; // 0x348 (0x8)
	class UCommonBorder* BorderDetails; // 0x350 (0x8)
	bool bAsyncLoadTooltipData; // 0x358 (0x1)
	bool bIsUpdatingSuspended; // 0x359 (0x1)
	unsigned char padding_35a[0xe]; // 0x35a (0xe)

	/* Functions */

	// Function /Script/FortniteUI.FortItemDetailsHostPanel.ShouldPreviewUpgradingItem (Underlying native function: ShouldPreviewUpgradingItem 0xa8276d4)
	void ShouldPreviewUpgradingItem(bool& Value); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortItemDetailsHostPanel.SetUpgradeLevelDelta (Underlying native function: SetUpgradeLevelDelta 0xa827648)
	void SetUpgradeLevelDelta(int& InDelta); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortItemDetailsHostPanel.SetScrollWidget (Underlying native function: SetScrollWidget 0xa8272f0)
	void SetScrollWidget(); // (Final | 0x00000002 | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortItemDetailsHostPanel.SetQuantityOverride (Underlying native function: SetQuantityOverride 0xa827270)
	void SetQuantityOverride(int& QuantityOverride); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortItemDetailsHostPanel.SetItemViewContext (Underlying native function: SetItemViewContext 0xa826f90)
	void SetItemViewContext(struct TScriptInterface<class IFortItemViewContextInterface>& ItemViewContext); // (Final | 0x00000002 | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteUI.FortItemDetailsHostPanel.SetItemToDetail (Underlying native function: SetItemToDetail 0x1a6def4)
	void SetItemToDetail(class UFortItem*& ItemToDetail); // (Final | 0x00000002 | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortItemDetailsHostPanel.SetItemToCompareWith (Underlying native function: SetItemToCompareWith 0xa826d40)
	void SetItemToCompareWith(class UFortItem*& ItemToCompareWith); // (Final | 0x00000002 | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortItemDetailsHostPanel.SetIsUpdatingSuspended (Underlying native function: SetIsUpdatingSuspended 0xa826a28)
	void SetIsUpdatingSuspended(bool& bValue); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortItemDetailsHostPanel.SetInspectMode (Underlying native function: SetInspectMode 0xa8269a8)
	void SetInspectMode(enum EFortItemInspectionMode& InspectMode); // (Final | Native | Public | BlueprintCallable)

	// DelegateFunction /Script/FortniteUI.FortItemDetailsHostPanel.OnItemChangedDelegate__DelegateSignature (Has no native function)
	void OnItemChangedDelegateDelegateSignature(); // (MulticastDelegate | Public | Delegate)

	// Function /Script/FortniteUI.FortItemDetailsHostPanel.HandleUpgradeLevelDeltaChangedBP (Has no native function)
	void HandleUpgradeLevelDeltaChangedBP(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortItemDetailsHostPanel.HandleShouldPreviewUpgradingItemChangedBP (Has no native function)
	void HandleShouldPreviewUpgradingItemChangedBP(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortItemDetailsHostPanel.HandleQuantityOverrideChanged (Has no native function)
	void HandleQuantityOverrideChanged(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortItemDetailsHostPanel.HandleItemToDetailTooltipAssetsLoading (Has no native function)
	void HandleItemToDetailTooltipAssetsLoading(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortItemDetailsHostPanel.HandleItemToDetailTooltipAssetsLoaded (Underlying native function: HandleItemToDetailTooltipAssetsLoaded 0x87b42ec)
	void HandleItemToDetailTooltipAssetsLoaded(); // (Final | Native | Private)

	// Function /Script/FortniteUI.FortItemDetailsHostPanel.HandleItemToDetailChangedBP (Has no native function)
	void HandleItemToDetailChangedBP(); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteUI.FortItemDetailsHostPanel.HandleItemToCompareTooltipAssetsLoading (Has no native function)
	void HandleItemToCompareTooltipAssetsLoading(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortItemDetailsHostPanel.HandleItemToCompareTooltipAssetsLoaded (Underlying native function: HandleItemToCompareTooltipAssetsLoaded 0xa82612c)
	void HandleItemToCompareTooltipAssetsLoaded(); // (Final | Native | Private)

	// Function /Script/FortniteUI.FortItemDetailsHostPanel.HandleItemRefundComplete (Underlying native function: HandleItemRefundComplete 0xa825f30)
	void HandleItemRefundComplete(bool& bWasSuccessful, struct FString& ConvertedItemInstanceId, struct TArray<struct FFortItemInstanceQuantityPair>& ItemsQuantities); // (Final | Native | Private | HasOutParms)

	// Function /Script/FortniteUI.FortItemDetailsHostPanel.HandleItemRarityUpgradeComplete (Underlying native function: HandleItemRarityUpgradeComplete 0xa825f30)
	void HandleItemRarityUpgradeComplete(bool& bWasSuccessful, struct FString& ConvertedItemInstanceId, struct TArray<struct FFortItemInstanceQuantityPair>& ItemsQuantities); // (Final | Native | Private | HasOutParms)

	// Function /Script/FortniteUI.FortItemDetailsHostPanel.HandleItemEvolutionComplete (Underlying native function: HandleItemEvolutionComplete 0xa825f30)
	void HandleItemEvolutionComplete(bool& bWasSuccessful, struct FString& ConvertedItemInstanceId, struct TArray<struct FFortItemInstanceQuantityPair>& ItemsQuantities); // (Final | Native | Private | HasOutParms)

	// Function /Script/FortniteUI.FortItemDetailsHostPanel.HandleInspectModeChanged (Has no native function)
	void HandleInspectModeChanged(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortItemDetailsHostPanel.HandleDifferentItemToDetailSet (Has no native function)
	void HandleDifferentItemToDetailSet(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortItemDetailsHostPanel.HandleDifferentItemToCompareSet (Has no native function)
	void HandleDifferentItemToCompareSet(); // (Event | Protected | BlueprintEvent)
};

