// ScriptStruct /Script/AnimGraphRuntime.AnimNode_MultiWayBlend
// Size: 0x50
struct FAnimNode_MultiWayBlend : FAnimNode_Base
{
	struct TArray<struct FPoseLink> Poses; // 0x10 (0x10)
	struct TArray<float> DesiredAlphas; // 0x20 (0x10)
	unsigned char unreflected_30[0x10]; // 0x30 (0x10) 
	struct FInputScaleBias* AlphaScaleBias; // 0x40 (0x8)
	bool bAdditiveNode; // 0x48 (0x1)
	bool bNormalizeAlpha; // 0x49 (0x1)
	unsigned char padding_4a[0x6]; // 0x4a (0x6)
};

