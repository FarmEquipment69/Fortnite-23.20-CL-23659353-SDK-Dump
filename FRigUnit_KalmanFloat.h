// ScriptStruct /Script/ControlRig.RigUnit_KalmanFloat
// Size: 0x30
struct FRigUnit_KalmanFloat : FRigUnit_SimBase
{
	float Value; // 0x8 (0x4)
	int BufferSize; // 0xc (0x4)
	float Result; // 0x10 (0x4)
	unsigned char unreflected_14[0x4]; // 0x14 (0x4) 
	struct TArray<float> Buffer; // 0x18 (0x10)
	int LastInsertIndex; // 0x28 (0x4)
	unsigned char padding_2c[0x4]; // 0x2c (0x4)
};

