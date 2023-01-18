// ScriptStruct /Script/ControlRig.RigUnit_MultiFABRIK
// Size: 0xc8
struct FRigUnit_MultiFABRIK : FRigUnit_HighlevelBaseMutable
{
	struct FName RootBone; // 0x38 (0x4)
	unsigned char unreflected_3c[0x4]; // 0x3c (0x4) 
	struct TArray<struct FRigUnit_MultiFABRIK_EndEffector> Effectors; // 0x40 (0x10)
	float Precision; // 0x50 (0x4)
	bool bPropagateToChildren; // 0x54 (0x1)
	unsigned char unreflected_55[0x3]; // 0x55 (0x3) 
	int MaxIterations; // 0x58 (0x4)
	unsigned char unreflected_5c[0x4]; // 0x5c (0x4) 
	struct FRigUnit_MultiFABRIK_WorkData WorkData; // 0x60 (0x68)
};

