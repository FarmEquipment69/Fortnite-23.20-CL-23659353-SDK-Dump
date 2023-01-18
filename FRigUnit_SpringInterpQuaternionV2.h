// ScriptStruct /Script/ControlRig.RigUnit_SpringInterpQuaternionV2
// Size: 0x130
struct FRigUnit_SpringInterpQuaternionV2 : FRigUnit_SimBase
{
	unsigned char unreflected_8[0x8]; // 0x8 (0x8) 
	struct FQuat Target; // 0x10 (0x20)
	float Strength; // 0x30 (0x4)
	float CriticalDamping; // 0x34 (0x4)
	struct FVector Torque; // 0x38 (0x18)
	bool bUseCurrentInput; // 0x50 (0x1)
	unsigned char unreflected_51[0xf]; // 0x51 (0xf) 
	struct FQuat Current; // 0x60 (0x20)
	float TargetVelocityAmount; // 0x80 (0x4)
	bool bInitializeFromTarget; // 0x84 (0x1)
	unsigned char unreflected_85[0xb]; // 0x85 (0xb) 
	struct FQuat Result; // 0x90 (0x20)
	struct FVector AngularVelocity; // 0xb0 (0x18)
	unsigned char unreflected_c8[0x8]; // 0xc8 (0x8) 
	struct FQuat SimulatedResult; // 0xd0 (0x20)
	struct FQuaternionSpringState SpringState; // 0xf0 (0x40)
};

