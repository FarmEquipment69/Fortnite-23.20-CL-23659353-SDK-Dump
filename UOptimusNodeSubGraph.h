// Class /Script/OptimusCore.OptimusNodeSubGraph
// Size: 0xb0
class UOptimusNodeSubGraph : public UOptimusNodeGraph
{
	struct TArray<struct FOptimusParameterBinding> InputBindings; // 0x80 (0x10)
	struct TArray<struct FOptimusParameterBinding> OutputBindings; // 0x90 (0x10)
	struct TWeakObjectPtr<class UOptimusNode_GraphTerminal> EntryNode; // 0xa0 (0x8)
	struct TWeakObjectPtr<class UOptimusNode_GraphTerminal> ReturnNode; // 0xa8 (0x8)
};

