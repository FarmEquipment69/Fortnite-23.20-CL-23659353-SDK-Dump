// ScriptStruct /Script/ControlRig.RigUnit_NoiseVector
// Size: 0x88
struct FRigUnit_NoiseVector : FRigUnit_MathBase
{
	struct FVector Position; // 0x8 (0x18)
	struct FVector Speed; // 0x20 (0x18)
	struct FVector Frequency; // 0x38 (0x18)
	float Minimum; // 0x50 (0x4)
	float Maximum; // 0x54 (0x4)
	struct FVector Result; // 0x58 (0x18)
	struct FVector Time; // 0x70 (0x18)
};

