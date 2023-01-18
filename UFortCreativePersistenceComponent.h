// Class /Script/FortniteGame.FortCreativePersistenceComponent
// Size: 0x130
class UFortCreativePersistenceComponent : public UActorComponent
{
	struct FMulticastInlineDelegate OnPlayerDataLoaded; // 0xa0 (0x10)
	struct FFortInventory_SaveEntrySettings SaveEntrySettings; // 0xb0 (0x38)
	struct FSaveRestrictions SaveRestrictions; // 0xe8 (0x30)
	struct TArray<struct TWeakObjectPtr<class UClass>> ConfigurableItemClassesNotToSave; // 0x118 (0x10)
	unsigned char padding_128[0x8]; // 0x128 (0x8)

	/* Functions */

	// Function /Script/FortniteGame.FortCreativePersistenceComponent.StorePlayerRelatedData (Underlying native function: StorePlayerRelatedData 0x8785f2c)
	bool StorePlayerRelatedData(class APlayerState*& PlayerState, class AFortMinigame*& Minigame, bool& bPostGameSave); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortCreativePersistenceComponent.StoreAllMinigamePlayersData (Underlying native function: StoreAllMinigamePlayersData 0x8785e08)
	void StoreAllMinigamePlayersData(class AFortMinigame*& Minigame, bool& bPostGameSave); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortCreativePersistenceComponent.RemovePendingToApplyData (Underlying native function: RemovePendingToApplyData 0x87833a0)
	void RemovePendingToApplyData(class AFortPlayerState*& FortPlayerState, bool& bShowsLog); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortCreativePersistenceComponent.OnPlayerPawnFinishedTeleported (Underlying native function: OnPlayerPawnFinishedTeleported 0x8782d90)
	void OnPlayerPawnFinishedTeleported(class AFortPlayerPawn*& FortPlayerPawn); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortCreativePersistenceComponent.OnMinigameEnded (Underlying native function: OnMinigameEnded 0x8782ba4)
	void OnMinigameEnded(class AFortMinigame*& Minigame); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortCreativePersistenceComponent.LoadPlayersDataNeededBeforeSpawn (Underlying native function: LoadPlayersDataNeededBeforeSpawn 0x87822e8)
	void LoadPlayersDataNeededBeforeSpawn(class AFortMinigame*& Minigame); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortCreativePersistenceComponent.LoadPlayersDataNeededAfterSpawn (Underlying native function: LoadPlayersDataNeededAfterSpawn 0x8782278)
	void LoadPlayersDataNeededAfterSpawn(class AFortMinigame*& Minigame); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortCreativePersistenceComponent.LoadPlayerRelatedData (Underlying native function: LoadPlayerRelatedData 0x8782038)
	void LoadPlayerRelatedData(class APlayerState*& PlayerState, class AFortMinigame*& Minigame); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortCreativePersistenceComponent.LoadPlayerDataNeededBeforeSpawn (Underlying native function: LoadPlayerDataNeededBeforeSpawn 0x70dc290)
	void LoadPlayerDataNeededBeforeSpawn(class AFortPlayerState*& FortPlayerState, class AFortMinigame*& Minigame); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortCreativePersistenceComponent.LoadPlayerDataNeededAfterSpawn (Underlying native function: LoadPlayerDataNeededAfterSpawn 0x70dc290)
	void LoadPlayerDataNeededAfterSpawn(class AFortPlayerState*& FortPlayerState, class AFortMinigame*& Minigame); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortCreativePersistenceComponent.GetPersistentStatFilterList (Underlying native function: GetPersistentStatFilterList 0x7308ee4)
	struct TArray<class UFortMinigameStatFilter*> GetPersistentStatFilterList(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortCreativePersistenceComponent.GetAutoSaveInterval (Underlying native function: GetAutoSaveInterval 0x877f05c)
	static float GetAutoSaveInterval(); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.FortCreativePersistenceComponent.EnableAutoSave (Underlying native function: EnableAutoSave 0x877ed7c)
	void EnableAutoSave(class AFortMinigame*& Minigame); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortCreativePersistenceComponent.DisableAutoSave (Underlying native function: DisableAutoSave 0x877ec78)
	void DisableAutoSave(class AFortMinigame*& Minigame); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortCreativePersistenceComponent.ClearPlayerSpecificData (Underlying native function: ClearPlayerSpecificData 0x877e69c)
	void ClearPlayerSpecificData(class APlayerState*& PlayerState, class AFortMinigame*& Minigame); // (Final | Native | Public | BlueprintCallable | Const)

	// Function /Script/FortniteGame.FortCreativePersistenceComponent.ClearPlayerRelatedData (Underlying native function: ClearPlayerRelatedData 0x877e5d8)
	void ClearPlayerRelatedData(class APlayerState*& PlayerState, class AFortMinigame*& Minigame); // (Final | Native | Public | BlueprintCallable | Const)

	// Function /Script/FortniteGame.FortCreativePersistenceComponent.ClearAllPlayersSpecificData (Underlying native function: ClearAllPlayersSpecificData 0x877e320)
	void ClearAllPlayersSpecificData(class AFortMinigame*& Minigame); // (Final | Native | Public | BlueprintCallable)
};

