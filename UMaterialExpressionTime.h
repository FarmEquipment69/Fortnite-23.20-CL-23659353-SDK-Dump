// Class /Script/Engine.MaterialExpressionTime
// Size: 0xb8
class UMaterialExpressionTime : public UMaterialExpression
{
	unsigned char bIgnorePause; // 0xb0 (0x1)
	unsigned char bOverridePeriod; // 0xb0 (0x1)
	unsigned char unreflected_b1[0x3]; // 0xb1 (0x3) 
	float Period; // 0xb4 (0x4)
};

