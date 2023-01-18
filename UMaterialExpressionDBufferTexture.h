// Class /Script/Engine.MaterialExpressionDBufferTexture
// Size: 0xe0
class UMaterialExpressionDBufferTexture : public UMaterialExpression
{
	struct FExpressionInput Coordinates; // 0xb0 (0x28)
	struct TEnumAsByte<EDBufferTextureId> DBufferTextureId; // 0xd8 (0x1)
	unsigned char padding_d9[0x7]; // 0xd9 (0x7)
};

