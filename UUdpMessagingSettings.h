// Class /Script/UdpMessaging.UdpMessagingSettings
// Size: 0xb8
class UUdpMessagingSettings : public UObject
{
	bool EnabledByDefault; // 0x28 (0x1)
	bool EnableTransport; // 0x29 (0x1)
	bool bAutoRepair; // 0x2a (0x1)
	unsigned char unreflected_2b[0x1]; // 0x2b (0x1) 
	float MaxSendRate; // 0x2c (0x4)
	uint32_t AutoRepairAttemptLimit; // 0x30 (0x4)
	uint16_t WorkQueueSize; // 0x34 (0x2)
	bool bStopServiceWhenAppDeactivates; // 0x36 (0x1)
	unsigned char unreflected_37[0x1]; // 0x37 (0x1) 
	struct FString UnicastEndpoint; // 0x38 (0x10)
	struct FString MulticastEndpoint; // 0x48 (0x10)
	enum EUdpMessageFormat MessageFormat; // 0x58 (0x1)
	unsigned char MulticastTimeToLive; // 0x59 (0x1)
	unsigned char unreflected_5a[0x6]; // 0x5a (0x6) 
	struct TArray<struct FString> StaticEndpoints; // 0x60 (0x10)
	struct TArray<struct FString> ExcludedEndpoints; // 0x70 (0x10)
	bool EnableTunnel; // 0x80 (0x1)
	unsigned char unreflected_81[0x7]; // 0x81 (0x7) 
	struct FString TunnelUnicastEndpoint; // 0x88 (0x10)
	struct FString TunnelMulticastEndpoint; // 0x98 (0x10)
	struct TArray<struct FString> RemoteTunnelEndpoints; // 0xa8 (0x10)
};

