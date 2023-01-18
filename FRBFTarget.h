// ScriptStruct /Script/AnimGraphRuntime.RBFTarget
// Size: 0xa0
struct FRBFTarget : FRBFEntry
{
	float ScaleFactor; // 0x10 (0x4)
	bool bApplyCustomCurve; // 0x14 (0x1)
	unsigned char unreflected_15[0x3]; // 0x15 (0x3) 
	struct FRichCurve CustomCurve; // 0x18 (0x80)
	enum ERBFDistanceMethod DistanceMethod; // 0x98 (0x1)
	enum ERBFFunctionType FunctionType; // 0x99 (0x1)
	unsigned char padding_9a[0x6]; // 0x9a (0x6)
};

