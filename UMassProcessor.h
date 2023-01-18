// Class /Script/MassEntity.MassProcessor
// Size: 0xb8
class UMassProcessor : public UObject
{
	int ExecutionFlags; // 0x28 (0x4)
	enum EMassProcessingPhase ProcessingPhase; // 0x2c (0x1)
	unsigned char unreflected_2d[0x3]; // 0x2d (0x3) 
	struct FMassProcessorExecutionOrder ExecutionOrder; // 0x30 (0x28)
	bool bAutoRegisterWithProcessingPhases; // 0x58 (0x1)
	unsigned char unreflected_59[0x1]; // 0x59 (0x1) 
	bool bRequiresGameThreadExecution; // 0x5a (0x1)
	unsigned char padding_5b[0x5d]; // 0x5b (0x5d)
};

