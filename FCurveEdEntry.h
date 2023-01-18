// ScriptStruct /Script/Engine.CurveEdEntry
// Size: 0x38
struct FCurveEdEntry
{
	class UObject* CurveObject; // 0x0 (0x8)
	struct FColor CurveColor; // 0x8 (0x4)
	unsigned char unreflected_c[0x4]; // 0xc (0x4) 
	struct FString CurveName; // 0x10 (0x10)
	int bHideCurve; // 0x20 (0x4)
	int bColorCurve; // 0x24 (0x4)
	int bFloatingPointColorCurve; // 0x28 (0x4)
	int bClamp; // 0x2c (0x4)
	float ClampLow; // 0x30 (0x4)
	float ClampHigh; // 0x34 (0x4)
};

