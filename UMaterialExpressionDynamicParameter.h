// Class /Script/Engine.MaterialExpressionDynamicParameter
// Size: 0xd8
class UMaterialExpressionDynamicParameter : public UMaterialExpression
{
	struct TArray<struct FString> ParamNames; // 0xb0 (0x10)
	struct FLinearColor DefaultValue; // 0xc0 (0x10)
	uint32_t ParameterIndex; // 0xd0 (0x4)
	unsigned char padding_d4[0x4]; // 0xd4 (0x4)
};

