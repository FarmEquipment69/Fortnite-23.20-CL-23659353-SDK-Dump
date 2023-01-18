// ScriptStruct /Script/ControlRig.RigUnit_HierarchySetPose
// Size: 0xc8
struct FRigUnit_HierarchySetPose : FRigUnit_HierarchyBaseMutable
{
	struct FRigPose Pose; // 0x38 (0x70)
	enum ERigElementType ElementType; // 0xa8 (0x1)
	enum EBoneGetterSetterMode Space; // 0xa9 (0x1)
	unsigned char unreflected_aa[0x6]; // 0xaa (0x6) 
	struct FRigElementKeyCollection ItemsToSet; // 0xb0 (0x10)
	float Weight; // 0xc0 (0x4)
	unsigned char padding_c4[0x4]; // 0xc4 (0x4)
};

