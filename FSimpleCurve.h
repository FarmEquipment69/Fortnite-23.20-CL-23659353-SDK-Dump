// ScriptStruct /Script/Engine.SimpleCurve
// Size: 0x88
struct FSimpleCurve : FRealCurve
{
	struct TEnumAsByte<ERichCurveInterpMode> InterpMode; // 0x70 (0x1)
	unsigned char unreflected_71[0x7]; // 0x71 (0x7) 
	struct TArray<struct FSimpleCurveKey*> Keys; // 0x78 (0x10)
};

