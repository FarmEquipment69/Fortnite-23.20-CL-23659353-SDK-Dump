// ScriptStruct /Script/ControlRig.RigUnit_AccumulateTransformMul
// Size: 0x1a0
struct FRigUnit_AccumulateTransformMul : FRigUnit_AccumulateBase
{
	unsigned char unreflected_8[0x8]; // 0x8 (0x8) 
	struct FTransform Multiplier; // 0x10 (0x60)
	struct FTransform InitialValue; // 0x70 (0x60)
	bool bFlipOrder; // 0xd0 (0x1)
	bool bIntegrateDeltaTime; // 0xd1 (0x1)
	unsigned char unreflected_d2[0xe]; // 0xd2 (0xe) 
	struct FTransform Result; // 0xe0 (0x60)
	struct FTransform AccumulatedValue; // 0x140 (0x60)
};

