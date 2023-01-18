// Class /Script/CommonUI.CommonTextBlock
// Size: 0x350
class UCommonTextBlock : public UTextBlock
{
	float MobileFontSizeMultiplier; // 0x318 (0x4)
	unsigned char unreflected_31c[0x4]; // 0x31c (0x4) 
	class UClass* style; // 0x320 (0x8)
	class UClass* ScrollStyle; // 0x328 (0x8)
	class UCommonStyleSheet* StyleSheet; // 0x330 (0x8)
	bool bIsScrollingEnabled; // 0x338 (0x1)
	bool bDisplayAllCaps; // 0x339 (0x1)
	bool bAutoCollapseWithEmptyText; // 0x33a (0x1)
	unsigned char padding_33b[0x15]; // 0x33b (0x15)

	/* Functions */

	// Function /Script/CommonUI.CommonTextBlock.SetWrapTextWidth (Underlying native function: SetWrapTextWidth 0x6a4ed0c)
	void SetWrapTextWidth(int& InWrapTextAt); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/CommonUI.CommonTextBlock.SetTextCase (Underlying native function: SetTextCase 0x1bfc25c)
	void SetTextCase(bool& bUseAllCaps); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/CommonUI.CommonTextBlock.SetStyle (Underlying native function: SetStyle 0xfa3a44)
	void SetStyle(class UClass*& InStyle); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/CommonUI.CommonTextBlock.SetScrollingEnabled (Underlying native function: SetScrollingEnabled 0x2817f54)
	void SetScrollingEnabled(bool& bInIsScrollingEnabled); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/CommonUI.CommonTextBlock.SetMobileFontSizeMultiplier (Underlying native function: SetMobileFontSizeMultiplier 0x5202e60)
	void SetMobileFontSizeMultiplier(float& InMobileFontSizeMultiplier); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/CommonUI.CommonTextBlock.SetMargin (Underlying native function: SetMargin 0x6a4e13c)
	void SetMargin(struct FMargin& InMargin); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/CommonUI.CommonTextBlock.SetLineHeightPercentage (Underlying native function: SetLineHeightPercentage 0x6a4ddc8)
	void SetLineHeightPercentage(float& InLineHeightPercentage); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/CommonUI.CommonTextBlock.ResetScrollState (Underlying native function: ResetScrollState 0x217cb30)
	void ResetScrollState(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/CommonUI.CommonTextBlock.GetMobileFontSizeMultiplier (Underlying native function: GetMobileFontSizeMultiplier 0x5202e40)
	float GetMobileFontSizeMultiplier(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/CommonUI.CommonTextBlock.GetMargin (Underlying native function: GetMargin 0x6a4b454)
	struct FMargin GetMargin(); // (Final | Native | Public | BlueprintCallable)
};

