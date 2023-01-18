// ScriptStruct /Script/ControlRig.RigUnit_HierarchyGetPoseItemArray
// Size: 0x90
struct FRigUnit_HierarchyGetPoseItemArray : FRigUnit_HierarchyBase
{
	bool Initial; // 0x8 (0x1)
	enum ERigElementType ElementType; // 0x9 (0x1)
	unsigned char unreflected_a[0x6]; // 0xa (0x6) 
	struct TArray<struct FRigElementKey*> ItemsToGet; // 0x10 (0x10)
	struct FRigPose Pose; // 0x20 (0x70)
};

