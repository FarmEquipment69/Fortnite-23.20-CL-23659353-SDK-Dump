// Class /Script/FortniteAI.FortAIAssignment
// Size: 0xd8
class UFortAIAssignment : public UObject
{
	struct FFortAIAssignmentIdentifier AssignmentIdentifier; // 0x28 (0x30)
	class UFortAIAssignmentSettings* AssignmentSettings; // 0x58 (0x8)
	class UFortAIGoalProvider* GoalProvider; // 0x60 (0x8)
	struct TArray<struct TWeakObjectPtr<class UAIGoalComponent>> GoalComponentsOnAssignment; // 0x68 (0x10)
	unsigned char unreflected_78[0x50]; // 0x78 (0x50) 
	struct TArray<struct FFortAIGoal> Goals; // 0xc8 (0x10)
};

