// ScriptStruct /Script/FortniteGame.ExperimentalBucketPercentList
// Size: 0x30
struct FExperimentalBucketPercentList
{
	int ExperimentNum; // 0x0 (0x4)
	unsigned char unreflected_4[0x4]; // 0x4 (0x4) 
	struct FString Name; // 0x8 (0x10)
	struct TArray<int> BucketPercents; // 0x18 (0x10)
	int WinningBucketIndex; // 0x28 (0x4)
	unsigned char padding_2c[0x4]; // 0x2c (0x4)
};

