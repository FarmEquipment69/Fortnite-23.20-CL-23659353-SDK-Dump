// ScriptStruct /Script/ComputeFramework.ComputeGraphEdge
// Size: 0x38
struct FComputeGraphEdge
{
	int KernelIndex; // 0x0 (0x4)
	int KernelBindingIndex; // 0x4 (0x4)
	int DataInterfaceIndex; // 0x8 (0x4)
	int DataInterfaceBindingIndex; // 0xc (0x4)
	bool bKernelInput; // 0x10 (0x1)
	unsigned char unreflected_11[0x7]; // 0x11 (0x7) 
	struct FString BindingFunctionNameOverride; // 0x18 (0x10)
	struct FString BindingFunctionNamespace; // 0x28 (0x10)
};

