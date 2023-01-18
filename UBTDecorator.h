// Class /Script/AIModule.BTDecorator
// Size: 0x68
class UBTDecorator : public UBTAuxiliaryNode
{
	unsigned char bInverseCondition; // 0x60 (0x1)
	unsigned char unreflected_61[0x3]; // 0x61 (0x3) 
	struct TEnumAsByte<EBTFlowAbortMode> FlowAbortMode; // 0x64 (0x1)
	unsigned char padding_65[0x3]; // 0x65 (0x3)
};

