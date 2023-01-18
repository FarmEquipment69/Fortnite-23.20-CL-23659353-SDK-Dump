// Class /Script/Engine.MaterialExpressionIfThenElse
// Size: 0xe8
class UMaterialExpressionIfThenElse : public UMaterialExpression
{
	struct FExpressionExecOutput* Then; // 0xb0 (0x8)
	struct FExpressionExecOutput* Else; // 0xb8 (0x8)
	struct FExpressionInput Condition; // 0xc0 (0x28)
};

