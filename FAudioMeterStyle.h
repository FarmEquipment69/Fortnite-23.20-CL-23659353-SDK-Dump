// ScriptStruct /Script/AudioWidgets.AudioMeterStyle
// Size: 0x480
struct FAudioMeterStyle : FSlateWidgetStyle
{
	unsigned char unreflected_8[0x8]; // 0x8 (0x8) 
	struct FSlateBrush MeterValueImage; // 0x10 (0xc0)
	struct FSlateBrush BackgroundImage; // 0xd0 (0xc0)
	struct FSlateBrush MeterBackgroundImage; // 0x190 (0xc0)
	struct FSlateBrush MeterValueBackgroundImage; // 0x250 (0xc0)
	struct FSlateBrush MeterPeakImage; // 0x310 (0xc0)
	struct FVector2D MeterSize; // 0x3d0 (0x10)
	struct FVector2D MeterPadding; // 0x3e0 (0x10)
	float MeterValuePadding; // 0x3f0 (0x4)
	float PeakValueWidth; // 0x3f4 (0x4)
	struct FVector2D ValueRangeDb; // 0x3f8 (0x10)
	bool bShowScale; // 0x408 (0x1)
	bool bScaleSide; // 0x409 (0x1)
	unsigned char unreflected_40a[0x2]; // 0x40a (0x2) 
	float ScaleHashOffset; // 0x40c (0x4)
	float ScaleHashWidth; // 0x410 (0x4)
	float ScaleHashHeight; // 0x414 (0x4)
	int DecibelsPerHash; // 0x418 (0x4)
	unsigned char unreflected_41c[0x4]; // 0x41c (0x4) 
	struct FSlateFontInfo Font; // 0x420 (0x58)
	unsigned char padding_478[0x8]; // 0x478 (0x8)
};

