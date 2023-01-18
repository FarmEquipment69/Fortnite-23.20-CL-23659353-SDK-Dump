// ScriptStruct /Script/FortniteGame.BiplaneSimAux
// Size: 0x660
struct FBiplaneSimAux : FVehicleSimAux
{
	bool bIsEngineOn; // 0xd0 (0x1)
	bool bIsFlying; // 0xd1 (0x1)
	bool bAutoStartEngineInAir; // 0xd2 (0x1)
	bool bEngineStartIsBeingHeld; // 0xd3 (0x1)
	float PitchAlphaNoPilot; // 0xd4 (0x4)
	float TurnAlphaNoPilot; // 0xd8 (0x4)
	float RollAlphaNoPilot; // 0xdc (0x4)
	float AileronRollAlphaStart; // 0xe0 (0x4)
	bool bHadPassengers; // 0xe4 (0x1)
	unsigned char unreflected_e5[0x3]; // 0xe5 (0x3) 
	float NoPassengerStallTimerStart; // 0xe8 (0x4)
	float StuckTimerStart; // 0xec (0x4)
	bool bRollRight; // 0xf0 (0x1)
	bool bRollLeft; // 0xf1 (0x1)
	unsigned char unreflected_f2[0x2]; // 0xf2 (0x2) 
	float AileronRollDoubleClickTimerStart; // 0xf4 (0x4)
	struct FAileronRoll AileronRoll; // 0xf8 (0xe0)
	struct FFortRechargingActionTimer BoostAction; // 0x1d8 (0xd8)
	unsigned char unreflected_2b0[0x3a0]; // 0x2b0 (0x3a0) 
	float VehicleFuelPercent; // 0x650 (0x4)
	bool bIsStallingFromAltitude; // 0x654 (0x1)
	unsigned char padding_655[0xb]; // 0x655 (0xb)
};

