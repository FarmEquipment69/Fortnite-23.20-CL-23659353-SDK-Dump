// Class /Script/VaultingCodeRuntime.HurdleComponent
// Size: 0x7a8
class UHurdleComponent : public UFortPawnComponent
{
	unsigned char unreflected_a0[0x8]; // 0xa0 (0x8) 
	struct FHurdleInputConfig HurdleInputConfig; // 0xa8 (0x3c0)
	unsigned char unreflected_468[0x8]; // 0x468 (0x8) 
	struct FScalableFloat HurdleEnabled; // 0x470 (0x28)
	unsigned char unreflected_498[0x138]; // 0x498 (0x138) 
	struct FReplicatedHurdleTargetingData ReplayHurdleTargetingData; // 0x5d0 (0x70)
	struct FHurdleTargetingData ParallelTargetingData; // 0x640 (0x130)
	unsigned char unreflected_770[0x1]; // 0x770 (0x1) 
	enum EHurdleState ReplicatedHurdleState; // 0x771 (0x1)
	unsigned char padding_772[0x36]; // 0x772 (0x36)

	/* Functions */

	// Function /Script/VaultingCodeRuntime.HurdleComponent.UnregisterMutatorUpdatedDelegate (Underlying native function: UnregisterMutatorUpdatedDelegate 0x7189b7c)
	void UnregisterMutatorUpdatedDelegate(); // (Final | Native | Protected)

	// Function /Script/VaultingCodeRuntime.HurdleComponent.ServerStartHurdle (Underlying native function: ServerStartHurdle 0x76d35a4)
	void ServerStartHurdle(struct FReplicatedHurdleTargetingData& InReplicatedTargetingData); // (Net | NetReliable | Native | Event | Protected | NetServer | 0x80000000)

	// Function /Script/VaultingCodeRuntime.HurdleComponent.RegisterMutatorUpdatedDelegate (Underlying native function: RegisterMutatorUpdatedDelegate 0x76d347c)
	void RegisterMutatorUpdatedDelegate(class APawn*& AffectedPawn); // (Final | Native | Protected)

	// Function /Script/VaultingCodeRuntime.HurdleComponent.OnRep_ReplicatedHurdleState (Underlying native function: OnRep_ReplicatedHurdleState 0x28b759c)
	void OnRepReplicatedHurdleState(); // (Final | Native | Protected)

	// Function /Script/VaultingCodeRuntime.HurdleComponent.OnPlayerStatePawnSet (Underlying native function: OnPlayerStatePawnSet 0x76d31f0)
	void OnPlayerStatePawnSet(class APlayerState*& Player, class APawn*& NewPawn, class APawn*& OldPawn); // (Final | Native | Protected)

	// Function /Script/VaultingCodeRuntime.HurdleComponent.OnMutatorUpdated (Underlying native function: OnMutatorUpdated 0x76d31dc)
	void OnMutatorUpdated(); // (Final | Native | Protected)

	// Function /Script/VaultingCodeRuntime.HurdleComponent.HandleOwnerMovementModeChanged (Underlying native function: HandleOwnerMovementModeChanged 0x224081c)
	void HandleOwnerMovementModeChanged(class ACharacter*& Character, struct TEnumAsByte<EMovementMode>& PreviousMovementMode, unsigned char& PreviousCustomMode); // (Final | Native | Protected)

	// Function /Script/VaultingCodeRuntime.HurdleComponent.HandleOwnerJumpInput (Underlying native function: HandleOwnerJumpInput 0x76d315c)
	void HandleOwnerJumpInput(bool& bPressed); // (Final | Native | Protected)

	// Function /Script/VaultingCodeRuntime.HurdleComponent.BP_HandleSpringJump (Has no native function)
	void BPHandleSpringJump(); // (Event | Protected | BlueprintEvent)

	// Function /Script/VaultingCodeRuntime.HurdleComponent.BP_HandleHurdleStarted (Has no native function)
	void BPHandleHurdleStarted(enum EHurdleType& HurdleType, struct FSynchedActionInfo& SynchedActionInfo); // (Event | Protected | HasOutParms | BlueprintEvent)

	// Function /Script/VaultingCodeRuntime.HurdleComponent.BP_HandleHurdleEnded (Has no native function)
	void BPHandleHurdleEnded(); // (Event | Protected | BlueprintEvent)

	// Function /Script/VaultingCodeRuntime.HurdleComponent.BP_CanStartHurdle (Has no native function)
	void BPCanStartHurdle(bool& OutCanStartHurdle); // (Event | Protected | HasOutParms | BlueprintEvent)
};

