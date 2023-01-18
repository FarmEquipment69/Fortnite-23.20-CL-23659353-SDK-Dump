// Class /Script/UMG.ScrollBar
// Size: 0x870
class UScrollBar : public UWidget
{
	unsigned char unreflected_148[0x8]; // 0x148 (0x8) 
	struct FScrollBarStyle WidgetStyle; // 0x150 (0x6e0)
	bool bAlwaysShowScrollbar; // 0x830 (0x1)
	bool bAlwaysShowScrollbarTrack; // 0x831 (0x1)
	struct TEnumAsByte<EOrientation> Orientation; // 0x832 (0x1)
	unsigned char unreflected_833[0x5]; // 0x833 (0x5) 
	struct FVector2D Thickness; // 0x838 (0x10)
	struct FMargin Padding; // 0x848 (0x10)
	unsigned char padding_858[0x18]; // 0x858 (0x18)

	/* Functions */

	// Function /Script/UMG.ScrollBar.SetState (Underlying native function: SetState 0x9b116b4)
	void SetState(float& InOffsetFraction, float& InThumbSizeFraction); // (Final | Native | Public | BlueprintCallable)
};

