// ScriptStruct /Script/ControlRig.RigUnit_AccumulateVectorMul
// Size: 0x70
struct FRigUnit_AccumulateVectorMul : FRigUnit_AccumulateBase
{
	struct FVector Multiplier; // 0x8 (0x18)
	struct FVector InitialValue; // 0x20 (0x18)
	bool bIntegrateDeltaTime; // 0x38 (0x1)
	unsigned char unreflected_39[0x7]; // 0x39 (0x7) 
	struct FVector Result; // 0x40 (0x18)
	struct FVector AccumulatedValue; // 0x58 (0x18)
};

