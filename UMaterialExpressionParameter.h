// Class /Script/Engine.MaterialExpressionParameter
// Size: 0xd0
class UMaterialExpressionParameter : public UMaterialExpression
{
	struct FName ParameterName; // 0xb0 (0x4)
	struct FGuid ExpressionGUID; // 0xb4 (0x10)
	struct FName Group; // 0xc4 (0x4)
	int SortPriority; // 0xc8 (0x4)
	unsigned char padding_cc[0x4]; // 0xcc (0x4)
};

