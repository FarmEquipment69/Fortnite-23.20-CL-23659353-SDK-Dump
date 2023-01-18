// ScriptStruct /Script/AnimGraphRuntime.AnimNode_RotationOffsetBlendSpace
// Size: 0x118
struct FAnimNode_RotationOffsetBlendSpace : FAnimNode_BlendSpacePlayer
{
	struct FPoseLink BasePose; // 0x70 (0x10)
	int LODThreshold; // 0x80 (0x4)
	float Alpha; // 0x84 (0x4)
	struct FInputScaleBias* AlphaScaleBias; // 0x88 (0x8)
	struct FInputAlphaBoolBlend AlphaBoolBlend; // 0x90 (0x48)
	struct FName AlphaCurveName; // 0xd8 (0x4)
	struct FInputScaleBiasClamp AlphaScaleBiasClamp; // 0xdc (0x30)
	unsigned char unreflected_10c[0x4]; // 0x10c (0x4) 
	enum EAnimAlphaInputType AlphaInputType; // 0x110 (0x1)
	bool bAlphaBoolEnabled; // 0x111 (0x1)
	unsigned char padding_112[0x6]; // 0x112 (0x6)
};

