// ScriptStruct /Script/ControlRig.RigUnit_AccumulateTransformLerp
// Size: 0x1a0
struct FRigUnit_AccumulateTransformLerp : FRigUnit_AccumulateBase
{
	unsigned char unreflected_8[0x8]; // 0x8 (0x8) 
	struct FTransform TargetValue; // 0x10 (0x60)
	struct FTransform InitialValue; // 0x70 (0x60)
	float Blend; // 0xd0 (0x4)
	bool bIntegrateDeltaTime; // 0xd4 (0x1)
	unsigned char unreflected_d5[0xb]; // 0xd5 (0xb) 
	struct FTransform Result; // 0xe0 (0x60)
	struct FTransform AccumulatedValue; // 0x140 (0x60)
};

