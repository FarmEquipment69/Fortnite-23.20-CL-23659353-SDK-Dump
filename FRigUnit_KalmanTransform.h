// ScriptStruct /Script/ControlRig.RigUnit_KalmanTransform
// Size: 0x100
struct FRigUnit_KalmanTransform : FRigUnit_SimBase
{
	unsigned char unreflected_8[0x8]; // 0x8 (0x8) 
	struct FTransform Value; // 0x10 (0x60)
	int BufferSize; // 0x70 (0x4)
	unsigned char unreflected_74[0xc]; // 0x74 (0xc) 
	struct FTransform Result; // 0x80 (0x60)
	struct TArray<struct FTransform> Buffer; // 0xe0 (0x10)
	int LastInsertIndex; // 0xf0 (0x4)
	unsigned char padding_f4[0xc]; // 0xf4 (0xc)
};

