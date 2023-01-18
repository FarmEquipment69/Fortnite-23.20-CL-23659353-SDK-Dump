// ScriptStruct /Script/ControlRig.RigUnit_TimeOffsetVector
// Size: 0x70
struct FRigUnit_TimeOffsetVector : FRigUnit_SimBase
{
	struct FVector Value; // 0x8 (0x18)
	float SecondsAgo; // 0x20 (0x4)
	int BufferSize; // 0x24 (0x4)
	float TimeRange; // 0x28 (0x4)
	unsigned char unreflected_2c[0x4]; // 0x2c (0x4) 
	struct FVector Result; // 0x30 (0x18)
	struct TArray<struct FVector> Buffer; // 0x48 (0x10)
	struct TArray<float> DeltaTimes; // 0x58 (0x10)
	int LastInsertIndex; // 0x68 (0x4)
	int UpperBound; // 0x6c (0x4)
};

