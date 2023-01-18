// ScriptStruct /Script/ControlRig.RigUnit_TimeOffsetFloat
// Size: 0x48
struct FRigUnit_TimeOffsetFloat : FRigUnit_SimBase
{
	float Value; // 0x8 (0x4)
	float SecondsAgo; // 0xc (0x4)
	int BufferSize; // 0x10 (0x4)
	float TimeRange; // 0x14 (0x4)
	float Result; // 0x18 (0x4)
	unsigned char unreflected_1c[0x4]; // 0x1c (0x4) 
	struct TArray<float> Buffer; // 0x20 (0x10)
	struct TArray<float> DeltaTimes; // 0x30 (0x10)
	int LastInsertIndex; // 0x40 (0x4)
	int UpperBound; // 0x44 (0x4)
};

