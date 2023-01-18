// ScriptStruct /Script/Engine.LensBloomSettings
// Size: 0xc0
struct FLensBloomSettings
{
	struct FGaussianSumBloomSettings GaussianSum; // 0x0 (0x84)
	unsigned char unreflected_84[0x4]; // 0x84 (0x4) 
	struct FConvolutionBloomSettings Convolution; // 0x88 (0x30)
	struct TEnumAsByte<EBloomMethod> Method; // 0xb8 (0x1)
	unsigned char padding_b9[0x7]; // 0xb9 (0x7)
};

