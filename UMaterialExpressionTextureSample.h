// Class /Script/Engine.MaterialExpressionTextureSample
// Size: 0x1b8
class UMaterialExpressionTextureSample : public UMaterialExpressionTextureBase
{
	struct FExpressionInput Coordinates; // 0xc0 (0x28)
	struct FExpressionInput TextureObject; // 0xe8 (0x28)
	struct FExpressionInput MipValue; // 0x110 (0x28)
	struct FExpressionInput CoordinatesDX; // 0x138 (0x28)
	struct FExpressionInput CoordinatesDY; // 0x160 (0x28)
	struct FExpressionInput AutomaticViewMipBiasValue; // 0x188 (0x28)
	struct TEnumAsByte<ETextureMipValueMode> MipValueMode; // 0x1b0 (0x1)
	struct TEnumAsByte<ESamplerSourceMode> SamplerSource; // 0x1b1 (0x1)
	unsigned char AutomaticViewMipBias; // 0x1b2 (0x1)
	unsigned char ConstCoordinate; // 0x1b3 (0x1)
	int ConstMipValue; // 0x1b4 (0x4)
};

