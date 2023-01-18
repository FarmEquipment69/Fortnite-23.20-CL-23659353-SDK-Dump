// Class /Script/SubtitlesWidgets.SubtitleDisplay
// Size: 0x560
class USubtitleDisplay : public UWidget
{
	struct FSubtitleFormat Format; // 0x148 (0x4)
	unsigned char unreflected_14c[0x4]; // 0x14c (0x4) 
	class USubtitleDisplayOptions* Options; // 0x150 (0x8)
	float WrapTextAt; // 0x158 (0x4)
	bool bPreviewMode; // 0x15c (0x1)
	unsigned char unreflected_15d[0x3]; // 0x15d (0x3) 
	struct FText PreviewText; // 0x160 (0x18)
	unsigned char unreflected_178[0x8]; // 0x178 (0x8) 
	struct FTextBlockStyle GeneratedStyle; // 0x180 (0x310)
	struct FSlateBrush GeneratedBackgroundBorder; // 0x490 (0xc0)
	unsigned char padding_550[0x10]; // 0x550 (0x10)

	/* Functions */

	// Function /Script/SubtitlesWidgets.SubtitleDisplay.HasSubtitles (Underlying native function: HasSubtitles 0x7520d8c)
	bool HasSubtitles(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

