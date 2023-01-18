// ScriptStruct /Script/OptimusCore.OptimusDeformerInstanceExecInfo
// Size: 0x20
struct FOptimusDeformerInstanceExecInfo
{
	struct FName GraphName; // 0x0 (0x4)
	enum EOptimusNodeGraphType GraphType; // 0x4 (0x4)
	class UComputeGraph* ComputeGraph; // 0x8 (0x8)
	struct FComputeGraphInstance ComputeGraphInstance; // 0x10 (0x10)
};

