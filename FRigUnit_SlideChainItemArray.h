// ScriptStruct /Script/ControlRig.RigUnit_SlideChainItemArray
// Size: 0x98
struct FRigUnit_SlideChainItemArray : FRigUnit_HighlevelBaseMutable
{
	struct TArray<struct FRigElementKey*> Items; // 0x38 (0x10)
	float SlideAmount; // 0x48 (0x4)
	bool bPropagateToChildren; // 0x4c (0x1)
	unsigned char unreflected_4d[0x3]; // 0x4d (0x3) 
	struct FRigUnit_SlideChain_WorkData WorkData; // 0x50 (0x48)
};

