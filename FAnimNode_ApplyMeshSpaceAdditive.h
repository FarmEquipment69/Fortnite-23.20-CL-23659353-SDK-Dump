// ScriptStruct /Script/Engine.AnimNode_ApplyMeshSpaceAdditive
// Size: 0xd0
struct FAnimNode_ApplyMeshSpaceAdditive : FAnimNode_Base
{
	struct FPoseLink Base; // 0x10 (0x10)
	struct FPoseLink Additive; // 0x20 (0x10)
	enum EAnimAlphaInputType AlphaInputType; // 0x30 (0x1)
	unsigned char unreflected_31[0x3]; // 0x31 (0x3) 
	float Alpha; // 0x34 (0x4)
	unsigned char bAlphaBoolEnabled; // 0x38 (0x1)
	unsigned char unreflected_39[0x7]; // 0x39 (0x7) 
	struct FInputAlphaBoolBlend AlphaBoolBlend; // 0x40 (0x48)
	struct FName AlphaCurveName; // 0x88 (0x4)
	struct FInputScaleBias* AlphaScaleBias; // 0x8c (0x8)
	struct FInputScaleBiasClamp AlphaScaleBiasClamp; // 0x94 (0x30)
	int LODThreshold; // 0xc4 (0x4)
	unsigned char padding_c8[0x8]; // 0xc8 (0x8)
};

