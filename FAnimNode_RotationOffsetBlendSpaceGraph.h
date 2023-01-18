// ScriptStruct /Script/AnimGraphRuntime.AnimNode_RotationOffsetBlendSpaceGraph
// Size: 0x108
struct FAnimNode_RotationOffsetBlendSpaceGraph : FAnimNode_BlendSpaceGraphBase
{
	struct FPoseLink BasePose; // 0x60 (0x10)
	int LODThreshold; // 0x70 (0x4)
	float Alpha; // 0x74 (0x4)
	struct FInputScaleBias* AlphaScaleBias; // 0x78 (0x8)
	struct FInputAlphaBoolBlend AlphaBoolBlend; // 0x80 (0x48)
	struct FName AlphaCurveName; // 0xc8 (0x4)
	struct FInputScaleBiasClamp AlphaScaleBiasClamp; // 0xcc (0x30)
	unsigned char unreflected_fc[0x4]; // 0xfc (0x4) 
	enum EAnimAlphaInputType AlphaInputType; // 0x100 (0x1)
	bool bAlphaBoolEnabled; // 0x101 (0x1)
	unsigned char padding_102[0x6]; // 0x102 (0x6)
};

