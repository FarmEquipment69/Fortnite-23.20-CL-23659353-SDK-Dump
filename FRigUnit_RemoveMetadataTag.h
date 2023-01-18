// ScriptStruct /Script/ControlRig.RigUnit_RemoveMetadataTag
// Size: 0x60
struct FRigUnit_RemoveMetadataTag : FRigUnitMutable
{
	struct FRigElementKey* Item; // 0x38 (0x8)
	struct FName tag; // 0x40 (0x4)
	bool Removed; // 0x44 (0x1)
	unsigned char unreflected_45[0x3]; // 0x45 (0x3) 
	struct FCachedRigElement CachedIndex; // 0x48 (0x18)
};

