// Class /Script/FortniteUI.FortTierIndicator
// Size: 0x168
class UFortTierIndicator : public UWidget
{
	struct TWeakObjectPtr<class UFortItem> ItemToRepresent; // 0x148 (0x8)
	struct TEnumAsByte<EFortBrushSize> BrushSize; // 0x150 (0x1)
	unsigned char unreflected_151[0x3]; // 0x151 (0x3) 
	float InterPipPadding; // 0x154 (0x4)
	unsigned char padding_158[0x10]; // 0x158 (0x10)

	/* Functions */

	// Function /Script/FortniteUI.FortTierIndicator.SetPreviewState (Underlying native function: SetPreviewState 0xa84ba84)
	void SetPreviewState(int& TierIncrease); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortTierIndicator.SetItemToRepresent (Underlying native function: SetItemToRepresent 0xa84aaec)
	void SetItemToRepresent(class UFortItem*& ItemToRepresent); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortTierIndicator.SetInterPipPadding (Underlying native function: SetInterPipPadding 0xa849afc)
	void SetInterPipPadding(float& InterPipPadding); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortTierIndicator.SetBrushSize (Underlying native function: SetBrushSize 0xa8495d8)
	void SetBrushSize(struct TEnumAsByte<EFortBrushSize>& BrushSize); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortTierIndicator.ClearPreviewState (Underlying native function: ClearPreviewState 0xa84640c)
	void ClearPreviewState(); // (Final | Native | Public | BlueprintCallable)
};

