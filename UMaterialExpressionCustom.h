// Class /Script/Engine.MaterialExpressionCustom
// Size: 0x118
class UMaterialExpressionCustom : public UMaterialExpression
{
	struct FString Code; // 0xb0 (0x10)
	struct TEnumAsByte<ECustomMaterialOutputType> OutputType; // 0xc0 (0x1)
	unsigned char unreflected_c1[0x7]; // 0xc1 (0x7) 
	struct FString Description; // 0xc8 (0x10)
	struct TArray<struct FCustomInput> Inputs; // 0xd8 (0x10)
	struct TArray<struct FCustomOutput*> AdditionalOutputs; // 0xe8 (0x10)
	struct TArray<struct FCustomDefine> AdditionalDefines; // 0xf8 (0x10)
	struct TArray<struct FString> IncludeFilePaths; // 0x108 (0x10)
};

