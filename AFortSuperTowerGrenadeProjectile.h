// Class /Script/FortniteGame.FortSuperTowerGrenadeProjectile
// Size: 0xa40
class AFortSuperTowerGrenadeProjectile : public AFortProjectileBase
{
	struct TArray<class AActor*> BuildingActorsToDestroy; // 0xa20 (0x10)
	struct TArray<class AActor*> BuildingActorsToIgnore; // 0xa30 (0x10)

	/* Functions */

	// Function /Script/FortniteGame.FortSuperTowerGrenadeProjectile.DestroyActorsInGridCellLocation (Underlying native function: DestroyActorsInGridCellLocation 0x8435670)
	void DestroyActorsInGridCellLocation(class UBuildingStructuralSupportSystem*& BuildingStructuralSupportSystem, struct FVector& CellLocation, bool& bDestroyFloorsQuickly); // (Final | Native | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteGame.FortSuperTowerGrenadeProjectile.ClearGridCells (Underlying native function: ClearGridCells 0x8435224)
	void ClearGridCells(struct TArray<struct FVector>& GridCellsToClear, bool& bDestroyFloorsQuickly, struct FVector& BaseDestination, float& AngleDeg); // (Final | Native | Public | HasOutParms | HasDefaults | BlueprintCallable)
};

