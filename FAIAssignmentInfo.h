// ScriptStruct /Script/FortniteAI.AIAssignmentInfo
// Size: 0xa8
struct FAIAssignmentInfo
{
	struct TWeakObjectPtr<class UFortAIAssignment> CurrentAssignment; // 0x0 (0x8)
	struct FFortAIGoalInfo CurrentGoal; // 0x8 (0x28)
	float TimeCurrentGoalWasChosen; // 0x30 (0x4)
	float TimeExitedLastAssignmentOfType[0x4]; // 0x34 (0x4) (ARRAY) 
	struct TWeakObjectPtr<class UFortAIAssignment> PreviousAssignment; // 0x44 (0x8)
	unsigned char unreflected_4c[0x4]; // 0x4c (0x4) 
	struct FFortAIGoalInfo PreviousGoal; // 0x50 (0x28)
	bool bWaitingForQueryResponse; // 0x78 (0x1)
	bool bSuppressGoalUpdates; // 0x79 (0x1)
	bool bReportEnemyGoalSelection; // 0x7a (0x1)
	unsigned char padding_7b[0x2d]; // 0x7b (0x2d)
};

