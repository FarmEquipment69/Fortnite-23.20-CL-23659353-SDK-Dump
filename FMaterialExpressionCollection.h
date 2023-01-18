// ScriptStruct /Script/Engine.MaterialExpressionCollection
// Size: 0x30
struct FMaterialExpressionCollection
{
	struct TArray<class UMaterialExpression*> Expressions; // 0x0 (0x10)
	struct TArray<class UMaterialExpressionComment*> EditorComments; // 0x10 (0x10)
	class UMaterialExpressionExecBegin* ExpressionExecBegin; // 0x20 (0x8)
	class UMaterialExpressionExecEnd* ExpressionExecEnd; // 0x28 (0x8)
};

