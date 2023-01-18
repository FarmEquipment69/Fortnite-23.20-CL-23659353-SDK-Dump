// ScriptStruct /Script/ControlRig.RigUnit_AccumulateVectorLerp
// Size: 0x70
struct FRigUnit_AccumulateVectorLerp : FRigUnit_AccumulateBase
{
	struct FVector TargetValue; // 0x8 (0x18)
	struct FVector InitialValue; // 0x20 (0x18)
	float Blend; // 0x38 (0x4)
	bool bIntegrateDeltaTime; // 0x3c (0x1)
	unsigned char unreflected_3d[0x3]; // 0x3d (0x3) 
	struct FVector Result; // 0x40 (0x18)
	struct FVector AccumulatedValue; // 0x58 (0x18)
};

