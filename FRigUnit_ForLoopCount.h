// ScriptStruct /Script/ControlRig.RigUnit_ForLoopCount
// Size: 0x78
struct FRigUnit_ForLoopCount : FRigUnitMutable
{
	int Count; // 0x38 (0x4)
	int Index; // 0x3c (0x4)
	float Ratio; // 0x40 (0x4)
	bool Continue; // 0x44 (0x1)
	unsigned char unreflected_45[0x3]; // 0x45 (0x3) 
	struct FControlRigExecuteContext Completed; // 0x48 (0x30)
};

