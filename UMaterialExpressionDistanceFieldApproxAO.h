// Class /Script/Engine.MaterialExpressionDistanceFieldApproxAO
// Size: 0x168
class UMaterialExpressionDistanceFieldApproxAO : public UMaterialExpression
{
	struct FExpressionInput Position; // 0xb0 (0x28)
	struct FExpressionInput Normal; // 0xd8 (0x28)
	struct FExpressionInput BaseDistance; // 0x100 (0x28)
	float BaseDistanceDefault; // 0x128 (0x4)
	unsigned char unreflected_12c[0x4]; // 0x12c (0x4) 
	struct FExpressionInput Radius; // 0x130 (0x28)
	float RadiusDefault; // 0x158 (0x4)
	uint32_t numSteps; // 0x15c (0x4)
	float StepScaleDefault; // 0x160 (0x4)
	unsigned char padding_164[0x4]; // 0x164 (0x4)
};

