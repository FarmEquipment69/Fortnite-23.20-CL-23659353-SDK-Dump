// Class /Script/Engine.MaterialExpressionSobol
// Size: 0x140
class UMaterialExpressionSobol : public UMaterialExpression
{
	struct FExpressionInput Cell; // 0xb0 (0x28)
	struct FExpressionInput Index; // 0xd8 (0x28)
	struct FExpressionInput Seed; // 0x100 (0x28)
	uint32_t ConstIndex; // 0x128 (0x4)
	unsigned char unreflected_12c[0x4]; // 0x12c (0x4) 
	struct FVector2D ConstSeed; // 0x130 (0x10)
};

