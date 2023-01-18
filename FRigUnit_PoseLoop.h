// ScriptStruct /Script/ControlRig.RigUnit_PoseLoop
// Size: 0x1c0
struct FRigUnit_PoseLoop : FRigUnit_HierarchyBaseMutable
{
	struct FRigPose Pose; // 0x38 (0x70)
	struct FRigElementKey* Item; // 0xa8 (0x8)
	struct FTransform GlobalTransform; // 0xb0 (0x60)
	struct FTransform LocalTransform; // 0x110 (0x60)
	float CurveValue; // 0x170 (0x4)
	int Index; // 0x174 (0x4)
	int Count; // 0x178 (0x4)
	float Ratio; // 0x17c (0x4)
	bool Continue; // 0x180 (0x1)
	unsigned char unreflected_181[0x7]; // 0x181 (0x7) 
	struct FControlRigExecuteContext Completed; // 0x188 (0x30)
	unsigned char padding_1b8[0x8]; // 0x1b8 (0x8)
};

