// ScriptStruct /Script/Qos.QosDatacenterInfo
// Size: 0x38
struct FQosDatacenterInfo
{
	struct FString ID; // 0x0 (0x10)
	struct FString RegionId; // 0x10 (0x10)
	bool bEnabled; // 0x20 (0x1)
	unsigned char unreflected_21[0x7]; // 0x21 (0x7) 
	struct TArray<struct FQosPingServerInfo> Servers; // 0x28 (0x10)
};

