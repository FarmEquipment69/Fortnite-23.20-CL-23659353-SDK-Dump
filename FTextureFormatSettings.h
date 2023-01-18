// ScriptStruct /Script/Engine.TextureFormatSettings
// Size: 0x2
struct FTextureFormatSettings
{
	struct TEnumAsByte<TextureCompressionSettings> CompressionSettings; // 0x0 (0x1)
	unsigned char CompressionNoAlpha; // 0x1 (0x1)
	unsigned char CompressionForceAlpha; // 0x1 (0x1)
	unsigned char CompressionNone; // 0x1 (0x1)
	unsigned char CompressionYCoCg; // 0x1 (0x1)
	unsigned char SRGB; // 0x1 (0x1)
};

