// Class /Script/Engine.MaterialExpressionSceneDepthWithoutWater
// Size: 0xf8
class UMaterialExpressionSceneDepthWithoutWater : public UMaterialExpression
{
	struct TEnumAsByte<EMaterialSceneAttributeInputMode> InputMode; // 0xb0 (0x1)
	unsigned char unreflected_b1[0x7]; // 0xb1 (0x7) 
	struct FExpressionInput Input; // 0xb8 (0x28)
	struct FVector2D ConstInput; // 0xe0 (0x10)
	float FallbackDepth; // 0xf0 (0x4)
	unsigned char padding_f4[0x4]; // 0xf4 (0x4)
};

