// Class /Script/FortniteGame.FortMinigameSpawnerComponent
// Size: 0x138
class UFortMinigameSpawnerComponent : public UFortMinigameItemContainerComponent
{
	struct TArray<struct FMinigameSpawnerSpawnParams> ToSpawnList; // 0x128 (0x10)

	/* Functions */

	// Function /Script/FortniteGame.FortMinigameSpawnerComponent.SpawnPickupFromSpawnParams (Underlying native function: SpawnPickupFromSpawnParams 0x8b0f77c)
	class AFortPickup* SpawnPickupFromSpawnParams(struct FMinigameSpawnerSpawnParams& SpawnParams, class UClass*& PickupClass, struct FVector& Position, struct FVector& Direction, bool& bToss, bool& bRandomRotation, bool& bBlockedFromAutoPickup, enum EFortPickupSourceTypeFlag& SourceType, enum EFortPickupSpawnSource& Source, class AFortPlayerController*& OptionalOwnerPC, bool& bPickupOnlyRelevantToOwner); // (Final | Native | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteGame.FortMinigameSpawnerComponent.OnRep_ToSpawnList (Underlying native function: OnRep_ToSpawnList 0x87b5c84)
	void OnRepToSpawnList(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortMinigameSpawnerComponent.MakeSpawnParamsFromItemEntry (Underlying native function: MakeSpawnParamsFromItemEntry 0x8b0be54)
	bool MakeSpawnParamsFromItemEntry(struct FMinigameSpawnerSpawnParams& SpawnParams, struct FFortItemEntry& ItemEntry, struct FTransform& SpawnTransform); // (Final | Native | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure | Const)
};

