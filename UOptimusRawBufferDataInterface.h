// Class /Script/OptimusCore.OptimusRawBufferDataInterface
// Size: 0x78
class UOptimusRawBufferDataInterface : public UOptimusComputeDataInterface
{
	struct FShaderValueTypeHandle* ValueType; // 0x28 (0x8)
	struct FOptimusDataDomain DataDomain; // 0x30 (0x40)
	struct TWeakObjectPtr<class UOptimusComponentSourceBinding> ComponentSourceBinding; // 0x70 (0x8)
};

