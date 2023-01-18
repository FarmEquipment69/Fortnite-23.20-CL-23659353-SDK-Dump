// Class /Script/Engine.MaterialExpressionRotateAboutAxis
// Size: 0x158
class UMaterialExpressionRotateAboutAxis : public UMaterialExpression
{
	struct FExpressionInput NormalizedRotationAxis; // 0xb0 (0x28)
	struct FExpressionInput RotationAngle; // 0xd8 (0x28)
	struct FExpressionInput PivotPoint; // 0x100 (0x28)
	struct FExpressionInput Position; // 0x128 (0x28)
	float Period; // 0x150 (0x4)
	unsigned char padding_154[0x4]; // 0x154 (0x4)
};

