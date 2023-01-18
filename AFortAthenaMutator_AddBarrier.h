// Class /Script/FortniteGame.FortAthenaMutator_AddBarrier
// Size: 0x3c0
class AFortAthenaMutator_AddBarrier : public AFortAthenaMutator
{
	class UClass* BigBaseWallClass; // 0x330 (0x8)
	bool bStartTimerAtSafeZone; // 0x338 (0x1)
	bool bSpawnAtMidFlightPathDuringBusLockedPhase; // 0x339 (0x1)
	unsigned char unreflected_33a[0x6]; // 0x33a (0x6) 
	struct FScalableFloat TimeToBringDownWall; // 0x340 (0x28)
	struct FScalableFloat WallGravity; // 0x368 (0x28)
	struct FScalableFloat WallZLevel; // 0x390 (0x28)
	class AAthenaBigBaseWall* BigBaseWall; // 0x3b8 (0x8)

	/* Functions */

	// Function /Script/FortniteGame.FortAthenaMutator_AddBarrier.OnGamePhaseChanged (Underlying native function: OnGamePhaseChanged 0x72ab98c)
	void OnGamePhaseChanged(enum EAthenaGamePhase& NewPhase); // (Final | 0x00000002 | Native | Private)

	// Function /Script/FortniteGame.FortAthenaMutator_AddBarrier.IsBarrierUp (Underlying native function: IsBarrierUp 0x845e234)
	bool IsBarrierUp(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortAthenaMutator_AddBarrier.GetBigBaseWall (Underlying native function: GetBigBaseWall 0x845d9e4)
	class AAthenaBigBaseWall* GetBigBaseWall(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

