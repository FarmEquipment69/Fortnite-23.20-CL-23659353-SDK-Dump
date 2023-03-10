// ScriptStruct /Script/Engine.FontImportOptionsData
// Size: 0xb0
struct FFontImportOptionsData
{
	struct FString FontName; // 0x0 (0x10)
	float Height; // 0x10 (0x4)
	unsigned char bEnableAntialiasing; // 0x14 (0x1)
	unsigned char bEnableBold; // 0x14 (0x1)
	unsigned char bEnableItalic; // 0x14 (0x1)
	unsigned char bEnableUnderline; // 0x14 (0x1)
	unsigned char bAlphaOnly; // 0x14 (0x1)
	unsigned char unreflected_15[0x3]; // 0x15 (0x3) 
	struct TEnumAsByte<EFontImportCharacterSet> CharacterSet; // 0x18 (0x1)
	unsigned char unreflected_19[0x7]; // 0x19 (0x7) 
	struct FString Chars; // 0x20 (0x10)
	struct FString UnicodeRange; // 0x30 (0x10)
	struct FString CharsFilePath; // 0x40 (0x10)
	struct FString CharsFileWildcard; // 0x50 (0x10)
	unsigned char bCreatePrintableOnly; // 0x60 (0x1)
	unsigned char bIncludeASCIIRange; // 0x60 (0x1)
	unsigned char unreflected_61[0x3]; // 0x61 (0x3) 
	struct FLinearColor ForegroundColor; // 0x64 (0x10)
	unsigned char bEnableDropShadow; // 0x74 (0x1)
	unsigned char unreflected_75[0x3]; // 0x75 (0x3) 
	int TexturePageWidth; // 0x78 (0x4)
	int TexturePageMaxHeight; // 0x7c (0x4)
	int XPadding; // 0x80 (0x4)
	int YPadding; // 0x84 (0x4)
	int ExtendBoxTop; // 0x88 (0x4)
	int ExtendBoxBottom; // 0x8c (0x4)
	int ExtendBoxRight; // 0x90 (0x4)
	int ExtendBoxLeft; // 0x94 (0x4)
	unsigned char bEnableLegacyMode; // 0x98 (0x1)
	unsigned char unreflected_99[0x3]; // 0x99 (0x3) 
	int Kerning; // 0x9c (0x4)
	unsigned char bUseDistanceFieldAlpha; // 0xa0 (0x1)
	unsigned char unreflected_a1[0x3]; // 0xa1 (0x3) 
	int DistanceFieldScaleFactor; // 0xa4 (0x4)
	float DistanceFieldScanRadiusScale; // 0xa8 (0x4)
	unsigned char padding_ac[0x4]; // 0xac (0x4)
};

