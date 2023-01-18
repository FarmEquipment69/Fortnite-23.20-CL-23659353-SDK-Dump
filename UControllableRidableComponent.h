// Class /Script/RidingCodeRuntime.ControllableRidableComponent
// Size: 0x5b0
class UControllableRidableComponent : public URidableComponent
{
	bool bIsControllable; // 0x370 (0x1)
	bool bHasAbility; // 0x371 (0x1)
	unsigned char unreflected_372[0x6]; // 0x372 (0x6) 
	struct FText AbilityDisplayText; // 0x378 (0x18)
	bool bCanJump; // 0x390 (0x1)
	bool bAlwaysMoveForward; // 0x391 (0x1)
	unsigned char unreflected_392[0x2]; // 0x392 (0x2) 
	float ForwardMoveSpeedMultiplier; // 0x394 (0x4)
	float BackwardMoveSpeedMultiplier; // 0x398 (0x4)
	float SidewaysMoveRotationOffset; // 0x39c (0x4)
	struct TEnumAsByte<EFortMovementUrgency> MovementUrgency; // 0x3a0 (0x1)
	bool bIsBeingControlled; // 0x3a1 (0x1)
	unsigned char unreflected_3a2[0x1e]; // 0x3a2 (0x1e) 
	struct FRidableControlParams RidableControlParams; // 0x3c0 (0x1e0)
	unsigned char padding_5a0[0x10]; // 0x5a0 (0x10)

	/* Functions */

	// Function /Script/RidingCodeRuntime.ControllableRidableComponent.ServerDoJumpExit (Underlying native function: ServerDoJumpExit 0x735d504)
	void ServerDoJumpExit(); // (Net | NetReliable | Native | Event | Protected | NetServer | BlueprintCallable)

	// Function /Script/RidingCodeRuntime.ControllableRidableComponent.OnRep_IsBeingControlled (Underlying native function: OnRep_IsBeingControlled 0x1b578cc)
	void OnRepIsBeingControlled(); // (Final | Native | Protected)

	// Function /Script/RidingCodeRuntime.ControllableRidableComponent.OnCapsuleBeginOverlap (Underlying native function: OnCapsuleBeginOverlap 0x735d0e4)
	void OnCapsuleBeginOverlap(class UPrimitiveComponent*& OverlappedComp, class AActor*& OtherActor, class UPrimitiveComponent*& OtherComp, int& OtherBodyIndex, bool& bFromSweep, struct FHitResult& SweepResult); // (Final | Native | Protected | HasOutParms)

	// Function /Script/RidingCodeRuntime.ControllableRidableComponent.IsSprintToggleable (Underlying native function: IsSprintToggleable 0x735d058)
	bool IsSprintToggleable(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/RidingCodeRuntime.ControllableRidableComponent.HandleJumpStopped (Has no native function)
	void HandleJumpStopped(); // (Event | Public | BlueprintEvent)

	// Function /Script/RidingCodeRuntime.ControllableRidableComponent.HandleJumpStarted (Has no native function)
	void HandleJumpStarted(); // (Event | Public | BlueprintEvent)

	// Function /Script/RidingCodeRuntime.ControllableRidableComponent.HandleJumpHeld (Has no native function)
	void HandleJumpHeld(); // (Event | Public | BlueprintEvent)

	// Function /Script/RidingCodeRuntime.ControllableRidableComponent.HandleCancelSprint (Has no native function)
	void HandleCancelSprint(bool& bAbilityInputHeld, bool& bForceCancel); // (Event | Public | BlueprintEvent)

	// Function /Script/RidingCodeRuntime.ControllableRidableComponent.HandleAbilityStopped (Has no native function)
	void HandleAbilityStopped(); // (Event | Public | BlueprintEvent)

	// Function /Script/RidingCodeRuntime.ControllableRidableComponent.HandleAbilityStarted (Has no native function)
	void HandleAbilityStarted(); // (Event | Public | BlueprintEvent)

	// Function /Script/RidingCodeRuntime.ControllableRidableComponent.HandleAbilityHeld (Has no native function)
	void HandleAbilityHeld(); // (Event | Public | BlueprintEvent)

	// Function /Script/RidingCodeRuntime.ControllableRidableComponent.GetAbilityDisplayText (Underlying native function: GetAbilityDisplayText 0x735c1cc)
	struct FText GetAbilityDisplayText(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/RidingCodeRuntime.ControllableRidableComponent.CanStartSprinting (Underlying native function: CanStartSprinting 0x735bee4)
	bool CanStartSprinting(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/RidingCodeRuntime.ControllableRidableComponent.CancelBuildBar (Underlying native function: CancelBuildBar 0x735bf08)
	void CancelBuildBar(); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/RidingCodeRuntime.ControllableRidableComponent.CanBeControlled (Underlying native function: CanBeControlled 0x735bc94)
	bool CanBeControlled(class URiderComponent*& Rider); // (Native | Event | Public | BlueprintEvent | Const)
};

