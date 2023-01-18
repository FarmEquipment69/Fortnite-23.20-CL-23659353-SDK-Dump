// ScriptStruct /Script/CoreUObject.InterpCurvePointFloat
// Size: 0x14
struct FInterpCurvePointFloat
{
	float InVal; // 0x0 (0x4)
	float OutVal; // 0x4 (0x4)
	float ArriveTangent; // 0x8 (0x4)
	float LeaveTangent; // 0xc (0x4)
	struct TEnumAsByte<EInterpCurveMode> InterpMode; // 0x10 (0x1)
	unsigned char padding_11[0x3]; // 0x11 (0x3)
};

