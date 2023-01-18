// ScriptStruct /Script/ControlRig.RigUnit_DistributeRotationForCollection
// Size: 0xb0
struct FRigUnit_DistributeRotationForCollection : FRigUnit_HighlevelBaseMutable
{
	struct FRigElementKeyCollection Items; // 0x38 (0x10)
	struct TArray<struct FRigUnit_DistributeRotation_Rotation> Rotations; // 0x48 (0x10)
	enum EControlRigAnimEasingType RotationEaseType; // 0x58 (0x1)
	unsigned char unreflected_59[0x3]; // 0x59 (0x3) 
	float Weight; // 0x5c (0x4)
	struct FRigUnit_DistributeRotation_WorkData WorkData; // 0x60 (0x50)
};

