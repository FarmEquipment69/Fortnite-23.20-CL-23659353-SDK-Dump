// Class /Script/OptimusCore.OptimusNode_GraphTerminal
// Size: 0x128
class UOptimusNode_GraphTerminal : public UOptimusNode
{
	unsigned char unreflected_110[0x8]; // 0x110 (0x8) 
	enum EOptimusTerminalType TerminalType; // 0x118 (0x4)
	struct TWeakObjectPtr<class UOptimusNodeSubGraph> OwningGraph; // 0x11c (0x8)
	unsigned char padding_124[0x4]; // 0x124 (0x4)
};

