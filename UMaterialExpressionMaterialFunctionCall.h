// Class /Script/Engine.MaterialExpressionMaterialFunctionCall
// Size: 0xe8
class UMaterialExpressionMaterialFunctionCall : public UMaterialExpression
{
	class UMaterialFunctionInterface* MaterialFunction; // 0xb0 (0x8)
	struct TArray<struct FFunctionExpressionInput> FunctionInputs; // 0xb8 (0x10)
	struct TArray<struct FFunctionExpressionOutput> FunctionOutputs; // 0xc8 (0x10)
	struct FMaterialParameterInfo FunctionParameterInfo; // 0xd8 (0xc)
	unsigned char padding_e4[0x4]; // 0xe4 (0x4)
};

