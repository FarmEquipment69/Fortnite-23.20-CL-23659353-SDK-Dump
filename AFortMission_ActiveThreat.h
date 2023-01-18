// Class /Script/FortniteGame.FortMission_ActiveThreat
// Size: 0x7c8
class AFortMission_ActiveThreat : public AFortMission
{
	bool bStartBasedOnAthenaGamePhases; // 0x6e0 (0x1)
	enum EAthenaGamePhase StartingGamePhase; // 0x6e1 (0x1)
	unsigned char unreflected_6e2[0x2]; // 0x6e2 (0x2) 
	float StartingDelay; // 0x6e4 (0x4)
	int StartingActiveThreatEncounterIndex; // 0x6e8 (0x4)
	unsigned char unreflected_6ec[0x4]; // 0x6ec (0x4) 
	struct FFortEncounterSettings EncounterSettings; // 0x6f0 (0xc0)
	struct TArray<struct FFortActiveThreatPlayerData> PlayerData; // 0x7b0 (0x10)
	float SyncedEncounterStartingTime; // 0x7c0 (0x4)
	int CurrentActiveThreatEncounterIndex; // 0x7c4 (0x4)

	/* Functions */

	// Function /Script/FortniteGame.FortMission_ActiveThreat.HandleAthenaGamePhaseChanged (Underlying native function: HandleAthenaGamePhaseChanged 0x8b2c800)
	void HandleAthenaGamePhaseChanged(enum EAthenaGamePhase& GamePhase); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortMission_ActiveThreat.HandleAISpawned (Underlying native function: HandleAISpawned 0x8b2c6f4)
	void HandleAISpawned(class UFortAIEncounterInfo*& Encounter, class AFortAIPawn*& SpawnedEnemy); // (Final | Native | Public)
};

