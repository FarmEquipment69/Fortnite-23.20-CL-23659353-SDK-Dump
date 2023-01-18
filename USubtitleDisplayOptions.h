// Class /Script/SubtitlesWidgets.SubtitleDisplayOptions
// Size: 0x1a0
class USubtitleDisplayOptions : public UDataAsset
{
	struct FSlateFontInfo Font; // 0x30 (0x58)
	int DisplayTextSizes[0x5]; // 0x88 (0x4) (ARRAY) 
	struct FLinearColor DisplayTextColors[0x2]; // 0x9c (0x10) (ARRAY) 
	float DisplayBorderSize[0x3]; // 0xbc (0x4) (ARRAY) 
	float DisplayBackgroundOpacity[0x5]; // 0xc8 (0x4) (ARRAY) 
	unsigned char unreflected_dc[0x4]; // 0xdc (0x4) 
	struct FSlateBrush BackgroundBrush; // 0xe0 (0xc0)
};

