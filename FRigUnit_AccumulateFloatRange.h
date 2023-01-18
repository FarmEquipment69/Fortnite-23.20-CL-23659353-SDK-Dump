// ScriptStruct /Script/ControlRig.RigUnit_AccumulateFloatRange
// Size: 0x20
struct FRigUnit_AccumulateFloatRange : FRigUnit_AccumulateBase
{
	float Value; // 0x8 (0x4)
	float Minimum; // 0xc (0x4)
	float Maximum; // 0x10 (0x4)
	float AccumulatedMinimum; // 0x14 (0x4)
	float AccumulatedMaximum; // 0x18 (0x4)
	unsigned char padding_1c[0x4]; // 0x1c (0x4)
};

