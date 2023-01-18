// ScriptStruct /Script/ControlRig.RigUnit_SpringInterpV2
// Size: 0x40
struct FRigUnit_SpringInterpV2 : FRigUnit_SimBase
{
	float Target; // 0x8 (0x4)
	float Strength; // 0xc (0x4)
	float CriticalDamping; // 0x10 (0x4)
	float Force; // 0x14 (0x4)
	bool bUseCurrentInput; // 0x18 (0x1)
	unsigned char unreflected_19[0x3]; // 0x19 (0x3) 
	float Current; // 0x1c (0x4)
	float TargetVelocityAmount; // 0x20 (0x4)
	bool bInitializeFromTarget; // 0x24 (0x1)
	unsigned char unreflected_25[0x3]; // 0x25 (0x3) 
	float Result; // 0x28 (0x4)
	float Velocity; // 0x2c (0x4)
	float SimulatedResult; // 0x30 (0x4)
	struct FFloatSpringState SpringState; // 0x34 (0xc)
};

