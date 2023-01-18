// ScriptStruct /Script/PoseSearch.AnimNode_MotionMatching
// Size: 0x220
struct FAnimNode_MotionMatching : FAnimNode_AssetPlayerBase
{
	struct FPoseLink Source; // 0x38 (0x10)
	class UPoseSearchSearchableAsset* Searchable; // 0x48 (0x8)
	struct FGameplayTagContainer ActiveTagsContainer; // 0x50 (0x20)
	struct FTrajectorySampleRange Trajectory; // 0x70 (0x18)
	struct FMotionMatchingSettings Settings; // 0x88 (0x28)
	bool bResetOnBecomingRelevant; // 0xb0 (0x1)
	bool bForceInterrupt; // 0xb1 (0x1)
	unsigned char padding_b2[0x16e]; // 0xb2 (0x16e)
};

