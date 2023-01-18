// ScriptStruct /Script/ControlRig.RigUnit_SpringInterpVector
// Size: 0x98
struct FRigUnit_SpringInterpVector : FRigUnit_SimBase
{
	struct FVector Current; // 0x8 (0x18)
	struct FVector Target; // 0x20 (0x18)
	float Stiffness; // 0x38 (0x4)
	float CriticalDamping; // 0x3c (0x4)
	float Mass; // 0x40 (0x4)
	unsigned char unreflected_44[0x4]; // 0x44 (0x4) 
	struct FVector Result; // 0x48 (0x18)
	struct FVectorSpringState SpringState; // 0x60 (0x38)
};

