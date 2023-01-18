// Class /Script/FortniteGame.FortAthenaMutator_BasicLimitedLives
// Size: 0x6b8
class AFortAthenaMutator_BasicLimitedLives : public AFortAthenaMutator
{
	unsigned char unreflected_330[0x30]; // 0x330 (0x30) 
	struct FLimitedLifeByTeamData* DefaultData; // 0x360 (0x8)
	struct TMap<unsigned char, struct FLimitedLifeByTeamData*> SpecificTeamData; // 0x368 (0x50)
	struct FLimitedLifeDataArray LiveData; // 0x3b8 (0x118)
	struct TSet<class AFortPlayerState*> AlreadySeenStates; // 0x4d0 (0x50)
	struct FScalableFloat bShouldCalculateRespawnLocation; // 0x520 (0x28)
	struct FScalableFloat bPreferSpectateTeammates; // 0x548 (0x28)
	bool bAlwaysShowSquadInfo; // 0x570 (0x1)
	unsigned char unreflected_571[0x7]; // 0x571 (0x7) 
	struct FFortRespawnLogicData RespawnLogicData; // 0x578 (0x140)

	/* Functions */

	// Function /Script/FortniteGame.FortAthenaMutator_BasicLimitedLives.OnRep_LiveData (Underlying native function: OnRep_LiveData 0x848a0e4)
	void OnRepLiveData(); // (Final | Native | Protected)
};

