// ScriptStruct /Script/ControlRig.RigUnit_TimeOffsetTransform
// Size: 0x110
struct FRigUnit_TimeOffsetTransform : FRigUnit_SimBase
{
	unsigned char unreflected_8[0x8]; // 0x8 (0x8) 
	struct FTransform Value; // 0x10 (0x60)
	float SecondsAgo; // 0x70 (0x4)
	int BufferSize; // 0x74 (0x4)
	float TimeRange; // 0x78 (0x4)
	unsigned char unreflected_7c[0x4]; // 0x7c (0x4) 
	struct FTransform Result; // 0x80 (0x60)
	struct TArray<struct FTransform> Buffer; // 0xe0 (0x10)
	struct TArray<float> DeltaTimes; // 0xf0 (0x10)
	int LastInsertIndex; // 0x100 (0x4)
	int UpperBound; // 0x104 (0x4)
	unsigned char padding_108[0x8]; // 0x108 (0x8)
};

