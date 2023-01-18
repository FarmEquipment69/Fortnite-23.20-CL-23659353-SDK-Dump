// Class /Script/RockVehicleRuntime.RockVehicleAbility_AutoUpright
// Size: 0x210
class URockVehicleAbility_AutoUpright : public URockVehicleAbility_Physics
{
	unsigned char unreflected_108[0x18]; // 0x108 (0x18) 
	struct FRockScalableFloat RollTorque; // 0x120 (0x30)
	struct FRockScalableFloat PitchTorque; // 0x150 (0x30)
	struct FRockScalableFloat PushForce; // 0x180 (0x30)
	struct FRockScalableFloat MinActiveSeconds; // 0x1b0 (0x30)
	class URockVehicleAbility_Dodge* DodgeAbility; // 0x1e0 (0x8)
	int LastWorldContactFrame; // 0x1e8 (0x4)
	unsigned char unreflected_1ec[0x4]; // 0x1ec (0x4) 
	struct FVector LastContactNormal; // 0x1f0 (0x18)
	bool bWheelsOnGround; // 0x208 (0x1)
	bool bAnyWheelsOnGround; // 0x209 (0x1)
	bool bDodgeActive; // 0x20a (0x1)
	bool bBodyContact; // 0x20b (0x1)
	float TimeSinceLastBodyContact; // 0x20c (0x4)
};

