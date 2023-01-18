// Class /Script/FortniteAI.FortQueryTest_GoalBase
// Size: 0x268
class UFortQueryTest_GoalBase : public UEnvQueryTest
{
	unsigned char bScoreEnemies; // 0x1f8 (0x1)
	unsigned char bScoreEncounterGoals; // 0x1f8 (0x1)
	unsigned char bScoreWorldGoals; // 0x1f8 (0x1)
	unsigned char bScoreSpecificAssignments; // 0x1f8 (0x1)
	unsigned char unreflected_1f9[0x7]; // 0x1f9 (0x7) 
	struct TArray<struct FFortAIAssignmentIdentifier> AssignmentIDs; // 0x200 (0x10)
	struct TArray<struct FFortAIAssignmentIdentifier> ProhibitedAssignmentIDs; // 0x210 (0x10)
	struct FGameplayTagQuery GoalActorTagQuery; // 0x220 (0x48)
};

