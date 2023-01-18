// ScriptStruct /Script/FortniteGame.BiplaneAsyncOutPersistent
// Size: 0x1f0
struct FBiplaneAsyncOutPersistent : FFortVehicleOutPersistent
{
	bool bIsEngineOn; // 0x30 (0x1)
	bool bIsFlying; // 0x31 (0x1)
	bool bAutoStartEngineInAir; // 0x32 (0x1)
	bool bEngineStartIsBeingHeld; // 0x33 (0x1)
	unsigned char unreflected_34[0x4]; // 0x34 (0x4) 
	struct FAileronRoll AileronRoll; // 0x38 (0xe0)
	struct FFortRechargingActionTimer BoostAction; // 0x118 (0xd8)
};

