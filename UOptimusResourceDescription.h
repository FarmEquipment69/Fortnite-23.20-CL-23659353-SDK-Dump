// Class /Script/OptimusCore.OptimusResourceDescription
// Size: 0x88
class UOptimusResourceDescription : public UObject
{
	struct FName ResourceName; // 0x28 (0x4)
	struct FOptimusDataTypeRef DataType; // 0x2c (0xc)
	struct TWeakObjectPtr<class UOptimusComponentSourceBinding> ComponentBinding; // 0x38 (0x8)
	struct FOptimusDataDomain DataDomain; // 0x40 (0x40)
	class UOptimusPersistentBufferDataInterface* DataInterface; // 0x80 (0x8)
};

