// ScriptStruct /Script/ControlRig.RigUnit_AlphaInterpQuat
// Size: 0xc0
struct FRigUnit_AlphaInterpQuat : FRigUnit_SimBase
{
	unsigned char unreflected_8[0x8]; // 0x8 (0x8) 
	struct FQuat Value; // 0x10 (0x20)
	float Scale; // 0x30 (0x4)
	float Bias; // 0x34 (0x4)
	bool bMapRange; // 0x38 (0x1)
	unsigned char unreflected_39[0x3]; // 0x39 (0x3) 
	struct FInputRange* InRange; // 0x3c (0x8)
	struct FInputRange* OutRange; // 0x44 (0x8)
	bool bClampResult; // 0x4c (0x1)
	unsigned char unreflected_4d[0x3]; // 0x4d (0x3) 
	float ClampMin; // 0x50 (0x4)
	float ClampMax; // 0x54 (0x4)
	bool bInterpResult; // 0x58 (0x1)
	unsigned char unreflected_59[0x3]; // 0x59 (0x3) 
	float InterpSpeedIncreasing; // 0x5c (0x4)
	float InterpSpeedDecreasing; // 0x60 (0x4)
	unsigned char unreflected_64[0xc]; // 0x64 (0xc) 
	struct FQuat Result; // 0x70 (0x20)
	struct FInputScaleBiasClamp ScaleBiasClamp; // 0x90 (0x30)
};

