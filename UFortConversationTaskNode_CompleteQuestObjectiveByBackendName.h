// Class /Script/FortniteGame.FortConversationTaskNode_CompleteQuestObjectiveByBackendName
// Size: 0x1c8
class UFortConversationTaskNode_CompleteQuestObjectiveByBackendName : public UFortConversationTaskNode
{
	bool bResolveQuestDetailsFromServiceProvider; // 0x1a0 (0x1)
	unsigned char unreflected_1a1[0x7]; // 0x1a1 (0x7) 
	struct FSoftObjectPath QuestDefinition; // 0x1a8 (0x18)
	struct FName ObjectiveBackendName; // 0x1c0 (0x4)
	unsigned char padding_1c4[0x4]; // 0x1c4 (0x4)

	/* Functions */

	// Function /Script/FortniteGame.FortConversationTaskNode_CompleteQuestObjectiveByBackendName.Editor_GetValidObjectives (Underlying native function: Editor_GetValidObjectives 0x7308ee4)
	struct TArray<struct FName> EditorGetValidObjectives(); // (Final | Native | Private | Const)
};

