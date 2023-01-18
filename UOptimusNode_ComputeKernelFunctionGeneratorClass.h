// Class /Script/OptimusCore.OptimusNode_ComputeKernelFunctionGeneratorClass
// Size: 0x278
class UOptimusNode_ComputeKernelFunctionGeneratorClass : public UClass
{
	struct FName category; // 0x230 (0x4)
	struct FName KernelName; // 0x234 (0x4)
	struct FOptimusExecutionDomain ExecutionDomain; // 0x238 (0x4)
	struct FIntVector GroupSize; // 0x23c (0xc)
	struct TArray<struct FOptimusParameterBinding> InputBindings; // 0x248 (0x10)
	struct TArray<struct FOptimusParameterBinding> OutputBindings; // 0x258 (0x10)
	struct FString ShaderSource; // 0x268 (0x10)
};

