// ScriptStruct /Script/FortniteGame.CrucibleCourseResults
// Size: 0x30
struct FCrucibleCourseResults
{
	float CalculatedScore; // 0x0 (0x4)
	float CalculatedTotalPenalty; // 0x4 (0x4)
	int CalculatedMissedTargets; // 0x8 (0x4)
	int CalculatedSpawnedTargets; // 0xc (0x4)
	struct TArray<struct FCrucibleSegmentResults> SegmentResults; // 0x10 (0x10)
	float StartTime; // 0x20 (0x4)
	float FinishTime; // 0x24 (0x4)
	float CancelTime; // 0x28 (0x4)
	bool bInputMethodWasKBMAtAnyPoint; // 0x2c (0x1)
	unsigned char padding_2d[0x3]; // 0x2d (0x3)
};

