// ScriptStruct /Script/FortniteAI.GoalDistanceData
// Size: 0xa0
struct FGoalDistanceData
{
	bool bIgnoreScreeningDistance; // 0x0 (0x1)
	unsigned char unreflected_1[0x7]; // 0x1 (0x7) 
	struct FAIDataProviderFloatValue ScreeningTestMaxDistance; // 0x8 (0x38)
	struct TWeakObjectPtr<class UCurveFloat> TestScoreCurve; // 0x40 (0x28)
	struct FAIDataProviderFloatValue CurveDistanceScale; // 0x68 (0x38)
};

