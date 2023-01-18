// Class /Script/FortniteGame.FortControllerRequirement_HasCompletedNumQuestObjectives
// Size: 0x80
class UFortControllerRequirement_HasCompletedNumQuestObjectives : public UFortControllerRequirement
{
	bool bResolveQuestDetailsFromServiceProvider; // 0x30 (0x1)
	unsigned char unreflected_31[0x7]; // 0x31 (0x7) 
	struct FSoftObjectPath QuestDefinition; // 0x38 (0x18)
	struct FThresholdTestConfig RequiredCount; // 0x50 (0x30)
};

