// ScriptStruct /Script/Qos.DatacenterQosInstance
// Size: 0x68
struct FDatacenterQosInstance
{
	struct FQosDatacenterInfo Definition; // 0x0 (0x38)
	enum EQosDatacenterResult Result; // 0x38 (0x1)
	unsigned char unreflected_39[0x3]; // 0x39 (0x3) 
	int AvgPingMs; // 0x3c (0x4)
	struct TArray<int> PingResults; // 0x40 (0x10)
	unsigned char unreflected_50[0x8]; // 0x50 (0x8) 
	struct FDateTime* LastCheckTimestamp; // 0x58 (0x8)
	bool bUsable; // 0x60 (0x1)
	unsigned char padding_61[0x7]; // 0x61 (0x7)
};

