// ScriptStruct /Script/IKRig.AnimNode_RetargetPoseFromMesh
// Size: 0x248
struct FAnimNode_RetargetPoseFromMesh : FAnimNode_Base
{
	struct TWeakObjectPtr<class USkeletalMeshComponent> SourceMeshComponent; // 0x10 (0x8)
	bool bUseAttachedParent; // 0x18 (0x1)
	unsigned char unreflected_19[0x7]; // 0x19 (0x7) 
	class UIKRetargeter* IKRetargeterAsset; // 0x20 (0x8)
	struct FRetargetProfile CustomRetargetProfile; // 0x28 (0xf8)
	bool bSuppressWarnings; // 0x120 (0x1)
	bool bCopyCurves; // 0x121 (0x1)
	unsigned char unreflected_122[0x6]; // 0x122 (0x6) 
	class UIKRetargetProcessor* Processor; // 0x128 (0x8)
	unsigned char padding_130[0x118]; // 0x130 (0x118)
};

