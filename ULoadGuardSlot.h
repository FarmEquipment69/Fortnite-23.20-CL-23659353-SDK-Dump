// Class /Script/CommonUI.LoadGuardSlot
// Size: 0x60
class ULoadGuardSlot : public UPanelSlot
{
	struct FMargin Padding; // 0x38 (0x10)
	struct TEnumAsByte<EHorizontalAlignment> HorizontalAlignment; // 0x48 (0x1)
	struct TEnumAsByte<EVerticalAlignment> VerticalAlignment; // 0x49 (0x1)
	unsigned char padding_4a[0x16]; // 0x4a (0x16)

	/* Functions */

	// Function /Script/CommonUI.LoadGuardSlot.SetVerticalAlignment (Underlying native function: SetVerticalAlignment 0x6a4ec8c)
	void SetVerticalAlignment(struct TEnumAsByte<EVerticalAlignment>& InVerticalAlignment); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/CommonUI.LoadGuardSlot.SetPadding (Underlying native function: SetPadding 0x6a4e2d0)
	void SetPadding(struct FMargin& InPadding); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/CommonUI.LoadGuardSlot.SetHorizontalAlignment (Underlying native function: SetHorizontalAlignment 0x6a4d5b0)
	void SetHorizontalAlignment(struct TEnumAsByte<EHorizontalAlignment>& InHorizontalAlignment); // (Final | Native | Public | BlueprintCallable)
};

