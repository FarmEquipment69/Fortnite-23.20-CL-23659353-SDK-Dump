// Class /Script/Engine.MaterialExpressionSmoothStep
// Size: 0x138
class UMaterialExpressionSmoothStep : public UMaterialExpression
{
	struct FExpressionInput min; // 0xb0 (0x28)
	struct FExpressionInput max; // 0xd8 (0x28)
	struct FExpressionInput Value; // 0x100 (0x28)
	float ConstMin; // 0x128 (0x4)
	float ConstMax; // 0x12c (0x4)
	float ConstValue; // 0x130 (0x4)
	unsigned char padding_134[0x4]; // 0x134 (0x4)
};

