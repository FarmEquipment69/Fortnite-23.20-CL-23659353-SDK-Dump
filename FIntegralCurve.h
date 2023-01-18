// ScriptStruct /Script/Engine.IntegralCurve
// Size: 0x80
struct FIntegralCurve : FIndexedCurve
{
	struct TArray<struct FIntegralKey*> Keys; // 0x68 (0x10)
	int DefaultValue; // 0x78 (0x4)
	bool bUseDefaultValueBeforeFirstKey; // 0x7c (0x1)
	unsigned char padding_7d[0x3]; // 0x7d (0x3)
};

