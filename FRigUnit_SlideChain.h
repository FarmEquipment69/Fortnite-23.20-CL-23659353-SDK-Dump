// ScriptStruct /Script/ControlRig.RigUnit_SlideChain
// Size: 0x90
struct FRigUnit_SlideChain : FRigUnit_HighlevelBaseMutable
{
	struct FName StartBone; // 0x38 (0x4)
	struct FName EndBone; // 0x3c (0x4)
	float SlideAmount; // 0x40 (0x4)
	bool bPropagateToChildren; // 0x44 (0x1)
	unsigned char unreflected_45[0x3]; // 0x45 (0x3) 
	struct FRigUnit_SlideChain_WorkData WorkData; // 0x48 (0x48)
};

