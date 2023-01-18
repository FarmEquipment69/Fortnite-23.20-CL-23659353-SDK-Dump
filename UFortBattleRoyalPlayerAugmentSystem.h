// Class /Script/PlayerAugmentsCodeRuntime.FortBattleRoyalPlayerAugmentSystem
// Size: 0x130
class UFortBattleRoyalPlayerAugmentSystem : public UFortControllerComponent
{
	float ServerGrantingStartedTimestamp; // 0xa0 (0x4)
	bool bEnableAugmentCollectionUnlocking; // 0xa4 (0x1)
	unsigned char unreflected_a5[0x13]; // 0xa5 (0x13) 
	struct FScalableFloat NumRollsForUnlock; // 0xb8 (0x28)
	struct FScalableFloat EnableUnlocking; // 0xe0 (0x28)
	struct FScalableFloat EnableBRAugmentSystem; // 0x108 (0x28)

	/* Functions */

	// Function /Script/PlayerAugmentsCodeRuntime.FortBattleRoyalPlayerAugmentSystem.TryIncrementUnlockRollCount (Underlying native function: TryIncrementUnlockRollCount 0x72925a0)
	void TryIncrementUnlockRollCount(); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/PlayerAugmentsCodeRuntime.FortBattleRoyalPlayerAugmentSystem.TryClaimUnlock (Underlying native function: TryClaimUnlock 0x7292574)
	struct FFortAugmentPassiveUnlockResult* TryClaimUnlock(); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/PlayerAugmentsCodeRuntime.FortBattleRoyalPlayerAugmentSystem.OnServerAugmentGrantTimestampReplicated (Has no native function)
	void OnServerAugmentGrantTimestampReplicated(float& ServerGrantStartTimestamp); // (Event | Protected | BlueprintEvent)

	// Function /Script/PlayerAugmentsCodeRuntime.FortBattleRoyalPlayerAugmentSystem.OnRep_ServerGrantingStartedTimestamp (Underlying native function: OnRep_ServerGrantingStartedTimestamp 0x2fd2a58)
	void OnRepServerGrantingStartedTimestamp(); // (Final | Native | Private)

	// Function /Script/PlayerAugmentsCodeRuntime.FortBattleRoyalPlayerAugmentSystem.OnPossedPawnChanged (Has no native function)
	void OnPossedPawnChanged(class APawn*& OldPawn, class APawn*& NewPawn); // (Event | Protected | BlueprintEvent)

	// Function /Script/PlayerAugmentsCodeRuntime.FortBattleRoyalPlayerAugmentSystem.HandlePossessedPawnChanged (Underlying native function: HandlePossessedPawnChanged 0x7292184)
	void HandlePossessedPawnChanged(class APawn*& OldPawn, class APawn*& NewPawn); // (Final | Native | Protected)

	// Function /Script/PlayerAugmentsCodeRuntime.FortBattleRoyalPlayerAugmentSystem.GetServerGrantingStartedTimestamp (Underlying native function: GetServerGrantingStartedTimestamp 0x2dce28c)
	float GetServerGrantingStartedTimestamp(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/PlayerAugmentsCodeRuntime.FortBattleRoyalPlayerAugmentSystem.ChooseUnlockFromList (Underlying native function: ChooseUnlockFromList 0x7291090)
	struct FFortAugmentPassiveUnlockResult* ChooseUnlockFromList(struct TArray<struct FPlayerAugmentLockStatus>& LockedList); // (Native | Event | Public | HasOutParms | BlueprintEvent)

	// Function /Script/PlayerAugmentsCodeRuntime.FortBattleRoyalPlayerAugmentSystem.BP_GetAugmmentPlayerPawn (Underlying native function: BP_GetAugmmentPlayerPawn 0x7290e18)
	void BPGetAugmmentPlayerPawn(enum EFortBRAugmentSystemCastResult& OutExec, class AFortPlayerPawn*& OutFortPlayerPawn); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/PlayerAugmentsCodeRuntime.FortBattleRoyalPlayerAugmentSystem.BP_GetAugmentController (Underlying native function: BP_GetAugmentController 0x28a5d54)
	void BPGetAugmentController(enum EFortBRAugmentSystemCastResult& OutExec, class AController*& OutController); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/PlayerAugmentsCodeRuntime.FortBattleRoyalPlayerAugmentSystem.BlueprintAugmentLog (Underlying native function: BlueprintAugmentLog 0x7290f1c)
	void BlueprintAugmentLog(struct FString& message); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/PlayerAugmentsCodeRuntime.FortBattleRoyalPlayerAugmentSystem.AuthoritySetServerGrantingStartedTimestamp (Underlying native function: AuthoritySetServerGrantingStartedTimestamp 0x7290cf8)
	void AuthoritySetServerGrantingStartedTimestamp(float& ServerTimestamp); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)
};

