// ScriptStruct /Script/ControlRig.RigUnit_AccumulateFloatLerp
// Size: 0x20
struct FRigUnit_AccumulateFloatLerp : FRigUnit_AccumulateBase
{
	float TargetValue; // 0x8 (0x4)
	float InitialValue; // 0xc (0x4)
	float Blend; // 0x10 (0x4)
	bool bIntegrateDeltaTime; // 0x14 (0x1)
	unsigned char unreflected_15[0x3]; // 0x15 (0x3) 
	float Result; // 0x18 (0x4)
	float AccumulatedValue; // 0x1c (0x4)
};

