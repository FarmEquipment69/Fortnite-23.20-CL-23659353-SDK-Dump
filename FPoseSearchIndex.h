// ScriptStruct /Script/PoseSearch.PoseSearchIndex
// Size: 0xa0
struct FPoseSearchIndex
{
	int NumPoses; // 0x0 (0x4)
	unsigned char unreflected_4[0x4]; // 0x4 (0x4) 
	struct TArray<float> Values; // 0x8 (0x10)
	struct TArray<float> PCAValues; // 0x18 (0x10)
	unsigned char unreflected_28[0x18]; // 0x28 (0x18) 
	struct TArray<float> PCAProjectionMatrix; // 0x40 (0x10)
	struct TArray<float> Mean; // 0x50 (0x10)
	struct TArray<float> WeightsSqrt; // 0x60 (0x10)
	struct TArray<struct FPoseSearchPoseMetadata> PoseMetadata; // 0x70 (0x10)
	class UPoseSearchSchema* Schema; // 0x80 (0x8)
	struct TArray<struct FPoseSearchIndexAsset> Assets; // 0x88 (0x10)
	float MinCostAddend; // 0x98 (0x4)
	unsigned char padding_9c[0x4]; // 0x9c (0x4)
};

