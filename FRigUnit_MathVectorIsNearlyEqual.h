// ScriptStruct /Script/ControlRig.RigUnit_MathVectorIsNearlyEqual
// Size: 0x40
struct FRigUnit_MathVectorIsNearlyEqual : FRigUnit_MathVectorBase
{
	struct FVector A; // 0x8 (0x18)
	struct FVector B; // 0x20 (0x18)
	float Tolerance; // 0x38 (0x4)
	bool Result; // 0x3c (0x1)
	unsigned char padding_3d[0x3]; // 0x3d (0x3)
};

