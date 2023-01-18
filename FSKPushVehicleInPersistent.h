// ScriptStruct /Script/FortniteGame.SKPushVehicleInPersistent
// Size: 0x1b0
struct FSKPushVehicleInPersistent : FFortVehicleInPersistent
{
	class UFortSKPushVehicleConfigs* SKPushVehicleConfigs; // 0x188 (0x8)
	unsigned char bIsDriverTargetting; // 0x190 (0x1)
	unsigned char bPedalForceCooldown; // 0x190 (0x1)
	unsigned char bConstrainedRotation; // 0x190 (0x1)
	unsigned char bIsCoastingOrDismounting; // 0x190 (0x1)
	enum ECoastState CurrentPhysicsCoastState; // 0x191 (0x1)
	enum ECoastState CurrentAnimCoastState; // 0x192 (0x1)
	unsigned char unreflected_193[0x1]; // 0x193 (0x1) 
	float BrakeAboveTopSpeedDelta; // 0x194 (0x4)
	struct FVector PushForceRelativeLocation; // 0x198 (0x18)
};

