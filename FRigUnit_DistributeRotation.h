// ScriptStruct /Script/ControlRig.RigUnit_DistributeRotation
// Size: 0xb0
struct FRigUnit_DistributeRotation : FRigUnit_HighlevelBaseMutable
{
	struct FName StartBone; // 0x38 (0x4)
	struct FName EndBone; // 0x3c (0x4)
	struct TArray<struct FRigUnit_DistributeRotation_Rotation> Rotations; // 0x40 (0x10)
	enum EControlRigAnimEasingType RotationEaseType; // 0x50 (0x1)
	unsigned char unreflected_51[0x3]; // 0x51 (0x3) 
	float Weight; // 0x54 (0x4)
	bool bPropagateToChildren; // 0x58 (0x1)
	unsigned char unreflected_59[0x7]; // 0x59 (0x7) 
	struct FRigUnit_DistributeRotation_WorkData WorkData; // 0x60 (0x50)
};

