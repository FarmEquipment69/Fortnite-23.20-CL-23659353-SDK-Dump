// Class /Script/FortniteAI.FortQueryTest_GoalDistanceRanges
// Size: 0x290
class UFortQueryTest_GoalDistanceRanges : public UFortQueryTest_GoalBase
{
	enum EDistanceMode DistanceMode; // 0x268 (0x1)
	unsigned char unreflected_269[0x7]; // 0x269 (0x7) 
	class UClass* DistanceTo; // 0x270 (0x8)
	struct TEnumAsByte<EEnvTestDistance> ScreeningTestMode; // 0x278 (0x1)
	struct TEnumAsByte<EEnvTestDistance> TestMode; // 0x279 (0x1)
	unsigned char unreflected_27a[0x6]; // 0x27a (0x6) 
	struct TArray<struct FGoalDistanceData> GoalDistanceDataRanges; // 0x280 (0x10)
};

