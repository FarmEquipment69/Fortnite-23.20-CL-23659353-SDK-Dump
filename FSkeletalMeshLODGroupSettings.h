// ScriptStruct /Script/Engine.SkeletalMeshLODGroupSettings
// Size: 0x90
struct FSkeletalMeshLODGroupSettings
{
	struct FPerPlatformFloat ScreenSize; // 0x0 (0x4)
	float LODHysteresis; // 0x4 (0x4)
	enum EBoneFilterActionOption BoneFilterActionOption; // 0x8 (0x1)
	unsigned char unreflected_9[0x7]; // 0x9 (0x7) 
	struct TArray<struct FBoneFilter*> BoneList; // 0x10 (0x10)
	struct TArray<struct FName> BonesToPrioritize; // 0x20 (0x10)
	struct TArray<int> SectionsToPrioritize; // 0x30 (0x10)
	float WeightOfPrioritization; // 0x40 (0x4)
	unsigned char unreflected_44[0x4]; // 0x44 (0x4) 
	class UAnimSequence* BakePose; // 0x48 (0x8)
	struct FSkeletalMeshOptimizationSettings ReductionSettings; // 0x50 (0x3c)
	unsigned char padding_8c[0x4]; // 0x8c (0x4)
};

