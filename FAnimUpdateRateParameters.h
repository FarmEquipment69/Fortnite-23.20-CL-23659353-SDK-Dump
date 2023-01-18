// ScriptStruct /Script/Engine.AnimUpdateRateParameters
// Size: 0x88
struct FAnimUpdateRateParameters
{
	enum EUpdateRateShiftBucket ShiftBucket; // 0x1 (0x1)
	unsigned char bInterpolateSkippedFrames; // 0x2 (0x1)
	unsigned char bShouldUseLodMap; // 0x2 (0x1)
	unsigned char bShouldUseMinLod; // 0x2 (0x1)
	unsigned char bSkipUpdate; // 0x2 (0x1)
	unsigned char bSkipEvaluation; // 0x2 (0x1)
	unsigned char unreflected_3[0x1]; // 0x3 (0x1) 
	int UpdateRate; // 0x4 (0x4)
	int EvaluationRate; // 0x8 (0x4)
	float TickedPoseOffestTime; // 0xc (0x4)
	float AdditionalTime; // 0x10 (0x4)
	unsigned char unreflected_14[0x4]; // 0x14 (0x4) 
	int BaseNonRenderedUpdateRate; // 0x18 (0x4)
	int MaxEvalRateForInterpolation; // 0x1c (0x4)
	struct TArray<float> BaseVisibleDistanceFactorThesholds; // 0x20 (0x10)
	struct TMap<int, int> LODToFrameSkipMap; // 0x30 (0x50)
	int SkippedUpdateFrames; // 0x80 (0x4)
	int SkippedEvalFrames; // 0x84 (0x4)
};

