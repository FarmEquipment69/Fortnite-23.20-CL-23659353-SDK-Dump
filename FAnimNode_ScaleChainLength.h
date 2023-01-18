// ScriptStruct /Script/AnimGraphRuntime.AnimNode_ScaleChainLength
// Size: 0x80
struct FAnimNode_ScaleChainLength : FAnimNode_Base
{
	struct FPoseLink InputPose; // 0x10 (0x10)
	float DefaultChainLength; // 0x20 (0x4)
	struct FBoneReference ChainStartBone; // 0x24 (0xc)
	struct FBoneReference ChainEndBone; // 0x30 (0xc)
	unsigned char unreflected_3c[0x4]; // 0x3c (0x4) 
	struct FVector TargetLocation; // 0x40 (0x18)
	float Alpha; // 0x58 (0x4)
	unsigned char unreflected_5c[0x4]; // 0x5c (0x4) 
	struct FInputScaleBias* AlphaScaleBias; // 0x60 (0x8)
	enum EScaleChainInitialLength ChainInitialLength; // 0x68 (0x1)
	unsigned char padding_69[0x17]; // 0x69 (0x17)
};

