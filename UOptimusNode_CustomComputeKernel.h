// Class /Script/OptimusCore.OptimusNode_CustomComputeKernel
// Size: 0x1e0
class UOptimusNode_CustomComputeKernel : public UOptimusNode_ComputeKernelBase
{
	unsigned char unreflected_118[0x20]; // 0x118 (0x20) 
	struct FName category; // 0x138 (0x4)
	struct FOptimusValidatedName KernelName; // 0x13c (0x4)
	struct FOptimusExecutionDomain ExecutionDomain; // 0x140 (0x4)
	struct FIntVector GroupSize; // 0x144 (0xc)
	struct TArray<struct FOptimus_ShaderBinding> Parameters; // 0x150 (0x10)
	struct TArray<struct FOptimusParameterBinding> InputBindings; // 0x160 (0x10)
	struct TArray<struct FOptimusParameterBinding> OutputBindings; // 0x170 (0x10)
	struct FOptimusParameterBindingArray InputBindingArray; // 0x180 (0x10)
	struct FOptimusParameterBindingArray OutputBindingArray; // 0x190 (0x10)
	struct TArray<struct FOptimusSecondaryInputBindingsGroup> SecondaryInputBindingGroups; // 0x1a0 (0x10)
	struct TArray<class UComputeSource*> AdditionalSources; // 0x1b0 (0x10)
	struct FOptimusShaderText ShaderSource; // 0x1c0 (0x20)
};

