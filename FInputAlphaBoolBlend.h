// ScriptStruct /Script/Engine.InputAlphaBoolBlend
// Size: 0x48
struct FInputAlphaBoolBlend
{
	float BlendInTime; // 0x0 (0x4)
	float BlendOutTime; // 0x4 (0x4)
	enum EAlphaBlendOption BlendOption; // 0x8 (0x1)
	bool bInitialized; // 0x9 (0x1)
	unsigned char unreflected_a[0x6]; // 0xa (0x6) 
	class UCurveFloat* CustomCurve; // 0x10 (0x8)
	struct FAlphaBlend AlphaBlend; // 0x18 (0x30)
};

