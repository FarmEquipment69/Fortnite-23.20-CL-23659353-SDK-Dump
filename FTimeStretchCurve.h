// ScriptStruct /Script/Engine.TimeStretchCurve
// Size: 0x28
struct FTimeStretchCurve
{
	float SamplingRate; // 0x0 (0x4)
	float CurveValueMinPrecision; // 0x4 (0x4)
	struct TArray<struct FTimeStretchCurveMarker> Markers; // 0x8 (0x10)
	float SumdTibyCi[0x3]; // 0x18 (0x4) (ARRAY) 
	unsigned char padding_24[0x4]; // 0x24 (0x4)
};

