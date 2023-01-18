// ScriptStruct /Script/CoreUObject.InterpCurvePointVector
// Size: 0x58
struct FInterpCurvePointVector
{
	float InVal; // 0x0 (0x4)
	unsigned char unreflected_4[0x4]; // 0x4 (0x4) 
	struct FVector OutVal; // 0x8 (0x18)
	struct FVector ArriveTangent; // 0x20 (0x18)
	struct FVector LeaveTangent; // 0x38 (0x18)
	struct TEnumAsByte<EInterpCurveMode> InterpMode; // 0x50 (0x1)
	unsigned char padding_51[0x7]; // 0x51 (0x7)
};

