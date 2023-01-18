// Class /Script/UMG.WrapBox
// Size: 0x188
class UWrapBox : public UPanelWidget
{
	struct FVector2D InnerSlotPadding; // 0x160 (0x10)
	float WrapSize; // 0x170 (0x4)
	bool bExplicitWrapSize; // 0x174 (0x1)
	struct TEnumAsByte<EHorizontalAlignment> HorizontalAlignment; // 0x175 (0x1)
	struct TEnumAsByte<EOrientation> Orientation; // 0x176 (0x1)
	unsigned char padding_177[0x11]; // 0x177 (0x11)

	/* Functions */

	// Function /Script/UMG.WrapBox.SetInnerSlotPadding (Underlying native function: SetInnerSlotPadding 0x9b0ed94)
	void SetInnerSlotPadding(struct FVector2D& InPadding); // (Final | Native | Public | HasDefaults | BlueprintCallable)

	// Function /Script/UMG.WrapBox.SetHorizontalAlignment (Underlying native function: SetHorizontalAlignment 0x9b0ebfc)
	void SetHorizontalAlignment(struct TEnumAsByte<EHorizontalAlignment>& InHorizontalAlignment); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/UMG.WrapBox.AddChildToWrapBox (Underlying native function: AddChildToWrapBox 0x9b09b04)
	class UWrapBoxSlot* AddChildToWrapBox(class UWidget*& Content); // (Final | Native | Public | BlueprintCallable)
};

