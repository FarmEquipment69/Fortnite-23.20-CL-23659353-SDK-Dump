// Class /Script/Engine.MaterialExpressionTextureBase
// Size: 0xc0
class UMaterialExpressionTextureBase : public UMaterialExpression
{
	class UTexture* Texture; // 0xb0 (0x8)
	struct TEnumAsByte<EMaterialSamplerType> SamplerType; // 0xb8 (0x1)
	unsigned char IsDefaultMeshpaintTexture; // 0xb9 (0x1)
	unsigned char padding_ba[0x6]; // 0xba (0x6)
};

