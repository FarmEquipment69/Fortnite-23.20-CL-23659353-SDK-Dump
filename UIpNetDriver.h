// Class /Script/OnlineSubsystemUtils.IpNetDriver
// Size: 0x838
class UIpNetDriver : public UNetDriver
{
	unsigned char LogPortUnreach; // 0x788 (0x1)
	unsigned char AllowPlayerPortUnreach; // 0x788 (0x1)
	unsigned char unreflected_789[0x3]; // 0x789 (0x3) 
	uint32_t MaxPortCountToTry; // 0x78c (0x4)
	unsigned char unreflected_790[0x4]; // 0x790 (0x4) 
	uint32_t ServerDesiredSocketReceiveBufferBytes; // 0x794 (0x4)
	uint32_t ServerDesiredSocketSendBufferBytes; // 0x798 (0x4)
	uint32_t ClientDesiredSocketReceiveBufferBytes; // 0x79c (0x4)
	uint32_t ClientDesiredSocketSendBufferBytes; // 0x7a0 (0x4)
	unsigned char unreflected_7a4[0x4]; // 0x7a4 (0x4) 
	double MaxSecondsInReceive; // 0x7a8 (0x8)
	int NbPacketsBetweenReceiveTimeTest; // 0x7b0 (0x4)
	float ResolutionConnectionTimeout; // 0x7b4 (0x4)
	unsigned char padding_7b8[0x80]; // 0x7b8 (0x80)
};

