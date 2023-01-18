// Class /Script/FortniteAI.FortAthenaNpcPatrollingComponent
// Size: 0xf8
class UFortAthenaNpcPatrollingComponent : public UActorComponent
{
	class AAIController* CachedAIController; // 0xa0 (0x8)
	struct FMulticastInlineDelegate OnStartPatrollingEvent; // 0xa8 (0x10)
	struct FMulticastInlineDelegate OnStopPatrollingEvent; // 0xb8 (0x10)
	class AFortAthenaPatrolPath* PatrolPath; // 0xc8 (0x8)
	unsigned char padding_d0[0x28]; // 0xd0 (0x28)

	/* Functions */

	// Function /Script/FortniteAI.FortAthenaNpcPatrollingComponent.UpdateCurrentDestinationToNearestNextPoint (Underlying native function: UpdateCurrentDestinationToNearestNextPoint 0xa3e4a34)
	void UpdateCurrentDestinationToNearestNextPoint(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteAI.FortAthenaNpcPatrollingComponent.SetPatrolPath (Underlying native function: SetPatrolPath 0xa3e47e8)
	void SetPatrolPath(class AFortAthenaPatrolPath*& NewPatrolPath, bool& bOrientationAlreadyRandomized); // (Final | 0x00000002 | Native | Public | BlueprintCallable)

	// Function /Script/FortniteAI.FortAthenaNpcPatrollingComponent.SelectNextPatrolPoint (Underlying native function: SelectNextPatrolPoint 0xa3e4594)
	void SelectNextPatrolPoint(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteAI.FortAthenaNpcPatrollingComponent.RemovePatrolPath (Underlying native function: RemovePatrolPath 0xa3e456c)
	void RemovePatrolPath(); // (Final | 0x00000002 | Native | Public | BlueprintCallable)

	// Function /Script/FortniteAI.FortAthenaNpcPatrollingComponent.IsPatrollingEnable (Underlying native function: IsPatrollingEnable 0xa3e2c84)
	bool IsPatrollingEnable(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteAI.FortAthenaNpcPatrollingComponent.IsCurrentPatrolPointAnEndPoint (Underlying native function: IsCurrentPatrolPointAnEndPoint 0xa3e2c40)
	bool IsCurrentPatrolPointAnEndPoint(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteAI.FortAthenaNpcPatrollingComponent.GetPatrolPointsCount (Underlying native function: GetPatrolPointsCount 0xa3e26d4)
	int GetPatrolPointsCount(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteAI.FortAthenaNpcPatrollingComponent.GetPatrolPath (Underlying native function: GetPatrolPath 0x88c1464)
	class AFortAthenaPatrolPath* GetPatrolPath(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteAI.FortAthenaNpcPatrollingComponent.GetCurrentPatrolPoint (Underlying native function: GetCurrentPatrolPoint 0xa3e2434)
	class AFortAthenaPatrolPoint* GetCurrentPatrolPoint(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteAI.FortAthenaNpcPatrollingComponent.FindAndSetDynamicPatrolPath (Underlying native function: FindAndSetDynamicPatrolPath 0xa3e20bc)
	bool FindAndSetDynamicPatrolPath(struct FFortAthenaAIObjectTrackerQuery& FindQuery, bool& bOrientationAlreadyRandomized, bool& bExcludeCurrentlyUsedPatrolPath); // (Final | Native | Public | HasOutParms | BlueprintCallable)
};

