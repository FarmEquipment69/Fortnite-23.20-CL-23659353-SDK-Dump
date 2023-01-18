// Class /Script/PlayerAugmentsCodeRuntime.FortControllerComponent_PlayerAugmentPersistence
// Size: 0x198
class UFortControllerComponent_PlayerAugmentPersistence : public UFortControllerComponent
{
	struct FScalableFloat Enabled; // 0xa0 (0x28)
	struct FScalableFloat LockMissingCollectionAugmentsEnabled; // 0xc8 (0x28)
	class AFortPlayerControllerAthena* PlayerController; // 0xf0 (0x8)
	class UFortCollectionDataPlayerAugment* CollectionData; // 0xf8 (0x8)
	struct FPlayerAugmentsPersistenceData LivePlayerAugmentsPersistenceData; // 0x100 (0x18)
	struct TSet<class UFortPlayerAugmentItemDefinition*> AugmentsCollectedThisMatch; // 0x118 (0x50)
	struct TArray<struct FReplicatedSharedPlayerAugment> ReplicatedSharedPlayerAugments; // 0x168 (0x10)
	unsigned char padding_178[0x20]; // 0x178 (0x20)

	/* Functions */

	// Function /Script/PlayerAugmentsCodeRuntime.FortControllerComponent_PlayerAugmentPersistence.HandleMcpProfilesInitialized (Underlying native function: HandleMcpProfilesInitialized 0x7292054)
	void HandleMcpProfilesInitialized(); // (Final | Native | Private)

	// Function /Script/PlayerAugmentsCodeRuntime.FortControllerComponent_PlayerAugmentPersistence.HandleCollectionDataTableLoaded (Underlying native function: HandleCollectionDataTableLoaded 0x532e4d0)
	void HandleCollectionDataTableLoaded(struct TWeakObjectPtr<class UFortCollectionsDataTable>& CollectionsDataTableSoftPtr); // (Final | Native | Private)

	// Function /Script/PlayerAugmentsCodeRuntime.FortControllerComponent_PlayerAugmentPersistence.HandleCollectionDataLoaded (Underlying native function: HandleCollectionDataLoaded 0x532e400)
	void HandleCollectionDataLoaded(struct TWeakObjectPtr<class UFortCollectionData>& BaseCollectionDataSoftPtr); // (Final | Native | Private)

	// Function /Script/PlayerAugmentsCodeRuntime.FortControllerComponent_PlayerAugmentPersistence.HandleAthenaGamePhaseChanged (Underlying native function: HandleAthenaGamePhaseChanged 0x7291e44)
	void HandleAthenaGamePhaseChanged(enum EAthenaGamePhase& GamePhase); // (Final | Native | Private)

	// Function /Script/PlayerAugmentsCodeRuntime.FortControllerComponent_PlayerAugmentPersistence.GetRollCountSinceLastRandomUnlock (Underlying native function: GetRollCountSinceLastRandomUnlock 0x6a4ad48)
	int GetRollCountSinceLastRandomUnlock(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/PlayerAugmentsCodeRuntime.FortControllerComponent_PlayerAugmentPersistence.GetLockStatusForAll (Underlying native function: GetLockStatusForAll 0x7291bc8)
	void GetLockStatusForAll(struct TArray<struct FPlayerAugmentLockStatus>& OutLockStatusArray); // (Final | 0x00000002 | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/PlayerAugmentsCodeRuntime.FortControllerComponent_PlayerAugmentPersistence.GetLockStatus (Underlying native function: GetLockStatus 0x7291b28)
	struct FPlayerAugmentLockStatus GetLockStatus(class UFortPlayerAugmentItemDefinition*& PlayerAugmentItemDefinition); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/PlayerAugmentsCodeRuntime.FortControllerComponent_PlayerAugmentPersistence.GetLockedList (Underlying native function: GetLockedList 0x7291d24)
	void GetLockedList(struct TArray<struct FPlayerAugmentLockStatus>& OutLockedList, bool& bIncludeSharedAugments); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/PlayerAugmentsCodeRuntime.FortControllerComponent_PlayerAugmentPersistence.GetCarryOverPlayerAugments (Underlying native function: GetCarryOverPlayerAugments 0x72919cc)
	void GetCarryOverPlayerAugments(struct TArray<struct FCarryOverPlayerAugment>& OutCarryOverPlayerAugments); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/PlayerAugmentsCodeRuntime.FortControllerComponent_PlayerAugmentPersistence.AuthorityUnlockPlayerAugment (Underlying native function: AuthorityUnlockPlayerAugment 0x7290d98)
	void AuthorityUnlockPlayerAugment(class UFortPlayerAugmentItemDefinition*& PlayerAugmentToUnlock); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/PlayerAugmentsCodeRuntime.FortControllerComponent_PlayerAugmentPersistence.AuthoritySetRollCountSinceLastRandomUnlock (Underlying native function: AuthoritySetRollCountSinceLastRandomUnlock 0x7290c6c)
	void AuthoritySetRollCountSinceLastRandomUnlock(int& NewRollCount); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/PlayerAugmentsCodeRuntime.FortControllerComponent_PlayerAugmentPersistence.AuthoritySetCarryOverPlayerAugments (Underlying native function: AuthoritySetCarryOverPlayerAugments 0x7290ad8)
	void AuthoritySetCarryOverPlayerAugments(struct TArray<struct FCarryOverPlayerAugment>& NewCarryOverPlayerAugments); // (Final | BlueprintAuthorityOnly | Native | Public | HasOutParms | BlueprintCallable)
};

