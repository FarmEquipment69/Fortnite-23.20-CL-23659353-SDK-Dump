// Class /Script/EngineSettings.GameNetworkManagerSettings
// Size: 0x58
class UGameNetworkManagerSettings : public UObject
{
	int MinDynamicBandwidth; // 0x28 (0x4)
	int MaxDynamicBandwidth; // 0x2c (0x4)
	int TotalNetBandwidth; // 0x30 (0x4)
	int BadPingThreshold; // 0x34 (0x4)
	unsigned char bIsStandbyCheckingEnabled; // 0x38 (0x1)
	unsigned char unreflected_39[0x3]; // 0x39 (0x3) 
	float StandbyRxCheatTime; // 0x3c (0x4)
	float StandbyTxCheatTime; // 0x40 (0x4)
	float PercentMissingForRxStandby; // 0x44 (0x4)
	float PercentMissingForTxStandby; // 0x48 (0x4)
	float PercentForBadPing; // 0x4c (0x4)
	float JoinInProgressStandbyWaitTime; // 0x50 (0x4)
	unsigned char padding_54[0x4]; // 0x54 (0x4)
};

