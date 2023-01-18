// ScriptStruct /Script/ControlRig.RigUnit_TwistBonesPerItem
// Size: 0xb8
struct FRigUnit_TwistBonesPerItem : FRigUnit_HighlevelBaseMutable
{
	struct FRigElementKeyCollection Items; // 0x38 (0x10)
	struct FVector TwistAxis; // 0x48 (0x18)
	struct FVector PoleAxis; // 0x60 (0x18)
	enum EControlRigAnimEasingType TwistEaseType; // 0x78 (0x1)
	unsigned char unreflected_79[0x3]; // 0x79 (0x3) 
	float Weight; // 0x7c (0x4)
	bool bPropagateToChildren; // 0x80 (0x1)
	unsigned char unreflected_81[0x7]; // 0x81 (0x7) 
	struct FRigUnit_TwistBones_WorkData WorkData; // 0x88 (0x30)
};

