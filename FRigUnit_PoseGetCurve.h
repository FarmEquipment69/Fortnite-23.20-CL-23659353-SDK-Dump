// ScriptStruct /Script/ControlRig.RigUnit_PoseGetCurve
// Size: 0x90
struct FRigUnit_PoseGetCurve : FRigUnit_HierarchyBase
{
	struct FRigPose Pose; // 0x8 (0x70)
	struct FName Curve; // 0x78 (0x4)
	bool Valid; // 0x7c (0x1)
	unsigned char unreflected_7d[0x3]; // 0x7d (0x3) 
	float CurveValue; // 0x80 (0x4)
	int CachedPoseElementIndex; // 0x84 (0x4)
	int CachedPoseHash; // 0x88 (0x4)
	unsigned char padding_8c[0x4]; // 0x8c (0x4)
};

