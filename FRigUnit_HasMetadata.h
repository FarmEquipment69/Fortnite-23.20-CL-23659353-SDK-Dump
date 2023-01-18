// ScriptStruct /Script/ControlRig.RigUnit_HasMetadata
// Size: 0x30
struct FRigUnit_HasMetadata : FRigUnit
{
	struct FRigElementKey* Item; // 0x8 (0x8)
	struct FName Name; // 0x10 (0x4)
	enum ERigMetadataType Type; // 0x14 (0x1)
	bool Found; // 0x15 (0x1)
	unsigned char unreflected_16[0x2]; // 0x16 (0x2) 
	struct FCachedRigElement CachedIndex; // 0x18 (0x18)
};

