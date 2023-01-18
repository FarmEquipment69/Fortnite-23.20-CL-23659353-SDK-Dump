// ScriptStruct /Script/ControlRig.RigUnit_AccumulateVectorRange
// Size: 0x80
struct FRigUnit_AccumulateVectorRange : FRigUnit_AccumulateBase
{
	struct FVector Value; // 0x8 (0x18)
	struct FVector Minimum; // 0x20 (0x18)
	struct FVector Maximum; // 0x38 (0x18)
	struct FVector AccumulatedMinimum; // 0x50 (0x18)
	struct FVector AccumulatedMaximum; // 0x68 (0x18)
};

