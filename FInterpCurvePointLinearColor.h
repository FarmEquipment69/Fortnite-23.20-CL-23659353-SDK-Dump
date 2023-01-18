// ScriptStruct /Script/CoreUObject.InterpCurvePointLinearColor
// Size: 0x38
struct FInterpCurvePointLinearColor
{
	float InVal; // 0x0 (0x4)
	struct FLinearColor OutVal; // 0x4 (0x10)
	struct FLinearColor ArriveTangent; // 0x14 (0x10)
	struct FLinearColor LeaveTangent; // 0x24 (0x10)
	struct TEnumAsByte<EInterpCurveMode> InterpMode; // 0x34 (0x1)
	unsigned char padding_35[0x3]; // 0x35 (0x3)
};

