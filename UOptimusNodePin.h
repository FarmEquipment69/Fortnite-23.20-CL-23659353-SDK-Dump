// Class /Script/OptimusCore.OptimusNodePin
// Size: 0x90
class UOptimusNodePin : public UObject
{
	bool bIsGroupingPin; // 0x28 (0x1)
	enum EOptimusNodePinDirection Direction; // 0x29 (0x1)
	enum EOptimusNodePinStorageType StorageType; // 0x2a (0x1)
	unsigned char unreflected_2b[0x5]; // 0x2b (0x5) 
	struct FOptimusDataDomain DataDomain; // 0x30 (0x40)
	struct FOptimusDataTypeRef DataType; // 0x70 (0xc)
	unsigned char unreflected_7c[0x4]; // 0x7c (0x4) 
	struct TArray<class UOptimusNodePin*> SubPins; // 0x80 (0x10)
};

