// ScriptStruct /Script/CoreUObject.InterpCurvePointVector2D
// Size: 0x40
struct FInterpCurvePointVector2D
{
	float InVal; // 0x0 (0x4)
	unsigned char unreflected_4[0x4]; // 0x4 (0x4) 
	struct FVector2D OutVal; // 0x8 (0x10)
	struct FVector2D ArriveTangent; // 0x18 (0x10)
	struct FVector2D LeaveTangent; // 0x28 (0x10)
	struct TEnumAsByte<EInterpCurveMode> InterpMode; // 0x38 (0x1)
	unsigned char padding_39[0x7]; // 0x39 (0x7)
};

