// ScriptStruct /Script/NevadaRuntime.NevadaState
// Size: 0x14
struct FNevadaState
{
	enum ENevadaFlightStates CurrentStatus; // 0x0 (0x1)
	unsigned char unreflected_1[0x3]; // 0x1 (0x3) 
	int LivesRemaining; // 0x4 (0x4)
	bool bHijackingActive; // 0x8 (0x1)
	bool bPilotBubbleCollisionEnabled; // 0x9 (0x1)
	unsigned char unreflected_a[0x2]; // 0xa (0x2) 
	float CurrentBatteryCharge; // 0xc (0x4)
	bool bCannonEnabled; // 0x10 (0x1)
	bool bTractorBeamEnabled; // 0x11 (0x1)
	unsigned char padding_12[0x2]; // 0x12 (0x2)
};

