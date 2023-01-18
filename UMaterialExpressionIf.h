// Class /Script/Engine.MaterialExpressionIf
// Size: 0x188
class UMaterialExpressionIf : public UMaterialExpression
{
	struct FExpressionInput A; // 0xb0 (0x28)
	struct FExpressionInput B; // 0xd8 (0x28)
	struct FExpressionInput AGreaterThanB; // 0x100 (0x28)
	struct FExpressionInput AEqualsB; // 0x128 (0x28)
	struct FExpressionInput ALessThanB; // 0x150 (0x28)
	float EqualsThreshold; // 0x178 (0x4)
	float ConstB; // 0x17c (0x4)
	float ConstAEqualsB; // 0x180 (0x4)
	unsigned char padding_184[0x4]; // 0x184 (0x4)
};

