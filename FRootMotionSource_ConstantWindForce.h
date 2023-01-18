// ScriptStruct /Script/WindRuntime.RootMotionSource_ConstantWindForce
// Size: 0x100
struct FRootMotionSource_ConstantWindForce : FRootMotionSource
{
	struct FVector Force; // 0xd8 (0x18)
	class UCurveFloat* StrengthOverTime; // 0xf0 (0x8)
	unsigned char padding_f8[0x8]; // 0xf8 (0x8)
};

