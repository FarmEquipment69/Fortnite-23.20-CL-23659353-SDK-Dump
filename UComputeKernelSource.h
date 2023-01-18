// Class /Script/ComputeFramework.ComputeKernelSource
// Size: 0x98
class UComputeKernelSource : public UObject
{
	struct FString EntryPoint; // 0x28 (0x10)
	struct FIntVector GroupSize; // 0x38 (0xc)
	unsigned char unreflected_44[0x4]; // 0x44 (0x4) 
	struct FComputeKernelPermutationSet PermutationSet; // 0x48 (0x10)
	struct FComputeKernelDefinitionSet DefinitionsSet; // 0x58 (0x10)
	struct TArray<class UComputeSource*> AdditionalSources; // 0x68 (0x10)
	struct TArray<struct FShaderFunctionDefinition> ExternalInputs; // 0x78 (0x10)
	struct TArray<struct FShaderFunctionDefinition> ExternalOutputs; // 0x88 (0x10)
};

