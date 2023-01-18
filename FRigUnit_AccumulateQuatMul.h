// ScriptStruct /Script/ControlRig.RigUnit_AccumulateQuatMul
// Size: 0xa0
struct FRigUnit_AccumulateQuatMul : FRigUnit_AccumulateBase
{
	unsigned char unreflected_8[0x8]; // 0x8 (0x8) 
	struct FQuat Multiplier; // 0x10 (0x20)
	struct FQuat InitialValue; // 0x30 (0x20)
	bool bFlipOrder; // 0x50 (0x1)
	bool bIntegrateDeltaTime; // 0x51 (0x1)
	unsigned char unreflected_52[0xe]; // 0x52 (0xe) 
	struct FQuat Result; // 0x60 (0x20)
	struct FQuat AccumulatedValue; // 0x80 (0x20)
};

