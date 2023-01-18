// Class /Script/FortniteGame.FortControllerComponent_ClientsideLeaderboardLogic
// Size: 0xc8
class UFortControllerComponent_ClientsideLeaderboardLogic : public UFortControllerComponent
{
	unsigned char unreflected_a0[0x8]; // 0xa0 (0x8) 
	struct TArray<struct FFortInGameLeaderboardPlacementData> LeaderBoard; // 0xa8 (0x10)
	class AFortGameStateAthena* CachedGameState; // 0xb8 (0x8)
	unsigned char padding_c0[0x8]; // 0xc0 (0x8)

	/* Functions */

	// Function /Script/FortniteGame.FortControllerComponent_ClientsideLeaderboardLogic.OnGamePhaseChanged (Underlying native function: OnGamePhaseChanged 0x8288c68)
	void OnGamePhaseChanged(enum EAthenaGamePhase& NewPhase); // (Final | Native | Private)
};

