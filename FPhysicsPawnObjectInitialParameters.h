// ScriptStruct /Script/FortniteGame.PhysicsPawnObjectInitialParameters
// Size: 0x30
struct FPhysicsPawnObjectInitialParameters
{
	struct FVector InitialVelocity; // 0x0 (0x18)
	float OverrideMassInKG; // 0x18 (0x4)
	float OverrideAngularDampening; // 0x1c (0x4)
	float OverrideLinearDampening; // 0x20 (0x4)
	float PlayerForceMultiplier; // 0x24 (0x4)
	float PawnKnockbackMultiplier; // 0x28 (0x4)
	unsigned char bEnableGravity; // 0x2c (0x1)
	unsigned char bEnableGravityOnHit; // 0x2c (0x1)
	unsigned char bShouldKillPawnOnHit; // 0x2c (0x1)
	unsigned char padding_2d[0x3]; // 0x2d (0x3)
};

