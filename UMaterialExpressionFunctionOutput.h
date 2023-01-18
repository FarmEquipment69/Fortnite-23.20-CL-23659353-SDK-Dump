// Class /Script/Engine.MaterialExpressionFunctionOutput
// Size: 0x110
class UMaterialExpressionFunctionOutput : public UMaterialExpression
{
	struct FName OutputName; // 0xb0 (0x4)
	unsigned char unreflected_b4[0x4]; // 0xb4 (0x4) 
	struct FString Description; // 0xb8 (0x10)
	int SortPriority; // 0xc8 (0x4)
	unsigned char unreflected_cc[0x4]; // 0xcc (0x4) 
	struct FExpressionInput A; // 0xd0 (0x28)
	unsigned char bLastPreviewed; // 0xf8 (0x1)
	unsigned char unreflected_f9[0x3]; // 0xf9 (0x3) 
	struct FGuid ID; // 0xfc (0x10)
	unsigned char padding_10c[0x4]; // 0x10c (0x4)
};

