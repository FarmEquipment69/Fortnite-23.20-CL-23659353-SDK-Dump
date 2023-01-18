// Class /Script/Engine.MaterialExpressionBlendMaterialAttributes
// Size: 0x140
class UMaterialExpressionBlendMaterialAttributes : public UMaterialExpression
{
	struct FMaterialAttributesInput A; // 0xb0 (0x30)
	struct FMaterialAttributesInput B; // 0xe0 (0x30)
	struct FExpressionInput Alpha; // 0x110 (0x28)
	struct TEnumAsByte<EMaterialAttributeBlend> PixelAttributeBlendType; // 0x138 (0x1)
	struct TEnumAsByte<EMaterialAttributeBlend> VertexAttributeBlendType; // 0x139 (0x1)
	unsigned char padding_13a[0x6]; // 0x13a (0x6)
};

