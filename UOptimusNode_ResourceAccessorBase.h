// Class /Script/OptimusCore.OptimusNode_ResourceAccessorBase
// Size: 0x180
class UOptimusNode_ResourceAccessorBase : public UOptimusNode
{
	unsigned char unreflected_110[0x10]; // 0x110 (0x10) 
	struct TWeakObjectPtr<class UOptimusResourceDescription> ResourceDesc; // 0x120 (0x8)
	enum EOptimusBufferWriteType WriteType; // 0x128 (0x1)
	unsigned char unreflected_129[0x7]; // 0x129 (0x7) 
	struct FOptimusNode_ResourceAccessorBase_DuplicationInfo DuplicationInfo; // 0x130 (0x50)
};

