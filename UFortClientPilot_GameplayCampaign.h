// Class /Script/FortniteGame.FortClientPilot_GameplayCampaign
// Size: 0x340
class UFortClientPilot_GameplayCampaign : public UFortClientPilot_GameplayBase
{
	unsigned char unreflected_300[0x10]; // 0x300 (0x10) 
	class ABuildingActor* MissionTarget; // 0x310 (0x8)
	class ABuildingActor* PrimaryMissionTarget; // 0x318 (0x8)
	struct TArray<class ABuildingActor*> AllMissionTargets; // 0x320 (0x10)
	struct TArray<class ABuildingActor*> ActiveMissionTargets; // 0x330 (0x10)
};

