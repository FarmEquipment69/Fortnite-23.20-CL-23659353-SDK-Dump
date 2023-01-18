// Class /Script/ComputeFramework.ComputeGraph
// Size: 0x90
class UComputeGraph : public UObject
{
	struct TArray<class UComputeKernel*> KernelInvocations; // 0x28 (0x10)
	struct TArray<class UComputeDataInterface*> DataInterfaces; // 0x38 (0x10)
	struct TArray<struct FComputeGraphEdge> GraphEdges; // 0x48 (0x10)
	struct TArray<> Bindings; // 0x58 (0x10)
	struct TArray<int> DataInterfaceToBinding; // 0x68 (0x10)
	unsigned char padding_78[0x18]; // 0x78 (0x18)
};

