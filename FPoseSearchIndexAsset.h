// ScriptStruct /Script/PoseSearch.PoseSearchIndexAsset
// Size: 0x38
struct FPoseSearchIndexAsset
{
	enum ESearchIndexAssetType Type; // 0x0 (0x4)
	int SourceAssetIdx; // 0x4 (0x4)
	bool bMirrored; // 0x8 (0x1)
	unsigned char unreflected_9[0x7]; // 0x9 (0x7) 
	struct FVector BlendParameters; // 0x10 (0x18)
	struct FFloatInterval* SamplingInterval; // 0x28 (0x8)
	int FirstPoseIdx; // 0x30 (0x4)
	int NumPoses; // 0x34 (0x4)
};

