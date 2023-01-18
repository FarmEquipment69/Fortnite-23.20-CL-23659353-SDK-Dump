// ScriptStruct /Script/ControlRig.RigUnit_HasMetadataTagArray
// Size: 0x40
struct FRigUnit_HasMetadataTagArray : FRigUnit
{
	struct FRigElementKey* Item; // 0x8 (0x8)
	struct TArray<struct FName> Tags; // 0x10 (0x10)
	bool Found; // 0x20 (0x1)
	unsigned char unreflected_21[0x7]; // 0x21 (0x7) 
	struct FCachedRigElement CachedIndex; // 0x28 (0x18)
};

