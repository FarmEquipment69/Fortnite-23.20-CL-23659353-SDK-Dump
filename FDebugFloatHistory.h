// ScriptStruct /Script/Engine.DebugFloatHistory
// Size: 0x20
struct FDebugFloatHistory
{
	struct TArray<float> Samples; // 0x0 (0x10)
	int MaxSamples; // 0x10 (0x4)
	float MinValue; // 0x14 (0x4)
	float MaxValue; // 0x18 (0x4)
	bool bAutoAdjustMinMax; // 0x1c (0x1)
	unsigned char padding_1d[0x3]; // 0x1d (0x3)
};

