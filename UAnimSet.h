// Class /Script/Engine.AnimSet
// Size: 0xe8
class UAnimSet : public UObject
{
	unsigned char bAnimRotationOnly; // 0x28 (0x1)
	unsigned char unreflected_29[0x7]; // 0x29 (0x7) 
	struct TArray<struct FName> TrackBoneNames; // 0x30 (0x10)
	struct TArray<struct FAnimSetMeshLinkup> LinkupCache; // 0x40 (0x10)
	struct TArray<unsigned char> BoneUseAnimTranslation; // 0x50 (0x10)
	struct TArray<unsigned char> ForceUseMeshTranslation; // 0x60 (0x10)
	struct TArray<struct FName> UseTranslationBoneNames; // 0x70 (0x10)
	struct TArray<struct FName> ForceMeshTranslationBoneNames; // 0x80 (0x10)
	struct FName PreviewSkelMeshName; // 0x90 (0x4)
	struct FName BestRatioSkelMeshName; // 0x94 (0x4)
	unsigned char padding_98[0x50]; // 0x98 (0x50)
};

