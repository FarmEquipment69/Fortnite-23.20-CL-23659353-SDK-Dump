// ScriptStruct /Script/ComputeFramework.ShaderFunctionDefinition
// Size: 0x28
struct FShaderFunctionDefinition
{
	struct FString Name; // 0x0 (0x10)
	struct TArray<struct FShaderParamTypeDefinition> ParamTypes; // 0x10 (0x10)
	bool bHasReturnType; // 0x20 (0x1)
	unsigned char padding_21[0x7]; // 0x21 (0x7)
};

