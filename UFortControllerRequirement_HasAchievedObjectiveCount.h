// Class /Script/FortniteGame.FortControllerRequirement_HasAchievedObjectiveCount
// Size: 0x88
class UFortControllerRequirement_HasAchievedObjectiveCount : public UFortControllerRequirement
{
	bool bResolveQuestDetailsFromServiceProvider; // 0x30 (0x1)
	unsigned char unreflected_31[0x7]; // 0x31 (0x7) 
	struct FSoftObjectPath QuestDefinition; // 0x38 (0x18)
	struct FName ObjectiveBackendName; // 0x50 (0x4)
	unsigned char unreflected_54[0x4]; // 0x54 (0x4) 
	struct FThresholdTestConfig RequiredCount; // 0x58 (0x30)

	/* Functions */

	// Function /Script/FortniteGame.FortControllerRequirement_HasAchievedObjectiveCount.Editor_GetValidObjectives (Underlying native function: Editor_GetValidObjectives 0x7308ee4)
	struct TArray<struct FName> EditorGetValidObjectives(); // (Final | Native | Private | Const)
};

