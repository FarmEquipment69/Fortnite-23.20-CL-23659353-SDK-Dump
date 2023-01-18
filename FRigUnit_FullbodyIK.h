// ScriptStruct /Script/FullBodyIK.RigUnit_FullbodyIK
// Size: 0x2b0
struct FRigUnit_FullbodyIK : FRigUnit_HighlevelBaseMutable
{
	struct FRigElementKey* Root; // 0x38 (0x8)
	struct TArray<struct FFBIKEndEffector> Effectors; // 0x40 (0x10)
	struct TArray<struct FFBIKConstraintOption> Constraints; // 0x50 (0x10)
	struct FSolverInput SolverProperty; // 0x60 (0x24)
	struct FMotionProcessInput MotionProperty; // 0x84 (0x2)
	bool bPropagateToChildren; // 0x86 (0x1)
	unsigned char unreflected_87[0x9]; // 0x87 (0x9) 
	struct FFBIKDebugOption DebugOption; // 0x90 (0x80)
	struct FRigUnit_FullbodyIK_WorkData WorkData; // 0x110 (0x198)
	unsigned char padding_2a8[0x8]; // 0x2a8 (0x8)
};

