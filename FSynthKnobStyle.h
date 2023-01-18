// ScriptStruct /Script/Synthesis.SynthKnobStyle
// Size: 0x320
struct FSynthKnobStyle : FSlateWidgetStyle
{
	unsigned char unreflected_8[0x8]; // 0x8 (0x8) 
	struct FSlateBrush LargeKnob; // 0x10 (0xc0)
	struct FSlateBrush LargeKnobOverlay; // 0xd0 (0xc0)
	struct FSlateBrush MediumKnob; // 0x190 (0xc0)
	struct FSlateBrush MediumKnobOverlay; // 0x250 (0xc0)
	float MinValueAngle; // 0x310 (0x4)
	float MaxValueAngle; // 0x314 (0x4)
	enum ESynthKnobSize KnobSize; // 0x318 (0x1)
	unsigned char padding_319[0x7]; // 0x319 (0x7)
};

