// Class /Script/FortniteGame.MatchHeartbeatManager
// Size: 0xd0
class UMatchHeartbeatManager : public UObject
{
	class AFortGameMode* OwningGameMode; // 0x28 (0x8)
	class USlowStatReader* SlowStatReader; // 0x30 (0x8)
	struct FMatchHeartbeatManagerTickFunction MatchHearbeatTick; // 0x38 (0x30)
	int ServerMetricsLOD; // 0x68 (0x4)
	unsigned char unreflected_6c[0x20]; // 0x6c (0x20) 
	int HighFrequencyServerMetricsDurationSec; // 0x8c (0x4)
	int HighFrequencyEventsLOD; // 0x90 (0x4)
	unsigned char padding_94[0x3c]; // 0x94 (0x3c)
};

