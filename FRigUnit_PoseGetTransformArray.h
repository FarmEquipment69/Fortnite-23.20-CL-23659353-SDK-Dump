// ScriptStruct /Script/ControlRig.RigUnit_PoseGetTransformArray
// Size: 0x90
struct FRigUnit_PoseGetTransformArray : FRigUnit_HierarchyBase
{
	struct FRigPose Pose; // 0x8 (0x70)
	enum EBoneGetterSetterMode Space; // 0x78 (0x1)
	bool Valid; // 0x79 (0x1)
	unsigned char unreflected_7a[0x6]; // 0x7a (0x6) 
	struct TArray<struct FTransform> Transforms; // 0x80 (0x10)
};

