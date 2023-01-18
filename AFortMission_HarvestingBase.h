// Class /Script/FortniteGame.FortMission_HarvestingBase
// Size: 0x728
class AFortMission_HarvestingBase : public AFortMission
{
	struct TArray<class UClass*> BuildingActorClassesValidForHarvestDrop; // 0x6e0 (0x10)
	struct TArray<class UClass*> DecoActorClassesValidForHarvestDrop; // 0x6f0 (0x10)
	float ItemDropChancePercent; // 0x700 (0x4)
	int ItemMinDropQuantity; // 0x704 (0x4)
	int ItemMaxDropQuantity; // 0x708 (0x4)
	float MinDurationBetweenDrops; // 0x70c (0x4)
	int MaxFailedDropsInARow; // 0x710 (0x4)
	bool bEnableConversations; // 0x714 (0x1)
	unsigned char unreflected_715[0x3]; // 0x715 (0x3) 
	struct TArray<struct FFortReactiveQuestDialogue> Conversations; // 0x718 (0x10)
};

