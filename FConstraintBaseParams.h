// ScriptStruct /Script/Engine.ConstraintBaseParams
// Size: 0x14
struct FConstraintBaseParams
{
	float Stiffness; // 0x0 (0x4)
	float Damping; // 0x4 (0x4)
	float Restitution; // 0x8 (0x4)
	float ContactDistance; // 0xc (0x4)
	unsigned char bSoftConstraint; // 0x10 (0x1)
	unsigned char padding_11[0x3]; // 0x11 (0x3)
};

