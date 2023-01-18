// ScriptStruct /Script/ControlRig.RigUnit_PoseGetTransform
// Size: 0x100
struct FRigUnit_PoseGetTransform : FRigUnit_HierarchyBase
{
	struct FRigPose Pose; // 0x8 (0x70)
	struct FRigElementKey* Item; // 0x78 (0x8)
	enum EBoneGetterSetterMode Space; // 0x80 (0x1)
	bool Valid; // 0x81 (0x1)
	unsigned char unreflected_82[0xe]; // 0x82 (0xe) 
	struct FTransform Transform; // 0x90 (0x60)
	float CurveValue; // 0xf0 (0x4)
	int CachedPoseElementIndex; // 0xf4 (0x4)
	int CachedPoseHash; // 0xf8 (0x4)
	unsigned char padding_fc[0x4]; // 0xfc (0x4)
};

