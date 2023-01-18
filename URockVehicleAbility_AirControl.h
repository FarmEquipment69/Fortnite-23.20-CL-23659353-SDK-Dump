// Class /Script/RockVehicleRuntime.RockVehicleAbility_AirControl
// Size: 0x168
class URockVehicleAbility_AirControl : public URockVehicleAbility_Physics
{
	unsigned char unreflected_108[0x18]; // 0x108 (0x18) 
	struct FVector TorqueAccel; // 0x120 (0x18)
	struct FVector TorqueDamping; // 0x138 (0x18)
	float DisableForDodgeTime; // 0x150 (0x4)
	bool bAnyWheelsOnGround; // 0x154 (0x1)
	bool bDodgeActive; // 0x155 (0x1)
	bool bAutoUprightActive; // 0x156 (0x1)
	unsigned char unreflected_157[0x1]; // 0x157 (0x1) 
	class URockVehicleAbility_Dodge* DodgeAbility; // 0x158 (0x8)
	class URockVehicleAbility_AutoUpright* AutoUprightAbility; // 0x160 (0x8)
};

