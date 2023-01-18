// ScriptStruct /Script/ControlRig.RigUnit_DeltaFromPreviousQuat
// Size: 0x90
struct FRigUnit_DeltaFromPreviousQuat : FRigUnit_SimBase
{
	unsigned char unreflected_8[0x8]; // 0x8 (0x8) 
	struct FQuat Value; // 0x10 (0x20)
	struct FQuat Delta; // 0x30 (0x20)
	struct FQuat PreviousValue; // 0x50 (0x20)
	struct FQuat Cache; // 0x70 (0x20)
};

