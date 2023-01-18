// ScriptStruct /Script/Engine.ConstraintDrive
// Size: 0x10
struct FConstraintDrive
{
	float Stiffness; // 0x0 (0x4)
	float Damping; // 0x4 (0x4)
	float MaxForce; // 0x8 (0x4)
	unsigned char bEnablePositionDrive; // 0xc (0x1)
	unsigned char bEnableVelocityDrive; // 0xc (0x1)
	unsigned char padding_d[0x3]; // 0xd (0x3)
};

