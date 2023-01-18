// ScriptStruct /Script/ControlRig.RigUnit_TwistBones
// Size: 0xb0
struct FRigUnit_TwistBones : FRigUnit_HighlevelBaseMutable
{
	struct FName StartBone; // 0x38 (0x4)
	struct FName EndBone; // 0x3c (0x4)
	struct FVector TwistAxis; // 0x40 (0x18)
	struct FVector PoleAxis; // 0x58 (0x18)
	enum EControlRigAnimEasingType TwistEaseType; // 0x70 (0x1)
	unsigned char unreflected_71[0x3]; // 0x71 (0x3) 
	float Weight; // 0x74 (0x4)
	bool bPropagateToChildren; // 0x78 (0x1)
	unsigned char unreflected_79[0x7]; // 0x79 (0x7) 
	struct FRigUnit_TwistBones_WorkData WorkData; // 0x80 (0x30)
};

