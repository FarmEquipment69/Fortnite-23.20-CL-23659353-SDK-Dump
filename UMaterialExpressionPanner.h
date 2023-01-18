// Class /Script/Engine.MaterialExpressionPanner
// Size: 0x138
class UMaterialExpressionPanner : public UMaterialExpression
{
	struct FExpressionInput Coordinate; // 0xb0 (0x28)
	struct FExpressionInput Time; // 0xd8 (0x28)
	struct FExpressionInput Speed; // 0x100 (0x28)
	float SpeedX; // 0x128 (0x4)
	float SpeedY; // 0x12c (0x4)
	uint32_t ConstCoordinate; // 0x130 (0x4)
	bool bFractionalPart; // 0x134 (0x1)
	unsigned char padding_135[0x3]; // 0x135 (0x3)
};

