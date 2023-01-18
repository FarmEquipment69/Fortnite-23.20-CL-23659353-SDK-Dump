// ScriptStruct /Script/ControlRig.RigUnit_AlphaInterpVector
// Size: 0xa0
struct FRigUnit_AlphaInterpVector : FRigUnit_SimBase
{
	struct FVector Value; // 0x8 (0x18)
	float Scale; // 0x20 (0x4)
	float Bias; // 0x24 (0x4)
	bool bMapRange; // 0x28 (0x1)
	unsigned char unreflected_29[0x3]; // 0x29 (0x3) 
	struct FInputRange* InRange; // 0x2c (0x8)
	struct FInputRange* OutRange; // 0x34 (0x8)
	bool bClampResult; // 0x3c (0x1)
	unsigned char unreflected_3d[0x3]; // 0x3d (0x3) 
	float ClampMin; // 0x40 (0x4)
	float ClampMax; // 0x44 (0x4)
	bool bInterpResult; // 0x48 (0x1)
	unsigned char unreflected_49[0x3]; // 0x49 (0x3) 
	float InterpSpeedIncreasing; // 0x4c (0x4)
	float InterpSpeedDecreasing; // 0x50 (0x4)
	unsigned char unreflected_54[0x4]; // 0x54 (0x4) 
	struct FVector Result; // 0x58 (0x18)
	struct FInputScaleBiasClamp ScaleBiasClamp; // 0x70 (0x30)
};

