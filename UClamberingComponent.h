// Class /Script/ClamberingCodeRuntime.ClamberingComponent
// Size: 0xab8
class UClamberingComponent : public UFortPawnOverrideComponent
{
	unsigned char unreflected_a0[0x8]; // 0xa0 (0x8) 
	enum EClamberingState LocalClamberingState; // 0xa8 (0x1)
	enum EClamberingState ReplicatedClamberingState; // 0xa9 (0x1)
	unsigned char unreflected_aa[0x6]; // 0xaa (0x6) 
	struct FClamberingTargetingData LockedTargetingData; // 0xb0 (0xd0)
	struct FReplicatedClamberingTargetingData_SimClient ReplicatedTargetingData; // 0x180 (0x38)
	unsigned char unreflected_1b8[0x8]; // 0x1b8 (0x8) 
	struct FScalableFloat ClamberingEnabled; // 0x1c0 (0x28)
	struct FScalableFloat ClamberIndicatorEnabled; // 0x1e8 (0x28)
	struct FScalableFloat ClamberStartMaxFallingDamageFraction; // 0x210 (0x28)
	bool bPerformTargetingWhileWalking; // 0x238 (0x1)
	bool bPerformTargetingWhileSwimming; // 0x239 (0x1)
	unsigned char unreflected_23a[0x6]; // 0x23a (0x6) 
	struct FScalableFloat ServerFailDelay; // 0x240 (0x28)
	struct FScalableFloat ServerValidatePlayerMaxDistance; // 0x268 (0x28)
	struct FClamberingInputConfig InputConfig; // 0x290 (0x210)
	struct FClamberingTargetingConfig_Ledge TargetingConfigLedge; // 0x4a0 (0x320)
	struct FClamberingTargetingConfig_Ledge_CachedContextualValues TargetingConfigLedgeCachedContextualValues; // 0x7c0 (0x14)
	unsigned char unreflected_7d4[0x4]; // 0x7d4 (0x4) 
	struct FClamberingMovementConfig_Ledge MoveConfigLedge; // 0x7d8 (0x50)
	struct FScalableFloat ClamberSyncTargetLedgeOffset; // 0x828 (0x28)
	struct FScalableFloat ClamberingMaxAnalyticsEvents; // 0x850 (0x28)
	struct FScalableFloat SynchedActionFailDelay; // 0x878 (0x28)
	double LastTeleportTime; // 0x8a0 (0x8)
	bool bTutorialModeEnabled; // 0x8a8 (0x1)
	unsigned char unreflected_8a9[0x7]; // 0x8a9 (0x7) 
	struct FClamberingTargetingData LocalTargetingData; // 0x8b0 (0xd0)
	struct FClamberingTargetingData ParallelTargetingData; // 0x980 (0xd0)
	float QueuedInputTimer; // 0xa50 (0x4)
	float InputEnabledTimer; // 0xa54 (0x4)
	bool bJumpInputPressed; // 0xa58 (0x1)
	unsigned char unreflected_a59[0x3]; // 0xa59 (0x3) 
	float JumpHeldInAirTime; // 0xa5c (0x4)
	unsigned char unreflected_a60[0x50]; // 0xa60 (0x50) 
	struct FGameplayTag TagDisableClambering; // 0xab0 (0x4)
	unsigned char padding_ab4[0x4]; // 0xab4 (0x4)

	/* Functions */

	// Function /Script/ClamberingCodeRuntime.ClamberingComponent.UnregisterMutatorUpdatedDelegate (Underlying native function: UnregisterMutatorUpdatedDelegate 0x7189b7c)
	void UnregisterMutatorUpdatedDelegate(); // (Final | Native | Protected)

	// Function /Script/ClamberingCodeRuntime.ClamberingComponent.ShouldShowClamberIndicator (Underlying native function: ShouldShowClamberIndicator 0x7189b58)
	bool ShouldShowClamberIndicator(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/ClamberingCodeRuntime.ClamberingComponent.SetTutorialModeEnabled (Underlying native function: SetTutorialModeEnabled 0x7189a90)
	void SetTutorialModeEnabled(bool& bEnabled); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/ClamberingCodeRuntime.ClamberingComponent.ServerStartClambering (Underlying native function: ServerStartClambering 0x71898cc)
	void ServerStartClambering(struct FReplicatedClamberingTargetingData& InReplicatedTargetingData, double& ClientTeleportTime); // (Net | NetReliable | Native | Event | Protected | NetServer | 0x80000000)

	// Function /Script/ClamberingCodeRuntime.ClamberingComponent.RegisterMutatorUpdatedDelegate (Underlying native function: RegisterMutatorUpdatedDelegate 0x71897a4)
	void RegisterMutatorUpdatedDelegate(class APawn*& AffectedPawn); // (Final | Native | Protected)

	// Function /Script/ClamberingCodeRuntime.ClamberingComponent.OnRep_ReplicatedTargetingData (Underlying native function: OnRep_ReplicatedTargetingData 0x2440d20)
	void OnRepReplicatedTargetingData(); // (Final | Native | Protected)

	// Function /Script/ClamberingCodeRuntime.ClamberingComponent.OnRep_ReplicatedClamberingState (Underlying native function: OnRep_ReplicatedClamberingState 0x19c0bd4)
	void OnRepReplicatedClamberingState(); // (Final | Native | Protected)

	// Function /Script/ClamberingCodeRuntime.ClamberingComponent.OnPlayerStatePawnSet (Underlying native function: OnPlayerStatePawnSet 0x23d38b0)
	void OnPlayerStatePawnSet(class APlayerState*& Player, class APawn*& NewPawn, class APawn*& OldPawn); // (Final | Native | Protected)

	// Function /Script/ClamberingCodeRuntime.ClamberingComponent.OnMutatorUpdated (Underlying native function: OnMutatorUpdated 0x133f1a8)
	void OnMutatorUpdated(); // (Final | Native | Protected)

	// Function /Script/ClamberingCodeRuntime.ClamberingComponent.NetMulticast_ClamberingLedgeFailed (Underlying native function: NetMulticast_ClamberingLedgeFailed 0x71895f8)
	void NetMulticastClamberingLedgeFailed(enum EClamberingFailedReason& FailedReason, enum EClamberingState& FailedState); // (Net | NetReliable | Native | Event | NetMulticast | Protected)

	// Function /Script/ClamberingCodeRuntime.ClamberingComponent.IsTutorialModeEnabled (Underlying native function: IsTutorialModeEnabled 0x71895d8)
	bool IsTutorialModeEnabled(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/ClamberingCodeRuntime.ClamberingComponent.IsClamberingEnabled (Underlying native function: IsClamberingEnabled 0x71895b4)
	bool IsClamberingEnabled(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/ClamberingCodeRuntime.ClamberingComponent.IsAutoClamberingEnabled (Underlying native function: IsAutoClamberingEnabled 0x7189590)
	bool IsAutoClamberingEnabled(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/ClamberingCodeRuntime.ClamberingComponent.HandleTargetingDataValid (Has no native function)
	void HandleTargetingDataValid(struct FClamberingTargetingData& TargetingData); // (Event | Protected | HasOutParms | BlueprintEvent)

	// Function /Script/ClamberingCodeRuntime.ClamberingComponent.HandleTargetingDataInvalid (Has no native function)
	void HandleTargetingDataInvalid(); // (Event | Protected | BlueprintEvent)

	// Function /Script/ClamberingCodeRuntime.ClamberingComponent.HandleTargetActorHealthChanged (Underlying native function: HandleTargetActorHealthChanged 0x718957c)
	void HandleTargetActorHealthChanged(); // (Final | Native | Protected)

	// Function /Script/ClamberingCodeRuntime.ClamberingComponent.HandleTargetActorDestroyed (Underlying native function: HandleTargetActorDestroyed 0x71894fc)
	void HandleTargetActorDestroyed(class AActor*& Actor); // (Final | Native | Protected)

	// Function /Script/ClamberingCodeRuntime.ClamberingComponent.HandleOwnerTeleported (Underlying native function: HandleOwnerTeleported 0x53060e0)
	void HandleOwnerTeleported(class AFortPawn*& TeleportedOwner); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/ClamberingCodeRuntime.ClamberingComponent.HandleOwnerMovementModeChanged (Underlying native function: HandleOwnerMovementModeChanged 0x160ae6c)
	void HandleOwnerMovementModeChanged(class ACharacter*& Character, struct TEnumAsByte<EMovementMode>& PreviousMovementMode, unsigned char& PreviousCustomMode); // (Final | Native | Protected)

	// Function /Script/ClamberingCodeRuntime.ClamberingComponent.HandleOwnerJumpInput (Underlying native function: HandleOwnerJumpInput 0x718947c)
	void HandleOwnerJumpInput(bool& bPressed); // (Final | Native | Protected)

	// Function /Script/ClamberingCodeRuntime.ClamberingComponent.HandleOwnerDied (Underlying native function: HandleOwnerDied 0x71893fc)
	void HandleOwnerDied(class AFortPawn*& DeadPawn); // (Final | Native | Protected)

	// Function /Script/ClamberingCodeRuntime.ClamberingComponent.HandleOwnerDBNO (Underlying native function: HandleOwnerDBNO 0x19c0b98)
	void HandleOwnerDBNO(); // (Final | Native | Protected)

	// Function /Script/ClamberingCodeRuntime.ClamberingComponent.HandleOwnerASCInvalidated (Underlying native function: HandleOwnerASCInvalidated 0x19c0cac)
	void HandleOwnerASCInvalidated(); // (Final | Native | Protected)

	// Function /Script/ClamberingCodeRuntime.ClamberingComponent.HandleOwnerASCInitialized (Underlying native function: HandleOwnerASCInitialized 0x133f694)
	void HandleOwnerASCInitialized(class UFortAbilitySystemComponent*& AbilitySystemComponent, class AFortPlayerPawn*& AffectedPawn); // (Final | Native | Protected)

	// Function /Script/ClamberingCodeRuntime.ClamberingComponent.HandleClamberingTargetOutOfActivationRange (Has no native function)
	void HandleClamberingTargetOutOfActivationRange(); // (Event | Protected | BlueprintEvent)

	// Function /Script/ClamberingCodeRuntime.ClamberingComponent.HandleClamberingTargetInActivationRange (Has no native function)
	void HandleClamberingTargetInActivationRange(); // (Event | Protected | BlueprintEvent)

	// Function /Script/ClamberingCodeRuntime.ClamberingComponent.DrawDebugHUD (Underlying native function: DrawDebugHUD 0x70dc290)
	void DrawDebugHUD(class AHUD*& HUD, class UCanvas*& Canvas); // (Final | Native | Protected)

	// Function /Script/ClamberingCodeRuntime.ClamberingComponent.BP_TutorialModeEnabled (Has no native function)
	void BPTutorialModeEnabled(); // (Event | Protected | BlueprintEvent | Const)

	// Function /Script/ClamberingCodeRuntime.ClamberingComponent.BP_TutorialModeDisabled (Has no native function)
	void BPTutorialModeDisabled(); // (Event | Protected | BlueprintEvent | Const)

	// Function /Script/ClamberingCodeRuntime.ClamberingComponent.BP_IsValidTargetActor (Has no native function)
	void BPIsValidTargetActor(class AActor*& TargetActor, bool& bIsValidTargetActor); // (Event | Protected | HasOutParms | BlueprintEvent | Const)

	// Function /Script/ClamberingCodeRuntime.ClamberingComponent.BP_HandleSynchedActionStarted (Has no native function)
	void BPHandleSynchedActionStarted(struct FSynchedActionInfo& SynchedActionInfo); // (Event | Protected | HasOutParms | BlueprintEvent)

	// Function /Script/ClamberingCodeRuntime.ClamberingComponent.BP_HandleClamberingStateChanged (Has no native function)
	void BPHandleClamberingStateChanged(enum EClamberingState& OldClamberingState, enum EClamberingState& NewClamberingState); // (Event | Protected | BlueprintEvent)

	// Function /Script/ClamberingCodeRuntime.ClamberingComponent.BP_CanStartTargeting (Has no native function)
	void BPCanStartTargeting(bool& bCanStartTargeting); // (Event | Protected | HasOutParms | BlueprintEvent | Const)

	// Function /Script/ClamberingCodeRuntime.ClamberingComponent.BP_CanStartClambering (Has no native function)
	void BPCanStartClambering(bool& bCanStartClambering); // (Event | Protected | HasOutParms | BlueprintEvent | Const)
};

