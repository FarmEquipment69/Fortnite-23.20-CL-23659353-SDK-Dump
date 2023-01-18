// Class /Script/FortniteGame.FortGameStateComponent_Quests
// Size: 0xf0
class UFortGameStateComponent_Quests : public UFortGameStateComponent
{
	unsigned char unreflected_a0[0x30]; // 0xa0 (0x30) 
	struct TArray<class AFortPlayerController*> PlayersReceivingStatEvents; // 0xd0 (0x10)
	struct TArray<struct FUpdatedQuestObjectiveData> UpdatedWorldQuestObjectives; // 0xe0 (0x10)

	/* Functions */

	// Function /Script/FortniteGame.FortGameStateComponent_Quests.OnRep_UpdatedWorldQuestObjectives (Underlying native function: OnRep_UpdatedWorldQuestObjectives 0x86e96e0)
	void OnRepUpdatedWorldQuestObjectives(); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortGameStateComponent_Quests.Multicast_GrantWorldQuest (Underlying native function: Multicast_GrantWorldQuest 0x709e2f8)
	void MulticastGrantWorldQuest(class UFortQuestItemDefinition*& QuestDefinition); // (Final | Net | NetReliable | Native | Event | NetMulticast | Private)
};

