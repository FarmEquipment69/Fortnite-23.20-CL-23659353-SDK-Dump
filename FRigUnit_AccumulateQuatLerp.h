// ScriptStruct /Script/ControlRig.RigUnit_AccumulateQuatLerp
// Size: 0xa0
struct FRigUnit_AccumulateQuatLerp : FRigUnit_AccumulateBase
{
	unsigned char unreflected_8[0x8]; // 0x8 (0x8) 
	struct FQuat TargetValue; // 0x10 (0x20)
	struct FQuat InitialValue; // 0x30 (0x20)
	float Blend; // 0x50 (0x4)
	bool bIntegrateDeltaTime; // 0x54 (0x1)
	unsigned char unreflected_55[0xb]; // 0x55 (0xb) 
	struct FQuat Result; // 0x60 (0x20)
	struct FQuat AccumulatedValue; // 0x80 (0x20)
};

