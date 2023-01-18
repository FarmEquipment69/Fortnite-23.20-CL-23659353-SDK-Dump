// ScriptStruct /Script/AnimGraphRuntime.AnimNode_BlendBoneByChannel
// Size: 0x68
struct FAnimNode_BlendBoneByChannel : FAnimNode_Base
{
	struct FPoseLink A; // 0x10 (0x10)
	struct FPoseLink B; // 0x20 (0x10)
	struct TArray<struct FBlendBoneByChannelEntry> BoneDefinitions; // 0x30 (0x10)
	unsigned char unreflected_40[0x10]; // 0x40 (0x10) 
	float Alpha; // 0x50 (0x4)
	unsigned char unreflected_54[0x4]; // 0x54 (0x4) 
	struct FInputScaleBias* AlphaScaleBias; // 0x58 (0x8)
	struct TEnumAsByte<EBoneControlSpace> TransformsSpace; // 0x60 (0x1)
	unsigned char padding_61[0x7]; // 0x61 (0x7)
};

