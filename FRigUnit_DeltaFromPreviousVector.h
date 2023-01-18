// ScriptStruct /Script/ControlRig.RigUnit_DeltaFromPreviousVector
// Size: 0x68
struct FRigUnit_DeltaFromPreviousVector : FRigUnit_SimBase
{
	struct FVector Value; // 0x8 (0x18)
	struct FVector Delta; // 0x20 (0x18)
	struct FVector PreviousValue; // 0x38 (0x18)
	struct FVector Cache; // 0x50 (0x18)
};

