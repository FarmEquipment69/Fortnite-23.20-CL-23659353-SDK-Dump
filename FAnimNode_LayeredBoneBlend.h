// ScriptStruct /Script/AnimGraphRuntime.AnimNode_LayeredBoneBlend
// Size: 0xe0
struct FAnimNode_LayeredBoneBlend : FAnimNode_Base
{
	struct FPoseLink BasePose; // 0x10 (0x10)
	struct TArray<struct FPoseLink> BlendPoses; // 0x20 (0x10)
	enum ELayeredBoneBlendMode BlendMode; // 0x30 (0x1)
	unsigned char unreflected_31[0x7]; // 0x31 (0x7) 
	struct TArray<class UBlendProfile*> BlendMasks; // 0x38 (0x10)
	struct TArray<struct FInputBlendPose> LayerSetup; // 0x48 (0x10)
	struct TArray<float> BlendWeights; // 0x58 (0x10)
	bool bMeshSpaceRotationBlend; // 0x68 (0x1)
	bool bMeshSpaceScaleBlend; // 0x69 (0x1)
	struct TEnumAsByte<ECurveBlendOption> CurveBlendOption; // 0x6a (0x1)
	bool bBlendRootMotionBasedOnRootBone; // 0x6b (0x1)
	unsigned char unreflected_6c[0x4]; // 0x6c (0x4) 
	int LODThreshold; // 0x70 (0x4)
	unsigned char unreflected_74[0x4]; // 0x74 (0x4) 
	struct TArray<struct FPerBoneBlendWeight*> PerBoneBlendWeights; // 0x78 (0x10)
	struct FGuid SkeletonGuid; // 0x88 (0x10)
	struct FGuid VirtualBoneGuid; // 0x98 (0x10)
	unsigned char padding_a8[0x38]; // 0xa8 (0x38)
};

