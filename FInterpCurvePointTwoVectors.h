// ScriptStruct /Script/CoreUObject.InterpCurvePointTwoVectors
// Size: 0xa0
struct FInterpCurvePointTwoVectors
{
	float InVal; // 0x0 (0x4)
	unsigned char unreflected_4[0x4]; // 0x4 (0x4) 
	struct FTwoVectors OutVal; // 0x8 (0x30)
	struct FTwoVectors ArriveTangent; // 0x38 (0x30)
	struct FTwoVectors LeaveTangent; // 0x68 (0x30)
	struct TEnumAsByte<EInterpCurveMode> InterpMode; // 0x98 (0x1)
	unsigned char padding_99[0x7]; // 0x99 (0x7)
};

