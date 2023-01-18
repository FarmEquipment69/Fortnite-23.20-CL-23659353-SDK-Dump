// Class /Script/Engine.MaterialExpressionSetLocal
// Size: 0xe8
class UMaterialExpressionSetLocal : public UMaterialExpression
{
	struct FExpressionExecOutput* Exec; // 0xb0 (0x8)
	struct FExpressionInput Value; // 0xb8 (0x28)
	struct FName LocalName; // 0xe0 (0x4)
	unsigned char padding_e4[0x4]; // 0xe4 (0x4)
};

