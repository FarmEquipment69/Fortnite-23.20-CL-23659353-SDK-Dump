// ScriptStruct /Script/ControlRig.RigUnit_AlphaInterp
// Size: 0x78
struct FRigUnit_AlphaInterp : FRigUnit_SimBase
{
	float Value; // 0x8 (0x4)
	float Scale; // 0xc (0x4)
	float Bias; // 0x10 (0x4)
	bool bMapRange; // 0x14 (0x1)
	unsigned char unreflected_15[0x3]; // 0x15 (0x3) 
	struct FInputRange* InRange; // 0x18 (0x8)
	struct FInputRange* OutRange; // 0x20 (0x8)
	bool bClampResult; // 0x28 (0x1)
	unsigned char unreflected_29[0x3]; // 0x29 (0x3) 
	float ClampMin; // 0x2c (0x4)
	float ClampMax; // 0x30 (0x4)
	bool bInterpResult; // 0x34 (0x1)
	unsigned char unreflected_35[0x3]; // 0x35 (0x3) 
	float InterpSpeedIncreasing; // 0x38 (0x4)
	float InterpSpeedDecreasing; // 0x3c (0x4)
	float Result; // 0x40 (0x4)
	struct FInputScaleBiasClamp ScaleBiasClamp; // 0x44 (0x30)
	unsigned char padding_74[0x4]; // 0x74 (0x4)
};

