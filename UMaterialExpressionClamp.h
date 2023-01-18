// Class /Script/Engine.MaterialExpressionClamp
// Size: 0x138
class UMaterialExpressionClamp : public UMaterialExpression
{
	struct FExpressionInput Input; // 0xb0 (0x28)
	struct FExpressionInput min; // 0xd8 (0x28)
	struct FExpressionInput max; // 0x100 (0x28)
	struct TEnumAsByte<EClampMode> ClampMode; // 0x128 (0x1)
	unsigned char unreflected_129[0x3]; // 0x129 (0x3) 
	float MinDefault; // 0x12c (0x4)
	float MaxDefault; // 0x130 (0x4)
	unsigned char padding_134[0x4]; // 0x134 (0x4)
};

