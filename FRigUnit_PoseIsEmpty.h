// ScriptStruct /Script/ControlRig.RigUnit_PoseIsEmpty
// Size: 0x80
struct FRigUnit_PoseIsEmpty : FRigUnit_HierarchyBase
{
	struct FRigPose Pose; // 0x8 (0x70)
	bool IsEmpty; // 0x78 (0x1)
	unsigned char padding_79[0x7]; // 0x79 (0x7)
};

