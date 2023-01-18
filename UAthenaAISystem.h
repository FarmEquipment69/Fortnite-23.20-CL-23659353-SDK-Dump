// Class /Script/FortniteAI.AthenaAISystem
// Size: 0x240
class UAthenaAISystem : public UFortAISystem
{
	class UAthenaAIPerceptionManager* PerceptionManager; // 0x1e8 (0x8)
	class UAthenaAIDropper* AIDropper; // 0x1f0 (0x8)
	class UAthenaAIPopulationTracker* AIPopulationTracker; // 0x1f8 (0x8)
	class UAthenaAIVehicleAvoidanceManager* AIVehicleAvoidanceManager; // 0x200 (0x8)
	struct TArray<class AAthenaAIController*> AIControllers; // 0x208 (0x10)
	struct TArray<class UAthenaPathFollowingComponent*> PathFollowingComponents; // 0x218 (0x10)
	struct TArray<class AActor*> RegisteredAISpawners; // 0x228 (0x10)
	unsigned char bUnlimitedAIHealth; // 0x238 (0x1)
	unsigned char bNavigationReady; // 0x238 (0x1)
	unsigned char padding_239[0x7]; // 0x239 (0x7)

	/* Functions */

	// Function /Script/FortniteAI.AthenaAISystem.OnAIPawnSpawned (Underlying native function: OnAIPawnSpawned 0xa234608)
	void OnAIPawnSpawned(class AController*& SpawnedController, bool& bIsABot, class AFortPawn*& FortAIPawn, class AFortPlayerPawn*& PlayerPawn); // (Final | Native | Protected)

	// Function /Script/FortniteAI.AthenaAISystem.OnAIPawnDied (Underlying native function: OnAIPawnDied 0xa23447c)
	void OnAIPawnDied(class AController*& KilledController, bool& bIsABot, class AFortPawn*& KilledAIPawn, class AFortPlayerPawn*& KilledPlayerPawn, class AController*& KillerController); // (Final | Native | Protected)

	// Function /Script/FortniteAI.AthenaAISystem.OnAIPawnDestroyed (Underlying native function: OnAIPawnDestroyed 0x5450500)
	void OnAIPawnDestroyed(class AFortPawn*& DestroyedPawn); // (Final | Native | Protected)

	// Function /Script/FortniteAI.AthenaAISystem.HandlePlayerExitAircraft (Underlying native function: HandlePlayerExitAircraft 0xa234040)
	void HandlePlayerExitAircraft(class AController*& ExitingController); // (Final | Native | Protected)

	// Function /Script/FortniteAI.AthenaAISystem.HandleGamePhaseStepChanged (Underlying native function: HandleGamePhaseStepChanged 0xa233f60)
	void HandleGamePhaseStepChanged(struct TScriptInterface<class IFortSafeZoneInterface>& SafeZoneInterface, enum EAthenaGamePhaseStep& GamePhaseStep); // (Final | Native | Protected | HasOutParms)

	// Function /Script/FortniteAI.AthenaAISystem.AIProfiling_OnSafeZoneUpdated (Underlying native function: AIProfiling_OnSafeZoneUpdated 0x26daa0c)
	void AIProfilingOnSafeZoneUpdated(); // (Final | Native | Public)

	// Function /Script/FortniteAI.AthenaAISystem.AIProfiling_OnGamePhaseChanged (Underlying native function: AIProfiling_OnGamePhaseChanged 0x72ab98c)
	void AIProfilingOnGamePhaseChanged(enum EAthenaGamePhase& GamePhase); // (Final | Native | Public)
};

