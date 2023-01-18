// ScriptStruct /Script/ControlRig.RigUnit_PropagateTransform
// Size: 0x60
struct FRigUnit_PropagateTransform : FRigUnitMutable
{
	struct FRigElementKey* Item; // 0x38 (0x8)
	bool bRecomputeGlobal; // 0x40 (0x1)
	bool bApplyToChildren; // 0x41 (0x1)
	bool bRecursive; // 0x42 (0x1)
	unsigned char unreflected_43[0x5]; // 0x43 (0x5) 
	struct FCachedRigElement CachedIndex; // 0x48 (0x18)
};

