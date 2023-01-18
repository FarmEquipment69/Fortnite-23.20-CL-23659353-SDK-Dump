// Class /Script/FortniteGame.FortControllerRequirement_HasCompletedQuestObjective
// Size: 0x58
class UFortControllerRequirement_HasCompletedQuestObjective : public UFortControllerRequirement
{
	bool bResolveQuestDetailsFromServiceProvider; // 0x30 (0x1)
	unsigned char unreflected_31[0x7]; // 0x31 (0x7) 
	struct FSoftObjectPath QuestDefinition; // 0x38 (0x18)
	struct FName ObjectiveBackendName; // 0x50 (0x4)
	unsigned char padding_54[0x4]; // 0x54 (0x4)

	/* Functions */

	// Function /Script/FortniteGame.FortControllerRequirement_HasCompletedQuestObjective.Editor_GetValidObjectives (Underlying native function: Editor_GetValidObjectives 0x7308ee4)
	struct TArray<struct FName> EditorGetValidObjectives(); // (Final | Native | Private | Const)
};

