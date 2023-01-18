// ScriptStruct /Script/ControlRig.RigUnit_NoiseVector2
// Size: 0x90
struct FRigUnit_NoiseVector2 : FRigUnit_MathBase
{
	struct FVector Value; // 0x8 (0x18)
	struct FVector Speed; // 0x20 (0x18)
	struct FVector Frequency; // 0x38 (0x18)
	double Minimum; // 0x50 (0x8)
	double Maximum; // 0x58 (0x8)
	struct FVector Result; // 0x60 (0x18)
	struct FVector Time; // 0x78 (0x18)
};

