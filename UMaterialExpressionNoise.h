// Class /Script/Engine.MaterialExpressionNoise
// Size: 0x128
class UMaterialExpressionNoise : public UMaterialExpression
{
	struct FExpressionInput Position; // 0xb0 (0x28)
	struct FExpressionInput FilterWidth; // 0xd8 (0x28)
	float Scale; // 0x100 (0x4)
	int Quality; // 0x104 (0x4)
	struct TEnumAsByte<ENoiseFunction> NoiseFunction; // 0x108 (0x1)
	unsigned char unreflected_109[0x3]; // 0x109 (0x3) 
	unsigned char bTurbulence; // 0x10c (0x1)
	unsigned char unreflected_10d[0x3]; // 0x10d (0x3) 
	int Levels; // 0x110 (0x4)
	float OutputMin; // 0x114 (0x4)
	float OutputMax; // 0x118 (0x4)
	float LevelScale; // 0x11c (0x4)
	unsigned char bTiling; // 0x120 (0x1)
	unsigned char unreflected_121[0x3]; // 0x121 (0x3) 
	uint32_t RepeatSize; // 0x124 (0x4)
};

