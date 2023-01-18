// Class /Script/PoseSearch.PoseSearchDatabase
// Size: 0xb0
class UPoseSearchDatabase : public UPoseSearchSearchableAsset
{
	class UPoseSearchSchema* Schema; // 0x30 (0x8)
	struct FPoseSearchExtrapolationParameters ExtrapolationParameters; // 0x38 (0xc)
	struct FPoseSearchExcludeFromDatabaseParameters* ExcludeFromDatabaseParameters; // 0x44 (0x8)
	unsigned char unreflected_4c[0x4]; // 0x4c (0x4) 
	struct TArray<class UAnimSequence*> SimpleSequences; // 0x50 (0x10)
	struct TArray<struct FPoseSearchDatabaseSequence> Sequences; // 0x60 (0x10)
	struct TArray<class UBlendSpace*> SimpleBlendSpaces; // 0x70 (0x10)
	struct TArray<struct FPoseSearchDatabaseBlendSpace> BlendSpaces; // 0x80 (0x10)
	enum EPoseSearchMode PoseSearchMode; // 0x90 (0x4)
	int NumberOfPrincipalComponents; // 0x94 (0x4)
	int KDTreeMaxLeafSize; // 0x98 (0x4)
	int KDTreeQueryNumNeighbors; // 0x9c (0x4)
	bool bSkipSearchIfPossible; // 0xa0 (0x1)
	unsigned char padding_a1[0xf]; // 0xa1 (0xf)
};

