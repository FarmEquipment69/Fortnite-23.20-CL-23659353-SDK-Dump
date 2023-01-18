// ScriptStruct /Script/ControlRig.RigUnit_TwoBoneIKFK
// Size: 0x340
struct FRigUnit_TwoBoneIKFK : FRigUnitMutable
{
	struct FName StartJoint; // 0x38 (0x4)
	struct FName EndJoint; // 0x3c (0x4)
	struct FVector PoleTarget; // 0x40 (0x18)
	float Spin; // 0x58 (0x4)
	unsigned char unreflected_5c[0x4]; // 0x5c (0x4) 
	struct FTransform EndEffector; // 0x60 (0x60)
	float IKBlend; // 0xc0 (0x4)
	unsigned char unreflected_c4[0xc]; // 0xc4 (0xc) 
	struct FTransform StartJointFKTransform; // 0xd0 (0x60)
	struct FTransform MidJointFKTransform; // 0x130 (0x60)
	struct FTransform EndJointFKTransform; // 0x190 (0x60)
	float PreviousFKIKBlend; // 0x1f0 (0x4)
	unsigned char unreflected_1f4[0xc]; // 0x1f4 (0xc) 
	struct FTransform StartJointIKTransform; // 0x200 (0x60)
	struct FTransform MidJointIKTransform; // 0x260 (0x60)
	struct FTransform EndJointIKTransform; // 0x2c0 (0x60)
	int StartJointIndex; // 0x320 (0x4)
	int MidJointIndex; // 0x324 (0x4)
	int EndJointIndex; // 0x328 (0x4)
	float UpperLimbLength; // 0x32c (0x4)
	float LowerLimbLength; // 0x330 (0x4)
	unsigned char padding_334[0xc]; // 0x334 (0xc)
};

