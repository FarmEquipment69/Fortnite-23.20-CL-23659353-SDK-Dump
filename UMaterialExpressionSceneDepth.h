// Class /Script/Engine.MaterialExpressionSceneDepth
// Size: 0x118
class UMaterialExpressionSceneDepth : public UMaterialExpression
{
	struct TEnumAsByte<EMaterialSceneAttributeInputMode> InputMode; // 0xb0 (0x1)
	unsigned char unreflected_b1[0x7]; // 0xb1 (0x7) 
	struct FExpressionInput Input; // 0xb8 (0x28)
	struct FExpressionInput Coordinates; // 0xe0 (0x28)
	struct FVector2D ConstInput; // 0x108 (0x10)
};

