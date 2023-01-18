// Class /Script/UMG.UniformGridPanel
// Size: 0x188
class UUniformGridPanel : public UPanelWidget
{
	struct FMargin SlotPadding; // 0x160 (0x10)
	float MinDesiredSlotWidth; // 0x170 (0x4)
	float MinDesiredSlotHeight; // 0x174 (0x4)
	unsigned char padding_178[0x10]; // 0x178 (0x10)

	/* Functions */

	// Function /Script/UMG.UniformGridPanel.SetSlotPadding (Underlying native function: SetSlotPadding 0x9b11628)
	void SetSlotPadding(struct FMargin& InSlotPadding); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/UMG.UniformGridPanel.SetMinDesiredSlotWidth (Underlying native function: SetMinDesiredSlotWidth 0x9b0f84c)
	void SetMinDesiredSlotWidth(float& InMinDesiredSlotWidth); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/UMG.UniformGridPanel.SetMinDesiredSlotHeight (Underlying native function: SetMinDesiredSlotHeight 0x9b0f7c8)
	void SetMinDesiredSlotHeight(float& InMinDesiredSlotHeight); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/UMG.UniformGridPanel.AddChildToUniformGrid (Underlying native function: AddChildToUniformGrid 0x2195ba0)
	class UUniformGridSlot* AddChildToUniformGrid(class UWidget*& Content, int& InRow, int& InColumn); // (Final | Native | Public | BlueprintCallable)
};

