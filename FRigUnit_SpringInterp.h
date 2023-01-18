// ScriptStruct /Script/ControlRig.RigUnit_SpringInterp
// Size: 0x30
struct FRigUnit_SpringInterp : FRigUnit_SimBase
{
	float Current; // 0x8 (0x4)
	float Target; // 0xc (0x4)
	float Stiffness; // 0x10 (0x4)
	float CriticalDamping; // 0x14 (0x4)
	float Mass; // 0x18 (0x4)
	float Result; // 0x1c (0x4)
	struct FFloatSpringState SpringState; // 0x20 (0xc)
	unsigned char padding_2c[0x4]; // 0x2c (0x4)
};

