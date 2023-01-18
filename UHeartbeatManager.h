// Class /Script/FortniteGame.HeartbeatManager
// Size: 0x78
class UHeartbeatManager : public UObject
{
	unsigned char unreflected_28[0x18]; // 0x28 (0x18) 
	bool bShouldTrackLocation; // 0x40 (0x1)
	unsigned char unreflected_41[0x3]; // 0x41 (0x3) 
	float TrackLocationFrequencySec; // 0x44 (0x4)
	bool bShouldSendPerMinuteResourceAndDamageEvents; // 0x48 (0x1)
	bool bShouldSendPerMinuteVehicleEvents; // 0x49 (0x1)
	unsigned char unreflected_4a[0x1e]; // 0x4a (0x1e) 
	class UFortAnalyticsClientEngagementsManager* AnalyticsClientEngagementsManager; // 0x68 (0x8)
	unsigned char padding_70[0x8]; // 0x70 (0x8)
};

