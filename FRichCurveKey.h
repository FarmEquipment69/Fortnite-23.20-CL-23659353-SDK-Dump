// ScriptStruct /Script/Engine.RichCurveKey
// Size: 0x1c
struct FRichCurveKey
{
	struct TEnumAsByte<ERichCurveInterpMode> InterpMode; // 0x0 (0x1)
	struct TEnumAsByte<ERichCurveTangentMode> TangentMode; // 0x1 (0x1)
	struct TEnumAsByte<ERichCurveTangentWeightMode> TangentWeightMode; // 0x2 (0x1)
	unsigned char unreflected_3[0x1]; // 0x3 (0x1) 
	float Time; // 0x4 (0x4)
	float Value; // 0x8 (0x4)
	float ArriveTangent; // 0xc (0x4)
	float ArriveTangentWeight; // 0x10 (0x4)
	float LeaveTangent; // 0x14 (0x4)
	float LeaveTangentWeight; // 0x18 (0x4)
};

