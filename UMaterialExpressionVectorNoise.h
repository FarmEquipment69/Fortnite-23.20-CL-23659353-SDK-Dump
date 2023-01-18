// Class /Script/Engine.MaterialExpressionVectorNoise
// Size: 0xe8
class UMaterialExpressionVectorNoise : public UMaterialExpression
{
	struct FExpressionInput Position; // 0xb0 (0x28)
	struct TEnumAsByte<EVectorNoiseFunction> NoiseFunction; // 0xd8 (0x1)
	unsigned char unreflected_d9[0x3]; // 0xd9 (0x3) 
	int Quality; // 0xdc (0x4)
	unsigned char bTiling; // 0xe0 (0x1)
	unsigned char unreflected_e1[0x3]; // 0xe1 (0x3) 
	uint32_t TileSize; // 0xe4 (0x4)
};

