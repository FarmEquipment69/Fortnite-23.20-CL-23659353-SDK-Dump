// Class /Script/FortniteUI.FortLevelIndicator
// Size: 0x1d0
class UFortLevelIndicator : public UWidget
{
	struct TWeakObjectPtr<class UFortItem> ItemToRepresent; // 0x148 (0x8)
	struct TWeakObjectPtr<class UFortItem> ItemForComparison; // 0x150 (0x8)
	bool ShouldShowLabel; // 0x158 (0x1)
	unsigned char unreflected_159[0x7]; // 0x159 (0x7) 
	class UClass* TextStyle; // 0x160 (0x8)
	bool ShouldShowMaximumLevel; // 0x168 (0x1)
	unsigned char unreflected_169[0x3]; // 0x169 (0x3) 
	int CurrentLevel; // 0x16c (0x4)
	int MaximumLevel; // 0x170 (0x4)
	bool IsComparingLevels; // 0x174 (0x1)
	struct TEnumAsByte<EFortBrushSize> ComparisonResultIndicatorSize; // 0x175 (0x1)
	unsigned char unreflected_176[0x2]; // 0x176 (0x2) 
	int CurrentLevelForComparison; // 0x178 (0x4)
	int MaximumLevelForComparison; // 0x17c (0x4)
	class UCommonTextBlock* LabelTextBlock; // 0x180 (0x8)
	class UCommonNumericTextBlock* CurrentLevelNumericTextBlock; // 0x188 (0x8)
	unsigned char unreflected_190[0x10]; // 0x190 (0x10) 
	class UCommonTextBlock* DivisionOperatorTextBlock; // 0x1a0 (0x8)
	class UCommonNumericTextBlock* MaximumLevelNumericTextBlock; // 0x1a8 (0x8)
	unsigned char padding_1b0[0x20]; // 0x1b0 (0x20)

	/* Functions */

	// Function /Script/FortniteUI.FortLevelIndicator.SetShouldShowMaximumLevel (Underlying native function: SetShouldShowMaximumLevel 0xa84c170)
	void SetShouldShowMaximumLevel(bool& InShouldShowMaximumLevel); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortLevelIndicator.SetItemToRepresent (Underlying native function: SetItemToRepresent 0xa84a800)
	void SetItemToRepresent(class UFortItem*& ItemToRepresent); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortLevelIndicator.SetItemForComparison (Underlying native function: SetItemForComparison 0xa849d54)
	void SetItemForComparison(class UFortItem*& ItemForComparison); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortLevelIndicator.HandleItemToRepresentChanged (Underlying native function: HandleItemToRepresentChanged 0xa847f34)
	void HandleItemToRepresentChanged(bool& bItemChanged, bool& bAmmoChanged, bool& bIngredientsChanged); // (Final | Native | Private)

	// Function /Script/FortniteUI.FortLevelIndicator.HandleItemForComparisonChanged (Underlying native function: HandleItemForComparisonChanged 0xa847f34)
	void HandleItemForComparisonChanged(bool& bItemChanged, bool& bAmmoChanged, bool& bIngredientsChanged); // (Final | Native | Private)
};

