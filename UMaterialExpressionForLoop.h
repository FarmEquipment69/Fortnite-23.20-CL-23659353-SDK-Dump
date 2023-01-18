// Class /Script/Engine.MaterialExpressionForLoop
// Size: 0x138
class UMaterialExpressionForLoop : public UMaterialExpression
{
	struct FExpressionExecOutput* LoopBody; // 0xb0 (0x8)
	struct FExpressionExecOutput* Completed; // 0xb8 (0x8)
	struct FExpressionInput StartIndex; // 0xc0 (0x28)
	struct FExpressionInput EndIndex; // 0xe8 (0x28)
	struct FExpressionInput IndexStep; // 0x110 (0x28)
};

