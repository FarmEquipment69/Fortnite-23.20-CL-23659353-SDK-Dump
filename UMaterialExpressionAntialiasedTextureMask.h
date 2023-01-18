// Class /Script/Engine.MaterialExpressionAntialiasedTextureMask
// Size: 0x240
class UMaterialExpressionAntialiasedTextureMask : public UMaterialExpressionTextureSampleParameter2D
{
	float Threshold; // 0x238 (0x4)
	struct TEnumAsByte<ETextureColorChannel> Channel; // 0x23c (0x1)
	unsigned char padding_23d[0x3]; // 0x23d (0x3)
};

