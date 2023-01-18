// ScriptStruct /Script/ControlRig.RigUnit_AccumulateFloatMul
// Size: 0x20
struct FRigUnit_AccumulateFloatMul : FRigUnit_AccumulateBase
{
	float Multiplier; // 0x8 (0x4)
	float InitialValue; // 0xc (0x4)
	bool bIntegrateDeltaTime; // 0x10 (0x1)
	unsigned char unreflected_11[0x3]; // 0x11 (0x3) 
	float Result; // 0x14 (0x4)
	float AccumulatedValue; // 0x18 (0x4)
	unsigned char padding_1c[0x4]; // 0x1c (0x4)
};

