// Class /Script/CommonUI.CommonRichTextBlock
// Size: 0x840
class UCommonRichTextBlock : public URichTextBlock
{
	enum ERichTextInlineIconDisplayMode InlineIconDisplayMode; // 0x800 (0x1)
	bool bTintInlineIcon; // 0x801 (0x1)
	unsigned char unreflected_802[0x6]; // 0x802 (0x6) 
	class UClass* DefaultTextStyleOverrideClass; // 0x808 (0x8)
	float MobileTextBlockScale; // 0x810 (0x4)
	unsigned char unreflected_814[0x4]; // 0x814 (0x4) 
	class UClass* ScrollStyle; // 0x818 (0x8)
	bool bIsScrollingEnabled; // 0x820 (0x1)
	bool bDisplayAllCaps; // 0x821 (0x1)
	bool bAutoCollapseWithEmptyText; // 0x822 (0x1)
	unsigned char padding_823[0x1d]; // 0x823 (0x1d)

	/* Functions */

	// Function /Script/CommonUI.CommonRichTextBlock.SetScrollingEnabled (Underlying native function: SetScrollingEnabled 0x298e63c)
	void SetScrollingEnabled(bool& bInIsScrollingEnabled); // (Final | Native | Public | BlueprintCallable)
};

