// Class /Script/MantisRuntime.FortMantisPawnComponent
// Size: 0x2d8
class UFortMantisPawnComponent : public UPawnComponent
{
	unsigned char unreflected_a0[0xb0]; // 0xa0 (0xb0) 
	struct TMap<class UAnimMontage*, struct FFortMantisMontageData> MontageDataMap; // 0x150 (0x50)
	class UFortMantisData* MantisData; // 0x1a0 (0x8)
	class AFortWeapon* Weapon; // 0x1a8 (0x8)
	unsigned char padding_1b0[0x128]; // 0x1b0 (0x128)

	/* Functions */

	// Function /Script/MantisRuntime.FortMantisPawnComponent.SetLockOnState (Underlying native function: SetLockOnState 0x7194674)
	void SetLockOnState(bool& bEnabled, class AActor*& TargetActor); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/MantisRuntime.FortMantisPawnComponent.OnPostPhysicsRotation (Underlying native function: OnPostPhysicsRotation 0x71945ac)
	void OnPostPhysicsRotation(class UCharacterMovementComponent*& CharMoveComp, float& DeltaSeconds); // (Final | Native | Protected)

	// Function /Script/MantisRuntime.FortMantisPawnComponent.OnOwnerWeaponHolstered (Underlying native function: OnOwnerWeaponHolstered 0x7194598)
	void OnOwnerWeaponHolstered(); // (Final | Native | Protected)

	// Function /Script/MantisRuntime.FortMantisPawnComponent.OnCharacterMovementPreUpdate (Underlying native function: OnCharacterMovementPreUpdate 0x7194468)
	void OnCharacterMovementPreUpdate(class UCharacterMovementComponent*& CharMoveComp, float& DeltaSeconds); // (Final | Native | Protected)

	// Function /Script/MantisRuntime.FortMantisPawnComponent.IsPerformingLockOn (Underlying native function: IsPerformingLockOn 0x719444c)
	bool IsPerformingLockOn(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/MantisRuntime.FortMantisPawnComponent.HasLockOnTarget (Underlying native function: HasLockOnTarget 0x71943d0)
	bool HasLockOnTarget(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/MantisRuntime.FortMantisPawnComponent.GetLockOnTarget (Underlying native function: GetLockOnTarget 0x71943ac)
	class AActor* GetLockOnTarget(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

