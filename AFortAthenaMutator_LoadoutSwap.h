// Class /Script/FortniteGame.FortAthenaMutator_LoadoutSwap
// Size: 0x418
class AFortAthenaMutator_LoadoutSwap : public AFortAthenaMutator
{
	unsigned char unreflected_330[0x18]; // 0x330 (0x18) 
	enum EAthenaGamePhase GamePhaseToStart; // 0x348 (0x1)
	unsigned char unreflected_349[0x7]; // 0x349 (0x7) 
	struct TArray<struct FPlayerLoadout> Loadouts; // 0x350 (0x10)
	bool bRandomizeLoadOuts; // 0x360 (0x1)
	unsigned char unreflected_361[0x7]; // 0x361 (0x7) 
	struct FScalableFloat AreLoadoutsRandomized; // 0x368 (0x28)
	struct FScalableFloat WarningTime; // 0x390 (0x28)
	float ServerWorldTimeOfNextSwap; // 0x3b8 (0x4)
	unsigned char unreflected_3bc[0x4]; // 0x3bc (0x4) 
	struct TArray<struct FPlayerLoudoutEntry> NextItemsToGrant; // 0x3c0 (0x10)
	struct TArray<int> RemainingLoadouts; // 0x3d0 (0x10)
	struct TArray<class UFortWorldItemDefinition*> ItemstoAlwaysRemove; // 0x3e0 (0x10)
	struct TArray<class UFortWorldItemDefinition*> ItemsWithInfiniteAmmo; // 0x3f0 (0x10)
	unsigned char padding_400[0x18]; // 0x400 (0x18)

	/* Functions */

	// Function /Script/FortniteGame.FortAthenaMutator_LoadoutSwap.OnRep_ServerWorldTimeOfNextSwap (Underlying native function: OnRep_ServerWorldTimeOfNextSwap 0x84d0350)
	void OnRepServerWorldTimeOfNextSwap(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortAthenaMutator_LoadoutSwap.OnGamePhaseChanged (Underlying native function: OnGamePhaseChanged 0x84cfaf0)
	void OnGamePhaseChanged(enum EAthenaGamePhase& NewPhase); // (Final | 0x00000002 | Native | Protected)
};

