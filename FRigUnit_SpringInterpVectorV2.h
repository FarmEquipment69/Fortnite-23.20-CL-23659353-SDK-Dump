// ScriptStruct /Script/ControlRig.RigUnit_SpringInterpVectorV2
// Size: 0xe8
struct FRigUnit_SpringInterpVectorV2 : FRigUnit_SimBase
{
	struct FVector Target; // 0x8 (0x18)
	float Strength; // 0x20 (0x4)
	float CriticalDamping; // 0x24 (0x4)
	struct FVector Force; // 0x28 (0x18)
	bool bUseCurrentInput; // 0x40 (0x1)
	unsigned char unreflected_41[0x7]; // 0x41 (0x7) 
	struct FVector Current; // 0x48 (0x18)
	float TargetVelocityAmount; // 0x60 (0x4)
	bool bInitializeFromTarget; // 0x64 (0x1)
	unsigned char unreflected_65[0x3]; // 0x65 (0x3) 
	struct FVector Result; // 0x68 (0x18)
	struct FVector Velocity; // 0x80 (0x18)
	struct FVector SimulatedResult; // 0x98 (0x18)
	struct FVectorSpringState SpringState; // 0xb0 (0x38)
};

