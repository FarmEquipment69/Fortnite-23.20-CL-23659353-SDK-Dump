// Class /Script/FortniteGame.FortControllerRequirement_HasQuestToTurnIn
// Size: 0x60
class UFortControllerRequirement_HasQuestToTurnIn : public UFortControllerRequirement
{
	bool bResolveQuestDetailsFromServiceProvider; // 0x30 (0x1)
	unsigned char unreflected_31[0x7]; // 0x31 (0x7) 
	struct TWeakObjectPtr<class UFortQuestItemDefinition_Athena> SoftQuestToTurnIn; // 0x38 (0x28)
};

