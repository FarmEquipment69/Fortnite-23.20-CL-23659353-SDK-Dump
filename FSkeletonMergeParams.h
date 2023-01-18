// ScriptStruct /Script/SkeletalMerging.SkeletonMergeParams
// Size: 0x18
struct FSkeletonMergeParams
{
	struct TArray<class USkeleton*> SkeletonsToMerge; // 0x0 (0x10)
	bool bMergeSockets; // 0x10 (0x1)
	bool bMergeVirtualBones; // 0x11 (0x1)
	bool bMergeCurveNames; // 0x12 (0x1)
	bool bMergeBlendProfiles; // 0x13 (0x1)
	bool bMergeAnimSlotGroups; // 0x14 (0x1)
	bool bCheckSkeletonsCompatibility; // 0x15 (0x1)
	unsigned char padding_16[0x2]; // 0x16 (0x2)
};

