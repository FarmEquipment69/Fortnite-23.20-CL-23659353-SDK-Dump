// Class /Script/FortniteAI.FortAthenaAIBotEvaluator_PathExists
// Size: 0xa8
class UFortAthenaAIBotEvaluator_PathExists : public UFortAthenaAIBotEvaluator
{
	struct FName PathExistsKeyName; // 0x88 (0x4)
	unsigned char unreflected_8c[0x4]; // 0x8c (0x4) 
	struct FName GoalKeyName; // 0x90 (0x4)
	float AcceptableRadius; // 0x94 (0x4)
	class UClass* FilterClass; // 0x98 (0x8)
	struct TEnumAsByte<EPathTestQueryType> PathQueryType; // 0xa0 (0x1)
	unsigned char unreflected_a1[0x3]; // 0xa1 (0x3) 
	unsigned char bProjectGoalLocation; // 0xa4 (0x1)
	unsigned char bReachTestIncludesAgentRadius; // 0xa4 (0x1)
	unsigned char bReachTestIncludesGoalRadius; // 0xa4 (0x1)
	unsigned char padding_a5[0x3]; // 0xa5 (0x3)
};

