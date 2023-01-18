// ScriptStruct /Script/ControlRig.RigUnit_GetControlVisibility
// Size: 0x30
struct FRigUnit_GetControlVisibility : FRigUnit
{
	struct FRigElementKey* Item; // 0x8 (0x8)
	bool bVisible; // 0x10 (0x1)
	unsigned char unreflected_11[0x7]; // 0x11 (0x7) 
	struct FCachedRigElement CachedControlIndex; // 0x18 (0x18)
};

