// ScriptStruct /Script/AnimGraphRuntime.AnimNode_SkeletalControlBase
// Size: 0xc8
struct FAnimNode_SkeletalControlBase : FAnimNode_Base
{
	struct FComponentSpacePoseLink ComponentPose; // 0x10 (0x10)
	int LODThreshold; // 0x20 (0x4)
	float ActualAlpha; // 0x24 (0x4)
	enum EAnimAlphaInputType AlphaInputType; // 0x28 (0x1)
	bool bAlphaBoolEnabled; // 0x29 (0x1)
	unsigned char unreflected_2a[0x2]; // 0x2a (0x2) 
	float Alpha; // 0x2c (0x4)
	struct FInputScaleBias* AlphaScaleBias; // 0x30 (0x8)
	struct FInputAlphaBoolBlend AlphaBoolBlend; // 0x38 (0x48)
	struct FName AlphaCurveName; // 0x80 (0x4)
	struct FInputScaleBiasClamp AlphaScaleBiasClamp; // 0x84 (0x30)
	unsigned char padding_b4[0x14]; // 0xb4 (0x14)
};

