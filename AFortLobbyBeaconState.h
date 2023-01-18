// Class /Script/FortniteGame.FortLobbyBeaconState
// Size: 0x470
class AFortLobbyBeaconState : public ALobbyBeaconState
{
	bool bIsLobbyTimerPaused; // 0x430 (0x1)
	unsigned char unreflected_431[0x3]; // 0x431 (0x3) 
	int MatchmakingLevel; // 0x434 (0x4)
	struct FString MissionGeneratorClassPath; // 0x438 (0x10)
	class UFortMissionGenerator* CachedMissionGeneratorCDO; // 0x448 (0x8)
	enum ELobbyMissionGeneratorDetailsRequirement MissionGeneratorDetailsRequirement; // 0x450 (0x1)
	bool bWorldRecordLoaded; // 0x451 (0x1)
	unsigned char padding_452[0x1e]; // 0x452 (0x1e)

	/* Functions */

	// Function /Script/FortniteGame.FortLobbyBeaconState.OnRep_MissionGeneratorDetailsRequirement (Underlying native function: OnRep_MissionGeneratorDetailsRequirement 0x8be53b0)
	void OnRepMissionGeneratorDetailsRequirement(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortLobbyBeaconState.OnRep_MissionGeneratorClassPath (Underlying native function: OnRep_MissionGeneratorClassPath 0x8be5340)
	void OnRepMissionGeneratorClassPath(); // (Final | Native | Protected)
};

