// Class /Script/UMG.WindowTitleBarArea
// Size: 0x180
class UWindowTitleBarArea : public UContentWidget
{
	bool bWindowButtonsEnabled; // 0x160 (0x1)
	bool bDoubleClickTogglesFullscreen; // 0x161 (0x1)
	unsigned char padding_162[0x1e]; // 0x162 (0x1e)

	/* Functions */

	// Function /Script/UMG.WindowTitleBarArea.SetVerticalAlignment (Underlying native function: SetVerticalAlignment 0x9b12794)
	void SetVerticalAlignment(struct TEnumAsByte<EVerticalAlignment>& InVerticalAlignment); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/UMG.WindowTitleBarArea.SetPadding (Underlying native function: SetPadding 0x9b10638)
	void SetPadding(struct FMargin& InPadding); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/UMG.WindowTitleBarArea.SetHorizontalAlignment (Underlying native function: SetHorizontalAlignment 0x9b0eaf8)
	void SetHorizontalAlignment(struct TEnumAsByte<EHorizontalAlignment>& InHorizontalAlignment); // (Final | Native | Public | BlueprintCallable)
};

