// Class /Script/OnlineSubsystemUtils.OnlineBeaconHost
// Size: 0x3c8
class AOnlineBeaconHost : public AOnlineBeacon
{
	int ListenPort; // 0x2b8 (0x4)
	bool bAuthRequired; // 0x2bc (0x1)
	unsigned char unreflected_2bd[0x3]; // 0x2bd (0x3) 
	uint32_t MaxAuthTokenSize; // 0x2c0 (0x4)
	unsigned char unreflected_2c4[0x54]; // 0x2c4 (0x54) 
	struct TArray<class AOnlineBeaconClient*> ClientActors; // 0x318 (0x10)
	unsigned char padding_328[0xa0]; // 0x328 (0xa0)
};

