// ScriptStruct /Script/ControlRig.RigUnit_PoseGetDelta
// Size: 0x128
struct FRigUnit_PoseGetDelta : FRigUnit_HierarchyBase
{
	struct FRigPose PoseA; // 0x8 (0x70)
	struct FRigPose PoseB; // 0x78 (0x70)
	float PositionThreshold; // 0xe8 (0x4)
	float RotationThreshold; // 0xec (0x4)
	float ScaleThreshold; // 0xf0 (0x4)
	float CurveThreshold; // 0xf4 (0x4)
	enum ERigElementType ElementType; // 0xf8 (0x1)
	enum EBoneGetterSetterMode Space; // 0xf9 (0x1)
	unsigned char unreflected_fa[0x6]; // 0xfa (0x6) 
	struct FRigElementKeyCollection ItemsToCompare; // 0x100 (0x10)
	bool PosesAreEqual; // 0x110 (0x1)
	unsigned char unreflected_111[0x7]; // 0x111 (0x7) 
	struct FRigElementKeyCollection ItemsWithDelta; // 0x118 (0x10)
};

