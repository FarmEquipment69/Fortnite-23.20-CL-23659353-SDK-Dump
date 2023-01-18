// Class /Script/Engine.PoseAsset
// Size: 0x100
class UPoseAsset : public UAnimationAsset
{
	struct FPoseDataContainer PoseContainer; // 0x80 (0x60)
	bool bAdditivePose; // 0xe0 (0x1)
	unsigned char unreflected_e1[0x3]; // 0xe1 (0x3) 
	int BasePoseIndex; // 0xe4 (0x4)
	struct FName RetargetSource; // 0xe8 (0x4)
	unsigned char unreflected_ec[0x4]; // 0xec (0x4) 
	struct TArray<struct FTransform> RetargetSourceAssetReferencePose; // 0xf0 (0x10)
};

