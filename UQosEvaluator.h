// Class /Script/Qos.QosEvaluator
// Size: 0x80
class UQosEvaluator : public UObject
{
	unsigned char unreflected_28[0x20]; // 0x28 (0x20) 
	bool bInProgress; // 0x48 (0x1)
	bool bCancelOperation; // 0x49 (0x1)
	unsigned char unreflected_4a[0x6]; // 0x4a (0x6) 
	struct TArray<struct FDatacenterQosInstance> Datacenters; // 0x50 (0x10)
	unsigned char padding_60[0x20]; // 0x60 (0x20)
};

