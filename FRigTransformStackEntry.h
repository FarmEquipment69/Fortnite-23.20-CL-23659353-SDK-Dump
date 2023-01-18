// ScriptStruct /Script/ControlRig.RigTransformStackEntry
// Size: 0xf0
struct FRigTransformStackEntry
{
	struct FRigElementKey* Key; // 0x0 (0x8)
	struct TEnumAsByte<ERigTransformStackEntryType> EntryType; // 0x8 (0x1)
	struct TEnumAsByte<ERigTransformType> TransformType; // 0x9 (0x1)
	unsigned char unreflected_a[0x6]; // 0xa (0x6) 
	struct FTransform OldTransform; // 0x10 (0x60)
	struct FTransform NewTransform; // 0x70 (0x60)
	bool bAffectChildren; // 0xd0 (0x1)
	unsigned char unreflected_d1[0x7]; // 0xd1 (0x7) 
	struct TArray<struct FString> Callstack; // 0xd8 (0x10)
	unsigned char padding_e8[0x8]; // 0xe8 (0x8)
};

