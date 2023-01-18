// Class /Script/FortniteGame.FortTrajectoryAbilityInterface
// Size: 0x28
class IFortTrajectoryAbilityInterface : public IInterface
{

	/* Functions */

	// Function /Script/FortniteGame.FortTrajectoryAbilityInterface.UpdateTrajectory (Has no native function)
	void UpdateTrajectory(); // (Event | Public | BlueprintCallable | BlueprintEvent)

	// Function /Script/FortniteGame.FortTrajectoryAbilityInterface.SpawnTrajectoryIndicator (Has no native function)
	class AFortProjectileTrajectory* SpawnTrajectoryIndicator(bool& bSpawnOnEquip); // (Event | Public | BlueprintCallable | BlueprintEvent)

	// Function /Script/FortniteGame.FortTrajectoryAbilityInterface.ShouldOnlyShowTrajectoryOnUse (Underlying native function: ShouldOnlyShowTrajectoryOnUse 0x20b4858)
	bool ShouldOnlyShowTrajectoryOnUse(); // (Native | Event | Public | BlueprintCallable | BlueprintEvent | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortTrajectoryAbilityInterface.InitTrajectoryVariables (Has no native function)
	void InitTrajectoryVariables(); // (Event | Public | BlueprintCallable | BlueprintEvent)

	// Function /Script/FortniteGame.FortTrajectoryAbilityInterface.GetProjectileTrajectoryPoints (Has no native function)
	void GetProjectileTrajectoryPoints(struct TArray<struct FVector>& OutSplinePoints, struct TArray<struct FVector>& OutSplineTangents, struct FHitResult& OutHitResult); // (Event | Public | HasOutParms | BlueprintCallable | BlueprintEvent)

	// Function /Script/FortniteGame.FortTrajectoryAbilityInterface.GetProjectileTrajectoryActor (Has no native function)
	class UClass* GetProjectileTrajectoryActor(); // (Event | Public | BlueprintCallable | BlueprintEvent | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortTrajectoryAbilityInterface.CleanupTrajectoryIndicatorOnUnequip (Has no native function)
	void CleanupTrajectoryIndicatorOnUnequip(); // (Event | Public | BlueprintCallable | BlueprintEvent)
};

