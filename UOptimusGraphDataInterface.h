// Class /Script/OptimusCore.OptimusGraphDataInterface
// Size: 0x40
class UOptimusGraphDataInterface : public UComputeDataInterface
{
	struct TArray<struct FOptimusGraphVariableDescription> Variables; // 0x28 (0x10)
	int ParameterBufferSize; // 0x38 (0x4)
	unsigned char padding_3c[0x4]; // 0x3c (0x4)
};

