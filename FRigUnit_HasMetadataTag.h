// ScriptStruct /Script/ControlRig.RigUnit_HasMetadataTag
// Size: 0x30
struct FRigUnit_HasMetadataTag : FRigUnit
{
	struct FRigElementKey* Item; // 0x8 (0x8)
	struct FName tag; // 0x10 (0x4)
	bool Found; // 0x14 (0x1)
	unsigned char unreflected_15[0x3]; // 0x15 (0x3) 
	struct FCachedRigElement CachedIndex; // 0x18 (0x18)
};

