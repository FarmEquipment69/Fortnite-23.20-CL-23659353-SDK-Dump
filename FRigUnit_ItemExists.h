// ScriptStruct /Script/ControlRig.RigUnit_ItemExists
// Size: 0x30
struct FRigUnit_ItemExists : FRigUnit_ItemBase
{
	struct FRigElementKey* Item; // 0x8 (0x8)
	bool Exists; // 0x10 (0x1)
	unsigned char unreflected_11[0x7]; // 0x11 (0x7) 
	struct FCachedRigElement CachedIndex; // 0x18 (0x18)
};

