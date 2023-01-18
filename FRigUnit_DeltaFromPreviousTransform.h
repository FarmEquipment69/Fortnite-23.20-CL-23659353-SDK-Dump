// ScriptStruct /Script/ControlRig.RigUnit_DeltaFromPreviousTransform
// Size: 0x190
struct FRigUnit_DeltaFromPreviousTransform : FRigUnit_SimBase
{
	unsigned char unreflected_8[0x8]; // 0x8 (0x8) 
	struct FTransform Value; // 0x10 (0x60)
	struct FTransform Delta; // 0x70 (0x60)
	struct FTransform PreviousValue; // 0xd0 (0x60)
	struct FTransform Cache; // 0x130 (0x60)
};

