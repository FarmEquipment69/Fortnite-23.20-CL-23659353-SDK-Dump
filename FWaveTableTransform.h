// ScriptStruct /Script/WaveTable.WaveTableTransform
// Size: 0xa0
struct FWaveTableTransform
{
	enum EWaveTableCurve Curve; // 0x0 (0x1)
	unsigned char unreflected_1[0x3]; // 0x1 (0x3) 
	float Scalar; // 0x4 (0x4)
	struct FRichCurve CurveCustom; // 0x8 (0x80)
	class UCurveFloat* CurveShared; // 0x88 (0x8)
	struct TArray<float> WaveTable; // 0x90 (0x10)
};

