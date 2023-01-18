// ScriptStruct /Script/ControlRig.RigUnit_PointSimulation
// Size: 0x240
struct FRigUnit_PointSimulation : FRigUnit_SimBaseMutable
{
	struct TArray<struct FCRSimPoint> Points; // 0x38 (0x10)
	struct TArray<struct FCRSimLinearSpring> Links; // 0x48 (0x10)
	struct TArray<struct FCRSimPointForce> Forces; // 0x58 (0x10)
	struct TArray<struct FCRSimSoftCollision> CollisionVolumes; // 0x68 (0x10)
	float SimulatedStepsPerSecond; // 0x78 (0x4)
	enum ECRSimPointIntegrateType IntegratorType; // 0x7c (0x1)
	unsigned char unreflected_7d[0x3]; // 0x7d (0x3) 
	float VerletBlend; // 0x80 (0x4)
	unsigned char unreflected_84[0x4]; // 0x84 (0x4) 
	struct TArray<struct FRigUnit_PointSimulation_BoneTarget> BoneTargets; // 0x88 (0x10)
	bool bLimitLocalPosition; // 0x98 (0x1)
	bool bPropagateToChildren; // 0x99 (0x1)
	unsigned char unreflected_9a[0x6]; // 0x9a (0x6) 
	struct FVector PrimaryAimAxis; // 0xa0 (0x18)
	struct FVector SecondaryAimAxis; // 0xb8 (0x18)
	struct FRigUnit_PointSimulation_DebugSettings DebugSettings; // 0xd0 (0x80)
	struct FCRFourPointBezier Bezier; // 0x150 (0x60)
	struct FRigUnit_PointSimulation_WorkData WorkData; // 0x1b0 (0x88)
	unsigned char padding_238[0x8]; // 0x238 (0x8)
};

