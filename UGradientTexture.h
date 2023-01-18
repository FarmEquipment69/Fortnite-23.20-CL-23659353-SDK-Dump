// Class /Script/HmxGraphics.GradientTexture
// Size: 0x448
class UGradientTexture : public UHmxTextureBase
{
	bool SpecifyPerChannelGradients; // 0x150 (0x1)
	unsigned char unreflected_151[0x7]; // 0x151 (0x7) 
	struct FColorGradient ColorGradient; // 0x158 (0xf0)
	struct FGrayscaleGradient Red; // 0x248 (0x80)
	struct FGrayscaleGradient Green; // 0x2c8 (0x80)
	struct FGrayscaleGradient Blue; // 0x348 (0x80)
	struct FGrayscaleGradient Alpha; // 0x3c8 (0x80)
};

