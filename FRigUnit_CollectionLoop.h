// ScriptStruct /Script/ControlRig.RigUnit_CollectionLoop
// Size: 0x90
struct FRigUnit_CollectionLoop : FRigUnit_CollectionBaseMutable
{
	struct FRigElementKeyCollection Collection; // 0x38 (0x10)
	struct FRigElementKey* Item; // 0x48 (0x8)
	int Index; // 0x50 (0x4)
	int Count; // 0x54 (0x4)
	float Ratio; // 0x58 (0x4)
	bool Continue; // 0x5c (0x1)
	unsigned char unreflected_5d[0x3]; // 0x5d (0x3) 
	struct FControlRigExecuteContext Completed; // 0x60 (0x30)
};

