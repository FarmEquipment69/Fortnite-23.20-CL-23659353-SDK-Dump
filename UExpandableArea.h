// Class /Script/UMG.ExpandableArea
// Size: 0x420
class UExpandableArea : public UWidget
{
	unsigned char unreflected_148[0x8]; // 0x148 (0x8) 
	struct FExpandableAreaStyle style; // 0x150 (0x1a0)
	struct FSlateBrush BorderBrush; // 0x2f0 (0xc0)
	struct FSlateColor BorderColor; // 0x3b0 (0x14)
	bool bIsExpanded; // 0x3c4 (0x1)
	unsigned char unreflected_3c5[0x3]; // 0x3c5 (0x3) 
	float MaxHeight; // 0x3c8 (0x4)
	struct FMargin HeaderPadding; // 0x3cc (0x10)
	struct FMargin AreaPadding; // 0x3dc (0x10)
	unsigned char unreflected_3ec[0x4]; // 0x3ec (0x4) 
	struct FMulticastInlineDelegate OnExpansionChanged; // 0x3f0 (0x10)
	class UWidget* HeaderContent; // 0x400 (0x8)
	class UWidget* BodyContent; // 0x408 (0x8)
	unsigned char padding_410[0x10]; // 0x410 (0x10)

	/* Functions */

	// Function /Script/UMG.ExpandableArea.SetIsExpanded_Animated (Underlying native function: SetIsExpanded_Animated 0x9b0eea8)
	void SetIsExpandedAnimated(bool& IsExpanded); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/UMG.ExpandableArea.SetIsExpanded (Underlying native function: SetIsExpanded 0x9b0ee1c)
	void SetIsExpanded(bool& IsExpanded); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/UMG.ExpandableArea.GetIsExpanded (Underlying native function: GetIsExpanded 0x9b0ac14)
	bool GetIsExpanded(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

