// ScriptStruct /Script/ControlRig.RigUnit_VerletIntegrateVector
// Size: 0xd8
struct FRigUnit_VerletIntegrateVector : FRigUnit_SimBase
{
	struct FVector Target; // 0x8 (0x18)
	float Strength; // 0x20 (0x4)
	float Damp; // 0x24 (0x4)
	float Blend; // 0x28 (0x4)
	unsigned char unreflected_2c[0x4]; // 0x2c (0x4) 
	struct FVector Force; // 0x30 (0x18)
	struct FVector Position; // 0x48 (0x18)
	struct FVector Velocity; // 0x60 (0x18)
	struct FVector Acceleration; // 0x78 (0x18)
	struct FCRSimPoint Point; // 0x90 (0x40)
	bool bInitialized; // 0xd0 (0x1)
	unsigned char padding_d1[0x7]; // 0xd1 (0x7)
};

