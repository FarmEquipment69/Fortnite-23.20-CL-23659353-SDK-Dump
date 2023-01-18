// ScriptStruct /Script/Engine.AttributeCurve
// Size: 0xa8
struct FAttributeCurve : FIndexedCurve
{
	struct TArray<struct FAttributeKey> Keys; // 0x68 (0x10)
	struct FSoftObjectPath ScriptStructPath; // 0x78 (0x18)
	class UScriptStruct* ScriptStruct; // 0x90 (0x8)
	bool bShouldInterpolate; // 0x98 (0x1)
	unsigned char padding_99[0xf]; // 0x99 (0xf)
};

