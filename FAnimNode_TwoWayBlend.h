// ScriptStruct /Script/AnimGraphRuntime.AnimNode_TwoWayBlend
// Size: 0xc0
struct FAnimNode_TwoWayBlend : FAnimNode_Base
{
	struct FPoseLink A; // 0x10 (0x10)
	struct FPoseLink B; // 0x20 (0x10)
	enum EAnimAlphaInputType AlphaInputType; // 0x30 (0x1)
	unsigned char bAlphaBoolEnabled; // 0x31 (0x1)
	unsigned char bResetChildOnActivation; // 0x31 (0x1)
	unsigned char unreflected_32[0x2]; // 0x32 (0x2) 
	float Alpha; // 0x34 (0x4)
	struct FInputScaleBias* AlphaScaleBias; // 0x38 (0x8)
	struct FInputAlphaBoolBlend AlphaBoolBlend; // 0x40 (0x48)
	struct FName AlphaCurveName; // 0x88 (0x4)
	struct FInputScaleBiasClamp AlphaScaleBiasClamp; // 0x8c (0x30)
	unsigned char padding_bc[0x4]; // 0xbc (0x4)
};

