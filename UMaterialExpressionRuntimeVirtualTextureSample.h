// Class /Script/Engine.MaterialExpressionRuntimeVirtualTextureSample
// Size: 0x138
class UMaterialExpressionRuntimeVirtualTextureSample : public UMaterialExpression
{
	struct FExpressionInput Coordinates; // 0xb0 (0x28)
	struct FExpressionInput WorldPosition; // 0xd8 (0x28)
	struct FExpressionInput MipValue; // 0x100 (0x28)
	class URuntimeVirtualTexture* VirtualTexture; // 0x128 (0x8)
	enum ERuntimeVirtualTextureMaterialType MaterialType; // 0x130 (0x1)
	bool bSinglePhysicalSpace; // 0x131 (0x1)
	bool bAdaptive; // 0x132 (0x1)
	bool bEnableFeedback; // 0x133 (0x1)
	struct TEnumAsByte<ERuntimeVirtualTextureMipValueMode> MipValueMode; // 0x134 (0x1)
	struct TEnumAsByte<ERuntimeVirtualTextureTextureAddressMode> TextureAddressMode; // 0x135 (0x1)
	unsigned char padding_136[0x2]; // 0x136 (0x2)
};

