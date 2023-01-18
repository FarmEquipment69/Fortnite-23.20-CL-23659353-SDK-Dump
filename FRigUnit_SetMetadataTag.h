// ScriptStruct /Script/ControlRig.RigUnit_SetMetadataTag
// Size: 0x60
struct FRigUnit_SetMetadataTag : FRigUnitMutable
{
	struct FRigElementKey* Item; // 0x38 (0x8)
	struct FName tag; // 0x40 (0x4)
	unsigned char unreflected_44[0x4]; // 0x44 (0x4) 
	struct FCachedRigElement CachedIndex; // 0x48 (0x18)
};

