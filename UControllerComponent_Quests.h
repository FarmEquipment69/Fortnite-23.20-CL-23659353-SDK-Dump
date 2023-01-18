// Class /Script/FortniteGame.ControllerComponent_Quests
// Size: 0xe0
class UControllerComponent_Quests : public UControllerComponent
{
	unsigned char unreflected_a0[0x30]; // 0xa0 (0x30) 
	struct TArray<struct FUpdatedQuestObjectiveData> UpdatedQuestObjectives; // 0xd0 (0x10)

	/* Functions */

	// Function /Script/FortniteGame.ControllerComponent_Quests.OnRep_UpdatedQuestObjectives (Underlying native function: OnRep_UpdatedQuestObjectives 0x8dff568)
	void OnRepUpdatedQuestObjectives(); // (Final | Native | Private)

	// Function /Script/FortniteGame.ControllerComponent_Quests.Client_GrantQuest (Underlying native function: Client_GrantQuest 0x845f000)
	void ClientGrantQuest(class UFortQuestItemDefinition*& QuestDefinition); // (Final | Net | NetReliable | Native | Event | Private | NetClient)
};

