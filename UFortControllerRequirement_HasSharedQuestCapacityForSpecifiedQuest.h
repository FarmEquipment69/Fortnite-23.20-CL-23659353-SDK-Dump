// Class /Script/FortniteGame.FortControllerRequirement_HasSharedQuestCapacityForSpecifiedQuest
// Size: 0x68
class UFortControllerRequirement_HasSharedQuestCapacityForSpecifiedQuest : public UFortControllerRequirement
{
	enum EQuestSpecificationMethod QuestSpecificationMethod; // 0x30 (0x1)
	unsigned char unreflected_31[0x7]; // 0x31 (0x7) 
	struct TWeakObjectPtr<class UFortQuestItemDefinition_Athena> StaticQuest; // 0x38 (0x28)
	int SlottedQuestIndex; // 0x60 (0x4)
	unsigned char padding_64[0x4]; // 0x64 (0x4)
};

