// ScriptStruct /Script/Engine.RealCurve
// Size: 0x70
struct FRealCurve : FIndexedCurve
{
	float DefaultValue; // 0x68 (0x4)
	struct TEnumAsByte<ERichCurveExtrapolation> PreInfinityExtrap; // 0x6c (0x1)
	struct TEnumAsByte<ERichCurveExtrapolation> PostInfinityExtrap; // 0x6d (0x1)
	unsigned char padding_6e[0x2]; // 0x6e (0x2)
};

