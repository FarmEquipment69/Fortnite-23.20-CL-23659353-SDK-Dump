// ScriptStruct /Script/Engine.InputScaleBiasClampConstants
// Size: 0x2c
struct FInputScaleBiasClampConstants
{
	bool bMapRange; // 0x0 (0x1)
	bool bClampResult; // 0x1 (0x1)
	bool bInterpResult; // 0x2 (0x1)
	unsigned char unreflected_3[0x1]; // 0x3 (0x1) 
	struct FInputRange* InRange; // 0x4 (0x8)
	struct FInputRange* OutRange; // 0xc (0x8)
	float Scale; // 0x14 (0x4)
	float Bias; // 0x18 (0x4)
	float ClampMin; // 0x1c (0x4)
	float ClampMax; // 0x20 (0x4)
	float InterpSpeedIncreasing; // 0x24 (0x4)
	float InterpSpeedDecreasing; // 0x28 (0x4)
};

