// ScriptStruct /Script/IKRig.AnimNode_IKRig
// Size: 0x1e0
struct FAnimNode_IKRig : FAnimNode_CustomProperty
{
	struct FPoseLink Source; // 0x58 (0x10)
	class UIKRigDefinition* RigDefinitionAsset; // 0x68 (0x8)
	struct TArray<struct FIKRigGoal> Goals; // 0x70 (0x10)
	bool bStartFromRefPose; // 0x80 (0x1)
	enum EAnimAlphaInputType AlphaInputType; // 0x81 (0x1)
	bool bAlphaBoolEnabled; // 0x82 (0x1)
	unsigned char unreflected_83[0x1]; // 0x83 (0x1) 
	float Alpha; // 0x84 (0x4)
	struct FInputScaleBias* AlphaScaleBias; // 0x88 (0x8)
	struct FInputAlphaBoolBlend AlphaBoolBlend; // 0x90 (0x48)
	struct FName AlphaCurveName; // 0xd8 (0x4)
	struct FInputScaleBiasClamp AlphaScaleBiasClamp; // 0xdc (0x30)
	unsigned char unreflected_10c[0x4]; // 0x10c (0x4) 
	class UIKRigProcessor* IKRigProcessor; // 0x110 (0x8)
	unsigned char unreflected_118[0xc0]; // 0x118 (0xc0) 
	float ActualAlpha; // 0x1d8 (0x4)
	unsigned char padding_1dc[0x4]; // 0x1dc (0x4)
};

