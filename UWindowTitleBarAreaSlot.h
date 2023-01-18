// Class /Script/UMG.WindowTitleBarAreaSlot
// Size: 0x60
class UWindowTitleBarAreaSlot : public UPanelSlot
{
	struct FMargin Padding; // 0x38 (0x10)
	struct TEnumAsByte<EHorizontalAlignment> HorizontalAlignment; // 0x48 (0x1)
	struct TEnumAsByte<EVerticalAlignment> VerticalAlignment; // 0x49 (0x1)
	unsigned char padding_4a[0x16]; // 0x4a (0x16)

	/* Functions */

	// Function /Script/UMG.WindowTitleBarAreaSlot.SetVerticalAlignment (Underlying native function: SetVerticalAlignment 0x9b12814)
	void SetVerticalAlignment(struct TEnumAsByte<EVerticalAlignment>& InVerticalAlignment); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/UMG.WindowTitleBarAreaSlot.SetPadding (Underlying native function: SetPadding 0x9b106c4)
	void SetPadding(struct FMargin& InPadding); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/UMG.WindowTitleBarAreaSlot.SetHorizontalAlignment (Underlying native function: SetHorizontalAlignment 0x9b0eb78)
	void SetHorizontalAlignment(struct TEnumAsByte<EHorizontalAlignment>& InHorizontalAlignment); // (Final | Native | Public | BlueprintCallable)
};

