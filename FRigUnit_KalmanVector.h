// ScriptStruct /Script/ControlRig.RigUnit_KalmanVector
// Size: 0x58
struct FRigUnit_KalmanVector : FRigUnit_SimBase
{
	struct FVector Value; // 0x8 (0x18)
	int BufferSize; // 0x20 (0x4)
	unsigned char unreflected_24[0x4]; // 0x24 (0x4) 
	struct FVector Result; // 0x28 (0x18)
	struct TArray<struct FVector> Buffer; // 0x40 (0x10)
	int LastInsertIndex; // 0x50 (0x4)
	unsigned char padding_54[0x4]; // 0x54 (0x4)
};

