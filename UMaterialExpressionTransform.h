// Class /Script/Engine.MaterialExpressionTransform
// Size: 0xe0
class UMaterialExpressionTransform : public UMaterialExpression
{
	struct FExpressionInput Input; // 0xb0 (0x28)
	struct TEnumAsByte<EMaterialVectorCoordTransformSource> TransformSourceType; // 0xd8 (0x1)
	struct TEnumAsByte<EMaterialVectorCoordTransform> TransformType; // 0xd9 (0x1)
	unsigned char padding_da[0x6]; // 0xda (0x6)
};

