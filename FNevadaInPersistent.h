// ScriptStruct /Script/NevadaRuntime.NevadaInPersistent
// Size: 0x298
struct FNevadaInPersistent : FFortVehicleInPersistent
{
	class UFortNevadaVehicleConfigs* FortNevadaVehicleConfigs; // 0x188 (0x8)
	bool bBoostThrust; // 0x190 (0x1)
	bool bBoostDrag; // 0x191 (0x1)
	unsigned char unreflected_192[0x2]; // 0x192 (0x2) 
	float TractorBeamExtraLengthForExtents; // 0x194 (0x4)
	bool bUseTractorBeamUprightForce; // 0x198 (0x1)
	unsigned char unreflected_199[0x7]; // 0x199 (0x7) 
	struct FVector CrashingDesiredUp; // 0x1a0 (0x18)
	enum ENevadaFlightStates CurrentVehicleState; // 0x1b8 (0x1)
	unsigned char padding_1b9[0xdf]; // 0x1b9 (0xdf)
};

