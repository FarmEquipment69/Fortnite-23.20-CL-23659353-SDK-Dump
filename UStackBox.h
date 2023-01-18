// Class /Script/UMG.StackBox
// Size: 0x178
class UStackBox : public UPanelWidget
{
	struct TEnumAsByte<EOrientation> Orientation; // 0x160 (0x1)
	unsigned char padding_161[0x17]; // 0x161 (0x17)

	/* Functions */

	// Function /Script/UMG.StackBox.ReplaceStackBoxChildAt (Underlying native function: ReplaceStackBoxChildAt 0x9b0c44c)
	bool ReplaceStackBoxChildAt(int& Index, class UWidget*& Content); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/UMG.StackBox.AddChildToStackBox (Underlying native function: AddChildToStackBox 0x9b098a4)
	class UStackBoxSlot* AddChildToStackBox(class UWidget*& Content); // (Final | Native | Public | BlueprintCallable)
};

