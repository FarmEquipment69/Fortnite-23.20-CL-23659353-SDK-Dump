// Class /Script/SaveTheWorldUI.FortCollectionBookGenericRewardWidget
// Size: 0x2a8
class UFortCollectionBookGenericRewardWidget : public UCommonUserWidget
{
	unsigned char bUpdateVisibilityBasedOnRewardExistence; // 0x290 (0x1)
	unsigned char unreflected_291[0x3]; // 0x291 (0x3) 
	enum ESlateVisibility VisibilityWhenNoRewardSpecified; // 0x294 (0x1)
	enum ESlateVisibility VisibilityWhenRewardSpecified; // 0x295 (0x1)
	unsigned char unreflected_296[0x2]; // 0x296 (0x2) 
	class UFortCollectionBookRewardCardWidget* RewardCardWidget; // 0x298 (0x8)
	enum ECollectionBookRewardStatus RewardStatus; // 0x2a0 (0x1)
	unsigned char padding_2a1[0x7]; // 0x2a1 (0x7)

	/* Functions */

	// Function /Script/SaveTheWorldUI.FortCollectionBookGenericRewardWidget.SetRewardStatus (Underlying native function: SetRewardStatus 0x7573b68)
	void SetRewardStatus(enum ECollectionBookRewardStatus& Status); // (Native | Public | BlueprintCallable)

	// Function /Script/SaveTheWorldUI.FortCollectionBookGenericRewardWidget.SetRewards (Underlying native function: SetRewards 0x7573bec)
	void SetRewards(struct FFortRewardInfo& Rewards); // (Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/SaveTheWorldUI.FortCollectionBookGenericRewardWidget.SetCurrentItemToDisplay (Underlying native function: SetCurrentItemToDisplay 0x75734e0)
	void SetCurrentItemToDisplay(class UFortItem*& ItemToDisplay); // (Native | Protected)

	// Function /Script/SaveTheWorldUI.FortCollectionBookGenericRewardWidget.OnRewardStatusChanged (Underlying native function: OnRewardStatusChanged 0x75713e8)
	void OnRewardStatusChanged(enum ECollectionBookRewardStatus& NewStatus); // (Native | Event | Protected | BlueprintEvent)

	// Function /Script/SaveTheWorldUI.FortCollectionBookGenericRewardWidget.HasRewards (Underlying native function: HasRewards 0x756feac)
	bool HasRewards(); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/SaveTheWorldUI.FortCollectionBookGenericRewardWidget.GetRewardStatus (Underlying native function: GetRewardStatus 0x756e070)
	enum ECollectionBookRewardStatus GetRewardStatus(); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/SaveTheWorldUI.FortCollectionBookGenericRewardWidget.ClearRewards (Underlying native function: ClearRewards 0x756d600)
	void ClearRewards(); // (Native | Public | BlueprintCallable)
};

