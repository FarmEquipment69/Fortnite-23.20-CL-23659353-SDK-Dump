// ScriptStruct /Script/ControlRig.RigUnit_PoseGetItems
// Size: 0x90
struct FRigUnit_PoseGetItems : FRigUnit_HierarchyBase
{
	struct FRigPose Pose; // 0x8 (0x70)
	enum ERigElementType ElementType; // 0x78 (0x1)
	unsigned char unreflected_79[0x7]; // 0x79 (0x7) 
	struct FRigElementKeyCollection Items; // 0x80 (0x10)
};

