// Class /Script/Engine.MaterialExpressionBumpOffset
// Size: 0x138
class UMaterialExpressionBumpOffset : public UMaterialExpression
{
	struct FExpressionInput Coordinate; // 0xb0 (0x28)
	struct FExpressionInput Height; // 0xd8 (0x28)
	struct FExpressionInput HeightRatioInput; // 0x100 (0x28)
	float HeightRatio; // 0x128 (0x4)
	float ReferencePlane; // 0x12c (0x4)
	uint32_t ConstCoordinate; // 0x130 (0x4)
	unsigned char padding_134[0x4]; // 0x134 (0x4)
};

