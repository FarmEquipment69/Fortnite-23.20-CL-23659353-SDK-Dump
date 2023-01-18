// ScriptStruct /Script/AnimGraphRuntime.AnimNode_ApplyAdditive
// Size: 0xc8
struct FAnimNode_ApplyAdditive : FAnimNode_Base
{
	struct FPoseLink Base; // 0x10 (0x10)
	struct FPoseLink Additive; // 0x20 (0x10)
	float Alpha; // 0x30 (0x4)
	struct FInputScaleBias* AlphaScaleBias; // 0x34 (0x8)
	int LODThreshold; // 0x3c (0x4)
	struct FInputAlphaBoolBlend AlphaBoolBlend; // 0x40 (0x48)
	struct FName AlphaCurveName; // 0x88 (0x4)
	struct FInputScaleBiasClamp AlphaScaleBiasClamp; // 0x8c (0x30)
	unsigned char unreflected_bc[0x4]; // 0xbc (0x4) 
	enum EAnimAlphaInputType AlphaInputType; // 0xc0 (0x1)
	bool bAlphaBoolEnabled; // 0xc1 (0x1)
	unsigned char padding_c2[0x6]; // 0xc2 (0x6)
};

