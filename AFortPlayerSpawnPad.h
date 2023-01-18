// Class /Script/FortniteGame.FortPlayerSpawnPad
// Size: 0xdf0
class AFortPlayerSpawnPad : public ABuildingSMActor
{
	struct TArray<class UStaticMeshComponent*> Chests; // 0xdd0 (0x10)
	unsigned char padding_de0[0x10]; // 0xde0 (0x10)

	/* Functions */

	// Function /Script/FortniteGame.FortPlayerSpawnPad.PrestreamChestTextures (Underlying native function: PrestreamChestTextures 0x8e80ba4)
	void PrestreamChestTextures(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerSpawnPad.InitializeChestProgression (Underlying native function: InitializeChestProgression 0x8e7f284)
	void InitializeChestProgression(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerSpawnPad.GetRewardedChestIndex (Underlying native function: GetRewardedChestIndex 0x8e7eda8)
	int GetRewardedChestIndex(); // (Final | BlueprintCosmetic | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPlayerSpawnPad.GetPossessedPlayerPawnsByID (Underlying native function: GetPossessedPlayerPawnsByID 0x8e7eb0c)
	void GetPossessedPlayerPawnsByID(struct TArray<class AFortPlayerPawn*>& SortedPlayerPawns); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPlayerSpawnPad.ChestProgressionUpdate (Underlying native function: ChestProgressionUpdate 0x8e7da54)
	void ChestProgressionUpdate(struct FVector& PrimaryChestOffset, struct FVector& ChestOffset); // (Final | Native | Public | HasDefaults | BlueprintCallable)
};

